/*  _______ _____ _   ___     _______ _      _____ 
 * |__   __|_   _| \ | \ \   / / ____| |    |_   _|
 *    | |    | | |  \| |\ \_/ / |    | |      | |  
 *    | |    | | | . ` | \   /| |    | |      | |  
 *    | |   _| |_| |\  |  | | | |____| |____ _| |_ 
 *    |_|  |_____|_| \_|  |_|  \_____|______|_____|
 *
 * Author: Bryce Kellogg (brycekellogg+tinycli@brycekellogg.com)
 * Copyright: 2019 Bryce Kellogg
 * License: BSD 3-Clause
 */
#include <stdlib.h>
#include <string.h>

#include "tinycli.h"


/**
 * Data types that are supported by TinyCli.
 *
 * Each supported data type is represented by a code.
 * These codes are used to specify the function
 * signature in tinycli_register, as well as to
 * differentiate between various macros and
 * conversion functions. The code for a specific
 * type is the text after the last underscore in
 * the tinycli_types_* macros shown below.
 *
 * When adding new types, add an additional
 * tinycli_types_* macro with the chosen
 * type code and the C type that it refers to. **/
#define tinycli_types_v    void
#define tinycli_types_i    int
#define tinycli_types_d    double
#define tinycli_types_s    const char*
#define tinycli_types_ll   long long


/**
 * Data type conversion functions.
 *
 * Each argument passed alongside a command needs to be
 * converted from a string to the desired data type.
 * This is done using various conversion functions,
 * which are specified here in tinycli_conv_*. These
 * macros take a single parameter, which is the index
 * of the argument being passed for conversion.
 *
 * When adding new types, add an additional
 * tinycli_conv_* macro that points to the correct
 * conversion function.
 **/
#define tinycli_conv_v(n)
#define tinycli_conv_i(n)    tinycli_stoi(argv[n])
#define tinycli_conv_d(n)    tinycli_stod(argv[n])
#define tinycli_conv_s(n)    tinycli_stos(argv[n])
#define tinycli_conv_ll(n)   tinycli_stoll(argv[n])


/**
 * A helper macro for concatenating
 * two tokens together. We need two
 * of them because only with the
 * additional indirection will the
 * C preprocessor expand macros before
 * concatenating them. **/
#define CONCAT_2(a,b) a ## b
#define CONCAT(a,b) CONCAT_2(a,b)


/**
 * A helper macro for grabbing the
 * first element of a macro variadic
 * argument. We need two of them for
 * similar reasons as CONCAT()  **/
#define FIRST_(_, ...) _
#define FIRST(...) FIRST_(__VA_ARGS__, _)


/**
 * Count the number of function parameters.
 *
 * This macro outputs the number of arguments
 * a function takes based on a list of the parameters.
 * This is different from a simple count of parameters
 * because we handle the void case differently.
 *
 * Void needs to be specified when registering a function,
 * but should return zero as a number of arguments. This is
 * done by selectively calling tinycli_nargs_v or
 * tinycli_lastarg based on if the first (or only) argument
 * being counted is our void type.
 *
 * When increasing the number of supported parameters, the
 * max value in tinycli_nargs should be increased to equal
 * the max. The list of arguments in tinycli_lastarg should
 * be increased to two more than the max and should always
 * return the last argument before the variadic paraameter. 
 *
 * When adding new types, copy tinycli_nargs_i and change
 * the type 'i' to the chosen data type code of the new
 * type. No other changes to tinycli_lastarg needed. **/
#define tinycli_nargs_v(...)     0
#define tinycli_nargs_i(...)     tinycli_lastarg(__VA_ARGS__)
#define tinycli_nargs_d(...)     tinycli_lastarg(__VA_ARGS__)
#define tinycli_nargs_s(...)     tinycli_lastarg(__VA_ARGS__)
#define tinycli_nargs_ll(...)    tinycli_lastarg(__VA_ARGS__)
#define tinycli_lastarg(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, ...) _12
#define tinycli_nargs(...) CONCAT(tinycli_nargs_,FIRST(__VA_ARGS__))(_, ## __VA_ARGS__, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0)


/**
 * Build list of function parameters.
 *
 * Each function that is registered via tinycli_register() needs to be
 * declared so that we can call it directly in tinycli_call(). This
 * requires a list of the parameters the function takes. The tinycli_params_*
 * macros produce this list based on a list of TinyCli type codes that
 * are passed to tinycli_register().
 *
 * When increasing the max number of arguments supported, add
 * additional tinycli_params_* macros for each additional argument.
 * The format should match those of existing tinycli_params_*
 * macros with just the numbers changed. The macro should call
 * the tinycli_params_* macro with the preceding number. The
 * tincli_params() macro should remain unchanged. **/
#define tinycli_params_0( t)      tinycli_types_##t
#define tinycli_params_1( t)      tinycli_types_##t
#define tinycli_params_2( t, ...) tinycli_types_##t, tinycli_params_1(__VA_ARGS__)
#define tinycli_params_3( t, ...) tinycli_types_##t, tinycli_params_2(__VA_ARGS__)
#define tinycli_params_4( t, ...) tinycli_types_##t, tinycli_params_3(__VA_ARGS__)
#define tinycli_params_5( t, ...) tinycli_types_##t, tinycli_params_4(__VA_ARGS__)
#define tinycli_params_6( t, ...) tinycli_types_##t, tinycli_params_5(__VA_ARGS__)
#define tinycli_params_7( t, ...) tinycli_types_##t, tinycli_params_6(__VA_ARGS__)
#define tinycli_params_8( t, ...) tinycli_types_##t, tinycli_params_7(__VA_ARGS__)
#define tinycli_params_9( t, ...) tinycli_types_##t, tinycli_params_8(__VA_ARGS__)
#define tinycli_params_10(t, ...) tinycli_types_##t, tinycli_params_9(__VA_ARGS__)
#define tinycli_params(...)  CONCAT(tinycli_params_,tinycli_nargs(__VA_ARGS__))(__VA_ARGS__)


/**
 * Build list for argument conversion.
 *
 * Conversion of arguments from strings to the appropiate data
 * type happens in place as the arguments are passed to the function
 * being called. These macros build a list of arguments and passes them
 * to the correct conversion function for use in the argument list of
 * the user callback function.
 *
 * When incraesing the max number of arguments supported, add
 * additional tincli_args_* macros for each additional argument.
 * The format should match those of existing tincli_args_*
 * macros with just the numbers changed. The macro should call
 * the tinycli_args_* macro with the preceding number. The
 * tinycli_args() macro should remain unchanged.  **/
#define tinycli_args_0( n,i,t) 
#define tinycli_args_1( n,i,t)      CONCAT(tinycli_conv_,t)((n) - ((i)-1))
#define tinycli_args_2( n,i,t, ...) CONCAT(tinycli_conv_,t)((n) - ((i)-1)), tinycli_args_1(n, i-1,__VA_ARGS__)
#define tinycli_args_3( n,i,t, ...) CONCAT(tinycli_conv_,t)((n) - ((i)-1)), tinycli_args_2(n, i-1,__VA_ARGS__)
#define tinycli_args_4( n,i,t, ...) CONCAT(tinycli_conv_,t)((n) - ((i)-1)), tinycli_args_3(n, i-1,__VA_ARGS__)
#define tinycli_args_5( n,i,t, ...) CONCAT(tinycli_conv_,t)((n) - ((i)-1)), tinycli_args_4(n, i-1,__VA_ARGS__)
#define tinycli_args_6( n,i,t, ...) CONCAT(tinycli_conv_,t)((n) - ((i)-1)), tinycli_args_5(n, i-1,__VA_ARGS__)
#define tinycli_args_7( n,i,t, ...) CONCAT(tinycli_conv_,t)((n) - ((i)-1)), tinycli_args_6(n, i-1,__VA_ARGS__)
#define tinycli_args_8( n,i,t, ...) CONCAT(tinycli_conv_,t)((n) - ((i)-1)), tinycli_args_7(n, i-1,__VA_ARGS__)
#define tinycli_args_9( n,i,t, ...) CONCAT(tinycli_conv_,t)((n) - ((i)-1)), tinycli_args_8(n, i-1,__VA_ARGS__)
#define tinycli_args_10(n,i,t, ...) CONCAT(tinycli_conv_,t)((n) - ((i)-1)), tinycli_args_9(n, i-1,__VA_ARGS__)
#define tinycli_args(...) CONCAT(tinycli_args_,tinycli_nargs(__VA_ARGS__))(tinycli_nargs(__VA_ARGS__),tinycli_nargs(__VA_ARGS__),__VA_ARGS__)


/* Return value
 */
int tinycli_result;

/* Declare functions
 *
 * This is here because we actually call the registered functions
 * from this file. Thus we need them declared here.
 */
#define tinycli_register(txt, fun, ...) int fun(tinycli_params(__VA_ARGS__));
#include "tinycli-funs.h"
#undef tinycli_register

/*
 * Tokenize a string into argc/argv format
 *
 * Params:
 *   str  = a NULL terminated string to tokenize
 *   argv = a char** for holding tokens. Each entry
 *          in argv will be filled with a pointer to
 *          the token in str. Thus argv is only valid
 *          as long as str is valid.
 *
 * Returns:
 *   the number of tokens copied into argv
 *
 * Note:
 *   In the case that str contains more tokens than MAX_ARGC, then only
 *   the first MAX_ARGC number will be copied into argv.
 */
int tokenize(char* str, char* argv[]) {
    int argc = 0;
    argv[argc] = strtok(str, TINYCLI_TOKDELIM);
    if (argv[argc] == NULL) return 0;
    while (++argc < TINYCLI_MAXARGC && (argv[argc] = strtok(NULL, TINYCLI_TOKDELIM)));
    return argc;
}


/*
 *
 */
int tinycli_stoi(const char* c) {
    return strtol(c, NULL, 0);
}

/*
 *
 */
long long tinycli_stoll(const char* c) {
    return strtoll(c, NULL, 0);
}

/*
 *
 */
double tinycli_stod(const char* c) {
    return strtod(c, NULL);
}

const char* tinycli_stos(const char* c) {
    return c;
}


/* Call a registered callback based on the entered text
 *
 * Params:
 *    argc = the size of argv.
 *    argv = an array containing the text of the command
 *           and the arguments. The command is at index 0
 *           with arguments following.
 *
 * Returns: the result of callback function of a negative
 *          error code if the given command is not found
 *          or if the arguments converted incorrectedly.
 */
int tinycli_call(int argc, char* argv[]) {
    /* Skip calls that have no commands */
    if (argc < 1) {
        return TINYCLI_ERROR_NOCALL;
    }

    #define tinycli_register(txt, fun, ...) \
    if (!strcmp(argv[0], txt)) {            \
        return (argc == 1+tinycli_nargs(__VA_ARGS__)) ? fun(tinycli_args(__VA_ARGS__)) : TINYCLI_ERROR_NUMARGS; \
    } 
    #include "tinycli-funs.h"
    #undef tinycli_register

    return TINYCLI_ERROR_NOCMD;
}


/* Add char to tinycli buffer
 *
 * Will trigger a command if the
 * char matches the TINYCLI_ENTER
 * character.
 *
 * Params:
 *     c = the character to append
 */
void tinycli_putc(char c) {

    static int  top = 0;
    static char buffer[TINYCLI_MAXBUFFER];
    static char*  argv[TINYCLI_MAXARGC];
    int argc;
    int i;

    /* Ignore certain characters */
    for (i = 0; i < sizeof(TINYCLI_SKIPCHARS); i++) {
        if (c == TINYCLI_SKIPCHARS[i]) return;
    }

    /* Handle backspace */
    if (c == '\b') {
        top--;
        return;
    }

    /* Save char */
    buffer[top++] = c;

    /* Call stuff */
    if (c == TINYCLI_ENTER) {

        /* Set null character after <enter> */
        buffer[--top] = '\0';

        /* Parse command into argv and argc */
        argc = tokenize(buffer, argv);

        /* Try to call function */
        tinycli_result = tinycli_call(argc, argv);
        top = 0;
    }
}


/* Add string to tinycli buffer
 *
 * Will trigger a command if the char
 * matches the TINYCLI_ENTER character.
 * This can possibly happen more that
 * once if there are multiple lines of
 * commands to execute.
 *
 * Params:
 *     s = the null terminated string to append
 *     n = a maximum number of characters to append
 */
void tinycli_putsn(char* s, int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (s[i] == '\0') break;  /* Stop at NULL char */
        tinycli_putc(s[i]);
    }
}


