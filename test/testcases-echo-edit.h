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
    {   .testname = "Command Backspace",
        .inputStr = "abcde\b\b\b\b\bv\r",
        .expectedEchoStr = "abcde< << << << << <v\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },

    {   .testname = "Command Delete",
        .inputStr = "vabc<<<~~~\r",
        .expectedEchoStr = "vabc<<<bc <<<c << <\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },

    {   .testname = "Too Many Backspace",
        .inputStr = "ab\b\b\b\b\bv\r",
        .expectedEchoStr = "ab< << <v\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },

    {   .testname = "Too Many Delete",
        .inputStr = "vabc<<<~~~~~~~v\r",
        .expectedEchoStr = "vabc<<<bc <<<c << < <v\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },

    {   .testname = "Multiple Sequences of Backspaces",
        .inputStr = "abc\b\b123\b\b\b\bii 13 12\r",
        .expectedEchoStr = "abc< << <123< << << << <ii 13 12\r\n",
        .expectedArgsInt = {13, 12},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 4,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },

    {   .testname = "Left Arrow & Backspace",
        .inputStr = "longfunction00me<<\b\bna\r",
        .expectedEchoStr = "longfunction00me<<<me <<<<me <<<nme<<ame<<\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },

    {   .testname = "Arrows & Insert",
        .inputStr = "longfunctonnme<<<<<i>>>a\r",
        .expectedEchoStr = "longfunctonnme<<<<<ionnme<<<<<>>>ame<<\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },

    {   .testname = "Too Many Left Arrow",
        .inputStr = "un<<<<f\r",
        .expectedEchoStr = "un<<fun<<\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },

    {   .testname = "Too Many Right Arrow",
        .inputStr = "fu>>n\r",
        .expectedEchoStr = "fun\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },

    {   .testname = "Too Many Right Arrow w/ Backspace",
        .inputStr = "f?>>\bun\r",
        .expectedEchoStr = "f?< <un\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },

    {   .testname = "Too Many Right Arrow w/ Left Arrow",
        .inputStr = "fn>><u\r",
        .expectedEchoStr = "fn<un<\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },
};

