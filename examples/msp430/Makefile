DEVICE = msp430fr5969
GCC_DIR         ?= ./msp430-gcc/
GCC_MSP_INC_DIR ?= ./msp430-gcc-support-files/include/
TINYCLI_DIR     := ../../tinycli/
LDDIR           := $(GCC_MSP_INC_DIR)/$(DEVICE)
GCC_BIN_DIR     := $(GCC_DIR)/bin
GCC_INC_DIR     := $(GCC_DIR)/msp430-elf/include

CFLAGS          := -DTINYCLI_ENABLE_ECHO -DTINYCLI_ENABLE_EDITING -Os -D__$(DEVICE)__ -mmcu=$(DEVICE) -g -ffunction-sections -fdata-sections -DDEPRECATED
LDFLAGS         := -T $(LDDIR).ld -L $(GCC_MSP_INC_DIR) -mmcu=$(DEVICE) -g -Wl,--gc-sections
INCLUDES        := -I $(GCC_MSP_INC_DIR) -I $(GCC_INC_DIR) -I $(TINYCLI_DIR) -I .
CC              := $(GCC_BIN_DIR)/msp430-elf-gcc

VPATH = $(TINYCLI_DIR)
OBJS = main.o tinycli.o
EXOUT = main.out

all: $(EXOUT)

%.o: %.c
	$(CC) $(INCLUDES) $(CFLAGS) -c $< -o $@

$(EXOUT): $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o $@

clean:
	rm -rf tinycli.o main.o main.out
