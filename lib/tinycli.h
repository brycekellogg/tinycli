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
#ifndef __TINYCLI_H__
#define __TINYCLI_H__

#define TINYCLI_MAXARGC    10
#define TINYCLI_MAXBUFFER  100

#ifndef TINYCLI_ENTER
#define TINYCLI_ENTER  '\n'
#endif

#ifndef TINYCLI_SKIPCHARS
#define TINYCLI_SKIPCHARS  "\r\t"
#endif

#ifndef TINYCLI_TOKDELIM
#define TINYCLI_TOKDELIM  " "
#endif

#define TINYCLI_ERROR_NOCMD     -1
#define TINYCLI_ERROR_NUMARGS   -2

extern int tinycli_result;

#ifdef __cplusplus
extern "C" {
#endif

void tinycli_putsn(char* s, int n);
void tinycli_putc(char c);

#ifdef __cplusplus
}
#endif

#endif /* __TINYCLI_H__ */
