
tinycli-test: ../lib/tinycli.c ../lib/tinycli.h main.c
	@gcc --std=c99 -I../lib/ -I./ ../lib/tinycli.c main.c -Wall -Wpedantic -o tinycli-test

preprocessor: ../lib/tinycli.c ../lib/tinycli.h main.c
	@gcc -E --std=c11 -I../lib/ -I./ ../lib/tinycli.c main.c -Wall -Wpedantic >> out.c

clean:
	@rm -rf tinycli-test out.c

