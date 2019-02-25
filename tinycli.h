#include "tinycli-config.h"

#define TINYCLI_FUN_V
#define TINYCLI_FUN_I
#define TINYCLI_FUN_D
#define TINYCLI_FUN_II
#define TINYCLI_FUN_DD
#define TINYCLI_FUN_ID
#define TINYCLI_FUN_DI

#define TINYCLI_SIG_V    1
#define TINYCLI_SIG_I    2
#define TINYCLI_SIG_D    3
#define TINYCLI_SIG_II   4
#define TINYCLI_SIG_ID   5
#define TINYCLI_SIG_DI   6
#define TINYCLI_SIG_DD   7


#define TINYCLI_ERROR_NOCMD     -1
#define TINYCLI_ERROR_NUMARGS   -2
#define TINYCLI_ERROR_NOSIG     -3

#define tinycli_register(cmd, func) _Generic((func),   \
int(*)(void):       tinycli_register_sig(cmd, (int(*)(void))func, TINYCLI_SIG_V),   \
int(*)(int):        tinycli_register_sig(cmd, (int(*)(void))func, TINYCLI_SIG_I),   \
int(*)(double):     tinycli_register_sig(cmd, (int(*)(void))func, TINYCLI_SIG_D),   \
int(*)(int,int):    tinycli_register_sig(cmd, (int(*)(void))func, TINYCLI_SIG_II),  \
int(*)(int,double): tinycli_register_sig(cmd, (int(*)(void))func, TINYCLI_SIG_ID),  \
int(*)(double,int): tinycli_register_sig(cmd, (int(*)(void))func, TINYCLI_SIG_DI)   )




void tinycli_register_sig(const char* cmd, int (*f)(void), int sig);
int  tinycli_call(int argc, char* argv[]);
int  tinycli_process(void);
void tinycli_putc(char c);
void tinycli_puts(char* str);
