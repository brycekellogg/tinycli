/*  _______ _____ _   ___     _______ _      _____
 * |__   __|_   _| \ | \ \   / / ____| |    |_   _|
 *    | |    | | |  \| |\ \_/ / |    | |      | |
 *    | |    | | | . ` | \   /| |    | |      | |
 *    | |   _| |_| |\  |  | | | |____| |____ _| |_
 *    |_|  |_____|_| \_|  |_|  \_____|______|_____|
 *
 * Author: Bryce Kellogg (bryce@kellogg.org)
 * Copyright: 2019 Bryce Kellogg
 * License: BSD 3-Clause
 */
#include "tinycli.h"

extern int    argsInt[TINYCLI_MAXARGS];
extern char   argsStr[TINYCLI_MAXARGS][TINYCLI_MAXBUFFER];
extern double argsDouble[TINYCLI_MAXARGS];

int f_v(void) {
    return 1;
}

int f_i(int arg0) {
    argsInt[0] = arg0;
    return 2;
}

int f_d(double arg0) {
    argsDouble[0] = arg0;
    return 3;
}

int f_ii(int arg0, int arg1) {
    argsInt[0] = arg0;
    argsInt[1] = arg1;
    return 4;
}

int f_id(int arg0, double arg1) {
    argsInt[0] = arg0;
    argsDouble[1] = arg1;
    return 5;
}

int f_di(double arg0, int arg1) {
    argsDouble[0] = arg0;
    argsInt[1] = arg1;
    return 6;
}

int f_dd(double arg0, double arg1) {
    argsDouble[0] = arg0;
    argsDouble[1] = arg1;
    return 7;
}

int f_s(char* arg0) {
    strcpy(argsStr[0], arg0);
    return 8;
}

int f_ll(long long arg0) {
    return 0;
}

int f_iiiiiiiiii(int arg0, int arg1, int arg2, int arg3, int arg4,
                 int arg5, int arg6, int arg7, int arg8, int arg9) {
    argsInt[0] = arg0;
    argsInt[1] = arg1;
    argsInt[2] = arg2;
    argsInt[3] = arg3;
    argsInt[4] = arg4;
    argsInt[5] = arg5;
    argsInt[6] = arg6;
    argsInt[7] = arg7;
    argsInt[8] = arg8;
    argsInt[9] = arg9;
    return 0;
}

int f_iiiiiiiiiii(int arg0, int arg1, int arg2, int arg3, int arg4,
                  int arg5, int arg6, int arg7, int arg8, int arg9, int arg10) {
    argsInt[0] = arg0;
    argsInt[1] = arg1;
    argsInt[2] = arg2;
    argsInt[3] = arg3;
    argsInt[4] = arg4;
    argsInt[5] = arg5;
    argsInt[6] = arg6;
    argsInt[7] = arg7;
    argsInt[8] = arg8;
    argsInt[9] = arg9;
    return 0;
}

int f_h0(void) {
    return 1;
}
int f_h1(void) {
    return 2;
}
int f_h2(void) {
    return 3;
}

int f_im0(void) {
    return 1;
}

int f_im1(void) {
    return 2;
}

