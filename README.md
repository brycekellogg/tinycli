# Tinycli
Tinycli is a C library for providing a simple command line interface
for resource constrained embedded systems. The library is designed to be small,
lightweight, and extremely portable while still containing a useful feature
set. It can be used for interacting with microcontrollers via a serial
interface or for embedding in a larger program to provide a simple terminal.


## Usage
Tinycli provides a simple terminal interface by exposing a set of user defined
"commands". These commands provide a mapping from text strings to C functions
such that the corresponding function is called when a command string is entered.
Additionally, features such as argument type conversion, character echo,
command editing, and history are handled by the Tinycli library.

Specifics on performing each of these steps are given below and working code
examples can be found in the [examples direcory](/examples/)


### Registering a command
Commands are registered in a header file called `tinycli-funs.h`, which is then
used by `tinycli.c` when comparing input strings and converting parameter
types. Each line in `tinycli-funs.h` consists of a registration call of the
form:
```C
tinycli_register("CommandString", function_ptr, type0, [type1], [type2], ...)
```
where `"CommandString"` is the string that is typed at the prompt for
triggering a function, `function_ptr` is a pointer to the function to call
when the correct string is entered, and `type0`, `type1`, etc are
descriptors of the parameter types of the `function_ptr`. Each function must
declare at least 1 parameter type; in the case of a function that takes no
parameters void must be used. The table below shows the currently
supported parameter types.

| Type        | Descriptor | Example |
|-------------|------------|---------|
| `void`      | `v`        |         |
| `int`       | `i`        | 12      |
| `double`    | `d`        | 3.14    |
| `char*`     | `s`        | hello   |
| `long long` | `ll`       | 9999999 |

As an example, suppose we want to register the function shown below to be
called via the command "doSomething". It takes two parameters (an integer and a
character pointer) which would correspond to the tinycli type descriptors `i`
and `s`. Note that the return type of all registered functions must be `int` to
allow passing of error codes from the registered function to the tinycli library.

```C
int some_function(int a, char* str) { ... }
```

To register the above function, we would add the following line to `tinycli-funs.h`.
The ordering of registration calls in `tinycli-funs.h` does not matter, but
commands strings must be unique. Also note the lack of semicolon at the end of
the register call and the lack of header guards in `tinycli-funs.h`. This is
intentional and required.

```C
tinycli_register("doSomething", some_fuinction, i, s)
```

### Passing text
In order for Tinycli to process input text, evaulate potential matches, and
call registered functions, text must be passed to the library using one of
the following functions:

```C
void tinycli_putsn(char* s, int n);
void tinycli_putc(char c);
```

These functions allow you to pass text to Tinycli either a character at a time
or via entire strings. Generally these functions are called after receiving
UART input via an interrupt routine. If the terminal emulator (picocom, putty,
etc) is using a local echo feature, it is generally recommended that you use the
`tinycli_putsn` function for passing text. If not using local echo, `tinycli_putc`
is a better choice as it allows Tinycli to echo characters back as they are typed.

As text input is passed to the Tinycli library, it saves the text in an internal
text buffer until the library receives a `TINYCLI_ENTER` character. This configurable
character triggers the library's processing step, where it iterates over the
registered commands and compares each one with the first word (separated by
`TINYCLI_TOKDELIM`) of the entered text. If a match is found, the arguments will be
converted to the correct types, and the corresponding function will be called.
Placing calls to these functions in interrupts is currently discouraged because
they may launch long running functions (depending on the functions registered).

### Checking Results
The global variables `tinycli_error` and `tinycli_result` can be used to
check the status of a Tinycli operation and to retrieve the integer result
of the user defined function. If a command was successfully run
(from Tinycli's point of view) then `tinycli_error` will be set to
`TINYCLI_ERROR_SUCCESS`. If something went wrong (command not found, wrong
number of arguments, etc) then `tinycli_error` will be set to one of the
error codes defined in `tinycli.h`. If a user defined function ends up being
called, the return value of the function will be saved in `tinycli-result`.
The value of this variable is only valid if
`tinycli_error == TINYCLI_ERROR_SUCCESS`.

### Echoing Text
Echo is enabled by defining `TINYCLI_ENABLE_ECHO` and providing implementations
of `tinycli_echoc(char c)` and `tinycli_echos(char* s)`. Usually these helper
functions end up sending characters over UART or calling standard `putchar`/
`fputs` functions (see examples). With echo enabled, Tinycli will print out
commands as they are typed and correctly erase and re-print lines as commands
are edited or history is browsed (if editing/history are enabled).

### Command Editing
Command editing is enabled by defining `TINYCLI_ENABLE_EDITING`. Once enabled,
this allows the user to use the arrow keys, backspace, and delete to edit
commands that have not yet been completed. The ASCII codes corresponding to
the editing commands are defined in `tinycli.h` and can customized to fit
the terminal being used.

### Command History
Command history is enabled by defining `TINYCLI_ENABLE_HISTORY`. Once enabled,
past commands (up to a configurable limit) are saved in a command history fifo.
These historical commands can be browsed and executed similar to a traditional
terminal using the up/down arrow keys. The ASCII codes corresponging to the
history browsing keys ared defined in `tinycli.h` and can be customized to fit
the terminal being used.


## Configuring TinyCli
Tinycli supports various configuration options that allow customizing the
supported features, amount of required resources, and specific control
characters. Configuration options defaults are set in `tinycli.h` and can
be overridden by defining macros via the compiler arguments.




## Extending TinyCli
TinyCli has beed designed to support a limited set of input data types and
a limited number of command arguments. In the event that additional data types
or additional command arguments are needed, TinyCli can easily be extended
to support any needed types or number of arguments.


#### New Data Types
Currently supported data types are: `int`, `double`, `long long`, and `char*`.
To add support for an additional type, write a conversion function from `char*`
to the new type, and register the new type with the various TinyCli macros.
These steps are described in further detail below.

Each supported data type is represented by a type code. When adding a new
data type, a new type code needs to be chosen. Generally, these should be
related to the C++ name mangling scheme, but any valid C identifier will
work.

##### Registering Type Code
Once a type code has been chosen, it needs to be registered with TinyCli by
adding it to the `tinycli_types_*` and `tinycli_nargs_*` macros in `tinycli.c`.
The former tells us the mapping between type code and C type; the latter
is a book keeping macro for internal use. These should be of the form:

```C
#define tinycli_types_<code>   <type>
```

```C
#define tinycli_nargs_<code>(...)    tinycli_lastarg(__VA_ARGS__)
```

where `<code>` is the chosen type code and `<type>` is the C data type.
`tinycli_types_<code>` should register the C type being added, while
`tinycli_nargs_<code>` should be added unmodified except for the specific
type code.


##### Conversion Function
In order to call a registered function with the correct parameters, TinyCli
needs a conversion function for each supported type. These conversion
functions are of the form:

```C
<type> tinycli_sto<code>(const char* s) {
    // TODO: do conversion
}
```

where `<type>` is the C type that the argument is being converted to and
`<code>` is the type code representing this new type. Implement a new
conversion function for the desired type and place it in `tinycli.c` near the
other `tinycli_sto*` functions. Note that the name of the function is
important and must match the above scheme exactly.


#### Increasing Max Number of Arguments
By default, TinyCli supports a limited number of arguments per command. To
increase this number, we need to edit a few macros in `tinycli.c`.

##### Argument Counting Macros
The first set of macros to edit are the argument counting macros
`tinycli_nargs` and `tinycli_lastarg`. These macros use `__VA_ARGS__` to count
the number of function parameters each registered function expects. To update
them for increased maxiumum numbers of arguments, simply increase the range
of the number sequences in each macro. For `tinycli_nargs` this means adding
numbers after the second `__VA_ARGS__` such that the maximum in the range
equals the maximum number of supported arguments. For `tinycli_lastarg` this
means adding additional numbered arguments (note the underscore) at the end
of the sequence (before the `...`). The maximum of the macro numbered arguments
should equal two more than the maximum number of supported arguments.
Additionally, change the ending numbered argument to match the maximum in
the range. For example, to change from 5 supported arguments to 6 the macros
would be be changed like so:

```C
#define tinycli_lastarg(_1, _2, _3, _4, _5, _6, _7, ...) _7
#define tinycli_nargs(...) CONCAT(tinycli_nargs_,FIRST(__VA_ARGS__))(_, ## __VA_ARGS__, 5, 4, 3, 2, 1, 0)
```
becomes
```C
#define tinycli_lastarg(_1, _2, _3, _4, _5, _6, _7, _8, ...) _8
#define tinycli_nargs(...) CONCAT(tinycli_nargs_,FIRST(__VA_ARGS__))(_, ## __VA_ARGS__, 6, 5, 4, 3, 2, 1, 0)
```


##### Parameter & Args Conversion Macros
The second set of macros to edit are the params and args conversion macros.
These sections have a macro defined for each possible number of command
arguments. When increasing the maximum supported number of arguments, we add
an additional line for each new number of possible arguments. These macros
take the form:

```C
#define tinycli_params_<num>(t, ...) tinycli_types_##t, tinycli_params_<num-1>(__VA_ARGS__)
#define tinycli_args_<num>(n,i,t, ...) CONCAT(tinycli_sto,t)(argv[(n) - ((i)-1)]), tinycli_args_<num-1>(n, i-1,__VA_ARGS__)
```

where `<num>` is the new number of supported arguments. When adding a
new macro, all that is changed is this number. Each macro references the macro
with the previous number as seen by the `<n-1>`. As an example, if increasing
the max number of arguments from 5 to 7, we would add new macros for both 6
and 7.



