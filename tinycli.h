#ifndef __TINYCLI_H__
#define __TINYCLI_H__

#define TINYCLI_MAXCMDS    14
#define TINYCLI_MAXARGC    10
#define TINYCLI_MAXBUFFER  100

#define TINYCLI_ERROR_NOCMD     -1
#define TINYCLI_ERROR_NUMARGS   -2
#define TINYCLI_ERROR_NOSIG     -3

extern int tinycli_result;

void tinycli_process(void);
void tinycli_putsn(char* s, int n);
void tinycli_putc(char c);

void tinycli_register_v     (const char* cmd, int (*f)(void));
void tinycli_register_i     (const char* cmd, int (*f)(int));
void tinycli_register_d     (const char* cmd, int (*f)(double));
void tinycli_register_ii    (const char* cmd, int (*f)(int,int));
void tinycli_register_id    (const char* cmd, int (*f)(int,double));
void tinycli_register_di    (const char* cmd, int (*f)(double,int));
void tinycli_register_dd    (const char* cmd, int (*f)(double,double));
void tinycli_register_dii   (const char* cmd, int (*f)(double,int,int));
void tinycli_register_diii  (const char* cmd, int (*f)(double,int,int,int));
void tinycli_register_diiii (const char* cmd, int (*f)(double,int,int,int,int));

#define tinycli_register(cmd, func) _Generic((func),          \
    int(*)(void):                   tinycli_register_v,       \
    int(*)(int):                    tinycli_register_i,       \
    int(*)(double):                 tinycli_register_d,       \
    int(*)(int,int):                tinycli_register_ii,      \
    int(*)(int,double):             tinycli_register_id,      \
    int(*)(double,int):             tinycli_register_di,      \
    int(*)(double,double):          tinycli_register_dd,      \
    int(*)(double,int,int):         tinycli_register_dii,     \
    int(*)(double,int,int,int):     tinycli_register_diii,    \
    int(*)(double,int,int,int,int): tinycli_register_diiii) (cmd, func)

#endif // __TINYCLI_H__
