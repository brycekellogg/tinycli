#ifndef __TINYCLI_CONFIG_H__
#define __TINYCLI_CONFIG_H__

#define tinycli_params_v        void
#define tinycli_params_i        int
#define tinycli_params_d        double
#define tinycli_params_ii       int,int
#define tinycli_params_id       int,double
#define tinycli_params_di       double,int
#define tinycli_params_dd       double,double
#define tinycli_params_dii      double,int,int
#define tinycli_params_diii     double,int,int,int
#define tinycli_params_diiii    double,int,int,int,int
#define tinycli_params_diiiii   double,int,int,int,int,int

#define tinycli_args_v
#define tinycli_args_i          tinycli_stoi(argv[1])
#define tinycli_args_d          tinycli_stod(argv[1])
#define tinycli_args_ii         tinycli_args_i,    tinycli_stoi(argv[2])
#define tinycli_args_id         tinycli_args_i,    tinycli_stod(argv[2])
#define tinycli_args_di         tinycli_args_d,    tinycli_stoi(argv[2])
#define tinycli_args_dd         tinycli_args_d,    tinycli_stod(argv[2])
#define tinycli_args_dii        tinycli_args_di,   tinycli_stoi(argv[3])
#define tinycli_args_diii       tinycli_args_dii,  tinycli_stoi(argv[4])
#define tinycli_args_diiii      tinycli_args_diii, tinycli_stoi(argv[5])
#define tinycli_args_diiiii     tinycli_args_diiii,tinycli_stoi(argv[6])

#define tinycli_nargs_v      0
#define tinycli_nargs_i      1
#define tinycli_nargs_d      1
#define tinycli_nargs_ii     2
#define tinycli_nargs_id     2
#define tinycli_nargs_di     2
#define tinycli_nargs_dd     2
#define tinycli_nargs_dii    3
#define tinycli_nargs_diii   4
#define tinycli_nargs_diiii  5
#define tinycli_nargs_diiiii 6

#define tinycli_register(cmd, func) _Generic((func),         \
    int(*)(tinycli_params_v):      tinycli_register_v,       \
    int(*)(tinycli_params_i):      tinycli_register_i,       \
    int(*)(tinycli_params_d):      tinycli_register_d,       \
    int(*)(tinycli_params_ii):     tinycli_register_ii,      \
    int(*)(tinycli_params_id):     tinycli_register_id,      \
    int(*)(tinycli_params_di):     tinycli_register_di,      \
    int(*)(tinycli_params_dd):     tinycli_register_dd,      \
    int(*)(tinycli_params_dii):    tinycli_register_dii,     \
    int(*)(tinycli_params_diii):   tinycli_register_diii,    \
    int(*)(tinycli_params_diiii):  tinycli_register_diiii,   \
    int(*)(tinycli_params_diiiii): tinycli_register_diiiii,  \
    default: NULL) (cmd, func)

#endif // __TINYCLI_CONFIG_H__
