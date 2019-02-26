#include <stdlib.h>
#include <string.h>

#include "tinycli.h"
#include "tinycli-config.h"


int tinycli_stoI(const char* c) {
    return strtol(c, NULL, 0);
}

double tinycli_stoD(const char* c) {
    return strtod(c, NULL);
}


/* An array of command structures for
 * storing info needed for calling a
 * function for a specific command.  */
static struct {
    const char* text;
    int(*fun)(void);
    int sig;
} cmds[TINYCLI_MAXCMDS];


/* The number of commands that
 * have been registered. This cannot
 * exceed TINYCLI_MAXCMDS. */
static int numCmds = 0;


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
    argv[argc] = strtok(str, " ");
    while (++argc < TINYCLI_MAXARGC && (argv[argc] = strtok(NULL, " ")));
    return argc;
}


/* Find the index of the command given
 * by the string at argv[0].  */
static int findCmd(int argc, char* argv[]) {
    for (int i = 0; i < numCmds; i++) {
        if (!strcmp(argv[0], cmds[i].text)) return i;
    }
    return -1;
}


/* Register a command
 *
 * If you don't want to specify the specific TINYCLI_SIG_?? macro,
 * you can instead call the helper functions: tincli_regiser_??().
 *
 * Params:
 *    text = a string literal of the text that will trigger this command.
 *           This should be a single word with no surrounding whitespace.
 *    fun  = the function to call when this command is encountered but
 *           cast to an int(*)(void) signature.
 *    sig  = the true signature of the callback function as defined in
 *           the TINYCLI_SIG_?? macros.
 */
void tinycli_register_sig(const char* text, int (*fun)(void), int sig) {
    if (numCmds >= TINYCLI_MAXCMDS) return;
    cmds[numCmds].text = text;
    cmds[numCmds].fun  = fun;
    cmds[numCmds].sig  = sig;
    numCmds++;
}

/*
 *
 */
#define TINYCLI_DEFINE(t) \
    if (cmds[cmdIndex].sig == TINYCLI_SIG_##t) { \
        if (argc != sizeof(#t)) return TINYCLI_ERROR_NUMARGS; \
        return ((int(*)(TINYCLI_ARGTYPE_##t)) cmds[cmdIndex].fun)(TINYCLI_ARGS_##t); \
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
    
    // Get command index
    int cmdIndex = findCmd(argc, argv);
    if (cmdIndex < 0) return TINYCLI_ERROR_NOCMD;

    #include "tinycli-funs.h"
    return TINYCLI_ERROR_NOSIG;
}
#undef TINYCLI_DEFINE





char tinycli_buffer[TINYCLI_MAXBUFFER];


void tinycli_puts(char* str) {
    strcpy(tinycli_buffer, str);
}

void tinycli_putsn(char* str, int n) {

}

void tinycli_putc(char c) {
}

int tinycli_process() {
    // Debug
    //strcpy(tinycli_buffer, "ii 0x43 1");

    // TODO: look for newlines
    
    // Parse command
    char* argv[TINYCLI_MAXARGC];
    int argc = tokenize(tinycli_buffer, argv);

    // Call resulting function
    return tinycli_call(argc, argv);
}
    

