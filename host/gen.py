#  _______ _____ _   ___     _______ _      _____ 
# |__   __|_   _| \ | \ \   / / ____| |    |_   _|
#    | |    | | |  \| |\ \_/ / |    | |      | |  
#    | |    | | | . ` | \   /| |    | |      | |  
#    | |   _| |_| |\  |  | | | |____| |____ _| |_ 
#    |_|  |_____|_| \_|  |_|  \_____|______|_____|
#
# Author: Bryce Kellogg (brycekellogg+tinycli@brycekellogg.com)
# Copyright: 2019 Bryce Kellogg
# License: BSD 3-Clause
from pprint import pprint
import re
from itertools import product

paramsubs = {"v": "void", "i": "int", "d": "double"}
argsubs = {"v": "", "i": "tinycli_stoi(argv[])", "d": "tinycli_stod(argv[])"}


def getdefines(s, width):
    i = 0
    # params
    params = ",".join(s)
    regexp = re.compile('|'.join(paramsubs.keys()))
    params = regexp.sub(lambda match: paramsubs[match.group(0)], params)
    params = f"#define tinycli_params_{s}{' ':{width-len(s)}}{params}"

    # args
    if s == 'v':
        args2 = ""
    else:
        args = ",".join(s)
        regexp = re.compile('|'.join(argsubs.keys()))
        args = regexp.sub(lambda match: argsubs[match.group(0)], args)
        i = 1
        args2 = ''
        for c in args:
            if c == '[':
                args2 += '[' + str(i)
                i += 1
            else:
                args2 += c

    args = f"#define tinycli_args_{s}{' ':{width-len(s)}}{args2}"

    # nargs
    nargs = len(s) if s != "v" else 0
    nargs = f"#define tinycli_nargs_{s}{' ':{width-len(s)}}{nargs}"

    return (params, args, nargs)


# Build list of signatures to define
possibleSigs = ['i','d']
sigs = ['v']
for i in range(1,10):
    sigs += list(map("".join, product(possibleSigs, repeat=i)))


# Generate #define statements for each signature
paramsList = []
argsList   = []
nargsList  = []
maxlen = max(map(len,sigs))
for s in sigs:
    params, args, nargs = getdefines(s, width=maxlen+1)
    paramsList.append(params)
    argsList.append(args)
    nargsList.append(nargs)

print("""
/*  _______ _____ _   ___     _______ _      _____ 
 * |__   __|_   _| \ | \ \   / / ____| |    |_   _|
 *    | |    | | |  \| |\ \_/ / |    | |      | |  
 *    | |    | | | . ` | \   /| |    | |      | |  
 *    | |   _| |_| |\  |  | | | |____| |____ _| |_ 
 *    |_|  |_____|_| \_|  |_|  \_____|______|_____|
 *
 * Author: Bryce Kellogg (brycekellogg+tinycli@brycekellogg.com)
 * Copyright: 2019 Bryce Kellogg
 * License: BSD 3-Clause
 */
#ifndef __TINYCLI_CONFIG_H__
#define __TINYCLI_CONFIG_H__
""")

# Output #defines for redirection to a header file
for s in paramsList:
    print(s)
for s in argsList:
    print(s)
for s in nargsList:
    print(s)


print("\n#endif /* __TINYCLI_CONFIG_H__  */")
