

#define TINYCLI_MAXCMDS    14
#define TINYCLI_MAXARGC    14
#define TINYCLI_MAXBUFFER  100


/* Check that MAX_ARGC is at least the minimum
 * values required for functionality.  */
#if (TINYCLI_MAXARGC < 1)
    #error "MAX_ARGC must be at least 1"
#endif









#ifdef TINYCLI_FUN_V
    //TINYCLI_DEFINE_TYPE(V)
#endif





