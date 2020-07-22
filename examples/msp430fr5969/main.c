/*  _______ _____ _   ___     _______ _      _____
 * |__   __|_   _| \ | \ \   / / ____| |    |_   _|
 *    | |    | | |  \| |\ \_/ / |    | |      | |
 *    | |    | | | . ` | \   /| |    | |      | |
 *    | |   _| |_| |\  |  | | | |____| |____ _| |_
 *    |_|  |_____|_| \_|  |_|  \_____|______|_____|
 *
 * Author: Bryce Kellogg (bryce@kellogg.org)
 * Copyright: 2019 Bryce Kellogg
 * License: BSD 3-Clause
 *
 * TODO: description
 */
#include <msp430.h>
#include <string.h>
#include <stdbool.h>

#include <tinycli.h>

// Ports and pins used to control LEDs
// These map MSP430 defines to LED numbers
#define LED1_PORT  P4OUT
#define LED2_PORT  P1OUT
#define LED1_BIT   BIT6
#define LED2_BIT   BIT0

// Ports and pins used to query the
// values of buttons. They map to
// the button names on the dev kit
#define S1_PORT  P4IN
#define S2_PORT  P1IN
#define S1_BIT   BIT5
#define S2_BIT   BIT1


/**
 * Set the state of an LED on the dev board.
 *
 * Params:
 *   led     the number (1 or 2) of the LED to set
 *   state   the state (ON or OFF) to set LED to
 */
int setLED(int led, const char* state) {
    bool on  = !strcmp(state, "ON");
    bool off = !strcmp(state, "OFF");

    // Error checking
    if (led != 1 && led != 2) return 1;
    if (!on && !off)          return 2;

    // Set LED state
    if (led == 1 && on)  LED1_PORT |=  LED1_BIT;
    if (led == 1 && off) LED1_PORT &= ~LED1_BIT;
    if (led == 2 && on)  LED2_PORT |=  LED2_BIT;
    if (led == 2 && off) LED2_PORT &= ~LED2_BIT;
    return 0;
}


/**
 * Read the state of a button on the dev
 * board and print out the result as
 * either "PRESSED" or "UNPRESSED"
 *
 * Params:
 *    button   the number (1 or 2) of
 *             the button to query
 */
int readButton(int button) {
    // Error checking
    if (button != 1 && button != 2) return 1;

    // Get button value & print state
    int val;
    if (button == 1 && !(S1_PORT & S1_BIT)) tinycli_echos("Button 1 Pressed\r\n");
    if (button == 1 &&  (S1_PORT & S1_BIT)) tinycli_echos("Button 1 Unpressed\r\n");
    if (button == 2 && !(S2_PORT & S2_BIT)) tinycli_echos("Button 2 Pressed\r\n");
    if (button == 2 &&  (S2_PORT & S2_BIT)) tinycli_echos("Button 2 Unpressed\r\n");
    return 0;
}


/**
 * Prints a help message detailing what commands
 * are available and how to call them. */
int help(void) {

    return 0;
}

char bufchar;
void main() {
    WDTCTL = WDTPW + WDTHOLD;  // Stop watchdog timer
    PM5CTL0 &= ~LOCKLPM5;      // Disable GPIO power-on defaults

    // Configure GOIOs for LEDs
    P4DIR |= BIT6;  // Set P4.6 (LED1) to output
    P1DIR |= BIT0;  // Set P1.0 (LED2) to output

    // Configure GPIOs for Buttons
    P1OUT = BIT1;   // Pull-up resistor on P1.1
    P1REN = BIT1;   // Select pull-up mode for P1.1
    P4OUT = BIT5;   // Pull-up resistor on P1.1
    P4REN = BIT5;   // Select pull-up mode for P1.1

    // Configure GPIOs for UART
    P2SEL1 |= BIT0 | BIT1;                    // USCI_A0 UART operation
    P2SEL0 &= ~(BIT0 | BIT1);

    // Startup clock system with max DCO setting ~8MHz
    CSCTL0_H = CSKEY >> 8;                    // Unlock clock registers
    CSCTL1 = DCOFSEL_3 | DCORSEL;             // Set DCO to 8MHz
    CSCTL2 = SELA__VLOCLK | SELS__DCOCLK | SELM__DCOCLK;
    CSCTL3 = DIVA__1 | DIVS__1 | DIVM__1;     // Set all dividers
    CSCTL0_H = 0;                             // Lock CS registers

    // Setup UART
    UCA0CTLW0 = UCSWRST;                      // Put eUSCI in reset
    UCA0CTLW0 |= UCSSEL__SMCLK;               // CLK = SMCLK
    UCA0BR0 = 52;                             // 8000000/16/9600
    UCA0BR1 = 0x00;
    UCA0MCTLW |= UCOS16 | UCBRF_1;
    UCA0CTLW0 &= ~UCSWRST;                    // Initialize eUSCI
    UCA0IE |= UCRXIE;                         // Enable USCI_A0 RX interrupt

    // LEDs initially off
    setLED(1, "OFF");
    setLED(2, "OFF");

    tinycli_echos(">>> ");
    for(;;) {
        __bis_SR_register(LPM3_bits | GIE);
        tinycli_putc(UCA0RXBUF);
        if (UCA0RXBUF == '\r') {
            tinycli_echos(">>> ");
        }
    }
}


void tinycli_echoc(char c) {
    while(!(UCA0IFG&UCTXIFG));
    UCA0TXBUF = c;
}

void tinycli_echos(char* s) {
    while (*s != '\0') {
        tinycli_echoc(*s);
        s++;
    }
}

/*
 *
 */
void __attribute__ ((interrupt(USCI_A0_VECTOR))) USCI_A0_ISR (void) {
    switch(__even_in_range(UCA0IV, USCI_UART_UCTXCPTIFG)) {
        case USCI_NONE: break;
        case USCI_UART_UCRXIFG:
            LPM3_EXIT;
            break;
        case USCI_UART_UCTXIFG: break;
        case USCI_UART_UCSTTIFG: break;
        case USCI_UART_UCTXCPTIFG: break;
    }
}
