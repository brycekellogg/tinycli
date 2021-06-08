/*  _______ _____ _   ___     _______ _      _____
 * |__   __|_   _| \ | \ \   / / ____| |    |_   _|
 *    | |    | | |  \| |\ \_/ / |    | |      | |
 *    | |    | | | . ` | \   /| |    | |      | |
 *    | |   _| |_| |\  |  | | | |____| |____ _| |_
 *    |_|  |_____|_| \_|  |_|  \_____|______|_____|
 *
 * Author: Bryce Kellogg (bryce@kellogg.org)
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
 * tinycli_args() macro should remain unchanged.
 *
 * Each argument passed alongside a command needs to be
 * converted from a string to the desired data type.
 * This is done using various conversion functions,
 * which are called here as tinycli_sto*.
 *
 * When adding new types, make sure the conversion function is named
 * correctly, such that tinycli_sto* points to the correct
 * conversion function when passed the type code. **/
#define tinycli_args_0( n,i,t)
#define tinycli_args_1( n,i,t)      CONCAT(tinycli_sto,t)(argv[(n) - ((i)-1)])
#define tinycli_args_2( n,i,t, ...) CONCAT(tinycli_sto,t)(argv[(n) - ((i)-1)]), tinycli_args_1(n, i-1,__VA_ARGS__)
#define tinycli_args_3( n,i,t, ...) CONCAT(tinycli_sto,t)(argv[(n) - ((i)-1)]), tinycli_args_2(n, i-1,__VA_ARGS__)
#define tinycli_args_4( n,i,t, ...) CONCAT(tinycli_sto,t)(argv[(n) - ((i)-1)]), tinycli_args_3(n, i-1,__VA_ARGS__)
#define tinycli_args_5( n,i,t, ...) CONCAT(tinycli_sto,t)(argv[(n) - ((i)-1)]), tinycli_args_4(n, i-1,__VA_ARGS__)
#define tinycli_args_6( n,i,t, ...) CONCAT(tinycli_sto,t)(argv[(n) - ((i)-1)]), tinycli_args_5(n, i-1,__VA_ARGS__)
#define tinycli_args_7( n,i,t, ...) CONCAT(tinycli_sto,t)(argv[(n) - ((i)-1)]), tinycli_args_6(n, i-1,__VA_ARGS__)
#define tinycli_args_8( n,i,t, ...) CONCAT(tinycli_sto,t)(argv[(n) - ((i)-1)]), tinycli_args_7(n, i-1,__VA_ARGS__)
#define tinycli_args_9( n,i,t, ...) CONCAT(tinycli_sto,t)(argv[(n) - ((i)-1)]), tinycli_args_8(n, i-1,__VA_ARGS__)
#define tinycli_args_10(n,i,t, ...) CONCAT(tinycli_sto,t)(argv[(n) - ((i)-1)]), tinycli_args_9(n, i-1,__VA_ARGS__)
#define tinycli_args(...) CONCAT(tinycli_args_,tinycli_nargs(__VA_ARGS__))(tinycli_nargs(__VA_ARGS__),tinycli_nargs(__VA_ARGS__),__VA_ARGS__)


/* Stores the result of a registered function when a command is
 * called or a negative error code as described above. Because
 * Tinycli will only generate negative error codes, positive
 * error codes are recommended for registered user functions.  */
int tinycli_result;
int tinycli_error;


/* Declare functions
 *
 * This is here because we actually call the registered functions
 * from this file. Thus we need them declared in this file.  */
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
int tinycli_tokenize(char* str, char* argv[]) {
    int argc = 0;
    argv[argc] = strtok(str, TINYCLI_TOKDELIM);
    if (argv[argc] == NULL) return 0;
    while (++argc <= TINYCLI_MAXARGS && (argv[argc] = strtok(NULL, TINYCLI_TOKDELIM)));
    return argc;
}


/* Conversion function for integer type arguments.
 *
 * Params:
 *    s = the string to convert to an integer
 *
 * Returns: the result of conversion to an integer. Currently
 *          uses strtol() from the cstdlib. As a result, errno
 *          is set in the case of a conversion error. In the
 *          future, tinycli_result will be set in the case
 *          of an error.
 */
int tinycli_stoi(const char* s) {
    return strtol(s, NULL, 0);
}


/* Conversion function for long long type arguments.
 *
 * Params:
 *    s = the string to convert to a long long
 *
 * Returns: the result of conversion to a long long. Currently
 *          uses strtoll() from the cstdlib. As a result, errno
 *          is set in the case of a conversion error. In the
 *          future, tinycli_result will be set in the case
 *          of an error.
 */
long long tinycli_stoll(const char* c) {
    return strtoll(c, NULL, 0);
}


/* Conversion function for double type arguments.
 *
 * Params:
 *    s = the string to convert to a double
 *
 * Returns: the result of conversion to a double. Currently
 *          uses strtod() from the cstdlib. As a result, errno
 *          is set in the case of a conversion error. In the
 *          future, tinycli_result will be set in the case
 *          of an error.
 */
double tinycli_stod(const char* c) {
    return strtod(c, NULL);
}


/* Conversion function for string type arguments.
 *
 * Note that this just passes the string through unmodified.
 * This means that the return value points to memory in the
 * tinycli internal argv buffer. This could lead to problems
 * if the string is needed after the completion of this command.
 * In this case, the string should be copied to another location
 * by the registered command function to which this is an argument.
 *
 * Params:
 *    s = the string to "convert" to a string
 *
 * Returns: a pointer to the string passed in
 */
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
 * Returns: the result of callback function or a negative
 *          error code if the given command is not found
 *          or if the arguments converted incorrectedly.
 */
int tinycli_call(int argc, char* argv[]) {
    tinycli_error = TINYCLI_ERROR_SUCCESS;
    /* Skip calls that have no commands */
    if (argc < 1) {
        tinycli_error = TINYCLI_ERROR_NOCALL;
        return TINYCLI_ERROR_NOCALL;
    }

#define tinycli_register(txt, fun, ...)               \
    if (!strcmp(argv[0], txt)) {                      \
        if (argc == 1 + tinycli_nargs(__VA_ARGS__)) { \
            return fun(tinycli_args(__VA_ARGS__));    \
        } else {                                      \
            tinycli_error = TINYCLI_ERROR_NUMARGS;    \
            return TINYCLI_ERROR_NUMARGS;             \
        }                                             \
    }
    #include "tinycli-funs.h"
    #undef tinycli_register

    tinycli_error = TINYCLI_ERROR_NOCMD;
    return TINYCLI_ERROR_NOCMD;
}



/* Add char to tinycli buffer & potentially trigger command.
 *
 * Unless the input char `c` matches one of the special characters described
 * below, it is appended to a command buffer. This command buffer is then
 * compared against the command string specified in `tinycli_register()`
 *
 * TINYCLI_ENTER: indicates that an enter or return code has been sent and
 *                that this is the end of a command string. Tinycli will
 *                attempt tokenization and calling a command.
 *
 * TINYCLI_SKIPCHARS: any character in the TINYCLI_SKIPCHARS string is
 *                    immediately discarded, and no further action taken.
 *
 * TINYCLI_BACKSPACE: indicates that a backspace character has been sent.
 *                    Tinycli will remove the character before the cursor
 *                    from the command string buffer. Only used if
 *                    editing is enabled via TINYCLI_ENABLE_EDITING
 *
 * TINYCLI_DEL: indicates that a delete character has been sent.
 *              Tinycli will remove the character under the cursor
 *              from the command string buffer. Only used if
 *              editing is enabled via TINYCLI_ENABLE_EDITING
 *
 * TiNYCLI_LEFTARROW
 * TINYCLI_RIGHTARROW: indicates that the cursor should be moved to the
 *                     left or right and that the current position in the
 *                     command string buffer is updated accordingly. This is
 *                     only used if TINYCLI_ENABLE_EDITING is enabled.
 *
 * Params:
 *     c = the character to append
 */
void tinycli_putc(char c) {

    static int  top = 0;
    static int  cur = 0;
    static char buffer[TINYCLI_MAXBUFFER];  // TODO: check this in putc
    static char*  argv[TINYCLI_MAXARGS+1];
    int argc;


    // Ignore any characters in the TINYCLI_SKIPCHARS macro
    for (int i = 0; i < sizeof(TINYCLI_SKIPCHARS); i++) {
        if (c == TINYCLI_SKIPCHARS[i]) return;
    }


#ifdef TINYCLI_ENABLE_EDITING

    // Test if we have matched the escape sequence for a left arrow key code.
    // If so, we reset the escape sequence counter, move the buffer cursor,
    // and echo a cursor backward escape sequence. Nothing is added to the buffer.
    static int escCntLeft = 0;
    if (escCntLeft < sizeof(TINYCLI_LEFTARROW) && c != TINYCLI_LEFTARROW[escCntLeft]) escCntLeft = 0;
    if (escCntLeft < sizeof(TINYCLI_LEFTARROW) && c == TINYCLI_LEFTARROW[escCntLeft]) escCntLeft++;
    if (escCntLeft == sizeof(TINYCLI_LEFTARROW)-1) {
        escCntLeft = 0;
        if (cur > 0) tinycli_echos(TINYCLI_CURSORBACKWARD);
        cur = (cur > 0) ? cur-1 : 0;
        return;
    }

    // Test if we have matched the escape sequence for a right arrow key code.
    // If so, we reset the escape sequence counter, move the buffer cursor,
    // and echo a cursor forward escape sequence. Nothing is added to the buffer.
    static int escCntRight = 0;
    if (escCntRight < sizeof(TINYCLI_RIGHTARROW) && c != TINYCLI_RIGHTARROW[escCntRight]) escCntRight = 0;
    if (escCntRight < sizeof(TINYCLI_RIGHTARROW) && c == TINYCLI_RIGHTARROW[escCntRight]) escCntRight++;
    if (escCntRight == sizeof(TINYCLI_RIGHTARROW)-1) {
        escCntRight = 0;
        if (cur < top) tinycli_echos(TINYCLI_CURSORFORWARD);
        cur = (cur < top) ? cur+1 : top;
        return;
    }

    // Test if we have matched the escape sequence for a delete key code.
    // If so, we reset the escape sequence counter, shift the buffer left one,
    // and echo the remaining shifted buffer.
    static int escCntDel = 0;
    if (escCntDel < sizeof(TINYCLI_DEL) && c != TINYCLI_DEL[escCntDel]) escCntDel = 0;
    if (escCntDel < sizeof(TINYCLI_DEL) && c == TINYCLI_DEL[escCntDel]) escCntDel++;
    if (escCntDel == sizeof(TINYCLI_DEL)-1) {
        escCntDel = 0;

        // If there is nothing in the buffer,
        // we don't want to delete anything.
        // Return immediately, taking no action.
        if (top == 0) return;

        // Delete character by shifting buffer left one.
        // Update top given deleted character.
        for (int i = cur; i < top-1; i++) {
            buffer[i] = buffer[i+1];
        }
        top = (top == 0) ? top : top-1;
        cur = (cur > top) ? top : cur;
        buffer[top] = '\0';     // Set null character at end of str

        // Print buffer until end, erase last character,
        // and reset cursor to correct position.
        tinycli_echos(buffer+cur);
        tinycli_echoc(' ');
        for (int i = top; i >= cur; i--) tinycli_echos(TINYCLI_CURSORBACKWARD);

        // Nothing to save to the buffer
        return;
    }

    // Test if we have matched the escape sequence for a backspace key code.
    // If so, we reset the escape sequence counter, shift the buffer left one,
    // decrement the top and current, and echo the remaining shifted buffer.
    static int escCntBack = 0;
    if (escCntBack < sizeof(TINYCLI_BACKSPACE) && c != TINYCLI_BACKSPACE[escCntBack]) escCntBack = 0;
    if (escCntBack < sizeof(TINYCLI_BACKSPACE) && c == TINYCLI_BACKSPACE[escCntBack]) escCntBack++;
    if (escCntBack == sizeof(TINYCLI_BACKSPACE)-1) {
        escCntBack = 0;

        // If there is nothing in the buffer,
        // we don't want to delete anything.
        // Return immediately, taking no action.
        if (top == 0) return;

        // Delete character by shifting buffer left one.
        // Update cur and top given deleted character.
        for (int i = cur-1; i < top-1; i++) {
            buffer[i] = buffer[i+1];
        }
        cur = (cur == 0) ? cur : cur-1;
        top = (top == 0) ? top : top-1;
        buffer[top] = '\0';     // Set null character at end of str

        // Move cursor back one, print remaining buffer, erase
        // last character, and reset cursor to correct position.
        tinycli_echos(TINYCLI_CURSORBACKWARD);
        tinycli_echos(buffer+cur);
        tinycli_echoc(' ');
        for (int i = top; i >= cur; i--) tinycli_echos(TINYCLI_CURSORBACKWARD);

        // Nothing to save to the buffer
        return;
    }

    // Don't add escape sequences to the buffer
    if (escCntLeft != 0 || escCntRight != 0 || escCntDel != 0 || escCntBack != 0) return;

#endif  // TINYCLI_ENABLE_EDITING


    // Save c to buffer & potentially call function
    if (c == TINYCLI_ENTER) {
        buffer[top] = '\0';     // Set null character at end of str
        top = 0;                // Reset top after each command
        cur = 0;
        tinycli_echos("\r\n");  // Echo to complete line

        argc = tinycli_tokenize(buffer, argv);      // Parse command into argv and argc
        tinycli_result = tinycli_call(argc, argv);  // Try to call function
    } else if(top < TINYCLI_MAXBUFFER - 1){
        // Insert character by shifting buffer right one,
        // and saving char to the newly open index.
        for (int i = top; i > cur; i--) {
            buffer[i] = buffer[i-1];
        }
        buffer[cur++] = c;
        buffer[++top] = '\0';

        // Echo character, print remaining buffer,
        // and reset cursor to correct position.
        tinycli_echoc(c);
        tinycli_echos(buffer+cur);
        for (int i = top; i > cur; i--) tinycli_echos(TINYCLI_CURSORBACKWARD);
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


