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
    {   .testname = "No History Up Arrow",
        .inputStr = "^^^\r\n",
        .expectedEchoStr = "\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 0,
        .expectedError = TINYCLI_ERROR_NOCALL,
    },
    {   .testname = "No History Down Arrow",
        .inputStr = "|||\r\n",
        .expectedEchoStr = "\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 0,
        .expectedError = TINYCLI_ERROR_NOCALL,
    },
    {   .testname = "No History Up + Down Arrow",
        .inputStr = "^^^|||\r\n",
        .expectedEchoStr = "\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 0,
        .expectedError = TINYCLI_ERROR_NOCALL,
    },
    {   .testname = "No History, Buffer Only, Up Arrow",
        .inputStr = "test^^^\r\n",
        .expectedEchoStr = "test\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 0,
        .expectedError = TINYCLI_ERROR_NOCMD,
    },
    {   .testname = "No History, Buffer Only, Down Arrow",
        .inputStr = "test|||\r\n",
        .expectedEchoStr = "test\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 0,
        .expectedError = TINYCLI_ERROR_NOCMD,
    },
    {   .testname = "No History, Buffer Only, Up + Down Arrow",
        .inputStr = "test^^^|||\r\n",
        .expectedEchoStr = "test\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 0,
        .expectedError = TINYCLI_ERROR_NOCMD,
    },
    {   .testname = "History, Up Arrow",
        .inputStr = "h0\r\nh1\r\n^^\r\n",
        .expectedEchoStr = "h0\r\nh1\r\nh1<<  <<h0\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },
    {   .testname = "History, Down Arrow",
        .inputStr = "h0\r\nh1\r\n||\r\n",
        .expectedEchoStr = "h0\r\nh1\r\n\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 2,
        .expectedError = TINYCLI_ERROR_NOCALL,
    },
    {   .testname = "History, Up + Down Arrow",
        .inputStr = "h0\r\nh1\r\n^^|\r\n",
        .expectedEchoStr = "h0\r\nh1\r\nh1<<  <<h0<<  <<h1\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 2,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },
    {   .testname = "History + Buffer, Up + Down Arrow",
        .inputStr = "h0\r\nh1\r\ntest^^||\r\n",
        .expectedEchoStr = "h0\r\nh1\r\ntest<<<<    <<<<h1<<  <<h0<<  <<h1<<  <<test\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 2,  // last command was h1
        .expectedError = TINYCLI_ERROR_NOCMD,
    },
    {   .testname = "Max History",  // set to 4 + buffer in tests
        .inputStr = "h0\r\nh1\r\nh2\r\nh3\r\nh4\r\nh5\r\n^^^^^^^^^^\r\n",
        .expectedEchoStr = "h0\r\nh1\r\nh2\r\nh3\r\nh4\r\nh5\r\nh5<<  <<h4<<  <<h3<<  <<h2\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 3,  // last command was h2
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },
    {   .testname = "Edit History",
        .inputStr = "h0something\r\ntest\r\n^^\b\b\b\b\b\b\b\b\b\r\n",
        .expectedEchoStr = "h0something\r\ntest\r\ntest<<<<    <<<<h0something< << << << << << << << << <\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1,  // last command was h0
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },
    {   .testname = "Edit History + Switching",
        .inputStr = "testA\r\ntestB\r\n^^\bC|^\r\n",
        .expectedEchoStr = "testA\r\ntestB\r\ntestB<<<<<     <<<<<testA< <C<<<<<     <<<<<testB<<<<<     <<<<<testC\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 0,
        .expectedError = TINYCLI_ERROR_NOCMD,
    },
    {   .testname = "Edit History + Edit Buffer",
        .inputStr = "testA\r\ntestB\r\nsomething^\bC|\b\bff^|\r\n",
        .expectedEchoStr = "testA\r\ntestB\r\nsomething<<<<<<<<<         <<<<<<<<<testB< <C<<<<<     <<<<<something< << <ff<<<<<<<<<         <<<<<<<<<testC<<<<<     <<<<<somethiff\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 0,
        .expectedError = TINYCLI_ERROR_NOCMD,
    },
    {   .testname = "Edit Multi History",
        .inputStr = "testA\r\ntestB\r\n^\bC^\bD|^||\r\n",
        .expectedEchoStr = "testA\r\ntestB\r\ntestB< <C<<<<<     <<<<<testA< <D<<<<<     <<<<<testC<<<<<     <<<<<testD<<<<<     <<<<<testC<<<<<     <<<<<\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 0,
        .expectedError = TINYCLI_ERROR_NOCALL,
    },
    {   .testname = "No Cmd History",
        .inputStr = "h0\r\n\r\n^\r\n",
        .expectedEchoStr = "h0\r\n\r\nh0\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 1,
        .expectedError = TINYCLI_ERROR_SUCCESS,
    },
    {   .testname = "History With Args",
        .inputStr = "h0 1\r\nh1 2\r\n^^\r\n",
        .expectedEchoStr = "h0 1\r\nh1 2\r\nh1 2<<<<    <<<<h0 1\r\n",
        .expectedArgsInt = {0},
        .expectedArgsStr = {""},
        .expectedArgsDouble = {0},
        .expectedResult = 0,
        .expectedError = TINYCLI_ERROR_NUMARGS,
    },
};

