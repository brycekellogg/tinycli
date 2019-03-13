#ifndef __TINYCLI_H__
#define __TINYCLI_H__

#define TINYCLI_MAXARGC    10
#define TINYCLI_MAXBUFFER  100

#define TINYCLI_ERROR_NOCMD     -1
#define TINYCLI_ERROR_NUMARGS   -2
#define TINYCLI_ERROR_NOSIG     -3

extern int tinycli_result;

void tinycli_process(void);
void tinycli_putsn(char* s, int n);
void tinycli_putc(char c);

#endif // __TINYCLI_H__
