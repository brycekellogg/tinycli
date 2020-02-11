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
#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "tinycli.h"
#include "testfunctions.h"


/* A test fixture for running a single test case, conatins all information
 * needed to run a test and verify its results. It has the following fields:
 *
 * - testname = the name of the test, used only for informational purposes
 * - inputStr = the command string that will be passed to tinycli
 * - expectedEchoStr = what we expect tinycli to echo (if anything)
 * - expectedArgsInt = what int arguments we expect tinycli to parse
 * - expectedArgsStr = what string arguments we expect tinycli to parse
 * - expectedArgsDouble = what double arguments we expect tinycli to parse
 * - expectedResult = the expected result or error code of the command
 *
 * The expectedArgs* arrays are used to set what values we expect tinycli
 * to parse from its input string. Each index of an array represents a
 * specific argument, and any unused indices or indices that are of
 * a different data type should be set to zero.  */
typedef struct {
    char*  testname;
    char*  inputStr;
    char*  expectedEchoStr;
    int    expectedArgsInt[TINYCLI_MAXARGS];
    char   expectedArgsStr[TINYCLI_MAXARGS][TINYCLI_MAXBUFFER];
    double expectedArgsDouble[TINYCLI_MAXARGS];
    int    expectedResult;
} testcase;


/* Get the test cases for the current test. These are defined in a separate
 * header file for each test that requires different #define features of
 * tinycli. We use a computed include here to allow setting the tests via
 * a compiler define.  */
#include TEST_HEADER


/* Data structures for saving testcase outputs. Each of these correspond
 * to an expected* in a given testcase. They are filled by the test functions
 * or echo functions based on the output of tinycli.  */
int    argsInt[TINYCLI_MAXARGS];
char   argsStr[TINYCLI_MAXARGS][TINYCLI_MAXBUFFER];
double argsDouble[TINYCLI_MAXARGS];
char   echoStr[TINYCLI_MAXBUFFER];
int    echoTop;


/* Stub echo functions that instead of echoing characters to the
 * terminal, save them to an array for comparison to expected values.  */
void test_echoc(char c) {
    echoStr[echoTop++] = c;
}
void test_echos(char* s) {
    strcpy(echoStr+echoTop,s);
    echoTop += strlen(s);
}
void test_echosn(char* s, int n) {
    strncpy(echoStr+echoTop, s, n);
    int len = strlen(s);
    echoTop += (len <= n) ? len : n;
}


/* Runs a single test case represented by the struct t. This involves:
 * 1) zero-ing out the argument and echo arrays
 * 2) passing the input string to tinycli
 * 3) comparing the argument & echo arrays with expected values
 */
void runTest(testcase t) {
    memset(argsInt,    0, TINYCLI_MAXARGS*sizeof(int));
    memset(argsDouble, 0, TINYCLI_MAXARGS*sizeof(double));
    memset(argsStr,    0, TINYCLI_MAXARGS*TINYCLI_MAXBUFFER*sizeof(char));
    memset(echoStr,    0, TINYCLI_MAXBUFFER*sizeof(char));
    echoTop = 0;

    tinycli_putsn(t.inputStr, strlen(t.inputStr));

    assert(tinycli_result == t.expectedResult);
    assert(0 == memcmp(argsInt, t.expectedArgsInt, TINYCLI_MAXARGS));
    assert(0 == memcmp(argsDouble, t.expectedArgsDouble, TINYCLI_MAXARGS));
    assert(0 == memcmp(argsStr, t.expectedArgsStr, TINYCLI_MAXARGS*TINYCLI_MAXBUFFER));
    assert(0 == strcmp(echoStr, t.expectedEchoStr));
}


/* Run all the test cases. */
int main() {
    for (int i = 0; i < sizeof(tests)/sizeof(testcase); i++) {
        testcase t = tests[i];
        printf("Test: %s ... ", t.testname);
        runTest(t);
        printf("PASS\n");
    }
    return 0;
}
