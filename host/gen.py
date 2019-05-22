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

sigs = [
        "v",
        "ii",
        "id",
        "di",
        "dd",
        "dii",
        "diii",
        "diiii",
        "diiiii",
        "iiddididiidiididi"
        ]

paramsubs = {"v": "void", "i": "int", "d": "double"}
argsubs = {"v": "", "i": "tinycli_stoi(argv[])", "d": "tinycli_stod(argv[])"}


def getdefines(s, width):
    i = 0
    # params
    params = ",".join(s)
    regexp = re.compile('|'.join(paramsubs.keys()))
    params = regexp.sub(lambda match: paramsubs[match.group(0)], params)
    params = f"#define tinycli_params_{s} {params:{width}}"

    # args
    if s == 'v':
        args2 = ""
    else:
        args = ",".join(s)
        regexp = re.compile('|'.join(argsubs.keys()))
        args = regexp.sub(lambda match: argsubs[match.group(0)], args)
        i = 0
        args2 = ''
        for c in args:
            if c == '[':
                args2 += '[' + str(i)
                i += 1
            else:
                args2 += c

    args = f"#define tinycli_args_{s} {args2:{width}}"

    # nargs
    nargs = len(s) if s != "v" else 0
    nargs = f"#define tinycli_nargs_{s} {nargs}"

    return (params, args, nargs)


paramsList = []
argsList   = []
nargsList  = []
for s in sigs:
    params, args, nargs = getdefines(s, 20)
    paramsList.append(params)
    argsList.append(args)
    nargsList.append(nargs)

for s in paramsList:
    print(s)
for s in argsList:
    print(s)
for s in nargsList:
    print(s)
