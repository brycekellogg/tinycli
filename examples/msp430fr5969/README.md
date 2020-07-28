# TinyCLI MSP430 Example

This example shows how to use the TinyCLI library with an MSP430 microcontroller via
the [MSP-EXP430FR5969](https://www.ti.com/tool/MSP-EXP430FR5969) development kit.
It exposes commands for controlling LEDs, querying button state, and displaying help text.


## Getting Started on Linux

#### Download TI compiler and support files
```shell
cd tinycli/examples/msp430/
wget http://software-dl.ti.com/msp430/msp430_public_sw/mcu/msp430/MSPGCC/8_3_2_2/export/msp430-gcc-8.3.1.25_linux64.tar.bz2
wget http://software-dl.ti.com/msp430/msp430_public_sw/mcu/msp430/MSPGCC/8_3_2_2/export/msp430-gcc-support-files-1.209.zip
tar -xf msp430-gcc-8.3.1.25_linux64.tar.bz2 && mv msp430-gcc-8.3.1.25_linux64 msp430-gcc
unzip msp430-gcc-support-files-1.209.zip
```

#### Building
```shell
cd tinycli/examples/msp430/
make
```

#### Programming to MSP430


## Getting Started on Windows
TODO
