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
 */
// GPIO Commands
tinycli_register("gpioConfig", gpioConfig, ii)  // TODO: change to char* (out/in)
tinycli_register("gpioRead",   gpioRead,   i)
tinycli_register("gpioWrite",  gpioWrite,  ii)

// LED Commands
tinycli_register("ledSet",  setLedState, ii)
tinycli_register("led1On",  setLed1On,   v)
tinycli_register("led1Off", setLed1Off,  v)
tinycli_register("led2On",  setLed2On,   v)
tinycli_register("led2Off", setLed2Off,  v)

// SPI commands
tinycli_register("spi", spiTxRx, ii)
tinycli_register("setSpiRate", setSpiRate, d)
