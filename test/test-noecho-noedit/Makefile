ROOT = ../../
CC = gcc

CFLAGS = --std=c99 \
		 -Wall \
		 -Wpedantic

INCDIRS = -I$(ROOT)/tinycli/ -I./ -I../

SOURCES = $(ROOT)/tinycli/tinycli.c \
		  $(ROOT)/test/main.c

HEADERS = $(ROOT)/tinycli/tinycli.h \
		  $(ROOT)/test/tinycli-funs.h \
		  $(ROOT)/test/testfunctions.h \
		  testcases.h


test: $(SOURCES) $(HEADERS)
	@$(CC) $(CFLAGS) $(INCDIRS) $(SOURCES) -o test
	./test


clean:
	@rm -rf test

