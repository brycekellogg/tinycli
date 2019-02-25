#include <assert.h>
#include <stdio.h>
#include "tinycli.h"

int    check_i0;
int    check_i1;
double check_d0;
double check_d1;

int f_v(void) {
    check_i0 = 0;
    return 1;
}

int f_i(int arg0) {
    check_i0 = arg0;
    return 2;
}

int f_d(double arg0) {
    check_d0 = arg0;
    return 3;
}

int f_ii(int arg0, int arg1) {
    check_i0 = arg0;
    check_i1 = arg1;
    return 4;
}

int f_id(int arg0, double arg1) {
    check_i0 = arg0;
    check_d1 = arg1;
    return 5;
}

int f_di(double arg0, int arg1) {
    check_d0 = arg0;
    check_i1 = arg1;
    return 6;
}

int f_dd(int arg0, int arg1) {
    check_d0 = arg0;
    check_d1 = arg1;
    return 7;
}


int main() {
    int res;

    // Register functions
    tinycli_register("v",  f_v);
    tinycli_register("i",  f_i);
    tinycli_register("d",  f_d);
    tinycli_register("ii", f_ii);
    tinycli_register("id", f_id);
    tinycli_register("di", f_di);
    tinycli_register("dd", f_dd);

    // Test void function
    check_i0 = -1;            // init check variables
    check_i1 = -1;
    check_d0 = -1;
    check_d1 = -1;
    tinycli_puts("v");        // write command string
    res = tinycli_process();  // process and call function
    assert(check_i0 == 0);    // test check variables
    assert(check_i1 == -1);
    assert(check_d0 == -1);
    assert(check_d1 == -1);
    assert(res == 1);         // test return value


    // Test int function
    check_i0 = -1;            // init check variables
    check_i1 = -1;
    check_d0 = -1;
    check_d1 = -1;
    tinycli_puts("i 13");     // write command string
    res = tinycli_process();  // process and call function
    assert(check_i0 == 13);   // test check variables
    assert(check_i1 == -1);
    assert(check_d0 == -1);
    assert(check_d1 == -1);
    assert(res == 2);         // test return value
   

    // Test int function (hex)
    check_i0 = -1;            // init check variables
    check_i1 = -1;
    check_d0 = -1;
    check_d1 = -1;
    tinycli_puts("i 0x13");   // write command string
    res = tinycli_process();  // process and call function
    assert(check_i0 == 0x13); // test check variables
    assert(check_i1 == -1);
    assert(check_d0 == -1);
    assert(check_d1 == -1);
    assert(res == 2);         // test return value
   

    // Test double function
    check_i0 = -1;            // init check variables
    check_i1 = -1;
    check_d0 = -1;
    check_d1 = -1;
    tinycli_puts("d 1.3");    // write command string
    res = tinycli_process();  // process and call function
    assert(check_i0 == -1);   // test check variables
    assert(check_i1 == -1);
    assert(check_d0 == 1.3);
    assert(check_d1 == -1);
    assert(res == 3);         // test return value
   

    // Test int,int function
    check_i0 = -1;            // init check variables
    check_i1 = -1;
    check_d0 = -1;
    check_d1 = -1;
    tinycli_puts("ii 12 -5"); // write command string
    res = tinycli_process();  // process and call function
    assert(check_i0 == 12);   // test check variables
    assert(check_i1 == -5);
    assert(check_d0 == -1);
    assert(check_d1 == -1);
    assert(res == 4);         // test return value

    
    // Test int,double function
    check_i0 = -1;            // init check variables
    check_i1 = -1;
    check_d0 = -1;
    check_d1 = -1;
    tinycli_puts("id 12 -0.123");
    res = tinycli_process();
    assert(check_i0 == 12);   // test check variables
    assert(check_i1 == -1);
    assert(check_d0 == -1);
    assert(check_d1 == -0.123);
    assert(res == 5);         // test return value

    // Test double,int function
    check_i0 = -1;            // init check variable
    check_i1 = -1;
    check_d0 = -1;
    check_d1 = -1;
    tinycli_puts("di 123.0 12");
    res = tinycli_process();
    assert(check_i0 == -1);   // test check variables
    assert(check_i1 == 12);
    assert(check_d0 == 123.0);
    assert(check_d1 == -1);
    assert(res == 6);         // test return value

    // Test double,double function
    check_i0 = -1;            // init check variable
    check_i1 = -1;
    check_d0 = -1;
    check_d1 = -1;
    tinycli_puts("dd 123.0 12");
    res = tinycli_process();
    assert(check_i0 == -1);   // test check variables
    assert(check_i1 == -1);
    assert(check_d0 == 123.0);
    assert(check_d1 == 12.0);
    assert(res == 7);         // test return value
    
    
    // Read in lines
    //for(;;) {
        //char c = getchar();
        //tinycli_putc(c);
        //tinycli_process();
    //}




    return 0;
}
