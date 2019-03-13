#ifndef __TINYCLI_H__
#define __TINYCLI_H__

#define TINYCLI_MAXCMDS    14
#define TINYCLI_MAXARGC    10
#define TINYCLI_MAXBUFFER  100

#include "tinycli-config.h"

#define TINYCLI_ERROR_NOCMD     -1
#define TINYCLI_ERROR_NUMARGS   -2
#define TINYCLI_ERROR_NOSIG     -3

extern int tinycli_result;

void tinycli_process(void);
void tinycli_putsn(char* s, int n);
void tinycli_putc(char c);

#define tinycli_args(s)   tinycli_args_##s
#define tinycli_nargs(s)  tinycli_nargs_##s
#define tinycli_params(s) tinycli_params_##s

enum {
    #define tinycli_cmd(s) tinycli_##s,
    #include "tinycli-funs.h"
    #undef tinycli_cmd
};

#define tinycli_cmd(s)  void tinycli_register_##s (const char* cmd, int (*f)(tinycli_params(s)));
#include "tinycli-funs.h"
#undef tinycli_cmd

#endif // __TINYCLI_H__
