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
#include "tinycli-config.h"

#define TINYCLI_ENTER  '\n'

/* Return value
 */
int tinycli_result;

#define tinycli_args(s)   tinycli_args_##s
#define tinycli_nargs(s)  tinycli_nargs_##s
#define tinycli_params(s) tinycli_params_##s

enum {
    #define tinycli_register(txt, fun, type) tinycli_##type,
    #include "tinycli-funs.h"
    #undef tinycli_register
    tinycli_numsigs
};

#define tinycli_register(txt, fun, type) int fun(tinycli_params(type));
#include "tinycli-funs.h"
#undef tinycli_register

/* An array of command structures for
 * storing info needed for calling a
 * function for a specific command.  */
static struct {
    const char* text;
    int(*fun)(void);
    int sig;
    int nargs;
} cmds[] = {
    #define tinycli_register(txt ,fun, type)  {txt,  (int(*)(void))fun,  tinycli_##type,  tinycli_nargs(type)},
    #include "tinycli-funs.h"
    #undef tinycli_register
};


/* The number of commands that
 * have been registered. This cannot
 * exceed TINYCLI_MAXCMDS. */
static int numCmds = sizeof(cmds);


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
    argv[argc] = strtok(str, " \n");
    while (++argc < TINYCLI_MAXARGC && (argv[argc] = strtok(NULL, " ")));
    return argc;
}


/* Find the index of the command given
 * by the string at argv[0].  */
static int findCmd(int argc, char* argv[]) {
    int i;
    for (i = 0; i < numCmds; i++) {
        if (!strcmp(argv[0], cmds[i].text)) return i;
    }
    return -1;
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
double tinycli_stod(const char* c) {
    return strtod(c, NULL);
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
    
    /* Get command index */
    int cmdIndex = findCmd(argc, argv);
    if (cmdIndex < 0) return TINYCLI_ERROR_NOCMD;
    if (argc != cmds[cmdIndex].nargs+1) return TINYCLI_ERROR_NUMARGS;
    switch (cmds[cmdIndex].sig) {
        #define tinycli_register(txt, f, type)  case tinycli_##type: return ((int(*)(tinycli_params(type))) cmds[cmdIndex].fun)(tinycli_args(type));
        #include "tinycli-funs.h"
        #undef tinycli_register
    }
    return TINYCLI_ERROR_NOSIG;
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

    /* Ignore carriage return */
    if (c == '\r') return;

    /* Handle backspace */
    if (c == '\b') {
        top--;
        return;
    }

    /* Save char */
    buffer[top++] = c;

    /* Call stuff */
    if (c == TINYCLI_ENTER) {
        /* Parse command into argv and argc */
        int argc = tokenize(buffer, argv);

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


