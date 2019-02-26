
#define TINYCLI_SIG_V    1
#define TINYCLI_SIG_I    2
#define TINYCLI_SIG_D    3
#define TINYCLI_SIG_II   4
#define TINYCLI_SIG_ID   5
#define TINYCLI_SIG_DI   6
#define TINYCLI_SIG_DD   7

#define TINYCLI_NUMARGS_V  0
#define TINYCLI_NUMARGS_I  1
#define TINYCLI_NUMARGS_D  1
#define TINYCLI_NUMARGS_II 2
#define TINYCLI_NUMARGS_ID 2
#define TINYCLI_NUMARGS_DI 2
#define TINYCLI_NUMARGS_DD 2

#define TINYCLI_ARGTYPE_V   void
#define TINYCLI_ARGTYPE_I   int
#define TINYCLI_ARGTYPE_D   double
#define TINYCLI_ARGTYPE_II  int,int
#define TINYCLI_ARGTYPE_ID  int,double
#define TINYCLI_ARGTYPE_DI  double,int
#define TINYCLI_ARGTYPE_DD  double,double

#define TINYCLI_ARGS_V
#define TINYCLI_ARGS_I   tinycli_stoi(argv[1])
#define TINYCLI_ARGS_D   tinycli_stod(argv[1])
#define TINYCLI_ARGS_II  tinycli_stoi(argv[1]), tinycli_stoi(argv[2])
#define TINYCLI_ARGS_ID  tinycli_stoi(argv[1]), tinycli_stod(argv[2])
#define TINYCLI_ARGS_DI  tinycli_stod(argv[1]), tinycli_stoi(argv[2])
#define TINYCLI_ARGS_DD  tinycli_stod(argv[1]), tinycli_stod(argv[2])

#define TINYCLI_MAXCMDS    14
#define TINYCLI_MAXARGC    14
#define TINYCLI_MAXBUFFER  100


/* Check that MAX_ARGC is at least the minimum
 * values required for functionality.  */
#if (TINYCLI_MAXARGC < 1)
    #error "MAX_ARGC must be at least 1"
#endif


