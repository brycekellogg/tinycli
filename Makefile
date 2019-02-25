
tinycli-test: tinycli.c tinycli.h tinycli-config.h main.c
	@gcc --std=c11 tinycli.c main.c -Wall -Wpedantic -o tinycli-test

clean:
	@rm -rf tinycli-test

