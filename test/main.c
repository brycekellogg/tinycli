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
char   echoStr[TINYCLI_MAXBUFFER];
int    echoTop;

#include TEST_HEADER
#include "testfunctions.h"

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


int main() {
    for (int i = 0; i < sizeof(tests)/sizeof(testcase); i++) {
        testcase t = tests[i];
        printf("Test: %s ... ", t.testname);
        runTest(t);
        printf("PASS\n");
    }
    return 0;
}
