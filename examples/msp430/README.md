# TinyCLI MSP430 Example

This example shows how to use the TinyCLI library with an MSP430 microcontroller using
the [MSP-EXP430FR5969](https://www.ti.com/tool/MSP-EXP430FR5969) development kit.
It exposes commands for controlling LEDs, querying button state, and displaying help text.


## Getting Started on Linux

Building the example requires [MSP430-GCC](https://www.ti.com/tool/MSP430-GCC-OPENSOURCE)
and flashing the development board requires [TI Uniflash](https://www.ti.com/tool/UNIFLASH).
The compiler and support files can be downloaded using the following shell commands:


```shell
cd tinycli/examples/msp430/
wget http://software-dl.ti.com/msp430/msp430_public_sw/mcu/msp430/MSPGCC/8_3_2_2/export/msp430-gcc-8.3.1.25_linux64.tar.bz2
wget http://software-dl.ti.com/msp430/msp430_public_sw/mcu/msp430/MSPGCC/8_3_2_2/export/msp430-gcc-support-files-1.209.zip
tar -xf msp430-gcc-8.3.1.25_linux64.tar.bz2 && mv msp430-gcc-8.3.1.25_linux64 msp430-gcc
unzip msp430-gcc-support-files-1.209.zip
```

The binary file can then be built using `make` and downloaded using the Uniflash
GUI. To connect to the development board serial port you can use a utility
such as screen, minicom, or picocom with baud rate 9600.


## Getting Started on Windows
TODO
