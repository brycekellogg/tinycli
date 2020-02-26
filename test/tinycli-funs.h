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
tinycli_register("v",  f_v,  v)
tinycli_register("i",  f_i,  i)
tinycli_register("d",  f_d,  d)
tinycli_register("ii", f_ii, i, i)
tinycli_register("id", f_id, i, d)
tinycli_register("di", f_di, d, i)
tinycli_register("dd", f_dd, d, d)
tinycli_register("s",  f_s,  s)
tinycli_register("iiiiiiiiii", f_iiiiiiiiii,  i, i, i, i, i, i, i, i, i, i)
tinycli_register("longfunctionname", f_v, v)
tinycli_register("fun", f_v, v)
