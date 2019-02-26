#ifndef  __TINYCLI_CONFIG_H__
#define __TINYCLI_CONFIG_H__

#define TINYCLI_MAXCMDS    14
#define TINYCLI_MAXARGC    4
#define TINYCLI_MAXBUFFER  100

/* Check that MAX_ARGC is at least the minimum
 * values required for functionality.  */
#if (TINYCLI_MAXARGC < 1)
    #error "MAX_ARGC must be at least 1"
#endif

/* Check that MAXARGC isn't too big  */
#if (TINYCLI_MAXARGC > 4)
    #error "MAX_ARGC too big"
#endif


/* The data types we support as arguments to a command function.
 * All functions that get registered must only take parameters
 * that consist of a combination of these data types. The last
 * letter of the macro identifier corresponds to the type argument
 * in the TINYCLI_DEFINE() function calls in the tinycli-funs.h header.
 * To add a new data type to this list, just add another define with
 * it's own unique letter for use in TINYCLI_DEFINE(). */
#define TINYCLI_ARGTYPE_I   int
#define TINYCLI_ARGTYPE_D   double


/* Helper macros that expand to the data types of the parameters
 * that a function takes. For example: void or int,double,int.
 * These are used when casting a stored function pointer to the
 * correct function type when calling as well as in the Generic
 * convenience function. This is one of the macros that determines
 * the maximum number of parameters we support. Extend this to
 * support a larger number of parameters.  */
#define TINYCLI_ARGTYPE_0()             void
#define TINYCLI_ARGTYPE_1(t0)           TINYCLI_ARGTYPE_##t0
#define TINYCLI_ARGTYPE_2(t0,t1)        TINYCLI_ARGTYPE_##t0,TINYCLI_ARGTYPE_##t1
#define TINYCLI_ARGTYPE_3(t0,t1,t2)     TINYCLI_ARGTYPE_##t0,TINYCLI_ARGTYPE_##t1,TINYCLI_ARGTYPE_##t2
#define TINYCLI_ARGTYPE_4(t0,t1,t2,t3)  TINYCLI_ARGTYPE_##t0,TINYCLI_ARGTYPE_##t1,TINYCLI_ARGTYPE_##t2,TINYCLI_ARGTYPE_##t3
#define TINYCLI_ARGTYPE_N(n, ...)       TINYCLI_ARGTYPE_##n(__VA_ARGS__)


/* Helper macros that expand to the conversion functions used to
 * pass arguments into functions at call time. For example:
 * tinycli_stoI(argv[1],tinycli_stoD(argv[2]).
 * These are used to convert the strings from argv into the correct
 * data type when passing arguments to the stored function pointer.
 * This is one of the macros that determines the maximum number of
 * parameters we support. Extend this to support a larger number
 * of parameters.  */
#define TINYCLI_ARGS_0()
#define TINYCLI_ARGS_1(t0)           tinycli_sto##t0(argv[1])
#define TINYCLI_ARGS_2(t0,t1)        tinycli_sto##t0(argv[1]), tinycli_sto##t1(argv[2])
#define TINYCLI_ARGS_3(t0,t1,t2)     tinycli_sto##t0(argv[1]), tinycli_sto##t1(argv[2]), tinycli_sto##t2(argv[3])
#define TINYCLI_ARGS_4(t0,t1,t2,t3)  tinycli_sto##t0(argv[1]), tinycli_sto##t1(argv[2]), tinycli_sto##t2(argv[3]), tinycli_sto##t3(argv[4])
#define TINYCLI_ARGS_N(n, ...)       TINYCLI_ARGS_##n(__VA_ARGS__)


/* Helper macros that expand to the name of a supported
 * function signature based on a list of parameter types.
 * This is one of the macros that determines the maximum
 * number of parameters we support. Extend this to support
 * a larger number of parameters.  */
#define TINYCLI_SIG_0()            TINYCLI_SIG_V
#define TINYCLI_SIG_1(t0)          TINYCLI_SIG_##t0
#define TINYCLI_SIG_2(t0,t1)       TINYCLI_SIG_##t0##t1
#define TINYCLI_SIG_3(t0,t1,t2)    TINYCLI_SIG_##t0##t1##t2
#define TINYCLI_SIG_4(t0,t1,t2,t3) TINYCLI_SIG_##t0##t1##t2##t3
#define TINYCLI_SIG_N(n, ...)      TINYCLI_SIG_##n(__VA_ARGS__)



/* Enum of the supported signatures  */
#define TINYCLI_DEFINE(n,...) TINYCLI_SIG_N(n,__VA_ARGS__),
enum {
#include "tinycli-funs.h"
};
#undef TINYCLI_DEFINE




#endif // __TINYCLI_CONFIG_H__
