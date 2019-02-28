#ifndef __TINYCLI_H__
#define __TINYCLI_H__

#define TINYCLI_MAXCMDS    14
#define TINYCLI_MAXARGC    4
#define TINYCLI_MAXBUFFER  100

#define TINYCLI_ERROR_NOCMD     -1
#define TINYCLI_ERROR_NUMARGS   -2
#define TINYCLI_ERROR_NOSIG     -3

int  tinycli_call(int argc, char* argv[]);
int  tinycli_process(void);
void tinycli_putc(char c);
void tinycli_puts(char* str);

void tinycli_register_v (const char* cmd, int (*f)(void));
void tinycli_register_i (const char* cmd, int (*f)(int));
void tinycli_register_d (const char* cmd, int (*f)(double));
void tinycli_register_ii(const char* cmd, int (*f)(int,int));
void tinycli_register_id(const char* cmd, int (*f)(int,double));
void tinycli_register_di(const char* cmd, int (*f)(double,int));
void tinycli_register_dd(const char* cmd, int (*f)(double,double));

#define tinycli_register(cmd, func) _Generic((func),  \
    int(*)(void):          tinycli_register_v,        \
    int(*)(int):           tinycli_register_i,        \
    int(*)(double):        tinycli_register_d,        \
    int(*)(int,int):       tinycli_register_ii,       \
    int(*)(int,double):    tinycli_register_id,       \
    int(*)(double,int):    tinycli_register_di,       \
    int(*)(double,double): tinycli_register_dd) (cmd, func)

#endif // __TINYCLI_H__
