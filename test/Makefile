ROOT = ../
CC = gcc

CFLAGS = --std=c99 \
		 -Wall \
		 -Wpedantic

INCDIRS = -I$(ROOT)/tinycli/ -I./ -I../

SOURCES = $(ROOT)/tinycli/tinycli.c \
		  $(ROOT)/test/main.c

HEADERS = $(ROOT)/tinycli/tinycli.h \
		  $(ROOT)/test/tinycli-funs.h \
		  $(ROOT)/test/testfunctions.h

CFLAGS-noecho-noedit=-DTEST_HEADER='"./testcases-noecho-noedit.h"'


CFLAGS-echo-noedit=-DTINYCLI_ENABLE_ECHO \
                   -Dtinycli_echoc=test_echoc \
				   -Dtinycli_echos=test_echos \
				   -Dtinycli_echosn=test_echosn \
				   -DTEST_HEADER='"./testcases-echo-noedit.h"'

test-noecho-noedit: $(SOURCES) $(HEADERS)
	@$(CC) $(CFLAGS) $(CFLAGS-noecho-noedit) $(INCDIRS) $(SOURCES) -o test
	@./test

test-echo-noedit: $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) $(CFLAGS-echo-noedit) $(INCDIRS) $(SOURCES) -o test
	@./test

clean:
	@rm -rf test

