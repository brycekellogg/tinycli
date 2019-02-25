#include <stdlib.h>
#include <string.h>

#include "tinycli.h"
#include "tinycli-config.h"



#define TINYCLI_TYPE_i  int
#define TINYCLI_TYPE_u  unsigned
#define TINYCLI_TYPE_l  long
#define TINYCLI_TYPE_ul unsigned long
#define TINYCLI_TYPE_d  double

#define TINYCLI_CAST_V   int(*)(void)
#define TINYCLI_CAST_I   int(*)(int)
#define TINYCLI_CAST_D   int(*)(double)
#define TINYCLI_CAST_II  int(*)(int,int)
#define TINYCLI_CAST_ID  int(*)(int,double)
#define TINYCLI_CAST_DI  int(*)(double,int)
#define TINYCLI_CAST_DD  int(*)(double,double)

#define TINYCLI_NUMARGS_V  0
#define TINYCLI_NUMARGS_I  1
#define TINYCLI_NUMARGS_D  1
#define TINYCLI_NUMARGS_II 2
#define TINYCLI_NUMARGS_ID 2
#define TINYCLI_NUMARGS_DI 2
#define TINYCLI_NUMARGS_DD 2

#define TINYCLI_ARGS_V
#define TINYCLI_ARGS_I   arg0
#define TINYCLI_ARGS_D   arg0
#define TINYCLI_ARGS_II  arg0,arg1
#define TINYCLI_ARGS_ID  arg0,arg1
#define TINYCLI_ARGS_DI  arg0,arg1
#define TINYCLI_ARGS_DD  arg0,arg1

#define TINYCLI_CONVERTARGS_V
#define TINYCLI_CONVERTARGS_I  int    arg0 = strtol();
#define TINYCLI_CONVERTARGS_D  double arg0 = strtod();
#define TINYCLI_CONVERTARGS_II tinycli_arg(0,l); tinycli_arg(1,l);
#define TINYCLI_CONVERTARGS_ID tinycli_arg(0,l); tinycli_arg(1,d);
#define TINYCLI_CONVERTARGS_DI tinycli_arg(0,d); tinycli_arg(1,l);
#define TINYCLI_CONVERTARGS_DD tinycli_arg(0,d); tinycli_arg(1,d);


#define tinycli_arg(i, t) TINYCLI_TYPE_##t arg##i = strto##t(argv[i+1], NULL, 0)
/*

    //#define TINYCLI_DEFINE_FUNTYPE(sig, numargs, cast)              \
    //if (cmds[cmdIndex].sig == sig) {                                \
        //if (argc != numargs + 1) return TINYCLI_ERROR_NUMARGS;      \
        //for (i = 1; i < numargs+1; i++) { \
            //??? \
        //} \
        //TINYCLI_CONVERTARGS_##type                                  \
        //return ((cast) cmds[cmdIndex].fun)(TINYCLI_ARGS(numargs));  \
    //}
    //#include "tinycli-config.h"
    //#undef TINYCLI_DEFINE_FUNTYPE

*/

int tinycli_stoi(const char* c) {
    return strtol(c, NULL, 0);
}

double tinycli_stod(const char* c) {
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


    // (void)
    if (cmds[cmdIndex].sig == TINYCLI_SIG_V) {
        if (argc != TINYCLI_NUMARGS_V + 1) return TINYCLI_ERROR_NUMARGS;
        return ((int(*)(void)) cmds[cmdIndex].fun)();
    }

    // (int)
    if (cmds[cmdIndex].sig == TINYCLI_SIG_I) {
        if (argc != TINYCLI_NUMARGS_I + 1) return TINYCLI_ERROR_NUMARGS;
        int arg0 = tinycli_stoi(argv[1]);
        return ((int(*)(int)) cmds[cmdIndex].fun)(arg0);
    }
    
    // (double)
    if (cmds[cmdIndex].sig == TINYCLI_SIG_D) {
        if (argc != TINYCLI_NUMARGS_D + 1) return TINYCLI_ERROR_NUMARGS;
        double arg0 = tinycli_stod(argv[1]);
        return ((int(*)(double)) cmds[cmdIndex].fun)(arg0);
    }
    
    // (int,int)
    if (cmds[cmdIndex].sig == TINYCLI_SIG_II) {
        if (argc != TINYCLI_NUMARGS_II + 1) return TINYCLI_ERROR_NUMARGS;
        int arg0 = tinycli_stoi(argv[1]);
        int arg1 = tinycli_stoi(argv[2]);
        return ((int(*)(int,int)) cmds[cmdIndex].fun)(arg0,arg1);
    }
    
    // (int,double)
    if (cmds[cmdIndex].sig == TINYCLI_SIG_ID) {
        if (argc != TINYCLI_NUMARGS_ID + 1) return TINYCLI_ERROR_NUMARGS;
        int    arg0 = tinycli_stoi(argv[1]);
        double arg1 = tinycli_stod(argv[2]);
        return ((int(*)(int,double)) cmds[cmdIndex].fun)(arg0,arg1);
    }
    
    // (double,int)
    if (cmds[cmdIndex].sig == TINYCLI_SIG_DI) {
        if (argc != TINYCLI_NUMARGS_DI + 1) return TINYCLI_ERROR_NUMARGS;
        double arg0 = tinycli_stod(argv[1]);
        int    arg1 = tinycli_stoi(argv[2]);
        return ((int(*)(double,int)) cmds[cmdIndex].fun)(arg0,arg1);
    }
    
    // (double,double)
    if (cmds[cmdIndex].sig == TINYCLI_SIG_DD) {
        if (argc != TINYCLI_NUMARGS_DD + 1) return TINYCLI_ERROR_NUMARGS;
        double arg0 = tinycli_stod(argv[1]);
        double arg1 = tinycli_stod(argv[2]);
        return ((int(*)(double,double)) cmds[cmdIndex].fun)(arg0,arg1);
    }
    
    return TINYCLI_ERROR_NOSIG;
}





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
    

