#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "tinycli.h"


typedef struct {
    char*  testname;
    char*  inputStr;
    char*  expectedEchoStr;
    int    expectedArgsInt[TINYCLI_MAXARGS];
    char   expectedArgsStr[TINYCLI_MAXARGS][TINYCLI_MAXBUFFER];
    double expectedArgsDouble[TINYCLI_MAXARGS];
    int    expectedResult;
} testcase;

int    argsInt[TINYCLI_MAXARGS];
char   argsStr[TINYCLI_MAXARGS][TINYCLI_MAXBUFFER];
double argsDouble[TINYCLI_MAXARGS];

#include "testcases.h"
#include "testfunctions.h"

void runTest(testcase t) {
    for (int i = 0; i < TINYCLI_MAXARGS; i++) {
        argsInt[i] = 0;
    }

    for (int i = 0; i < TINYCLI_MAXARGS; i++) {
        argsDouble[i] = 0;
    }

    for (int i = 0; i < TINYCLI_MAXARGS; i++) {
        argsStr[i][0] = '\0';
    }

    tinycli_putsn(t.inputStr, strlen(t.inputStr));   // write command string
   
    assert(tinycli_result == t.expectedResult);

    for (int i = 0; i < TINYCLI_MAXARGS; i++) {
        assert(argsInt[i] == t.expectedArgsInt[i]);
    }

    for (int i = 0; i < TINYCLI_MAXARGS; i++) {
        assert(argsDouble[i] == t.expectedArgsDouble[i]);
    }

    for (int i = 0; i < TINYCLI_MAXARGS; i++) {
        assert(0 == strcmp(argsStr[i], t.expectedArgsStr[i]));
    }
}


int main() {
    for (int i = 0; i < sizeof(tests)/sizeof(testcase); i++) {
        testcase t = tests[i];
        printf("Test: %s ... ", t.testname);
        runTest(t);
        printf("PASS\n");
    }
    return 0;
}
