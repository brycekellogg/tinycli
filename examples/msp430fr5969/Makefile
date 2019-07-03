DEVICE = msp430fr5969
GCC_DIR     ?= ~/tools/msp430-gcc

GCC_MSP_INC_DIR ?= $(GCC_DIR)/include
LDDIR       := $(GCC_MSP_INC_DIR)/$(DEVICE)

GCC_BIN_DIR     ?= $(GCC_DIR)/bin
GCC_INC_DIR     ?= $(GCC_DIR)/msp430-elf/include


CFLAGS          := -Os -D__$(DEVICE)__ -mmcu=$(DEVICE) -g -ffunction-sections -fdata-sections -DDEPRECATED
LDFLAGS         := -T $(LDDIR).ld -L $(GCC_MSP_INC_DIR) -mmcu=$(DEVICE) -g -Wl,--gc-sections
INCLUDES        := -I $(GCC_MSP_INC_DIR) -I $(GCC_INC_DIR)

CC              := $(GCC_BIN_DIR)/msp430-elf-gcc

SRC = main.c
OBJS = main.o
EXOUT = main.out

all: $(EXOUT)

$(OBJS): $(SRC)
	$(CC) $(INCLUDES) $(CFLAGS) -c $< -o $@
	
$(EXOUT): $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o $@
