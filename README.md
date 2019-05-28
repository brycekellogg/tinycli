# tinycli

Tinycli is a small C library for providing a simple command line interface
to resource constrained embedded systems. The library is designed to be small,
lightweight, and extremely portable while still containing a useful feature
set for interacting with microcontrollers via a terminal interface.

Tinycli works by directly mapping a text command to a C function.


## Quickstart


```C
void doSomething(int a, double b, int c) {
    printf("I'm a function!! %d %f %d\n", a, b, c);
}
```

```C
tinycli_register("doit", doSomething, idi)
```

## Usage

Commands in Tinycli are statically declared at compile time via the tinycli-funs.h
header file.


### Registering a command

```C
tinycli_register("command string", function_name, parameter_types)
```

where the `parameter_type` is a descriptor of the types of arguments the
function is expecting. This is used to automatically convert the string inputs
to the correct type for passing into the function.

### Passing text
```C
void tinycli_putsn(char* s, int n);
void tinycli_putc(char c);
```
### Checking Results
```C
assert(tinycli_result == 1);
```

### Adding new signatures

1) tinycli_params
2) tinycli_args
3) tinycli_nargs
4) tinycli_register()

