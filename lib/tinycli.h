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
 *
 */
#ifndef _TINYCLI_H_
#define _TINYCLI_H_


//#define TINYCLI_ENABLE_ECHO
//#define TINYCLI_ENABLE_EDITING
//#define TINYCLI_ENABLE_HISTORY


/* Configure the maximum number of arguments supported. This controls
 * the size of the argument buffer, and any inputs beyond the
 * supported number of arguments are completely ignored. Reducing
 * the size of this will have a minimal impact on required resources. */
#ifndef TINYCLI_MAXARGS
#define TINYCLI_MAXARGS  10
#endif


/* Configure the maximum size of an entered command. This controls
 * the size of the command buffer. All characters entered beyond
 * this limit will be ignored. Reducing this number will have a
 * significant impact on the static memory footprint of tinycli.  */
#ifndef TINYCLI_MAXBUFFER
#define TINYCLI_MAXBUFFER  100
#endif


/* Configure the character that signifies the end of a command.
 * In most systems this will be either a carriage return or a
 * newline. If your system sends both a carriage return and a
 * newline, set one here and add the other to TINYCLI_SKIPCHARS.  */
#ifndef TINYCLI_ENTER
#define TINYCLI_ENTER  '\r'
#endif


/* Select which characters to skip. Characters enumerated in this
 * string will not be saved in the buffer, contribute to command
 * interpretation, or be echod back to the user. */
#ifndef TINYCLI_SKIPCHARS
#define TINYCLI_SKIPCHARS  "\n\t"
#endif


/* Configure which character is used to deliminate arguments.
 * This is the character that occurs between arguments to a command
 * and will almost always be a space. A different character would be
 * useful if a string input requires spaces. This is because tinycli
 * does not respect quoting of parameters, and splits based on this
 * delimiter no matter what.  */
#ifndef TINYCLI_TOKDELIM
#define TINYCLI_TOKDELIM  " "
#endif


/* Configure the character that signifies a backspace.
 * Specifically, receiving this character will delete
 * the entry in the buffer one space to the left of
 * the cursor. This is generally mapped to DEL, but can
 * be reconfigured as needed for different terminals.  */
#ifndef TINYCLI_BACKSPACE
#define TINYCLI_BACKSPACE '\x7f'
#endif


/**
 *
 **/
#ifdef TINYCLI_ENABLE_ECHO
#define tinycli_echoc(c)     putchar(c)
#define tinycli_echos(s)     fputs(s, stdout)
#define tinycli_echosn(s, n) fwrite(s, 1, n, stdout)
#else
#define tinycli_echoc(c)
#define tinycli_echos(s)
#define tinycli_echosn(s, n)
#endif

/********************************************
 * Arrow keys, used for editing and history *
 ********************************************/


#ifndef TINYCLI_ESCAPECHARS
#define TINYCLI_ESCAPECHARS  "\x1B["
#endif

#ifndef TINYCLI_LEFTARROW
#define TINYCLI_LEFTARROW  'D'
#endif

#ifndef TINYCLI_UPARROW
#define TINYCLI_UPARROW  'A'
#endif

#ifndef TINYCLI_RIGHTARROW
#define TINYCLI_RIGHTARROW  'C'
#endif

#ifndef TINYCLI_DOWNARROW
#define TINYCLI_DOWNARROW  'B'
#endif

#ifndef TINYCLI_CURSORFORWARD
#define TINYCLI_CURSORFORWARD   "\033[1C"
#endif

#ifndef TINYCLI_CURSORBACKWARD
#define TINYCLI_CURSORBACKWARD  "\033[1D"
#endif

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
