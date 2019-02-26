#ifndef  __TINYCLI_CONFIG_H__
#define __TINYCLI_CONFIG_H__

#define TINYCLI_ARGTYPE_I   int
#define TINYCLI_ARGTYPE_D   double

#define TINYCLI_ARGTYPE_0()       void
#define TINYCLI_ARGTYPE_1(t0)     TINYCLI_ARGTYPE_##t0
#define TINYCLI_ARGTYPE_2(t0,t1)  TINYCLI_ARGTYPE_##t0,TINYCLI_ARGTYPE_##t1
#define TINYCLI_ARGTYPE_N(n, ...) TINYCLI_ARGTYPE_##n(__VA_ARGS__)


#define TINYCLI_ARGS_0()
#define TINYCLI_ARGS_1(t0)           tinycli_sto##t0(argv[1])
#define TINYCLI_ARGS_2(t0,t1)        tinycli_sto##t0(argv[1]), tinycli_sto##t1(argv[2])
#define TINYCLI_ARGS_3(t0,t1,t2)     tinycli_sto##t0(argv[1]), tinycli_sto##t1(argv[2]), tinycli_sto##t2(argv[3])
#define TINYCLI_ARGS_4(t0,t1,t2,t3)  tinycli_sto##t0(argv[1]), tinycli_sto##t1(argv[2]), tinycli_sto##t2(argv[3]), tinycli_sto##t3(argv[4])
#define TINYCLI_ARGS_N(n, ...) TINYCLI_ARGS_##n(__VA_ARGS__)

#define TINYCLI_SIG_0()            TINYCLI_SIG_V
#define TINYCLI_SIG_1(t0)          TINYCLI_SIG_##t0
#define TINYCLI_SIG_2(t0,t1)       TINYCLI_SIG_##t0##t1
#define TINYCLI_SIG_3(t0,t1,t2)    TINYCLI_SIG_##t0##t1##t2
#define TINYCLI_SIG_4(t0,t1,t2,t3) TINYCLI_SIG_##t0##t1##t2##t3
#define TINYCLI_SIG_N(n, ...) TINYCLI_SIG_##n(__VA_ARGS__)



/*
 *
 */
#define TINYCLI_DEFINE(n,...) TINYCLI_SIG_N(n,__VA_ARGS__),
enum {
#include "tinycli-funs.h"
};
#undef TINYCLI_DEFINE

#define TINYCLI_MAXCMDS    14
#define TINYCLI_MAXARGC    14
#define TINYCLI_MAXBUFFER  100


/* Check that MAX_ARGC is at least the minimum
 * values required for functionality.  */
#if (TINYCLI_MAXARGC < 1)
    #error "MAX_ARGC must be at least 1"
#endif

#endif // __TINYCLI_CONFIG_H__
