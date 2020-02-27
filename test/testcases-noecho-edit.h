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
        .expectedEchoStr = "",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1, },

    {   .testname = "Command Delete",
        .inputStr = "vabc<<<~~~\r",
        .expectedEchoStr = "",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1, },

    {   .testname = "Too Many Backspace",
        .inputStr = "ab\b\b\b\b\bv\r",
        .expectedEchoStr = "",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1, },

    {   .testname = "Too Many Delete",
        .inputStr = "vabc<<<~~~~~~~v\r",
        .expectedEchoStr = "",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1, },

    {   .testname = "Multiple Sequences of Backspaces",
        .inputStr = "abc\b\b123\b\b\b\bii 13 12\r",
        .expectedEchoStr = "",
        .expectedArgsInt = {13, 12},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 4, },

    {   .testname = "Left Arrow & Backspace",
        .inputStr = "longfunction00me<<\b\bna\r",
        .expectedEchoStr = "",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1,  },

    {   .testname = "Arrows & Insert",
        .inputStr = "longfunctonnme<<<<<i>>>a\r",
        .expectedEchoStr = "",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1,  },

    {   .testname = "Too Many Left Arrow",
        .inputStr = "un<<<<f\r",
        .expectedEchoStr = "",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1,  },

    {   .testname = "Too Many Right Arrow",
        .inputStr = "fu>>n\r",
        .expectedEchoStr = "",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1,  },

    {   .testname = "Right Arrow at End of Line",
        .inputStr = "fun>>>>\r",
        .expectedEchoStr = "",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1,  },

    {   .testname = "Right Arrow at End of Line w/ Backspace",
        .inputStr = "fun>>>>\bn\r",
        .expectedEchoStr = "",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1,  },
};

