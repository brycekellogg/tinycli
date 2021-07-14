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
testcase tests[] = {
    {   .testname = "Void Function",
        .inputStr = "v\r",
        .expectedEchoStr = "v\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },

    {   .testname = "Int Function",
        .inputStr = "i 13\r",
        .expectedEchoStr = "i 13\r\n",
        .expectedArgsInt = {13},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 2,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },

    {   .testname = "Int Function (Hex)",
        .inputStr = "i 0x13\r",
        .expectedEchoStr = "i 0x13\r\n",
        .expectedArgsInt = {0x13},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 2,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },

    {   .testname = "Double Function",
        .inputStr = "d 1.3\r",
        .expectedEchoStr = "d 1.3\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {1.3},
        .expectedResult = 3,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },

    {   .testname = "Int,Int Function",
        .inputStr = "ii 12 -5\r",
        .expectedEchoStr = "ii 12 -5\r\n",
        .expectedArgsInt = {12, -5},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 4,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },

    {   .testname = "Int,Double Function",
        .inputStr = "id 12 -0.123\r",
        .expectedEchoStr = "id 12 -0.123\r\n",
        .expectedArgsInt = {12},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0, -0.123},
        .expectedResult = 5,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },

    {   .testname = "Double,Int Function",
        .inputStr = "di 123.0 12\r",
        .expectedEchoStr = "di 123.0 12\r\n",
        .expectedArgsInt = {0,12},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {123.0},
        .expectedResult = 6,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },

    {   .testname = "Double,Double Function",
        .inputStr = "dd 123.0 0.12\r",
        .expectedEchoStr = "dd 123.0 0.12\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {123.0, 0.12},
        .expectedResult = 7,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },

    {   .testname = "String Function",
        .inputStr = "s helloworld\r",
        .expectedEchoStr = "s helloworld\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {"helloworld"},
        .expectedArgsDouble = {0},
        .expectedResult = 8,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },

    {   .testname = "No Command",
        .inputStr = "\r",
        .expectedEchoStr = "\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = TINYCLI_RESULT_NONE,
        .expectedError = TINYCLI_ERROR_NOCALL,
    },

    {   .testname = "Max Args",
        .inputStr = "iiiiiiiiii 1 2 3 4 5 6 7 8 9 10\r",
        .expectedEchoStr = "iiiiiiiiii 1 2 3 4 5 6 7 8 9 10\r\n",
        .expectedArgsInt = {1,2,3,4,5,6,7,8,9,10},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 0,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },
};

