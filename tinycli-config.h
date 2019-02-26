#ifndef  __TINYCLI_CONFIG_H__
#define __TINYCLI_CONFIG_H__

/*
 *
 */
#define TINYCLI_DEFINE(t) TINYCLI_SIG_##t,
enum {
#include "tinycli-funs.h"
};
#undef TINYCLI_DEFINE


#define TINYCLI_ARGTYPE_    void
#define TINYCLI_ARGTYPE_I   int
#define TINYCLI_ARGTYPE_D   double
#define TINYCLI_ARGTYPE_II  int,int
#define TINYCLI_ARGTYPE_ID  int,double
#define TINYCLI_ARGTYPE_DI  double,int
#define TINYCLI_ARGTYPE_DD  double,double

#define TINYCLI_ARGS(t, i) tinycli_sto##t(argv[i])

#define TINYCLI_ARGS_
#define TINYCLI_ARGS_I   TINYCLI_ARGS(I, 1)
#define TINYCLI_ARGS_D   TINYCLI_ARGS(D, 1)
#define TINYCLI_ARGS_II  TINYCLI_ARGS(I, 1),TINYCLI_ARGS(I, 2)
#define TINYCLI_ARGS_ID  TINYCLI_ARGS(I, 1),TINYCLI_ARGS(D, 2)
#define TINYCLI_ARGS_DI  TINYCLI_ARGS(D, 1),TINYCLI_ARGS(I, 2)
#define TINYCLI_ARGS_DD  TINYCLI_ARGS(D, 1),TINYCLI_ARGS(D, 2)

#define TINYCLI_MAXCMDS    14
#define TINYCLI_MAXARGC    14
#define TINYCLI_MAXBUFFER  100


/* Check that MAX_ARGC is at least the minimum
 * values required for functionality.  */
#if (TINYCLI_MAXARGC < 1)
    #error "MAX_ARGC must be at least 1"
#endif

#endif // __TINYCLI_CONFIG_H__
