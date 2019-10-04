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
#ifndef _TINYCLI_H_
#define _TINYCLI_H_

#define TINYCLI_MAXARGC    10
#define TINYCLI_MAXBUFFER  100

#ifndef TINYCLI_ENTER
#define TINYCLI_ENTER  '\r'
#endif

#ifndef TINYCLI_SKIPCHARS
#define TINYCLI_SKIPCHARS  "\n\t"
#endif

#ifndef TINYCLI_TOKDELIM
#define TINYCLI_TOKDELIM  " "
#endif

/********************************************
 * Arrow keys, used for editing and history *
 ********************************************/
#define TINYCLI_LEFTARROW   "\x1B[D"
#define TINYCLI_UPARROW     "\x1B[A"
#define TINYCLI_RIGHTARROW  "\x1B[C"
#define TINYCLI_DOWNARROW   "\x1B[B"

/***************
 * Error Codes *
 ***************/
#define TINYCLI_ERROR_NOCMD     -1
#define TINYCLI_ERROR_NUMARGS   -2
#define TINYCLI_ERROR_NOCALL    -3

extern int tinycli_result;

#ifdef __cplusplus
extern "C" {
#endif

void tinycli_putsn(char* s, int n);
void tinycli_putc(char c);

#ifdef __cplusplus
}
#endif

#endif /* _TINYCLI_H_ */
