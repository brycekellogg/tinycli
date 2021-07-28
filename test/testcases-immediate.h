/*  _______ _____ _   ___     _______ _      _____
 * |__   __|_   _| \ | \ \   / / ____| |    |_   _|
 *    | |    | | |  \| |\ \_/ / |    | |      | |
 *    | |    | | | . ` | \   /| |    | |      | |
 *    | |   _| |_| |\  |  | | | |____| |____ _| |_
 *    |_|  |_____|_| \_|  |_|  \_____|______|_____|
 *
 * Author: Bryce Kellogg (bryce@kellogg.org)
 * Copyright: 2021 Bryce Kellogg
 * License: BSD 3-Clause
 */
testcase tests[] = {
    {   .testname = "Single Immediate",
        .inputStr = "\xF0",
        .expectedEchoStr = "",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },
    {   .testname = "Immediate After Other Chars",
        .inputStr = "aabbccdd\xF0",
        .expectedEchoStr = "aabbccdd",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },
    {   .testname = "Consecutive Immediates",
        .inputStr = "\xF0\xF1",
        .expectedEchoStr = "",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 2,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },
};

