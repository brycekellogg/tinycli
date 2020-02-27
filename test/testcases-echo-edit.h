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
        .expectedResult = 1, },

    {   .testname = "Too Many Backspace",
        .inputStr = "ab\b\b\b\b\bv\r",
        .expectedEchoStr = "ab< << << << << <v\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1, },

    {   .testname = "Multiple Sequences of Backspaces",
        .inputStr = "abc\b\b123\b\b\b\bii 13 12\r",
        .expectedEchoStr = "abc< << <123< << << << <ii 13 12\r\n",
        .expectedArgsInt = {13, 12},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 4, },

    {   .testname = "Left Arrow & Backspace",
        .inputStr = "longfunction00me<<\b\bna\r",
        .expectedEchoStr = "longfunction00me<<<me <<<<me <<<nme<<ame<<\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1,  },

    {   .testname = "Arrows & Insert",
        .inputStr = "longfunctonnme<<<<<i>>>a\r",
        .expectedEchoStr = "longfunctonnme<<<<<ionnme<<<<<>>>ame<<\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1,  },

    {   .testname = "Too Many Left Arrow",
        .inputStr = "un<<<<f\r",
        .expectedEchoStr = "un<<<<fun<<\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1,  },

    {   .testname = "Too Many Right Arrow",
        .inputStr = "fu>>n\r",
        .expectedEchoStr = "fu>>n\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1,  },
};

