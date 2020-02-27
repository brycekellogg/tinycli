ROOT = ../
CC = gcc

CFLAGS = --std=c99 \
		 -Wall \
		 -Wpedantic

INCDIRS = -I$(ROOT)/tinycli/ -I./ -I../

SOURCES = $(ROOT)/tinycli/tinycli.c \
		  $(ROOT)/test/main.c \
		  $(ROOT)/test/munit.c

HEADERS = $(ROOT)/tinycli/tinycli.h \
		  $(ROOT)/test/tinycli-funs.h \
		  $(ROOT)/test/testfunctions.h

CFLAGS-noecho-noedit=-DTEST_HEADER='"./testcases-noecho-noedit.h"'

CFLAGS-echo-noedit=-DTINYCLI_ENABLE_ECHO \
                   -DTEST_HEADER='"./testcases-echo-noedit.h"'

CFLAGS-echo-edit=-DTINYCLI_ENABLE_ECHO \
                 -DTINYCLI_ENABLE_EDITING \
                 -DTINYCLI_BACKSPACE="'\b'" \
                 -DTINYCLI_LEFTARROW="\"<\"" \
                 -DTINYCLI_RIGHTARROW="\">\"" \
                 -DTINYCLI_CURSORFORWARD="\">\"" \
                 -DTINYCLI_CURSORBACKWARD="\"<\"" \
                 -DTEST_HEADER='"./testcases-echo-edit.h"'

CFLAGS-noecho-edit=-DTINYCLI_ENABLE_EDITING \
                   -DTINYCLI_BACKSPACE="'\b'" \
                   -DTINYCLI_LEFTARROW="\"\x1BL\"" \
                   -DTINYCLI_RIGHTARROW="\"\x1BR\"" \
                   -DTEST_HEADER='"./testcases-noecho-edit.h"'

all: test-noecho-noedit test-echo-noedit test-echo-edit test-noecho-edit

test-noecho-noedit: $(SOURCES) $(HEADERS)
	@$(CC) $(CFLAGS) $(CFLAGS-noecho-noedit) $(INCDIRS) $(SOURCES) -o test
	@./test

test-echo-noedit: $(SOURCES) $(HEADERS)
	@$(CC) $(CFLAGS) $(CFLAGS-echo-noedit) $(INCDIRS) $(SOURCES) -o test
	@./test

test-echo-edit: $(SOURCES) $(HEADERS)
	@$(CC) $(CFLAGS) $(CFLAGS-echo-edit) $(INCDIRS) $(SOURCES) -o test
	@./test

test-noecho-edit: $(SOURCES) $(HEADERS)
	@$(CC) $(CFLAGS) $(CFLAGS-noecho-edit) $(INCDIRS) $(SOURCES) -o test
	@./test

clean:
	@rm -rf test

