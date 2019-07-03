/*  _______ _____ _   ___     _______ _      _____ 
 * |__   __|_   _| \ | \ \   / / ____| |    |_   _|
 *    | |    | | |  \| |\ \_/ / |    | |      | |  
 *    | |    | | | . ` | \   /| |    | |      | |  
 *    | |   _| |_| |\  |  | | | |____| |____ _| |_ 
 *    |_|  |_____|_| \_|  |_|  \_____|______|_____|
 *
 * Author: Bryce Kellogg (brycekellogg+tinycli@brycekellogg.com)
 * Copyright: 2019 Bryce Kellogg
 * License: BSD 3-Clause
 */
#include <msp430.h>

#define LED1_PORT 4
#define LED2_PORT 1
#define LED1_BIT  6
#define LED2_BIT  0

#define OUTPUT 0
#define INPUT 1

#define ERR_BAD_PORT 1
#define ERR_BAD_DIR  2
#define ERR_BAD_LED  3
#define ERR_BAD_VAL  4


// GPIO Commands
int gpioConfig(int port, int bit, int dir) {
    volatile char* pdir;
    bit = BIT0 << bit;

    // Get port
    switch (port) {
        case 1: pdir = &P1DIR; break;
        case 2: pdir = &P2DIR; break;
        case 3: pdir = &P3DIR; break;
        case 4: pdir = &P4DIR; break;
        default: return ERR_BAD_PORT;
    }

    // Set direction
    switch (dir) {
        case INPUT:  *pdir &= ~bit; break;
        case OUTPUT: *pdir |= bit;  break;
        default: return ERR_BAD_DIR;
    }
    return 0;
}

int gpioRead(int gpio) {

}

int gpioWrite(int port, int bit, int val) {
    volatile char* pout;
    bit = BIT0 << bit;

    // Get port
    switch (port) {
        case 1: pout = &P1OUT; break;
        case 2: pout = &P2OUT; break;
        case 3: pout = &P3OUT; break;
        case 4: pout = &P4OUT; break;
        default: return ERR_BAD_PORT;
    }

    // Set value
    switch (val) {
        case 0: *pout &= ~bit; break;
        case 1: *pout |= bit;  break;
        default: return ERR_BAD_VAL;
    }
    return 0;

}


// LED Commands
int setLedState(int led, int val) {
    switch (led) {
        case 1: gpioWrite(LED1_PORT, LED1_BIT, val); break;
        case 2: gpioWrite(LED2_PORT, LED2_BIT, val); break;
        default: return ERR_BAD_LED;
    }
    return 0;
}
int setLed1On  (void) { return setLedState(1, 1); }
int setLed1Off (void) { return setLedState(1, 0); }
int setLed2On  (void) { return setLedState(2, 1); }
int setLed2Off (void) { return setLedState(2, 0); }


// SPI commands
int spiTxRx(int a, int b) {

}

int setSpiRate(double rate) {

}

void main() {
    WDTCTL = WDTPW + WDTHOLD;  // Stop watchdog timer
    PM5CTL0 &= ~LOCKLPM5;      // Disable GPIO power-on defaults



    gpioConfig(4,6, OUTPUT);
    gpioConfig(1,0, OUTPUT);
  
    //setLed1Off();
    setLed1On();
    //setLed2On();
    setLed2Off();

    for(;;) {

    }
}


void __attribute__ ((interrupt(USCI_A0_VECTOR))) USCI_A0_ISR (void) {
  switch(__even_in_range(UCA0IV, USCI_UART_UCTXCPTIFG)) {
    case USCI_NONE: break;
    case USCI_UART_UCRXIFG:
      while(!(UCA0IFG&UCTXIFG));
      UCA0TXBUF = UCA0RXBUF;
      __no_operation();
      break;
    case USCI_UART_UCTXIFG: break;
    case USCI_UART_UCSTTIFG: break;
    case USCI_UART_UCTXCPTIFG: break;
  }
}
