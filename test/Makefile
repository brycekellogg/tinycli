
tinycli-test: ../lib/tinycli.c ../lib/tinycli.h main.c
	@gcc --std=c89 -I../lib/ ../lib/tinycli.c main.c -Wall -Wpedantic -o tinycli-test

preprocessor: tinycli.c tinycli.h main.c
	@gcc -E --std=c11 tinycli.c main.c -Wall -Wpedantic >> out.c

clean:
	@rm -rf tinycli-test out.c

