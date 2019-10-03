
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

#define tinycli_params_v     void
#define tinycli_params_i     int
#define tinycli_params_d     double
#define tinycli_params_s     const char*
#define tinycli_params_l     long long
#define tinycli_params_ii    int,int
#define tinycli_params_id    int,double
#define tinycli_params_is    int,const char*
#define tinycli_params_il    int,long long
#define tinycli_params_di    double,int
#define tinycli_params_dd    double,double
#define tinycli_params_ds    double,const char*
#define tinycli_params_dl    double,long long
#define tinycli_params_si    const char*,int
#define tinycli_params_sd    const char*,double
#define tinycli_params_ss    const char*,const char*
#define tinycli_params_sl    const char*,long long
#define tinycli_params_li    long long,int
#define tinycli_params_ld    long long,double
#define tinycli_params_ls    long long,const char*
#define tinycli_params_ll    long long,long long
#define tinycli_params_iii   int,int,int
#define tinycli_params_iid   int,int,double
#define tinycli_params_iis   int,int,const char*
#define tinycli_params_iil   int,int,long long
#define tinycli_params_idi   int,double,int
#define tinycli_params_idd   int,double,double
#define tinycli_params_ids   int,double,const char*
#define tinycli_params_idl   int,double,long long
#define tinycli_params_isi   int,const char*,int
#define tinycli_params_isd   int,const char*,double
#define tinycli_params_iss   int,const char*,const char*
#define tinycli_params_isl   int,const char*,long long
#define tinycli_params_ili   int,long long,int
#define tinycli_params_ild   int,long long,double
#define tinycli_params_ils   int,long long,const char*
#define tinycli_params_ill   int,long long,long long
#define tinycli_params_dii   double,int,int
#define tinycli_params_did   double,int,double
#define tinycli_params_dis   double,int,const char*
#define tinycli_params_dil   double,int,long long
#define tinycli_params_ddi   double,double,int
#define tinycli_params_ddd   double,double,double
#define tinycli_params_dds   double,double,const char*
#define tinycli_params_ddl   double,double,long long
#define tinycli_params_dsi   double,const char*,int
#define tinycli_params_dsd   double,const char*,double
#define tinycli_params_dss   double,const char*,const char*
#define tinycli_params_dsl   double,const char*,long long
#define tinycli_params_dli   double,long long,int
#define tinycli_params_dld   double,long long,double
#define tinycli_params_dls   double,long long,const char*
#define tinycli_params_dll   double,long long,long long
#define tinycli_params_sii   const char*,int,int
#define tinycli_params_sid   const char*,int,double
#define tinycli_params_sis   const char*,int,const char*
#define tinycli_params_sil   const char*,int,long long
#define tinycli_params_sdi   const char*,double,int
#define tinycli_params_sdd   const char*,double,double
#define tinycli_params_sds   const char*,double,const char*
#define tinycli_params_sdl   const char*,double,long long
#define tinycli_params_ssi   const char*,const char*,int
#define tinycli_params_ssd   const char*,const char*,double
#define tinycli_params_sss   const char*,const char*,const char*
#define tinycli_params_ssl   const char*,const char*,long long
#define tinycli_params_sli   const char*,long long,int
#define tinycli_params_sld   const char*,long long,double
#define tinycli_params_sls   const char*,long long,const char*
#define tinycli_params_sll   const char*,long long,long long
#define tinycli_params_lii   long long,int,int
#define tinycli_params_lid   long long,int,double
#define tinycli_params_lis   long long,int,const char*
#define tinycli_params_lil   long long,int,long long
#define tinycli_params_ldi   long long,double,int
#define tinycli_params_ldd   long long,double,double
#define tinycli_params_lds   long long,double,const char*
#define tinycli_params_ldl   long long,double,long long
#define tinycli_params_lsi   long long,const char*,int
#define tinycli_params_lsd   long long,const char*,double
#define tinycli_params_lss   long long,const char*,const char*
#define tinycli_params_lsl   long long,const char*,long long
#define tinycli_params_lli   long long,long long,int
#define tinycli_params_lld   long long,long long,double
#define tinycli_params_lls   long long,long long,const char*
#define tinycli_params_lll   long long,long long,long long
#define tinycli_params_iiii  int,int,int,int
#define tinycli_params_iiid  int,int,int,double
#define tinycli_params_iiis  int,int,int,const char*
#define tinycli_params_iiil  int,int,int,long long
#define tinycli_params_iidi  int,int,double,int
#define tinycli_params_iidd  int,int,double,double
#define tinycli_params_iids  int,int,double,const char*
#define tinycli_params_iidl  int,int,double,long long
#define tinycli_params_iisi  int,int,const char*,int
#define tinycli_params_iisd  int,int,const char*,double
#define tinycli_params_iiss  int,int,const char*,const char*
#define tinycli_params_iisl  int,int,const char*,long long
#define tinycli_params_iili  int,int,long long,int
#define tinycli_params_iild  int,int,long long,double
#define tinycli_params_iils  int,int,long long,const char*
#define tinycli_params_iill  int,int,long long,long long
#define tinycli_params_idii  int,double,int,int
#define tinycli_params_idid  int,double,int,double
#define tinycli_params_idis  int,double,int,const char*
#define tinycli_params_idil  int,double,int,long long
#define tinycli_params_iddi  int,double,double,int
#define tinycli_params_iddd  int,double,double,double
#define tinycli_params_idds  int,double,double,const char*
#define tinycli_params_iddl  int,double,double,long long
#define tinycli_params_idsi  int,double,const char*,int
#define tinycli_params_idsd  int,double,const char*,double
#define tinycli_params_idss  int,double,const char*,const char*
#define tinycli_params_idsl  int,double,const char*,long long
#define tinycli_params_idli  int,double,long long,int
#define tinycli_params_idld  int,double,long long,double
#define tinycli_params_idls  int,double,long long,const char*
#define tinycli_params_idll  int,double,long long,long long
#define tinycli_params_isii  int,const char*,int,int
#define tinycli_params_isid  int,const char*,int,double
#define tinycli_params_isis  int,const char*,int,const char*
#define tinycli_params_isil  int,const char*,int,long long
#define tinycli_params_isdi  int,const char*,double,int
#define tinycli_params_isdd  int,const char*,double,double
#define tinycli_params_isds  int,const char*,double,const char*
#define tinycli_params_isdl  int,const char*,double,long long
#define tinycli_params_issi  int,const char*,const char*,int
#define tinycli_params_issd  int,const char*,const char*,double
#define tinycli_params_isss  int,const char*,const char*,const char*
#define tinycli_params_issl  int,const char*,const char*,long long
#define tinycli_params_isli  int,const char*,long long,int
#define tinycli_params_isld  int,const char*,long long,double
#define tinycli_params_isls  int,const char*,long long,const char*
#define tinycli_params_isll  int,const char*,long long,long long
#define tinycli_params_ilii  int,long long,int,int
#define tinycli_params_ilid  int,long long,int,double
#define tinycli_params_ilis  int,long long,int,const char*
#define tinycli_params_ilil  int,long long,int,long long
#define tinycli_params_ildi  int,long long,double,int
#define tinycli_params_ildd  int,long long,double,double
#define tinycli_params_ilds  int,long long,double,const char*
#define tinycli_params_ildl  int,long long,double,long long
#define tinycli_params_ilsi  int,long long,const char*,int
#define tinycli_params_ilsd  int,long long,const char*,double
#define tinycli_params_ilss  int,long long,const char*,const char*
#define tinycli_params_ilsl  int,long long,const char*,long long
#define tinycli_params_illi  int,long long,long long,int
#define tinycli_params_illd  int,long long,long long,double
#define tinycli_params_ills  int,long long,long long,const char*
#define tinycli_params_illl  int,long long,long long,long long
#define tinycli_params_diii  double,int,int,int
#define tinycli_params_diid  double,int,int,double
#define tinycli_params_diis  double,int,int,const char*
#define tinycli_params_diil  double,int,int,long long
#define tinycli_params_didi  double,int,double,int
#define tinycli_params_didd  double,int,double,double
#define tinycli_params_dids  double,int,double,const char*
#define tinycli_params_didl  double,int,double,long long
#define tinycli_params_disi  double,int,const char*,int
#define tinycli_params_disd  double,int,const char*,double
#define tinycli_params_diss  double,int,const char*,const char*
#define tinycli_params_disl  double,int,const char*,long long
#define tinycli_params_dili  double,int,long long,int
#define tinycli_params_dild  double,int,long long,double
#define tinycli_params_dils  double,int,long long,const char*
#define tinycli_params_dill  double,int,long long,long long
#define tinycli_params_ddii  double,double,int,int
#define tinycli_params_ddid  double,double,int,double
#define tinycli_params_ddis  double,double,int,const char*
#define tinycli_params_ddil  double,double,int,long long
#define tinycli_params_dddi  double,double,double,int
#define tinycli_params_dddd  double,double,double,double
#define tinycli_params_ddds  double,double,double,const char*
#define tinycli_params_dddl  double,double,double,long long
#define tinycli_params_ddsi  double,double,const char*,int
#define tinycli_params_ddsd  double,double,const char*,double
#define tinycli_params_ddss  double,double,const char*,const char*
#define tinycli_params_ddsl  double,double,const char*,long long
#define tinycli_params_ddli  double,double,long long,int
#define tinycli_params_ddld  double,double,long long,double
#define tinycli_params_ddls  double,double,long long,const char*
#define tinycli_params_ddll  double,double,long long,long long
#define tinycli_params_dsii  double,const char*,int,int
#define tinycli_params_dsid  double,const char*,int,double
#define tinycli_params_dsis  double,const char*,int,const char*
#define tinycli_params_dsil  double,const char*,int,long long
#define tinycli_params_dsdi  double,const char*,double,int
#define tinycli_params_dsdd  double,const char*,double,double
#define tinycli_params_dsds  double,const char*,double,const char*
#define tinycli_params_dsdl  double,const char*,double,long long
#define tinycli_params_dssi  double,const char*,const char*,int
#define tinycli_params_dssd  double,const char*,const char*,double
#define tinycli_params_dsss  double,const char*,const char*,const char*
#define tinycli_params_dssl  double,const char*,const char*,long long
#define tinycli_params_dsli  double,const char*,long long,int
#define tinycli_params_dsld  double,const char*,long long,double
#define tinycli_params_dsls  double,const char*,long long,const char*
#define tinycli_params_dsll  double,const char*,long long,long long
#define tinycli_params_dlii  double,long long,int,int
#define tinycli_params_dlid  double,long long,int,double
#define tinycli_params_dlis  double,long long,int,const char*
#define tinycli_params_dlil  double,long long,int,long long
#define tinycli_params_dldi  double,long long,double,int
#define tinycli_params_dldd  double,long long,double,double
#define tinycli_params_dlds  double,long long,double,const char*
#define tinycli_params_dldl  double,long long,double,long long
#define tinycli_params_dlsi  double,long long,const char*,int
#define tinycli_params_dlsd  double,long long,const char*,double
#define tinycli_params_dlss  double,long long,const char*,const char*
#define tinycli_params_dlsl  double,long long,const char*,long long
#define tinycli_params_dlli  double,long long,long long,int
#define tinycli_params_dlld  double,long long,long long,double
#define tinycli_params_dlls  double,long long,long long,const char*
#define tinycli_params_dlll  double,long long,long long,long long
#define tinycli_params_siii  const char*,int,int,int
#define tinycli_params_siid  const char*,int,int,double
#define tinycli_params_siis  const char*,int,int,const char*
#define tinycli_params_siil  const char*,int,int,long long
#define tinycli_params_sidi  const char*,int,double,int
#define tinycli_params_sidd  const char*,int,double,double
#define tinycli_params_sids  const char*,int,double,const char*
#define tinycli_params_sidl  const char*,int,double,long long
#define tinycli_params_sisi  const char*,int,const char*,int
#define tinycli_params_sisd  const char*,int,const char*,double
#define tinycli_params_siss  const char*,int,const char*,const char*
#define tinycli_params_sisl  const char*,int,const char*,long long
#define tinycli_params_sili  const char*,int,long long,int
#define tinycli_params_sild  const char*,int,long long,double
#define tinycli_params_sils  const char*,int,long long,const char*
#define tinycli_params_sill  const char*,int,long long,long long
#define tinycli_params_sdii  const char*,double,int,int
#define tinycli_params_sdid  const char*,double,int,double
#define tinycli_params_sdis  const char*,double,int,const char*
#define tinycli_params_sdil  const char*,double,int,long long
#define tinycli_params_sddi  const char*,double,double,int
#define tinycli_params_sddd  const char*,double,double,double
#define tinycli_params_sdds  const char*,double,double,const char*
#define tinycli_params_sddl  const char*,double,double,long long
#define tinycli_params_sdsi  const char*,double,const char*,int
#define tinycli_params_sdsd  const char*,double,const char*,double
#define tinycli_params_sdss  const char*,double,const char*,const char*
#define tinycli_params_sdsl  const char*,double,const char*,long long
#define tinycli_params_sdli  const char*,double,long long,int
#define tinycli_params_sdld  const char*,double,long long,double
#define tinycli_params_sdls  const char*,double,long long,const char*
#define tinycli_params_sdll  const char*,double,long long,long long
#define tinycli_params_ssii  const char*,const char*,int,int
#define tinycli_params_ssid  const char*,const char*,int,double
#define tinycli_params_ssis  const char*,const char*,int,const char*
#define tinycli_params_ssil  const char*,const char*,int,long long
#define tinycli_params_ssdi  const char*,const char*,double,int
#define tinycli_params_ssdd  const char*,const char*,double,double
#define tinycli_params_ssds  const char*,const char*,double,const char*
#define tinycli_params_ssdl  const char*,const char*,double,long long
#define tinycli_params_sssi  const char*,const char*,const char*,int
#define tinycli_params_sssd  const char*,const char*,const char*,double
#define tinycli_params_ssss  const char*,const char*,const char*,const char*
#define tinycli_params_sssl  const char*,const char*,const char*,long long
#define tinycli_params_ssli  const char*,const char*,long long,int
#define tinycli_params_ssld  const char*,const char*,long long,double
#define tinycli_params_ssls  const char*,const char*,long long,const char*
#define tinycli_params_ssll  const char*,const char*,long long,long long
#define tinycli_params_slii  const char*,long long,int,int
#define tinycli_params_slid  const char*,long long,int,double
#define tinycli_params_slis  const char*,long long,int,const char*
#define tinycli_params_slil  const char*,long long,int,long long
#define tinycli_params_sldi  const char*,long long,double,int
#define tinycli_params_sldd  const char*,long long,double,double
#define tinycli_params_slds  const char*,long long,double,const char*
#define tinycli_params_sldl  const char*,long long,double,long long
#define tinycli_params_slsi  const char*,long long,const char*,int
#define tinycli_params_slsd  const char*,long long,const char*,double
#define tinycli_params_slss  const char*,long long,const char*,const char*
#define tinycli_params_slsl  const char*,long long,const char*,long long
#define tinycli_params_slli  const char*,long long,long long,int
#define tinycli_params_slld  const char*,long long,long long,double
#define tinycli_params_slls  const char*,long long,long long,const char*
#define tinycli_params_slll  const char*,long long,long long,long long
#define tinycli_params_liii  long long,int,int,int
#define tinycli_params_liid  long long,int,int,double
#define tinycli_params_liis  long long,int,int,const char*
#define tinycli_params_liil  long long,int,int,long long
#define tinycli_params_lidi  long long,int,double,int
#define tinycli_params_lidd  long long,int,double,double
#define tinycli_params_lids  long long,int,double,const char*
#define tinycli_params_lidl  long long,int,double,long long
#define tinycli_params_lisi  long long,int,const char*,int
#define tinycli_params_lisd  long long,int,const char*,double
#define tinycli_params_liss  long long,int,const char*,const char*
#define tinycli_params_lisl  long long,int,const char*,long long
#define tinycli_params_lili  long long,int,long long,int
#define tinycli_params_lild  long long,int,long long,double
#define tinycli_params_lils  long long,int,long long,const char*
#define tinycli_params_lill  long long,int,long long,long long
#define tinycli_params_ldii  long long,double,int,int
#define tinycli_params_ldid  long long,double,int,double
#define tinycli_params_ldis  long long,double,int,const char*
#define tinycli_params_ldil  long long,double,int,long long
#define tinycli_params_lddi  long long,double,double,int
#define tinycli_params_lddd  long long,double,double,double
#define tinycli_params_ldds  long long,double,double,const char*
#define tinycli_params_lddl  long long,double,double,long long
#define tinycli_params_ldsi  long long,double,const char*,int
#define tinycli_params_ldsd  long long,double,const char*,double
#define tinycli_params_ldss  long long,double,const char*,const char*
#define tinycli_params_ldsl  long long,double,const char*,long long
#define tinycli_params_ldli  long long,double,long long,int
#define tinycli_params_ldld  long long,double,long long,double
#define tinycli_params_ldls  long long,double,long long,const char*
#define tinycli_params_ldll  long long,double,long long,long long
#define tinycli_params_lsii  long long,const char*,int,int
#define tinycli_params_lsid  long long,const char*,int,double
#define tinycli_params_lsis  long long,const char*,int,const char*
#define tinycli_params_lsil  long long,const char*,int,long long
#define tinycli_params_lsdi  long long,const char*,double,int
#define tinycli_params_lsdd  long long,const char*,double,double
#define tinycli_params_lsds  long long,const char*,double,const char*
#define tinycli_params_lsdl  long long,const char*,double,long long
#define tinycli_params_lssi  long long,const char*,const char*,int
#define tinycli_params_lssd  long long,const char*,const char*,double
#define tinycli_params_lsss  long long,const char*,const char*,const char*
#define tinycli_params_lssl  long long,const char*,const char*,long long
#define tinycli_params_lsli  long long,const char*,long long,int
#define tinycli_params_lsld  long long,const char*,long long,double
#define tinycli_params_lsls  long long,const char*,long long,const char*
#define tinycli_params_lsll  long long,const char*,long long,long long
#define tinycli_params_llii  long long,long long,int,int
#define tinycli_params_llid  long long,long long,int,double
#define tinycli_params_llis  long long,long long,int,const char*
#define tinycli_params_llil  long long,long long,int,long long
#define tinycli_params_lldi  long long,long long,double,int
#define tinycli_params_lldd  long long,long long,double,double
#define tinycli_params_llds  long long,long long,double,const char*
#define tinycli_params_lldl  long long,long long,double,long long
#define tinycli_params_llsi  long long,long long,const char*,int
#define tinycli_params_llsd  long long,long long,const char*,double
#define tinycli_params_llss  long long,long long,const char*,const char*
#define tinycli_params_llsl  long long,long long,const char*,long long
#define tinycli_params_llli  long long,long long,long long,int
#define tinycli_params_llld  long long,long long,long long,double
#define tinycli_params_llls  long long,long long,long long,const char*
#define tinycli_params_llll  long long,long long,long long,long long
#define tinycli_params_iiiii int,int,int,int,int
#define tinycli_params_iiiid int,int,int,int,double
#define tinycli_params_iiiis int,int,int,int,const char*
#define tinycli_params_iiiil int,int,int,int,long long
#define tinycli_params_iiidi int,int,int,double,int
#define tinycli_params_iiidd int,int,int,double,double
#define tinycli_params_iiids int,int,int,double,const char*
#define tinycli_params_iiidl int,int,int,double,long long
#define tinycli_params_iiisi int,int,int,const char*,int
#define tinycli_params_iiisd int,int,int,const char*,double
#define tinycli_params_iiiss int,int,int,const char*,const char*
#define tinycli_params_iiisl int,int,int,const char*,long long
#define tinycli_params_iiili int,int,int,long long,int
#define tinycli_params_iiild int,int,int,long long,double
#define tinycli_params_iiils int,int,int,long long,const char*
#define tinycli_params_iiill int,int,int,long long,long long
#define tinycli_params_iidii int,int,double,int,int
#define tinycli_params_iidid int,int,double,int,double
#define tinycli_params_iidis int,int,double,int,const char*
#define tinycli_params_iidil int,int,double,int,long long
#define tinycli_params_iiddi int,int,double,double,int
#define tinycli_params_iiddd int,int,double,double,double
#define tinycli_params_iidds int,int,double,double,const char*
#define tinycli_params_iiddl int,int,double,double,long long
#define tinycli_params_iidsi int,int,double,const char*,int
#define tinycli_params_iidsd int,int,double,const char*,double
#define tinycli_params_iidss int,int,double,const char*,const char*
#define tinycli_params_iidsl int,int,double,const char*,long long
#define tinycli_params_iidli int,int,double,long long,int
#define tinycli_params_iidld int,int,double,long long,double
#define tinycli_params_iidls int,int,double,long long,const char*
#define tinycli_params_iidll int,int,double,long long,long long
#define tinycli_params_iisii int,int,const char*,int,int
#define tinycli_params_iisid int,int,const char*,int,double
#define tinycli_params_iisis int,int,const char*,int,const char*
#define tinycli_params_iisil int,int,const char*,int,long long
#define tinycli_params_iisdi int,int,const char*,double,int
#define tinycli_params_iisdd int,int,const char*,double,double
#define tinycli_params_iisds int,int,const char*,double,const char*
#define tinycli_params_iisdl int,int,const char*,double,long long
#define tinycli_params_iissi int,int,const char*,const char*,int
#define tinycli_params_iissd int,int,const char*,const char*,double
#define tinycli_params_iisss int,int,const char*,const char*,const char*
#define tinycli_params_iissl int,int,const char*,const char*,long long
#define tinycli_params_iisli int,int,const char*,long long,int
#define tinycli_params_iisld int,int,const char*,long long,double
#define tinycli_params_iisls int,int,const char*,long long,const char*
#define tinycli_params_iisll int,int,const char*,long long,long long
#define tinycli_params_iilii int,int,long long,int,int
#define tinycli_params_iilid int,int,long long,int,double
#define tinycli_params_iilis int,int,long long,int,const char*
#define tinycli_params_iilil int,int,long long,int,long long
#define tinycli_params_iildi int,int,long long,double,int
#define tinycli_params_iildd int,int,long long,double,double
#define tinycli_params_iilds int,int,long long,double,const char*
#define tinycli_params_iildl int,int,long long,double,long long
#define tinycli_params_iilsi int,int,long long,const char*,int
#define tinycli_params_iilsd int,int,long long,const char*,double
#define tinycli_params_iilss int,int,long long,const char*,const char*
#define tinycli_params_iilsl int,int,long long,const char*,long long
#define tinycli_params_iilli int,int,long long,long long,int
#define tinycli_params_iilld int,int,long long,long long,double
#define tinycli_params_iills int,int,long long,long long,const char*
#define tinycli_params_iilll int,int,long long,long long,long long
#define tinycli_params_idiii int,double,int,int,int
#define tinycli_params_idiid int,double,int,int,double
#define tinycli_params_idiis int,double,int,int,const char*
#define tinycli_params_idiil int,double,int,int,long long
#define tinycli_params_ididi int,double,int,double,int
#define tinycli_params_ididd int,double,int,double,double
#define tinycli_params_idids int,double,int,double,const char*
#define tinycli_params_ididl int,double,int,double,long long
#define tinycli_params_idisi int,double,int,const char*,int
#define tinycli_params_idisd int,double,int,const char*,double
#define tinycli_params_idiss int,double,int,const char*,const char*
#define tinycli_params_idisl int,double,int,const char*,long long
#define tinycli_params_idili int,double,int,long long,int
#define tinycli_params_idild int,double,int,long long,double
#define tinycli_params_idils int,double,int,long long,const char*
#define tinycli_params_idill int,double,int,long long,long long
#define tinycli_params_iddii int,double,double,int,int
#define tinycli_params_iddid int,double,double,int,double
#define tinycli_params_iddis int,double,double,int,const char*
#define tinycli_params_iddil int,double,double,int,long long
#define tinycli_params_idddi int,double,double,double,int
#define tinycli_params_idddd int,double,double,double,double
#define tinycli_params_iddds int,double,double,double,const char*
#define tinycli_params_idddl int,double,double,double,long long
#define tinycli_params_iddsi int,double,double,const char*,int
#define tinycli_params_iddsd int,double,double,const char*,double
#define tinycli_params_iddss int,double,double,const char*,const char*
#define tinycli_params_iddsl int,double,double,const char*,long long
#define tinycli_params_iddli int,double,double,long long,int
#define tinycli_params_iddld int,double,double,long long,double
#define tinycli_params_iddls int,double,double,long long,const char*
#define tinycli_params_iddll int,double,double,long long,long long
#define tinycli_params_idsii int,double,const char*,int,int
#define tinycli_params_idsid int,double,const char*,int,double
#define tinycli_params_idsis int,double,const char*,int,const char*
#define tinycli_params_idsil int,double,const char*,int,long long
#define tinycli_params_idsdi int,double,const char*,double,int
#define tinycli_params_idsdd int,double,const char*,double,double
#define tinycli_params_idsds int,double,const char*,double,const char*
#define tinycli_params_idsdl int,double,const char*,double,long long
#define tinycli_params_idssi int,double,const char*,const char*,int
#define tinycli_params_idssd int,double,const char*,const char*,double
#define tinycli_params_idsss int,double,const char*,const char*,const char*
#define tinycli_params_idssl int,double,const char*,const char*,long long
#define tinycli_params_idsli int,double,const char*,long long,int
#define tinycli_params_idsld int,double,const char*,long long,double
#define tinycli_params_idsls int,double,const char*,long long,const char*
#define tinycli_params_idsll int,double,const char*,long long,long long
#define tinycli_params_idlii int,double,long long,int,int
#define tinycli_params_idlid int,double,long long,int,double
#define tinycli_params_idlis int,double,long long,int,const char*
#define tinycli_params_idlil int,double,long long,int,long long
#define tinycli_params_idldi int,double,long long,double,int
#define tinycli_params_idldd int,double,long long,double,double
#define tinycli_params_idlds int,double,long long,double,const char*
#define tinycli_params_idldl int,double,long long,double,long long
#define tinycli_params_idlsi int,double,long long,const char*,int
#define tinycli_params_idlsd int,double,long long,const char*,double
#define tinycli_params_idlss int,double,long long,const char*,const char*
#define tinycli_params_idlsl int,double,long long,const char*,long long
#define tinycli_params_idlli int,double,long long,long long,int
#define tinycli_params_idlld int,double,long long,long long,double
#define tinycli_params_idlls int,double,long long,long long,const char*
#define tinycli_params_idlll int,double,long long,long long,long long
#define tinycli_params_isiii int,const char*,int,int,int
#define tinycli_params_isiid int,const char*,int,int,double
#define tinycli_params_isiis int,const char*,int,int,const char*
#define tinycli_params_isiil int,const char*,int,int,long long
#define tinycli_params_isidi int,const char*,int,double,int
#define tinycli_params_isidd int,const char*,int,double,double
#define tinycli_params_isids int,const char*,int,double,const char*
#define tinycli_params_isidl int,const char*,int,double,long long
#define tinycli_params_isisi int,const char*,int,const char*,int
#define tinycli_params_isisd int,const char*,int,const char*,double
#define tinycli_params_isiss int,const char*,int,const char*,const char*
#define tinycli_params_isisl int,const char*,int,const char*,long long
#define tinycli_params_isili int,const char*,int,long long,int
#define tinycli_params_isild int,const char*,int,long long,double
#define tinycli_params_isils int,const char*,int,long long,const char*
#define tinycli_params_isill int,const char*,int,long long,long long
#define tinycli_params_isdii int,const char*,double,int,int
#define tinycli_params_isdid int,const char*,double,int,double
#define tinycli_params_isdis int,const char*,double,int,const char*
#define tinycli_params_isdil int,const char*,double,int,long long
#define tinycli_params_isddi int,const char*,double,double,int
#define tinycli_params_isddd int,const char*,double,double,double
#define tinycli_params_isdds int,const char*,double,double,const char*
#define tinycli_params_isddl int,const char*,double,double,long long
#define tinycli_params_isdsi int,const char*,double,const char*,int
#define tinycli_params_isdsd int,const char*,double,const char*,double
#define tinycli_params_isdss int,const char*,double,const char*,const char*
#define tinycli_params_isdsl int,const char*,double,const char*,long long
#define tinycli_params_isdli int,const char*,double,long long,int
#define tinycli_params_isdld int,const char*,double,long long,double
#define tinycli_params_isdls int,const char*,double,long long,const char*
#define tinycli_params_isdll int,const char*,double,long long,long long
#define tinycli_params_issii int,const char*,const char*,int,int
#define tinycli_params_issid int,const char*,const char*,int,double
#define tinycli_params_issis int,const char*,const char*,int,const char*
#define tinycli_params_issil int,const char*,const char*,int,long long
#define tinycli_params_issdi int,const char*,const char*,double,int
#define tinycli_params_issdd int,const char*,const char*,double,double
#define tinycli_params_issds int,const char*,const char*,double,const char*
#define tinycli_params_issdl int,const char*,const char*,double,long long
#define tinycli_params_isssi int,const char*,const char*,const char*,int
#define tinycli_params_isssd int,const char*,const char*,const char*,double
#define tinycli_params_issss int,const char*,const char*,const char*,const char*
#define tinycli_params_isssl int,const char*,const char*,const char*,long long
#define tinycli_params_issli int,const char*,const char*,long long,int
#define tinycli_params_issld int,const char*,const char*,long long,double
#define tinycli_params_issls int,const char*,const char*,long long,const char*
#define tinycli_params_issll int,const char*,const char*,long long,long long
#define tinycli_params_islii int,const char*,long long,int,int
#define tinycli_params_islid int,const char*,long long,int,double
#define tinycli_params_islis int,const char*,long long,int,const char*
#define tinycli_params_islil int,const char*,long long,int,long long
#define tinycli_params_isldi int,const char*,long long,double,int
#define tinycli_params_isldd int,const char*,long long,double,double
#define tinycli_params_islds int,const char*,long long,double,const char*
#define tinycli_params_isldl int,const char*,long long,double,long long
#define tinycli_params_islsi int,const char*,long long,const char*,int
#define tinycli_params_islsd int,const char*,long long,const char*,double
#define tinycli_params_islss int,const char*,long long,const char*,const char*
#define tinycli_params_islsl int,const char*,long long,const char*,long long
#define tinycli_params_islli int,const char*,long long,long long,int
#define tinycli_params_islld int,const char*,long long,long long,double
#define tinycli_params_islls int,const char*,long long,long long,const char*
#define tinycli_params_islll int,const char*,long long,long long,long long
#define tinycli_params_iliii int,long long,int,int,int
#define tinycli_params_iliid int,long long,int,int,double
#define tinycli_params_iliis int,long long,int,int,const char*
#define tinycli_params_iliil int,long long,int,int,long long
#define tinycli_params_ilidi int,long long,int,double,int
#define tinycli_params_ilidd int,long long,int,double,double
#define tinycli_params_ilids int,long long,int,double,const char*
#define tinycli_params_ilidl int,long long,int,double,long long
#define tinycli_params_ilisi int,long long,int,const char*,int
#define tinycli_params_ilisd int,long long,int,const char*,double
#define tinycli_params_iliss int,long long,int,const char*,const char*
#define tinycli_params_ilisl int,long long,int,const char*,long long
#define tinycli_params_ilili int,long long,int,long long,int
#define tinycli_params_ilild int,long long,int,long long,double
#define tinycli_params_ilils int,long long,int,long long,const char*
#define tinycli_params_ilill int,long long,int,long long,long long
#define tinycli_params_ildii int,long long,double,int,int
#define tinycli_params_ildid int,long long,double,int,double
#define tinycli_params_ildis int,long long,double,int,const char*
#define tinycli_params_ildil int,long long,double,int,long long
#define tinycli_params_ilddi int,long long,double,double,int
#define tinycli_params_ilddd int,long long,double,double,double
#define tinycli_params_ildds int,long long,double,double,const char*
#define tinycli_params_ilddl int,long long,double,double,long long
#define tinycli_params_ildsi int,long long,double,const char*,int
#define tinycli_params_ildsd int,long long,double,const char*,double
#define tinycli_params_ildss int,long long,double,const char*,const char*
#define tinycli_params_ildsl int,long long,double,const char*,long long
#define tinycli_params_ildli int,long long,double,long long,int
#define tinycli_params_ildld int,long long,double,long long,double
#define tinycli_params_ildls int,long long,double,long long,const char*
#define tinycli_params_ildll int,long long,double,long long,long long
#define tinycli_params_ilsii int,long long,const char*,int,int
#define tinycli_params_ilsid int,long long,const char*,int,double
#define tinycli_params_ilsis int,long long,const char*,int,const char*
#define tinycli_params_ilsil int,long long,const char*,int,long long
#define tinycli_params_ilsdi int,long long,const char*,double,int
#define tinycli_params_ilsdd int,long long,const char*,double,double
#define tinycli_params_ilsds int,long long,const char*,double,const char*
#define tinycli_params_ilsdl int,long long,const char*,double,long long
#define tinycli_params_ilssi int,long long,const char*,const char*,int
#define tinycli_params_ilssd int,long long,const char*,const char*,double
#define tinycli_params_ilsss int,long long,const char*,const char*,const char*
#define tinycli_params_ilssl int,long long,const char*,const char*,long long
#define tinycli_params_ilsli int,long long,const char*,long long,int
#define tinycli_params_ilsld int,long long,const char*,long long,double
#define tinycli_params_ilsls int,long long,const char*,long long,const char*
#define tinycli_params_ilsll int,long long,const char*,long long,long long
#define tinycli_params_illii int,long long,long long,int,int
#define tinycli_params_illid int,long long,long long,int,double
#define tinycli_params_illis int,long long,long long,int,const char*
#define tinycli_params_illil int,long long,long long,int,long long
#define tinycli_params_illdi int,long long,long long,double,int
#define tinycli_params_illdd int,long long,long long,double,double
#define tinycli_params_illds int,long long,long long,double,const char*
#define tinycli_params_illdl int,long long,long long,double,long long
#define tinycli_params_illsi int,long long,long long,const char*,int
#define tinycli_params_illsd int,long long,long long,const char*,double
#define tinycli_params_illss int,long long,long long,const char*,const char*
#define tinycli_params_illsl int,long long,long long,const char*,long long
#define tinycli_params_illli int,long long,long long,long long,int
#define tinycli_params_illld int,long long,long long,long long,double
#define tinycli_params_illls int,long long,long long,long long,const char*
#define tinycli_params_illll int,long long,long long,long long,long long
#define tinycli_params_diiii double,int,int,int,int
#define tinycli_params_diiid double,int,int,int,double
#define tinycli_params_diiis double,int,int,int,const char*
#define tinycli_params_diiil double,int,int,int,long long
#define tinycli_params_diidi double,int,int,double,int
#define tinycli_params_diidd double,int,int,double,double
#define tinycli_params_diids double,int,int,double,const char*
#define tinycli_params_diidl double,int,int,double,long long
#define tinycli_params_diisi double,int,int,const char*,int
#define tinycli_params_diisd double,int,int,const char*,double
#define tinycli_params_diiss double,int,int,const char*,const char*
#define tinycli_params_diisl double,int,int,const char*,long long
#define tinycli_params_diili double,int,int,long long,int
#define tinycli_params_diild double,int,int,long long,double
#define tinycli_params_diils double,int,int,long long,const char*
#define tinycli_params_diill double,int,int,long long,long long
#define tinycli_params_didii double,int,double,int,int
#define tinycli_params_didid double,int,double,int,double
#define tinycli_params_didis double,int,double,int,const char*
#define tinycli_params_didil double,int,double,int,long long
#define tinycli_params_diddi double,int,double,double,int
#define tinycli_params_diddd double,int,double,double,double
#define tinycli_params_didds double,int,double,double,const char*
#define tinycli_params_diddl double,int,double,double,long long
#define tinycli_params_didsi double,int,double,const char*,int
#define tinycli_params_didsd double,int,double,const char*,double
#define tinycli_params_didss double,int,double,const char*,const char*
#define tinycli_params_didsl double,int,double,const char*,long long
#define tinycli_params_didli double,int,double,long long,int
#define tinycli_params_didld double,int,double,long long,double
#define tinycli_params_didls double,int,double,long long,const char*
#define tinycli_params_didll double,int,double,long long,long long
#define tinycli_params_disii double,int,const char*,int,int
#define tinycli_params_disid double,int,const char*,int,double
#define tinycli_params_disis double,int,const char*,int,const char*
#define tinycli_params_disil double,int,const char*,int,long long
#define tinycli_params_disdi double,int,const char*,double,int
#define tinycli_params_disdd double,int,const char*,double,double
#define tinycli_params_disds double,int,const char*,double,const char*
#define tinycli_params_disdl double,int,const char*,double,long long
#define tinycli_params_dissi double,int,const char*,const char*,int
#define tinycli_params_dissd double,int,const char*,const char*,double
#define tinycli_params_disss double,int,const char*,const char*,const char*
#define tinycli_params_dissl double,int,const char*,const char*,long long
#define tinycli_params_disli double,int,const char*,long long,int
#define tinycli_params_disld double,int,const char*,long long,double
#define tinycli_params_disls double,int,const char*,long long,const char*
#define tinycli_params_disll double,int,const char*,long long,long long
#define tinycli_params_dilii double,int,long long,int,int
#define tinycli_params_dilid double,int,long long,int,double
#define tinycli_params_dilis double,int,long long,int,const char*
#define tinycli_params_dilil double,int,long long,int,long long
#define tinycli_params_dildi double,int,long long,double,int
#define tinycli_params_dildd double,int,long long,double,double
#define tinycli_params_dilds double,int,long long,double,const char*
#define tinycli_params_dildl double,int,long long,double,long long
#define tinycli_params_dilsi double,int,long long,const char*,int
#define tinycli_params_dilsd double,int,long long,const char*,double
#define tinycli_params_dilss double,int,long long,const char*,const char*
#define tinycli_params_dilsl double,int,long long,const char*,long long
#define tinycli_params_dilli double,int,long long,long long,int
#define tinycli_params_dilld double,int,long long,long long,double
#define tinycli_params_dills double,int,long long,long long,const char*
#define tinycli_params_dilll double,int,long long,long long,long long
#define tinycli_params_ddiii double,double,int,int,int
#define tinycli_params_ddiid double,double,int,int,double
#define tinycli_params_ddiis double,double,int,int,const char*
#define tinycli_params_ddiil double,double,int,int,long long
#define tinycli_params_ddidi double,double,int,double,int
#define tinycli_params_ddidd double,double,int,double,double
#define tinycli_params_ddids double,double,int,double,const char*
#define tinycli_params_ddidl double,double,int,double,long long
#define tinycli_params_ddisi double,double,int,const char*,int
#define tinycli_params_ddisd double,double,int,const char*,double
#define tinycli_params_ddiss double,double,int,const char*,const char*
#define tinycli_params_ddisl double,double,int,const char*,long long
#define tinycli_params_ddili double,double,int,long long,int
#define tinycli_params_ddild double,double,int,long long,double
#define tinycli_params_ddils double,double,int,long long,const char*
#define tinycli_params_ddill double,double,int,long long,long long
#define tinycli_params_dddii double,double,double,int,int
#define tinycli_params_dddid double,double,double,int,double
#define tinycli_params_dddis double,double,double,int,const char*
#define tinycli_params_dddil double,double,double,int,long long
#define tinycli_params_ddddi double,double,double,double,int
#define tinycli_params_ddddd double,double,double,double,double
#define tinycli_params_dddds double,double,double,double,const char*
#define tinycli_params_ddddl double,double,double,double,long long
#define tinycli_params_dddsi double,double,double,const char*,int
#define tinycli_params_dddsd double,double,double,const char*,double
#define tinycli_params_dddss double,double,double,const char*,const char*
#define tinycli_params_dddsl double,double,double,const char*,long long
#define tinycli_params_dddli double,double,double,long long,int
#define tinycli_params_dddld double,double,double,long long,double
#define tinycli_params_dddls double,double,double,long long,const char*
#define tinycli_params_dddll double,double,double,long long,long long
#define tinycli_params_ddsii double,double,const char*,int,int
#define tinycli_params_ddsid double,double,const char*,int,double
#define tinycli_params_ddsis double,double,const char*,int,const char*
#define tinycli_params_ddsil double,double,const char*,int,long long
#define tinycli_params_ddsdi double,double,const char*,double,int
#define tinycli_params_ddsdd double,double,const char*,double,double
#define tinycli_params_ddsds double,double,const char*,double,const char*
#define tinycli_params_ddsdl double,double,const char*,double,long long
#define tinycli_params_ddssi double,double,const char*,const char*,int
#define tinycli_params_ddssd double,double,const char*,const char*,double
#define tinycli_params_ddsss double,double,const char*,const char*,const char*
#define tinycli_params_ddssl double,double,const char*,const char*,long long
#define tinycli_params_ddsli double,double,const char*,long long,int
#define tinycli_params_ddsld double,double,const char*,long long,double
#define tinycli_params_ddsls double,double,const char*,long long,const char*
#define tinycli_params_ddsll double,double,const char*,long long,long long
#define tinycli_params_ddlii double,double,long long,int,int
#define tinycli_params_ddlid double,double,long long,int,double
#define tinycli_params_ddlis double,double,long long,int,const char*
#define tinycli_params_ddlil double,double,long long,int,long long
#define tinycli_params_ddldi double,double,long long,double,int
#define tinycli_params_ddldd double,double,long long,double,double
#define tinycli_params_ddlds double,double,long long,double,const char*
#define tinycli_params_ddldl double,double,long long,double,long long
#define tinycli_params_ddlsi double,double,long long,const char*,int
#define tinycli_params_ddlsd double,double,long long,const char*,double
#define tinycli_params_ddlss double,double,long long,const char*,const char*
#define tinycli_params_ddlsl double,double,long long,const char*,long long
#define tinycli_params_ddlli double,double,long long,long long,int
#define tinycli_params_ddlld double,double,long long,long long,double
#define tinycli_params_ddlls double,double,long long,long long,const char*
#define tinycli_params_ddlll double,double,long long,long long,long long
#define tinycli_params_dsiii double,const char*,int,int,int
#define tinycli_params_dsiid double,const char*,int,int,double
#define tinycli_params_dsiis double,const char*,int,int,const char*
#define tinycli_params_dsiil double,const char*,int,int,long long
#define tinycli_params_dsidi double,const char*,int,double,int
#define tinycli_params_dsidd double,const char*,int,double,double
#define tinycli_params_dsids double,const char*,int,double,const char*
#define tinycli_params_dsidl double,const char*,int,double,long long
#define tinycli_params_dsisi double,const char*,int,const char*,int
#define tinycli_params_dsisd double,const char*,int,const char*,double
#define tinycli_params_dsiss double,const char*,int,const char*,const char*
#define tinycli_params_dsisl double,const char*,int,const char*,long long
#define tinycli_params_dsili double,const char*,int,long long,int
#define tinycli_params_dsild double,const char*,int,long long,double
#define tinycli_params_dsils double,const char*,int,long long,const char*
#define tinycli_params_dsill double,const char*,int,long long,long long
#define tinycli_params_dsdii double,const char*,double,int,int
#define tinycli_params_dsdid double,const char*,double,int,double
#define tinycli_params_dsdis double,const char*,double,int,const char*
#define tinycli_params_dsdil double,const char*,double,int,long long
#define tinycli_params_dsddi double,const char*,double,double,int
#define tinycli_params_dsddd double,const char*,double,double,double
#define tinycli_params_dsdds double,const char*,double,double,const char*
#define tinycli_params_dsddl double,const char*,double,double,long long
#define tinycli_params_dsdsi double,const char*,double,const char*,int
#define tinycli_params_dsdsd double,const char*,double,const char*,double
#define tinycli_params_dsdss double,const char*,double,const char*,const char*
#define tinycli_params_dsdsl double,const char*,double,const char*,long long
#define tinycli_params_dsdli double,const char*,double,long long,int
#define tinycli_params_dsdld double,const char*,double,long long,double
#define tinycli_params_dsdls double,const char*,double,long long,const char*
#define tinycli_params_dsdll double,const char*,double,long long,long long
#define tinycli_params_dssii double,const char*,const char*,int,int
#define tinycli_params_dssid double,const char*,const char*,int,double
#define tinycli_params_dssis double,const char*,const char*,int,const char*
#define tinycli_params_dssil double,const char*,const char*,int,long long
#define tinycli_params_dssdi double,const char*,const char*,double,int
#define tinycli_params_dssdd double,const char*,const char*,double,double
#define tinycli_params_dssds double,const char*,const char*,double,const char*
#define tinycli_params_dssdl double,const char*,const char*,double,long long
#define tinycli_params_dsssi double,const char*,const char*,const char*,int
#define tinycli_params_dsssd double,const char*,const char*,const char*,double
#define tinycli_params_dssss double,const char*,const char*,const char*,const char*
#define tinycli_params_dsssl double,const char*,const char*,const char*,long long
#define tinycli_params_dssli double,const char*,const char*,long long,int
#define tinycli_params_dssld double,const char*,const char*,long long,double
#define tinycli_params_dssls double,const char*,const char*,long long,const char*
#define tinycli_params_dssll double,const char*,const char*,long long,long long
#define tinycli_params_dslii double,const char*,long long,int,int
#define tinycli_params_dslid double,const char*,long long,int,double
#define tinycli_params_dslis double,const char*,long long,int,const char*
#define tinycli_params_dslil double,const char*,long long,int,long long
#define tinycli_params_dsldi double,const char*,long long,double,int
#define tinycli_params_dsldd double,const char*,long long,double,double
#define tinycli_params_dslds double,const char*,long long,double,const char*
#define tinycli_params_dsldl double,const char*,long long,double,long long
#define tinycli_params_dslsi double,const char*,long long,const char*,int
#define tinycli_params_dslsd double,const char*,long long,const char*,double
#define tinycli_params_dslss double,const char*,long long,const char*,const char*
#define tinycli_params_dslsl double,const char*,long long,const char*,long long
#define tinycli_params_dslli double,const char*,long long,long long,int
#define tinycli_params_dslld double,const char*,long long,long long,double
#define tinycli_params_dslls double,const char*,long long,long long,const char*
#define tinycli_params_dslll double,const char*,long long,long long,long long
#define tinycli_params_dliii double,long long,int,int,int
#define tinycli_params_dliid double,long long,int,int,double
#define tinycli_params_dliis double,long long,int,int,const char*
#define tinycli_params_dliil double,long long,int,int,long long
#define tinycli_params_dlidi double,long long,int,double,int
#define tinycli_params_dlidd double,long long,int,double,double
#define tinycli_params_dlids double,long long,int,double,const char*
#define tinycli_params_dlidl double,long long,int,double,long long
#define tinycli_params_dlisi double,long long,int,const char*,int
#define tinycli_params_dlisd double,long long,int,const char*,double
#define tinycli_params_dliss double,long long,int,const char*,const char*
#define tinycli_params_dlisl double,long long,int,const char*,long long
#define tinycli_params_dlili double,long long,int,long long,int
#define tinycli_params_dlild double,long long,int,long long,double
#define tinycli_params_dlils double,long long,int,long long,const char*
#define tinycli_params_dlill double,long long,int,long long,long long
#define tinycli_params_dldii double,long long,double,int,int
#define tinycli_params_dldid double,long long,double,int,double
#define tinycli_params_dldis double,long long,double,int,const char*
#define tinycli_params_dldil double,long long,double,int,long long
#define tinycli_params_dlddi double,long long,double,double,int
#define tinycli_params_dlddd double,long long,double,double,double
#define tinycli_params_dldds double,long long,double,double,const char*
#define tinycli_params_dlddl double,long long,double,double,long long
#define tinycli_params_dldsi double,long long,double,const char*,int
#define tinycli_params_dldsd double,long long,double,const char*,double
#define tinycli_params_dldss double,long long,double,const char*,const char*
#define tinycli_params_dldsl double,long long,double,const char*,long long
#define tinycli_params_dldli double,long long,double,long long,int
#define tinycli_params_dldld double,long long,double,long long,double
#define tinycli_params_dldls double,long long,double,long long,const char*
#define tinycli_params_dldll double,long long,double,long long,long long
#define tinycli_params_dlsii double,long long,const char*,int,int
#define tinycli_params_dlsid double,long long,const char*,int,double
#define tinycli_params_dlsis double,long long,const char*,int,const char*
#define tinycli_params_dlsil double,long long,const char*,int,long long
#define tinycli_params_dlsdi double,long long,const char*,double,int
#define tinycli_params_dlsdd double,long long,const char*,double,double
#define tinycli_params_dlsds double,long long,const char*,double,const char*
#define tinycli_params_dlsdl double,long long,const char*,double,long long
#define tinycli_params_dlssi double,long long,const char*,const char*,int
#define tinycli_params_dlssd double,long long,const char*,const char*,double
#define tinycli_params_dlsss double,long long,const char*,const char*,const char*
#define tinycli_params_dlssl double,long long,const char*,const char*,long long
#define tinycli_params_dlsli double,long long,const char*,long long,int
#define tinycli_params_dlsld double,long long,const char*,long long,double
#define tinycli_params_dlsls double,long long,const char*,long long,const char*
#define tinycli_params_dlsll double,long long,const char*,long long,long long
#define tinycli_params_dllii double,long long,long long,int,int
#define tinycli_params_dllid double,long long,long long,int,double
#define tinycli_params_dllis double,long long,long long,int,const char*
#define tinycli_params_dllil double,long long,long long,int,long long
#define tinycli_params_dlldi double,long long,long long,double,int
#define tinycli_params_dlldd double,long long,long long,double,double
#define tinycli_params_dllds double,long long,long long,double,const char*
#define tinycli_params_dlldl double,long long,long long,double,long long
#define tinycli_params_dllsi double,long long,long long,const char*,int
#define tinycli_params_dllsd double,long long,long long,const char*,double
#define tinycli_params_dllss double,long long,long long,const char*,const char*
#define tinycli_params_dllsl double,long long,long long,const char*,long long
#define tinycli_params_dllli double,long long,long long,long long,int
#define tinycli_params_dllld double,long long,long long,long long,double
#define tinycli_params_dllls double,long long,long long,long long,const char*
#define tinycli_params_dllll double,long long,long long,long long,long long
#define tinycli_params_siiii const char*,int,int,int,int
#define tinycli_params_siiid const char*,int,int,int,double
#define tinycli_params_siiis const char*,int,int,int,const char*
#define tinycli_params_siiil const char*,int,int,int,long long
#define tinycli_params_siidi const char*,int,int,double,int
#define tinycli_params_siidd const char*,int,int,double,double
#define tinycli_params_siids const char*,int,int,double,const char*
#define tinycli_params_siidl const char*,int,int,double,long long
#define tinycli_params_siisi const char*,int,int,const char*,int
#define tinycli_params_siisd const char*,int,int,const char*,double
#define tinycli_params_siiss const char*,int,int,const char*,const char*
#define tinycli_params_siisl const char*,int,int,const char*,long long
#define tinycli_params_siili const char*,int,int,long long,int
#define tinycli_params_siild const char*,int,int,long long,double
#define tinycli_params_siils const char*,int,int,long long,const char*
#define tinycli_params_siill const char*,int,int,long long,long long
#define tinycli_params_sidii const char*,int,double,int,int
#define tinycli_params_sidid const char*,int,double,int,double
#define tinycli_params_sidis const char*,int,double,int,const char*
#define tinycli_params_sidil const char*,int,double,int,long long
#define tinycli_params_siddi const char*,int,double,double,int
#define tinycli_params_siddd const char*,int,double,double,double
#define tinycli_params_sidds const char*,int,double,double,const char*
#define tinycli_params_siddl const char*,int,double,double,long long
#define tinycli_params_sidsi const char*,int,double,const char*,int
#define tinycli_params_sidsd const char*,int,double,const char*,double
#define tinycli_params_sidss const char*,int,double,const char*,const char*
#define tinycli_params_sidsl const char*,int,double,const char*,long long
#define tinycli_params_sidli const char*,int,double,long long,int
#define tinycli_params_sidld const char*,int,double,long long,double
#define tinycli_params_sidls const char*,int,double,long long,const char*
#define tinycli_params_sidll const char*,int,double,long long,long long
#define tinycli_params_sisii const char*,int,const char*,int,int
#define tinycli_params_sisid const char*,int,const char*,int,double
#define tinycli_params_sisis const char*,int,const char*,int,const char*
#define tinycli_params_sisil const char*,int,const char*,int,long long
#define tinycli_params_sisdi const char*,int,const char*,double,int
#define tinycli_params_sisdd const char*,int,const char*,double,double
#define tinycli_params_sisds const char*,int,const char*,double,const char*
#define tinycli_params_sisdl const char*,int,const char*,double,long long
#define tinycli_params_sissi const char*,int,const char*,const char*,int
#define tinycli_params_sissd const char*,int,const char*,const char*,double
#define tinycli_params_sisss const char*,int,const char*,const char*,const char*
#define tinycli_params_sissl const char*,int,const char*,const char*,long long
#define tinycli_params_sisli const char*,int,const char*,long long,int
#define tinycli_params_sisld const char*,int,const char*,long long,double
#define tinycli_params_sisls const char*,int,const char*,long long,const char*
#define tinycli_params_sisll const char*,int,const char*,long long,long long
#define tinycli_params_silii const char*,int,long long,int,int
#define tinycli_params_silid const char*,int,long long,int,double
#define tinycli_params_silis const char*,int,long long,int,const char*
#define tinycli_params_silil const char*,int,long long,int,long long
#define tinycli_params_sildi const char*,int,long long,double,int
#define tinycli_params_sildd const char*,int,long long,double,double
#define tinycli_params_silds const char*,int,long long,double,const char*
#define tinycli_params_sildl const char*,int,long long,double,long long
#define tinycli_params_silsi const char*,int,long long,const char*,int
#define tinycli_params_silsd const char*,int,long long,const char*,double
#define tinycli_params_silss const char*,int,long long,const char*,const char*
#define tinycli_params_silsl const char*,int,long long,const char*,long long
#define tinycli_params_silli const char*,int,long long,long long,int
#define tinycli_params_silld const char*,int,long long,long long,double
#define tinycli_params_sills const char*,int,long long,long long,const char*
#define tinycli_params_silll const char*,int,long long,long long,long long
#define tinycli_params_sdiii const char*,double,int,int,int
#define tinycli_params_sdiid const char*,double,int,int,double
#define tinycli_params_sdiis const char*,double,int,int,const char*
#define tinycli_params_sdiil const char*,double,int,int,long long
#define tinycli_params_sdidi const char*,double,int,double,int
#define tinycli_params_sdidd const char*,double,int,double,double
#define tinycli_params_sdids const char*,double,int,double,const char*
#define tinycli_params_sdidl const char*,double,int,double,long long
#define tinycli_params_sdisi const char*,double,int,const char*,int
#define tinycli_params_sdisd const char*,double,int,const char*,double
#define tinycli_params_sdiss const char*,double,int,const char*,const char*
#define tinycli_params_sdisl const char*,double,int,const char*,long long
#define tinycli_params_sdili const char*,double,int,long long,int
#define tinycli_params_sdild const char*,double,int,long long,double
#define tinycli_params_sdils const char*,double,int,long long,const char*
#define tinycli_params_sdill const char*,double,int,long long,long long
#define tinycli_params_sddii const char*,double,double,int,int
#define tinycli_params_sddid const char*,double,double,int,double
#define tinycli_params_sddis const char*,double,double,int,const char*
#define tinycli_params_sddil const char*,double,double,int,long long
#define tinycli_params_sdddi const char*,double,double,double,int
#define tinycli_params_sdddd const char*,double,double,double,double
#define tinycli_params_sddds const char*,double,double,double,const char*
#define tinycli_params_sdddl const char*,double,double,double,long long
#define tinycli_params_sddsi const char*,double,double,const char*,int
#define tinycli_params_sddsd const char*,double,double,const char*,double
#define tinycli_params_sddss const char*,double,double,const char*,const char*
#define tinycli_params_sddsl const char*,double,double,const char*,long long
#define tinycli_params_sddli const char*,double,double,long long,int
#define tinycli_params_sddld const char*,double,double,long long,double
#define tinycli_params_sddls const char*,double,double,long long,const char*
#define tinycli_params_sddll const char*,double,double,long long,long long
#define tinycli_params_sdsii const char*,double,const char*,int,int
#define tinycli_params_sdsid const char*,double,const char*,int,double
#define tinycli_params_sdsis const char*,double,const char*,int,const char*
#define tinycli_params_sdsil const char*,double,const char*,int,long long
#define tinycli_params_sdsdi const char*,double,const char*,double,int
#define tinycli_params_sdsdd const char*,double,const char*,double,double
#define tinycli_params_sdsds const char*,double,const char*,double,const char*
#define tinycli_params_sdsdl const char*,double,const char*,double,long long
#define tinycli_params_sdssi const char*,double,const char*,const char*,int
#define tinycli_params_sdssd const char*,double,const char*,const char*,double
#define tinycli_params_sdsss const char*,double,const char*,const char*,const char*
#define tinycli_params_sdssl const char*,double,const char*,const char*,long long
#define tinycli_params_sdsli const char*,double,const char*,long long,int
#define tinycli_params_sdsld const char*,double,const char*,long long,double
#define tinycli_params_sdsls const char*,double,const char*,long long,const char*
#define tinycli_params_sdsll const char*,double,const char*,long long,long long
#define tinycli_params_sdlii const char*,double,long long,int,int
#define tinycli_params_sdlid const char*,double,long long,int,double
#define tinycli_params_sdlis const char*,double,long long,int,const char*
#define tinycli_params_sdlil const char*,double,long long,int,long long
#define tinycli_params_sdldi const char*,double,long long,double,int
#define tinycli_params_sdldd const char*,double,long long,double,double
#define tinycli_params_sdlds const char*,double,long long,double,const char*
#define tinycli_params_sdldl const char*,double,long long,double,long long
#define tinycli_params_sdlsi const char*,double,long long,const char*,int
#define tinycli_params_sdlsd const char*,double,long long,const char*,double
#define tinycli_params_sdlss const char*,double,long long,const char*,const char*
#define tinycli_params_sdlsl const char*,double,long long,const char*,long long
#define tinycli_params_sdlli const char*,double,long long,long long,int
#define tinycli_params_sdlld const char*,double,long long,long long,double
#define tinycli_params_sdlls const char*,double,long long,long long,const char*
#define tinycli_params_sdlll const char*,double,long long,long long,long long
#define tinycli_params_ssiii const char*,const char*,int,int,int
#define tinycli_params_ssiid const char*,const char*,int,int,double
#define tinycli_params_ssiis const char*,const char*,int,int,const char*
#define tinycli_params_ssiil const char*,const char*,int,int,long long
#define tinycli_params_ssidi const char*,const char*,int,double,int
#define tinycli_params_ssidd const char*,const char*,int,double,double
#define tinycli_params_ssids const char*,const char*,int,double,const char*
#define tinycli_params_ssidl const char*,const char*,int,double,long long
#define tinycli_params_ssisi const char*,const char*,int,const char*,int
#define tinycli_params_ssisd const char*,const char*,int,const char*,double
#define tinycli_params_ssiss const char*,const char*,int,const char*,const char*
#define tinycli_params_ssisl const char*,const char*,int,const char*,long long
#define tinycli_params_ssili const char*,const char*,int,long long,int
#define tinycli_params_ssild const char*,const char*,int,long long,double
#define tinycli_params_ssils const char*,const char*,int,long long,const char*
#define tinycli_params_ssill const char*,const char*,int,long long,long long
#define tinycli_params_ssdii const char*,const char*,double,int,int
#define tinycli_params_ssdid const char*,const char*,double,int,double
#define tinycli_params_ssdis const char*,const char*,double,int,const char*
#define tinycli_params_ssdil const char*,const char*,double,int,long long
#define tinycli_params_ssddi const char*,const char*,double,double,int
#define tinycli_params_ssddd const char*,const char*,double,double,double
#define tinycli_params_ssdds const char*,const char*,double,double,const char*
#define tinycli_params_ssddl const char*,const char*,double,double,long long
#define tinycli_params_ssdsi const char*,const char*,double,const char*,int
#define tinycli_params_ssdsd const char*,const char*,double,const char*,double
#define tinycli_params_ssdss const char*,const char*,double,const char*,const char*
#define tinycli_params_ssdsl const char*,const char*,double,const char*,long long
#define tinycli_params_ssdli const char*,const char*,double,long long,int
#define tinycli_params_ssdld const char*,const char*,double,long long,double
#define tinycli_params_ssdls const char*,const char*,double,long long,const char*
#define tinycli_params_ssdll const char*,const char*,double,long long,long long
#define tinycli_params_sssii const char*,const char*,const char*,int,int
#define tinycli_params_sssid const char*,const char*,const char*,int,double
#define tinycli_params_sssis const char*,const char*,const char*,int,const char*
#define tinycli_params_sssil const char*,const char*,const char*,int,long long
#define tinycli_params_sssdi const char*,const char*,const char*,double,int
#define tinycli_params_sssdd const char*,const char*,const char*,double,double
#define tinycli_params_sssds const char*,const char*,const char*,double,const char*
#define tinycli_params_sssdl const char*,const char*,const char*,double,long long
#define tinycli_params_ssssi const char*,const char*,const char*,const char*,int
#define tinycli_params_ssssd const char*,const char*,const char*,const char*,double
#define tinycli_params_sssss const char*,const char*,const char*,const char*,const char*
#define tinycli_params_ssssl const char*,const char*,const char*,const char*,long long
#define tinycli_params_sssli const char*,const char*,const char*,long long,int
#define tinycli_params_sssld const char*,const char*,const char*,long long,double
#define tinycli_params_sssls const char*,const char*,const char*,long long,const char*
#define tinycli_params_sssll const char*,const char*,const char*,long long,long long
#define tinycli_params_sslii const char*,const char*,long long,int,int
#define tinycli_params_sslid const char*,const char*,long long,int,double
#define tinycli_params_sslis const char*,const char*,long long,int,const char*
#define tinycli_params_sslil const char*,const char*,long long,int,long long
#define tinycli_params_ssldi const char*,const char*,long long,double,int
#define tinycli_params_ssldd const char*,const char*,long long,double,double
#define tinycli_params_sslds const char*,const char*,long long,double,const char*
#define tinycli_params_ssldl const char*,const char*,long long,double,long long
#define tinycli_params_sslsi const char*,const char*,long long,const char*,int
#define tinycli_params_sslsd const char*,const char*,long long,const char*,double
#define tinycli_params_sslss const char*,const char*,long long,const char*,const char*
#define tinycli_params_sslsl const char*,const char*,long long,const char*,long long
#define tinycli_params_sslli const char*,const char*,long long,long long,int
#define tinycli_params_sslld const char*,const char*,long long,long long,double
#define tinycli_params_sslls const char*,const char*,long long,long long,const char*
#define tinycli_params_sslll const char*,const char*,long long,long long,long long
#define tinycli_params_sliii const char*,long long,int,int,int
#define tinycli_params_sliid const char*,long long,int,int,double
#define tinycli_params_sliis const char*,long long,int,int,const char*
#define tinycli_params_sliil const char*,long long,int,int,long long
#define tinycli_params_slidi const char*,long long,int,double,int
#define tinycli_params_slidd const char*,long long,int,double,double
#define tinycli_params_slids const char*,long long,int,double,const char*
#define tinycli_params_slidl const char*,long long,int,double,long long
#define tinycli_params_slisi const char*,long long,int,const char*,int
#define tinycli_params_slisd const char*,long long,int,const char*,double
#define tinycli_params_sliss const char*,long long,int,const char*,const char*
#define tinycli_params_slisl const char*,long long,int,const char*,long long
#define tinycli_params_slili const char*,long long,int,long long,int
#define tinycli_params_slild const char*,long long,int,long long,double
#define tinycli_params_slils const char*,long long,int,long long,const char*
#define tinycli_params_slill const char*,long long,int,long long,long long
#define tinycli_params_sldii const char*,long long,double,int,int
#define tinycli_params_sldid const char*,long long,double,int,double
#define tinycli_params_sldis const char*,long long,double,int,const char*
#define tinycli_params_sldil const char*,long long,double,int,long long
#define tinycli_params_slddi const char*,long long,double,double,int
#define tinycli_params_slddd const char*,long long,double,double,double
#define tinycli_params_sldds const char*,long long,double,double,const char*
#define tinycli_params_slddl const char*,long long,double,double,long long
#define tinycli_params_sldsi const char*,long long,double,const char*,int
#define tinycli_params_sldsd const char*,long long,double,const char*,double
#define tinycli_params_sldss const char*,long long,double,const char*,const char*
#define tinycli_params_sldsl const char*,long long,double,const char*,long long
#define tinycli_params_sldli const char*,long long,double,long long,int
#define tinycli_params_sldld const char*,long long,double,long long,double
#define tinycli_params_sldls const char*,long long,double,long long,const char*
#define tinycli_params_sldll const char*,long long,double,long long,long long
#define tinycli_params_slsii const char*,long long,const char*,int,int
#define tinycli_params_slsid const char*,long long,const char*,int,double
#define tinycli_params_slsis const char*,long long,const char*,int,const char*
#define tinycli_params_slsil const char*,long long,const char*,int,long long
#define tinycli_params_slsdi const char*,long long,const char*,double,int
#define tinycli_params_slsdd const char*,long long,const char*,double,double
#define tinycli_params_slsds const char*,long long,const char*,double,const char*
#define tinycli_params_slsdl const char*,long long,const char*,double,long long
#define tinycli_params_slssi const char*,long long,const char*,const char*,int
#define tinycli_params_slssd const char*,long long,const char*,const char*,double
#define tinycli_params_slsss const char*,long long,const char*,const char*,const char*
#define tinycli_params_slssl const char*,long long,const char*,const char*,long long
#define tinycli_params_slsli const char*,long long,const char*,long long,int
#define tinycli_params_slsld const char*,long long,const char*,long long,double
#define tinycli_params_slsls const char*,long long,const char*,long long,const char*
#define tinycli_params_slsll const char*,long long,const char*,long long,long long
#define tinycli_params_sllii const char*,long long,long long,int,int
#define tinycli_params_sllid const char*,long long,long long,int,double
#define tinycli_params_sllis const char*,long long,long long,int,const char*
#define tinycli_params_sllil const char*,long long,long long,int,long long
#define tinycli_params_slldi const char*,long long,long long,double,int
#define tinycli_params_slldd const char*,long long,long long,double,double
#define tinycli_params_sllds const char*,long long,long long,double,const char*
#define tinycli_params_slldl const char*,long long,long long,double,long long
#define tinycli_params_sllsi const char*,long long,long long,const char*,int
#define tinycli_params_sllsd const char*,long long,long long,const char*,double
#define tinycli_params_sllss const char*,long long,long long,const char*,const char*
#define tinycli_params_sllsl const char*,long long,long long,const char*,long long
#define tinycli_params_sllli const char*,long long,long long,long long,int
#define tinycli_params_sllld const char*,long long,long long,long long,double
#define tinycli_params_sllls const char*,long long,long long,long long,const char*
#define tinycli_params_sllll const char*,long long,long long,long long,long long
#define tinycli_params_liiii long long,int,int,int,int
#define tinycli_params_liiid long long,int,int,int,double
#define tinycli_params_liiis long long,int,int,int,const char*
#define tinycli_params_liiil long long,int,int,int,long long
#define tinycli_params_liidi long long,int,int,double,int
#define tinycli_params_liidd long long,int,int,double,double
#define tinycli_params_liids long long,int,int,double,const char*
#define tinycli_params_liidl long long,int,int,double,long long
#define tinycli_params_liisi long long,int,int,const char*,int
#define tinycli_params_liisd long long,int,int,const char*,double
#define tinycli_params_liiss long long,int,int,const char*,const char*
#define tinycli_params_liisl long long,int,int,const char*,long long
#define tinycli_params_liili long long,int,int,long long,int
#define tinycli_params_liild long long,int,int,long long,double
#define tinycli_params_liils long long,int,int,long long,const char*
#define tinycli_params_liill long long,int,int,long long,long long
#define tinycli_params_lidii long long,int,double,int,int
#define tinycli_params_lidid long long,int,double,int,double
#define tinycli_params_lidis long long,int,double,int,const char*
#define tinycli_params_lidil long long,int,double,int,long long
#define tinycli_params_liddi long long,int,double,double,int
#define tinycli_params_liddd long long,int,double,double,double
#define tinycli_params_lidds long long,int,double,double,const char*
#define tinycli_params_liddl long long,int,double,double,long long
#define tinycli_params_lidsi long long,int,double,const char*,int
#define tinycli_params_lidsd long long,int,double,const char*,double
#define tinycli_params_lidss long long,int,double,const char*,const char*
#define tinycli_params_lidsl long long,int,double,const char*,long long
#define tinycli_params_lidli long long,int,double,long long,int
#define tinycli_params_lidld long long,int,double,long long,double
#define tinycli_params_lidls long long,int,double,long long,const char*
#define tinycli_params_lidll long long,int,double,long long,long long
#define tinycli_params_lisii long long,int,const char*,int,int
#define tinycli_params_lisid long long,int,const char*,int,double
#define tinycli_params_lisis long long,int,const char*,int,const char*
#define tinycli_params_lisil long long,int,const char*,int,long long
#define tinycli_params_lisdi long long,int,const char*,double,int
#define tinycli_params_lisdd long long,int,const char*,double,double
#define tinycli_params_lisds long long,int,const char*,double,const char*
#define tinycli_params_lisdl long long,int,const char*,double,long long
#define tinycli_params_lissi long long,int,const char*,const char*,int
#define tinycli_params_lissd long long,int,const char*,const char*,double
#define tinycli_params_lisss long long,int,const char*,const char*,const char*
#define tinycli_params_lissl long long,int,const char*,const char*,long long
#define tinycli_params_lisli long long,int,const char*,long long,int
#define tinycli_params_lisld long long,int,const char*,long long,double
#define tinycli_params_lisls long long,int,const char*,long long,const char*
#define tinycli_params_lisll long long,int,const char*,long long,long long
#define tinycli_params_lilii long long,int,long long,int,int
#define tinycli_params_lilid long long,int,long long,int,double
#define tinycli_params_lilis long long,int,long long,int,const char*
#define tinycli_params_lilil long long,int,long long,int,long long
#define tinycli_params_lildi long long,int,long long,double,int
#define tinycli_params_lildd long long,int,long long,double,double
#define tinycli_params_lilds long long,int,long long,double,const char*
#define tinycli_params_lildl long long,int,long long,double,long long
#define tinycli_params_lilsi long long,int,long long,const char*,int
#define tinycli_params_lilsd long long,int,long long,const char*,double
#define tinycli_params_lilss long long,int,long long,const char*,const char*
#define tinycli_params_lilsl long long,int,long long,const char*,long long
#define tinycli_params_lilli long long,int,long long,long long,int
#define tinycli_params_lilld long long,int,long long,long long,double
#define tinycli_params_lills long long,int,long long,long long,const char*
#define tinycli_params_lilll long long,int,long long,long long,long long
#define tinycli_params_ldiii long long,double,int,int,int
#define tinycli_params_ldiid long long,double,int,int,double
#define tinycli_params_ldiis long long,double,int,int,const char*
#define tinycli_params_ldiil long long,double,int,int,long long
#define tinycli_params_ldidi long long,double,int,double,int
#define tinycli_params_ldidd long long,double,int,double,double
#define tinycli_params_ldids long long,double,int,double,const char*
#define tinycli_params_ldidl long long,double,int,double,long long
#define tinycli_params_ldisi long long,double,int,const char*,int
#define tinycli_params_ldisd long long,double,int,const char*,double
#define tinycli_params_ldiss long long,double,int,const char*,const char*
#define tinycli_params_ldisl long long,double,int,const char*,long long
#define tinycli_params_ldili long long,double,int,long long,int
#define tinycli_params_ldild long long,double,int,long long,double
#define tinycli_params_ldils long long,double,int,long long,const char*
#define tinycli_params_ldill long long,double,int,long long,long long
#define tinycli_params_lddii long long,double,double,int,int
#define tinycli_params_lddid long long,double,double,int,double
#define tinycli_params_lddis long long,double,double,int,const char*
#define tinycli_params_lddil long long,double,double,int,long long
#define tinycli_params_ldddi long long,double,double,double,int
#define tinycli_params_ldddd long long,double,double,double,double
#define tinycli_params_lddds long long,double,double,double,const char*
#define tinycli_params_ldddl long long,double,double,double,long long
#define tinycli_params_lddsi long long,double,double,const char*,int
#define tinycli_params_lddsd long long,double,double,const char*,double
#define tinycli_params_lddss long long,double,double,const char*,const char*
#define tinycli_params_lddsl long long,double,double,const char*,long long
#define tinycli_params_lddli long long,double,double,long long,int
#define tinycli_params_lddld long long,double,double,long long,double
#define tinycli_params_lddls long long,double,double,long long,const char*
#define tinycli_params_lddll long long,double,double,long long,long long
#define tinycli_params_ldsii long long,double,const char*,int,int
#define tinycli_params_ldsid long long,double,const char*,int,double
#define tinycli_params_ldsis long long,double,const char*,int,const char*
#define tinycli_params_ldsil long long,double,const char*,int,long long
#define tinycli_params_ldsdi long long,double,const char*,double,int
#define tinycli_params_ldsdd long long,double,const char*,double,double
#define tinycli_params_ldsds long long,double,const char*,double,const char*
#define tinycli_params_ldsdl long long,double,const char*,double,long long
#define tinycli_params_ldssi long long,double,const char*,const char*,int
#define tinycli_params_ldssd long long,double,const char*,const char*,double
#define tinycli_params_ldsss long long,double,const char*,const char*,const char*
#define tinycli_params_ldssl long long,double,const char*,const char*,long long
#define tinycli_params_ldsli long long,double,const char*,long long,int
#define tinycli_params_ldsld long long,double,const char*,long long,double
#define tinycli_params_ldsls long long,double,const char*,long long,const char*
#define tinycli_params_ldsll long long,double,const char*,long long,long long
#define tinycli_params_ldlii long long,double,long long,int,int
#define tinycli_params_ldlid long long,double,long long,int,double
#define tinycli_params_ldlis long long,double,long long,int,const char*
#define tinycli_params_ldlil long long,double,long long,int,long long
#define tinycli_params_ldldi long long,double,long long,double,int
#define tinycli_params_ldldd long long,double,long long,double,double
#define tinycli_params_ldlds long long,double,long long,double,const char*
#define tinycli_params_ldldl long long,double,long long,double,long long
#define tinycli_params_ldlsi long long,double,long long,const char*,int
#define tinycli_params_ldlsd long long,double,long long,const char*,double
#define tinycli_params_ldlss long long,double,long long,const char*,const char*
#define tinycli_params_ldlsl long long,double,long long,const char*,long long
#define tinycli_params_ldlli long long,double,long long,long long,int
#define tinycli_params_ldlld long long,double,long long,long long,double
#define tinycli_params_ldlls long long,double,long long,long long,const char*
#define tinycli_params_ldlll long long,double,long long,long long,long long
#define tinycli_params_lsiii long long,const char*,int,int,int
#define tinycli_params_lsiid long long,const char*,int,int,double
#define tinycli_params_lsiis long long,const char*,int,int,const char*
#define tinycli_params_lsiil long long,const char*,int,int,long long
#define tinycli_params_lsidi long long,const char*,int,double,int
#define tinycli_params_lsidd long long,const char*,int,double,double
#define tinycli_params_lsids long long,const char*,int,double,const char*
#define tinycli_params_lsidl long long,const char*,int,double,long long
#define tinycli_params_lsisi long long,const char*,int,const char*,int
#define tinycli_params_lsisd long long,const char*,int,const char*,double
#define tinycli_params_lsiss long long,const char*,int,const char*,const char*
#define tinycli_params_lsisl long long,const char*,int,const char*,long long
#define tinycli_params_lsili long long,const char*,int,long long,int
#define tinycli_params_lsild long long,const char*,int,long long,double
#define tinycli_params_lsils long long,const char*,int,long long,const char*
#define tinycli_params_lsill long long,const char*,int,long long,long long
#define tinycli_params_lsdii long long,const char*,double,int,int
#define tinycli_params_lsdid long long,const char*,double,int,double
#define tinycli_params_lsdis long long,const char*,double,int,const char*
#define tinycli_params_lsdil long long,const char*,double,int,long long
#define tinycli_params_lsddi long long,const char*,double,double,int
#define tinycli_params_lsddd long long,const char*,double,double,double
#define tinycli_params_lsdds long long,const char*,double,double,const char*
#define tinycli_params_lsddl long long,const char*,double,double,long long
#define tinycli_params_lsdsi long long,const char*,double,const char*,int
#define tinycli_params_lsdsd long long,const char*,double,const char*,double
#define tinycli_params_lsdss long long,const char*,double,const char*,const char*
#define tinycli_params_lsdsl long long,const char*,double,const char*,long long
#define tinycli_params_lsdli long long,const char*,double,long long,int
#define tinycli_params_lsdld long long,const char*,double,long long,double
#define tinycli_params_lsdls long long,const char*,double,long long,const char*
#define tinycli_params_lsdll long long,const char*,double,long long,long long
#define tinycli_params_lssii long long,const char*,const char*,int,int
#define tinycli_params_lssid long long,const char*,const char*,int,double
#define tinycli_params_lssis long long,const char*,const char*,int,const char*
#define tinycli_params_lssil long long,const char*,const char*,int,long long
#define tinycli_params_lssdi long long,const char*,const char*,double,int
#define tinycli_params_lssdd long long,const char*,const char*,double,double
#define tinycli_params_lssds long long,const char*,const char*,double,const char*
#define tinycli_params_lssdl long long,const char*,const char*,double,long long
#define tinycli_params_lsssi long long,const char*,const char*,const char*,int
#define tinycli_params_lsssd long long,const char*,const char*,const char*,double
#define tinycli_params_lssss long long,const char*,const char*,const char*,const char*
#define tinycli_params_lsssl long long,const char*,const char*,const char*,long long
#define tinycli_params_lssli long long,const char*,const char*,long long,int
#define tinycli_params_lssld long long,const char*,const char*,long long,double
#define tinycli_params_lssls long long,const char*,const char*,long long,const char*
#define tinycli_params_lssll long long,const char*,const char*,long long,long long
#define tinycli_params_lslii long long,const char*,long long,int,int
#define tinycli_params_lslid long long,const char*,long long,int,double
#define tinycli_params_lslis long long,const char*,long long,int,const char*
#define tinycli_params_lslil long long,const char*,long long,int,long long
#define tinycli_params_lsldi long long,const char*,long long,double,int
#define tinycli_params_lsldd long long,const char*,long long,double,double
#define tinycli_params_lslds long long,const char*,long long,double,const char*
#define tinycli_params_lsldl long long,const char*,long long,double,long long
#define tinycli_params_lslsi long long,const char*,long long,const char*,int
#define tinycli_params_lslsd long long,const char*,long long,const char*,double
#define tinycli_params_lslss long long,const char*,long long,const char*,const char*
#define tinycli_params_lslsl long long,const char*,long long,const char*,long long
#define tinycli_params_lslli long long,const char*,long long,long long,int
#define tinycli_params_lslld long long,const char*,long long,long long,double
#define tinycli_params_lslls long long,const char*,long long,long long,const char*
#define tinycli_params_lslll long long,const char*,long long,long long,long long
#define tinycli_params_lliii long long,long long,int,int,int
#define tinycli_params_lliid long long,long long,int,int,double
#define tinycli_params_lliis long long,long long,int,int,const char*
#define tinycli_params_lliil long long,long long,int,int,long long
#define tinycli_params_llidi long long,long long,int,double,int
#define tinycli_params_llidd long long,long long,int,double,double
#define tinycli_params_llids long long,long long,int,double,const char*
#define tinycli_params_llidl long long,long long,int,double,long long
#define tinycli_params_llisi long long,long long,int,const char*,int
#define tinycli_params_llisd long long,long long,int,const char*,double
#define tinycli_params_lliss long long,long long,int,const char*,const char*
#define tinycli_params_llisl long long,long long,int,const char*,long long
#define tinycli_params_llili long long,long long,int,long long,int
#define tinycli_params_llild long long,long long,int,long long,double
#define tinycli_params_llils long long,long long,int,long long,const char*
#define tinycli_params_llill long long,long long,int,long long,long long
#define tinycli_params_lldii long long,long long,double,int,int
#define tinycli_params_lldid long long,long long,double,int,double
#define tinycli_params_lldis long long,long long,double,int,const char*
#define tinycli_params_lldil long long,long long,double,int,long long
#define tinycli_params_llddi long long,long long,double,double,int
#define tinycli_params_llddd long long,long long,double,double,double
#define tinycli_params_lldds long long,long long,double,double,const char*
#define tinycli_params_llddl long long,long long,double,double,long long
#define tinycli_params_lldsi long long,long long,double,const char*,int
#define tinycli_params_lldsd long long,long long,double,const char*,double
#define tinycli_params_lldss long long,long long,double,const char*,const char*
#define tinycli_params_lldsl long long,long long,double,const char*,long long
#define tinycli_params_lldli long long,long long,double,long long,int
#define tinycli_params_lldld long long,long long,double,long long,double
#define tinycli_params_lldls long long,long long,double,long long,const char*
#define tinycli_params_lldll long long,long long,double,long long,long long
#define tinycli_params_llsii long long,long long,const char*,int,int
#define tinycli_params_llsid long long,long long,const char*,int,double
#define tinycli_params_llsis long long,long long,const char*,int,const char*
#define tinycli_params_llsil long long,long long,const char*,int,long long
#define tinycli_params_llsdi long long,long long,const char*,double,int
#define tinycli_params_llsdd long long,long long,const char*,double,double
#define tinycli_params_llsds long long,long long,const char*,double,const char*
#define tinycli_params_llsdl long long,long long,const char*,double,long long
#define tinycli_params_llssi long long,long long,const char*,const char*,int
#define tinycli_params_llssd long long,long long,const char*,const char*,double
#define tinycli_params_llsss long long,long long,const char*,const char*,const char*
#define tinycli_params_llssl long long,long long,const char*,const char*,long long
#define tinycli_params_llsli long long,long long,const char*,long long,int
#define tinycli_params_llsld long long,long long,const char*,long long,double
#define tinycli_params_llsls long long,long long,const char*,long long,const char*
#define tinycli_params_llsll long long,long long,const char*,long long,long long
#define tinycli_params_lllii long long,long long,long long,int,int
#define tinycli_params_lllid long long,long long,long long,int,double
#define tinycli_params_lllis long long,long long,long long,int,const char*
#define tinycli_params_lllil long long,long long,long long,int,long long
#define tinycli_params_llldi long long,long long,long long,double,int
#define tinycli_params_llldd long long,long long,long long,double,double
#define tinycli_params_lllds long long,long long,long long,double,const char*
#define tinycli_params_llldl long long,long long,long long,double,long long
#define tinycli_params_lllsi long long,long long,long long,const char*,int
#define tinycli_params_lllsd long long,long long,long long,const char*,double
#define tinycli_params_lllss long long,long long,long long,const char*,const char*
#define tinycli_params_lllsl long long,long long,long long,const char*,long long
#define tinycli_params_lllli long long,long long,long long,long long,int
#define tinycli_params_lllld long long,long long,long long,long long,double
#define tinycli_params_lllls long long,long long,long long,long long,const char*
#define tinycli_params_lllll long long,long long,long long,long long,long long
#define tinycli_args_v     
#define tinycli_args_i     tinycli_stoi(argv[1])
#define tinycli_args_d     tinycli_stod(argv[1])
#define tinycli_args_s     tinycli_stos(argv[1])
#define tinycli_args_l     tinycli_stoll(argv[1])
#define tinycli_args_ii    tinycli_stoi(argv[1]),tinycli_stoi(argv[2])
#define tinycli_args_id    tinycli_stoi(argv[1]),tinycli_stod(argv[2])
#define tinycli_args_is    tinycli_stoi(argv[1]),tinycli_stos(argv[2])
#define tinycli_args_il    tinycli_stoi(argv[1]),tinycli_stoll(argv[2])
#define tinycli_args_di    tinycli_stod(argv[1]),tinycli_stoi(argv[2])
#define tinycli_args_dd    tinycli_stod(argv[1]),tinycli_stod(argv[2])
#define tinycli_args_ds    tinycli_stod(argv[1]),tinycli_stos(argv[2])
#define tinycli_args_dl    tinycli_stod(argv[1]),tinycli_stoll(argv[2])
#define tinycli_args_si    tinycli_stos(argv[1]),tinycli_stoi(argv[2])
#define tinycli_args_sd    tinycli_stos(argv[1]),tinycli_stod(argv[2])
#define tinycli_args_ss    tinycli_stos(argv[1]),tinycli_stos(argv[2])
#define tinycli_args_sl    tinycli_stos(argv[1]),tinycli_stoll(argv[2])
#define tinycli_args_li    tinycli_stoll(argv[1]),tinycli_stoi(argv[2])
#define tinycli_args_ld    tinycli_stoll(argv[1]),tinycli_stod(argv[2])
#define tinycli_args_ls    tinycli_stoll(argv[1]),tinycli_stos(argv[2])
#define tinycli_args_ll    tinycli_stoll(argv[1]),tinycli_stoll(argv[2])
#define tinycli_args_iii   tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3])
#define tinycli_args_iid   tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3])
#define tinycli_args_iis   tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3])
#define tinycli_args_iil   tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3])
#define tinycli_args_idi   tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3])
#define tinycli_args_idd   tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3])
#define tinycli_args_ids   tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3])
#define tinycli_args_idl   tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3])
#define tinycli_args_isi   tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3])
#define tinycli_args_isd   tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3])
#define tinycli_args_iss   tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3])
#define tinycli_args_isl   tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3])
#define tinycli_args_ili   tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3])
#define tinycli_args_ild   tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3])
#define tinycli_args_ils   tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3])
#define tinycli_args_ill   tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3])
#define tinycli_args_dii   tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3])
#define tinycli_args_did   tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3])
#define tinycli_args_dis   tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3])
#define tinycli_args_dil   tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3])
#define tinycli_args_ddi   tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3])
#define tinycli_args_ddd   tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3])
#define tinycli_args_dds   tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3])
#define tinycli_args_ddl   tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3])
#define tinycli_args_dsi   tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3])
#define tinycli_args_dsd   tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3])
#define tinycli_args_dss   tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3])
#define tinycli_args_dsl   tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3])
#define tinycli_args_dli   tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3])
#define tinycli_args_dld   tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3])
#define tinycli_args_dls   tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3])
#define tinycli_args_dll   tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3])
#define tinycli_args_sii   tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3])
#define tinycli_args_sid   tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3])
#define tinycli_args_sis   tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3])
#define tinycli_args_sil   tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3])
#define tinycli_args_sdi   tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3])
#define tinycli_args_sdd   tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3])
#define tinycli_args_sds   tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3])
#define tinycli_args_sdl   tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3])
#define tinycli_args_ssi   tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3])
#define tinycli_args_ssd   tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3])
#define tinycli_args_sss   tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3])
#define tinycli_args_ssl   tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3])
#define tinycli_args_sli   tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3])
#define tinycli_args_sld   tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3])
#define tinycli_args_sls   tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3])
#define tinycli_args_sll   tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3])
#define tinycli_args_lii   tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3])
#define tinycli_args_lid   tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3])
#define tinycli_args_lis   tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3])
#define tinycli_args_lil   tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3])
#define tinycli_args_ldi   tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3])
#define tinycli_args_ldd   tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3])
#define tinycli_args_lds   tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3])
#define tinycli_args_ldl   tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3])
#define tinycli_args_lsi   tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3])
#define tinycli_args_lsd   tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3])
#define tinycli_args_lss   tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3])
#define tinycli_args_lsl   tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3])
#define tinycli_args_lli   tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3])
#define tinycli_args_lld   tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3])
#define tinycli_args_lls   tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3])
#define tinycli_args_lll   tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3])
#define tinycli_args_iiii  tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_iiid  tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_iiis  tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_iiil  tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_iidi  tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_iidd  tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_iids  tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_iidl  tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_iisi  tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_iisd  tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_iiss  tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_iisl  tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_iili  tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_iild  tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_iils  tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_iill  tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_idii  tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_idid  tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_idis  tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_idil  tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_iddi  tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_iddd  tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_idds  tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_iddl  tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_idsi  tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_idsd  tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_idss  tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_idsl  tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_idli  tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_idld  tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_idls  tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_idll  tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_isii  tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_isid  tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_isis  tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_isil  tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_isdi  tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_isdd  tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_isds  tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_isdl  tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_issi  tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_issd  tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_isss  tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_issl  tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_isli  tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_isld  tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_isls  tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_isll  tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_ilii  tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_ilid  tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_ilis  tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_ilil  tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_ildi  tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_ildd  tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_ilds  tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_ildl  tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_ilsi  tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_ilsd  tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_ilss  tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_ilsl  tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_illi  tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_illd  tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_ills  tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_illl  tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_diii  tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_diid  tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_diis  tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_diil  tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_didi  tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_didd  tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_dids  tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_didl  tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_disi  tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_disd  tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_diss  tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_disl  tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_dili  tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_dild  tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_dils  tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_dill  tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_ddii  tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_ddid  tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_ddis  tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_ddil  tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_dddi  tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_dddd  tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_ddds  tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_dddl  tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_ddsi  tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_ddsd  tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_ddss  tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_ddsl  tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_ddli  tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_ddld  tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_ddls  tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_ddll  tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_dsii  tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_dsid  tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_dsis  tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_dsil  tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_dsdi  tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_dsdd  tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_dsds  tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_dsdl  tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_dssi  tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_dssd  tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_dsss  tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_dssl  tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_dsli  tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_dsld  tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_dsls  tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_dsll  tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_dlii  tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_dlid  tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_dlis  tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_dlil  tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_dldi  tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_dldd  tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_dlds  tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_dldl  tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_dlsi  tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_dlsd  tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_dlss  tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_dlsl  tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_dlli  tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_dlld  tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_dlls  tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_dlll  tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_siii  tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_siid  tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_siis  tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_siil  tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_sidi  tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_sidd  tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_sids  tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_sidl  tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_sisi  tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_sisd  tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_siss  tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_sisl  tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_sili  tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_sild  tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_sils  tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_sill  tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_sdii  tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_sdid  tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_sdis  tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_sdil  tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_sddi  tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_sddd  tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_sdds  tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_sddl  tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_sdsi  tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_sdsd  tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_sdss  tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_sdsl  tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_sdli  tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_sdld  tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_sdls  tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_sdll  tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_ssii  tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_ssid  tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_ssis  tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_ssil  tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_ssdi  tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_ssdd  tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_ssds  tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_ssdl  tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_sssi  tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_sssd  tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_ssss  tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_sssl  tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_ssli  tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_ssld  tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_ssls  tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_ssll  tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_slii  tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_slid  tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_slis  tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_slil  tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_sldi  tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_sldd  tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_slds  tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_sldl  tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_slsi  tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_slsd  tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_slss  tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_slsl  tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_slli  tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_slld  tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_slls  tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_slll  tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_liii  tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_liid  tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_liis  tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_liil  tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_lidi  tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_lidd  tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_lids  tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_lidl  tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_lisi  tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_lisd  tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_liss  tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_lisl  tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_lili  tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_lild  tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_lils  tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_lill  tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_ldii  tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_ldid  tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_ldis  tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_ldil  tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_lddi  tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_lddd  tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_ldds  tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_lddl  tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_ldsi  tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_ldsd  tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_ldss  tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_ldsl  tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_ldli  tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_ldld  tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_ldls  tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_ldll  tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_lsii  tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_lsid  tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_lsis  tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_lsil  tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_lsdi  tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_lsdd  tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_lsds  tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_lsdl  tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_lssi  tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_lssd  tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_lsss  tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_lssl  tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_lsli  tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_lsld  tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_lsls  tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_lsll  tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_llii  tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_llid  tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_llis  tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_llil  tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_lldi  tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_lldd  tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_llds  tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_lldl  tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_llsi  tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_llsd  tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_llss  tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_llsl  tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_llli  tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4])
#define tinycli_args_llld  tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4])
#define tinycli_args_llls  tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4])
#define tinycli_args_llll  tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4])
#define tinycli_args_iiiii tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_iiiid tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_iiiis tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_iiiil tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_iiidi tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_iiidd tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_iiids tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_iiidl tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_iiisi tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_iiisd tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_iiiss tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_iiisl tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_iiili tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_iiild tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_iiils tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_iiill tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_iidii tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_iidid tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_iidis tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_iidil tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_iiddi tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_iiddd tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_iidds tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_iiddl tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_iidsi tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_iidsd tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_iidss tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_iidsl tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_iidli tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_iidld tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_iidls tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_iidll tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_iisii tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_iisid tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_iisis tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_iisil tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_iisdi tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_iisdd tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_iisds tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_iisdl tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_iissi tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_iissd tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_iisss tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_iissl tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_iisli tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_iisld tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_iisls tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_iisll tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_iilii tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_iilid tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_iilis tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_iilil tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_iildi tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_iildd tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_iilds tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_iildl tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_iilsi tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_iilsd tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_iilss tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_iilsl tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_iilli tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_iilld tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_iills tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_iilll tinycli_stoi(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_idiii tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_idiid tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_idiis tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_idiil tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ididi tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ididd tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_idids tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ididl tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_idisi tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_idisd tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_idiss tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_idisl tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_idili tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_idild tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_idils tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_idill tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_iddii tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_iddid tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_iddis tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_iddil tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_idddi tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_idddd tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_iddds tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_idddl tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_iddsi tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_iddsd tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_iddss tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_iddsl tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_iddli tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_iddld tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_iddls tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_iddll tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_idsii tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_idsid tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_idsis tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_idsil tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_idsdi tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_idsdd tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_idsds tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_idsdl tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_idssi tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_idssd tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_idsss tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_idssl tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_idsli tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_idsld tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_idsls tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_idsll tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_idlii tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_idlid tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_idlis tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_idlil tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_idldi tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_idldd tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_idlds tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_idldl tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_idlsi tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_idlsd tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_idlss tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_idlsl tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_idlli tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_idlld tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_idlls tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_idlll tinycli_stoi(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_isiii tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_isiid tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_isiis tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_isiil tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_isidi tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_isidd tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_isids tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_isidl tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_isisi tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_isisd tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_isiss tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_isisl tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_isili tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_isild tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_isils tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_isill tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_isdii tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_isdid tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_isdis tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_isdil tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_isddi tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_isddd tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_isdds tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_isddl tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_isdsi tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_isdsd tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_isdss tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_isdsl tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_isdli tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_isdld tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_isdls tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_isdll tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_issii tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_issid tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_issis tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_issil tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_issdi tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_issdd tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_issds tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_issdl tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_isssi tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_isssd tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_issss tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_isssl tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_issli tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_issld tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_issls tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_issll tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_islii tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_islid tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_islis tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_islil tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_isldi tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_isldd tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_islds tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_isldl tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_islsi tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_islsd tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_islss tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_islsl tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_islli tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_islld tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_islls tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_islll tinycli_stoi(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_iliii tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_iliid tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_iliis tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_iliil tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ilidi tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ilidd tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ilids tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ilidl tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ilisi tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ilisd tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_iliss tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ilisl tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ilili tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ilild tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ilils tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ilill tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ildii tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ildid tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ildis tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ildil tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ilddi tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ilddd tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ildds tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ilddl tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ildsi tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ildsd tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ildss tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ildsl tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ildli tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ildld tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ildls tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ildll tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ilsii tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ilsid tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ilsis tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ilsil tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ilsdi tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ilsdd tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ilsds tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ilsdl tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ilssi tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ilssd tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ilsss tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ilssl tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ilsli tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ilsld tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ilsls tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ilsll tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_illii tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_illid tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_illis tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_illil tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_illdi tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_illdd tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_illds tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_illdl tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_illsi tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_illsd tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_illss tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_illsl tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_illli tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_illld tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_illls tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_illll tinycli_stoi(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_diiii tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_diiid tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_diiis tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_diiil tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_diidi tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_diidd tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_diids tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_diidl tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_diisi tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_diisd tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_diiss tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_diisl tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_diili tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_diild tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_diils tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_diill tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_didii tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_didid tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_didis tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_didil tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_diddi tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_diddd tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_didds tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_diddl tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_didsi tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_didsd tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_didss tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_didsl tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_didli tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_didld tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_didls tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_didll tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_disii tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_disid tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_disis tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_disil tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_disdi tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_disdd tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_disds tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_disdl tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dissi tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dissd tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_disss tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dissl tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_disli tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_disld tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_disls tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_disll tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dilii tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dilid tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dilis tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dilil tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dildi tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dildd tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dilds tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dildl tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dilsi tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dilsd tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dilss tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dilsl tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dilli tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dilld tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dills tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dilll tinycli_stod(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ddiii tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ddiid tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ddiis tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ddiil tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ddidi tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ddidd tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ddids tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ddidl tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ddisi tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ddisd tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ddiss tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ddisl tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ddili tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ddild tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ddils tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ddill tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dddii tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dddid tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dddis tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dddil tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ddddi tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ddddd tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dddds tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ddddl tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dddsi tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dddsd tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dddss tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dddsl tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dddli tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dddld tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dddls tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dddll tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ddsii tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ddsid tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ddsis tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ddsil tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ddsdi tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ddsdd tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ddsds tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ddsdl tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ddssi tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ddssd tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ddsss tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ddssl tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ddsli tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ddsld tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ddsls tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ddsll tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ddlii tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ddlid tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ddlis tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ddlil tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ddldi tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ddldd tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ddlds tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ddldl tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ddlsi tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ddlsd tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ddlss tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ddlsl tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ddlli tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ddlld tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ddlls tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ddlll tinycli_stod(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dsiii tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dsiid tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dsiis tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dsiil tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dsidi tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dsidd tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dsids tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dsidl tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dsisi tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dsisd tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dsiss tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dsisl tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dsili tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dsild tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dsils tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dsill tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dsdii tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dsdid tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dsdis tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dsdil tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dsddi tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dsddd tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dsdds tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dsddl tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dsdsi tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dsdsd tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dsdss tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dsdsl tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dsdli tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dsdld tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dsdls tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dsdll tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dssii tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dssid tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dssis tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dssil tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dssdi tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dssdd tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dssds tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dssdl tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dsssi tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dsssd tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dssss tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dsssl tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dssli tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dssld tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dssls tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dssll tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dslii tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dslid tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dslis tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dslil tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dsldi tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dsldd tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dslds tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dsldl tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dslsi tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dslsd tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dslss tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dslsl tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dslli tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dslld tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dslls tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dslll tinycli_stod(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dliii tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dliid tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dliis tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dliil tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dlidi tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dlidd tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dlids tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dlidl tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dlisi tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dlisd tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dliss tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dlisl tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dlili tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dlild tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dlils tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dlill tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dldii tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dldid tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dldis tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dldil tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dlddi tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dlddd tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dldds tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dlddl tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dldsi tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dldsd tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dldss tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dldsl tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dldli tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dldld tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dldls tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dldll tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dlsii tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dlsid tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dlsis tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dlsil tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dlsdi tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dlsdd tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dlsds tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dlsdl tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dlssi tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dlssd tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dlsss tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dlssl tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dlsli tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dlsld tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dlsls tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dlsll tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dllii tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dllid tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dllis tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dllil tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dlldi tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dlldd tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dllds tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dlldl tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dllsi tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dllsd tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dllss tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dllsl tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_dllli tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_dllld tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_dllls tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_dllll tinycli_stod(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_siiii tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_siiid tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_siiis tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_siiil tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_siidi tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_siidd tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_siids tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_siidl tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_siisi tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_siisd tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_siiss tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_siisl tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_siili tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_siild tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_siils tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_siill tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sidii tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sidid tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sidis tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sidil tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_siddi tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_siddd tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sidds tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_siddl tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sidsi tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sidsd tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sidss tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sidsl tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sidli tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sidld tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sidls tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sidll tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sisii tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sisid tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sisis tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sisil tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sisdi tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sisdd tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sisds tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sisdl tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sissi tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sissd tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sisss tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sissl tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sisli tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sisld tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sisls tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sisll tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_silii tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_silid tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_silis tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_silil tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sildi tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sildd tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_silds tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sildl tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_silsi tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_silsd tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_silss tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_silsl tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_silli tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_silld tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sills tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_silll tinycli_stos(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sdiii tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sdiid tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sdiis tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sdiil tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sdidi tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sdidd tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sdids tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sdidl tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sdisi tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sdisd tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sdiss tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sdisl tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sdili tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sdild tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sdils tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sdill tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sddii tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sddid tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sddis tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sddil tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sdddi tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sdddd tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sddds tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sdddl tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sddsi tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sddsd tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sddss tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sddsl tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sddli tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sddld tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sddls tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sddll tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sdsii tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sdsid tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sdsis tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sdsil tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sdsdi tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sdsdd tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sdsds tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sdsdl tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sdssi tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sdssd tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sdsss tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sdssl tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sdsli tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sdsld tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sdsls tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sdsll tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sdlii tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sdlid tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sdlis tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sdlil tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sdldi tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sdldd tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sdlds tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sdldl tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sdlsi tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sdlsd tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sdlss tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sdlsl tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sdlli tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sdlld tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sdlls tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sdlll tinycli_stos(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ssiii tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ssiid tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ssiis tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ssiil tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ssidi tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ssidd tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ssids tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ssidl tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ssisi tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ssisd tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ssiss tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ssisl tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ssili tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ssild tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ssils tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ssill tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ssdii tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ssdid tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ssdis tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ssdil tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ssddi tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ssddd tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ssdds tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ssddl tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ssdsi tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ssdsd tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ssdss tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ssdsl tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ssdli tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ssdld tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ssdls tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ssdll tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sssii tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sssid tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sssis tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sssil tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sssdi tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sssdd tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sssds tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sssdl tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ssssi tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ssssd tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sssss tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ssssl tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sssli tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sssld tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sssls tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sssll tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sslii tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sslid tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sslis tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sslil tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ssldi tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ssldd tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sslds tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ssldl tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sslsi tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sslsd tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sslss tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sslsl tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sslli tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sslld tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sslls tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sslll tinycli_stos(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sliii tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sliid tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sliis tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sliil tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_slidi tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_slidd tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_slids tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_slidl tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_slisi tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_slisd tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sliss tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_slisl tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_slili tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_slild tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_slils tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_slill tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sldii tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sldid tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sldis tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sldil tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_slddi tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_slddd tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sldds tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_slddl tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sldsi tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sldsd tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sldss tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sldsl tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sldli tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sldld tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sldls tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sldll tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_slsii tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_slsid tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_slsis tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_slsil tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_slsdi tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_slsdd tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_slsds tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_slsdl tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_slssi tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_slssd tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_slsss tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_slssl tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_slsli tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_slsld tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_slsls tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_slsll tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sllii tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sllid tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sllis tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sllil tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_slldi tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_slldd tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sllds tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_slldl tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sllsi tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sllsd tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sllss tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sllsl tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_sllli tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_sllld tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_sllls tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_sllll tinycli_stos(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_liiii tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_liiid tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_liiis tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_liiil tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_liidi tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_liidd tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_liids tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_liidl tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_liisi tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_liisd tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_liiss tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_liisl tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_liili tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_liild tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_liils tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_liill tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lidii tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lidid tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lidis tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lidil tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_liddi tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_liddd tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lidds tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_liddl tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lidsi tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lidsd tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lidss tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lidsl tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lidli tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lidld tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lidls tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lidll tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lisii tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lisid tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lisis tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lisil tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lisdi tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lisdd tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lisds tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lisdl tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lissi tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lissd tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lisss tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lissl tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lisli tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lisld tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lisls tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lisll tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lilii tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lilid tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lilis tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lilil tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lildi tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lildd tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lilds tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lildl tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lilsi tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lilsd tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lilss tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lilsl tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lilli tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lilld tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lills tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lilll tinycli_stoll(argv[1]),tinycli_stoi(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ldiii tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ldiid tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ldiis tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ldiil tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ldidi tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ldidd tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ldids tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ldidl tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ldisi tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ldisd tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ldiss tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ldisl tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ldili tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ldild tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ldils tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ldill tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lddii tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lddid tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lddis tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lddil tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ldddi tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ldddd tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lddds tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ldddl tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lddsi tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lddsd tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lddss tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lddsl tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lddli tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lddld tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lddls tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lddll tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ldsii tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ldsid tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ldsis tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ldsil tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ldsdi tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ldsdd tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ldsds tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ldsdl tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ldssi tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ldssd tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ldsss tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ldssl tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ldsli tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ldsld tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ldsls tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ldsll tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ldlii tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ldlid tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ldlis tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ldlil tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ldldi tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ldldd tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ldlds tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ldldl tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ldlsi tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ldlsd tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ldlss tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ldlsl tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_ldlli tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_ldlld tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_ldlls tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_ldlll tinycli_stoll(argv[1]),tinycli_stod(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lsiii tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lsiid tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lsiis tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lsiil tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lsidi tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lsidd tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lsids tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lsidl tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lsisi tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lsisd tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lsiss tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lsisl tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lsili tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lsild tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lsils tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lsill tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lsdii tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lsdid tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lsdis tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lsdil tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lsddi tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lsddd tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lsdds tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lsddl tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lsdsi tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lsdsd tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lsdss tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lsdsl tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lsdli tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lsdld tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lsdls tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lsdll tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lssii tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lssid tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lssis tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lssil tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lssdi tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lssdd tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lssds tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lssdl tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lsssi tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lsssd tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lssss tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lsssl tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lssli tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lssld tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lssls tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lssll tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lslii tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lslid tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lslis tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lslil tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lsldi tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lsldd tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lslds tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lsldl tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lslsi tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lslsd tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lslss tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lslsl tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lslli tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lslld tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lslls tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lslll tinycli_stoll(argv[1]),tinycli_stos(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lliii tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lliid tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lliis tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lliil tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_llidi tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_llidd tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_llids tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_llidl tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_llisi tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_llisd tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lliss tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_llisl tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_llili tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_llild tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_llils tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_llill tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoi(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lldii tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lldid tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lldis tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lldil tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_llddi tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_llddd tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lldds tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_llddl tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lldsi tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lldsd tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lldss tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lldsl tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lldli tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lldld tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lldls tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lldll tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stod(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_llsii tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_llsid tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_llsis tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_llsil tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_llsdi tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_llsdd tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_llsds tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_llsdl tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_llssi tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_llssd tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_llsss tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_llssl tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_llsli tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_llsld tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_llsls tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_llsll tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stos(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lllii tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lllid tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lllis tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lllil tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoi(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_llldi tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_llldd tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lllds tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_llldl tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stod(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lllsi tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lllsd tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lllss tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lllsl tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stos(argv[4]),tinycli_stoll(argv[5])
#define tinycli_args_lllli tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoi(argv[5])
#define tinycli_args_lllld tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stod(argv[5])
#define tinycli_args_lllls tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stos(argv[5])
#define tinycli_args_lllll tinycli_stoll(argv[1]),tinycli_stoll(argv[2]),tinycli_stoll(argv[3]),tinycli_stoll(argv[4]),tinycli_stoll(argv[5])
#define tinycli_nargs_v     0
#define tinycli_nargs_i     1
#define tinycli_nargs_d     1
#define tinycli_nargs_s     1
#define tinycli_nargs_l     1
#define tinycli_nargs_ii    2
#define tinycli_nargs_id    2
#define tinycli_nargs_is    2
#define tinycli_nargs_il    2
#define tinycli_nargs_di    2
#define tinycli_nargs_dd    2
#define tinycli_nargs_ds    2
#define tinycli_nargs_dl    2
#define tinycli_nargs_si    2
#define tinycli_nargs_sd    2
#define tinycli_nargs_ss    2
#define tinycli_nargs_sl    2
#define tinycli_nargs_li    2
#define tinycli_nargs_ld    2
#define tinycli_nargs_ls    2
#define tinycli_nargs_ll    2
#define tinycli_nargs_iii   3
#define tinycli_nargs_iid   3
#define tinycli_nargs_iis   3
#define tinycli_nargs_iil   3
#define tinycli_nargs_idi   3
#define tinycli_nargs_idd   3
#define tinycli_nargs_ids   3
#define tinycli_nargs_idl   3
#define tinycli_nargs_isi   3
#define tinycli_nargs_isd   3
#define tinycli_nargs_iss   3
#define tinycli_nargs_isl   3
#define tinycli_nargs_ili   3
#define tinycli_nargs_ild   3
#define tinycli_nargs_ils   3
#define tinycli_nargs_ill   3
#define tinycli_nargs_dii   3
#define tinycli_nargs_did   3
#define tinycli_nargs_dis   3
#define tinycli_nargs_dil   3
#define tinycli_nargs_ddi   3
#define tinycli_nargs_ddd   3
#define tinycli_nargs_dds   3
#define tinycli_nargs_ddl   3
#define tinycli_nargs_dsi   3
#define tinycli_nargs_dsd   3
#define tinycli_nargs_dss   3
#define tinycli_nargs_dsl   3
#define tinycli_nargs_dli   3
#define tinycli_nargs_dld   3
#define tinycli_nargs_dls   3
#define tinycli_nargs_dll   3
#define tinycli_nargs_sii   3
#define tinycli_nargs_sid   3
#define tinycli_nargs_sis   3
#define tinycli_nargs_sil   3
#define tinycli_nargs_sdi   3
#define tinycli_nargs_sdd   3
#define tinycli_nargs_sds   3
#define tinycli_nargs_sdl   3
#define tinycli_nargs_ssi   3
#define tinycli_nargs_ssd   3
#define tinycli_nargs_sss   3
#define tinycli_nargs_ssl   3
#define tinycli_nargs_sli   3
#define tinycli_nargs_sld   3
#define tinycli_nargs_sls   3
#define tinycli_nargs_sll   3
#define tinycli_nargs_lii   3
#define tinycli_nargs_lid   3
#define tinycli_nargs_lis   3
#define tinycli_nargs_lil   3
#define tinycli_nargs_ldi   3
#define tinycli_nargs_ldd   3
#define tinycli_nargs_lds   3
#define tinycli_nargs_ldl   3
#define tinycli_nargs_lsi   3
#define tinycli_nargs_lsd   3
#define tinycli_nargs_lss   3
#define tinycli_nargs_lsl   3
#define tinycli_nargs_lli   3
#define tinycli_nargs_lld   3
#define tinycli_nargs_lls   3
#define tinycli_nargs_lll   3
#define tinycli_nargs_iiii  4
#define tinycli_nargs_iiid  4
#define tinycli_nargs_iiis  4
#define tinycli_nargs_iiil  4
#define tinycli_nargs_iidi  4
#define tinycli_nargs_iidd  4
#define tinycli_nargs_iids  4
#define tinycli_nargs_iidl  4
#define tinycli_nargs_iisi  4
#define tinycli_nargs_iisd  4
#define tinycli_nargs_iiss  4
#define tinycli_nargs_iisl  4
#define tinycli_nargs_iili  4
#define tinycli_nargs_iild  4
#define tinycli_nargs_iils  4
#define tinycli_nargs_iill  4
#define tinycli_nargs_idii  4
#define tinycli_nargs_idid  4
#define tinycli_nargs_idis  4
#define tinycli_nargs_idil  4
#define tinycli_nargs_iddi  4
#define tinycli_nargs_iddd  4
#define tinycli_nargs_idds  4
#define tinycli_nargs_iddl  4
#define tinycli_nargs_idsi  4
#define tinycli_nargs_idsd  4
#define tinycli_nargs_idss  4
#define tinycli_nargs_idsl  4
#define tinycli_nargs_idli  4
#define tinycli_nargs_idld  4
#define tinycli_nargs_idls  4
#define tinycli_nargs_idll  4
#define tinycli_nargs_isii  4
#define tinycli_nargs_isid  4
#define tinycli_nargs_isis  4
#define tinycli_nargs_isil  4
#define tinycli_nargs_isdi  4
#define tinycli_nargs_isdd  4
#define tinycli_nargs_isds  4
#define tinycli_nargs_isdl  4
#define tinycli_nargs_issi  4
#define tinycli_nargs_issd  4
#define tinycli_nargs_isss  4
#define tinycli_nargs_issl  4
#define tinycli_nargs_isli  4
#define tinycli_nargs_isld  4
#define tinycli_nargs_isls  4
#define tinycli_nargs_isll  4
#define tinycli_nargs_ilii  4
#define tinycli_nargs_ilid  4
#define tinycli_nargs_ilis  4
#define tinycli_nargs_ilil  4
#define tinycli_nargs_ildi  4
#define tinycli_nargs_ildd  4
#define tinycli_nargs_ilds  4
#define tinycli_nargs_ildl  4
#define tinycli_nargs_ilsi  4
#define tinycli_nargs_ilsd  4
#define tinycli_nargs_ilss  4
#define tinycli_nargs_ilsl  4
#define tinycli_nargs_illi  4
#define tinycli_nargs_illd  4
#define tinycli_nargs_ills  4
#define tinycli_nargs_illl  4
#define tinycli_nargs_diii  4
#define tinycli_nargs_diid  4
#define tinycli_nargs_diis  4
#define tinycli_nargs_diil  4
#define tinycli_nargs_didi  4
#define tinycli_nargs_didd  4
#define tinycli_nargs_dids  4
#define tinycli_nargs_didl  4
#define tinycli_nargs_disi  4
#define tinycli_nargs_disd  4
#define tinycli_nargs_diss  4
#define tinycli_nargs_disl  4
#define tinycli_nargs_dili  4
#define tinycli_nargs_dild  4
#define tinycli_nargs_dils  4
#define tinycli_nargs_dill  4
#define tinycli_nargs_ddii  4
#define tinycli_nargs_ddid  4
#define tinycli_nargs_ddis  4
#define tinycli_nargs_ddil  4
#define tinycli_nargs_dddi  4
#define tinycli_nargs_dddd  4
#define tinycli_nargs_ddds  4
#define tinycli_nargs_dddl  4
#define tinycli_nargs_ddsi  4
#define tinycli_nargs_ddsd  4
#define tinycli_nargs_ddss  4
#define tinycli_nargs_ddsl  4
#define tinycli_nargs_ddli  4
#define tinycli_nargs_ddld  4
#define tinycli_nargs_ddls  4
#define tinycli_nargs_ddll  4
#define tinycli_nargs_dsii  4
#define tinycli_nargs_dsid  4
#define tinycli_nargs_dsis  4
#define tinycli_nargs_dsil  4
#define tinycli_nargs_dsdi  4
#define tinycli_nargs_dsdd  4
#define tinycli_nargs_dsds  4
#define tinycli_nargs_dsdl  4
#define tinycli_nargs_dssi  4
#define tinycli_nargs_dssd  4
#define tinycli_nargs_dsss  4
#define tinycli_nargs_dssl  4
#define tinycli_nargs_dsli  4
#define tinycli_nargs_dsld  4
#define tinycli_nargs_dsls  4
#define tinycli_nargs_dsll  4
#define tinycli_nargs_dlii  4
#define tinycli_nargs_dlid  4
#define tinycli_nargs_dlis  4
#define tinycli_nargs_dlil  4
#define tinycli_nargs_dldi  4
#define tinycli_nargs_dldd  4
#define tinycli_nargs_dlds  4
#define tinycli_nargs_dldl  4
#define tinycli_nargs_dlsi  4
#define tinycli_nargs_dlsd  4
#define tinycli_nargs_dlss  4
#define tinycli_nargs_dlsl  4
#define tinycli_nargs_dlli  4
#define tinycli_nargs_dlld  4
#define tinycli_nargs_dlls  4
#define tinycli_nargs_dlll  4
#define tinycli_nargs_siii  4
#define tinycli_nargs_siid  4
#define tinycli_nargs_siis  4
#define tinycli_nargs_siil  4
#define tinycli_nargs_sidi  4
#define tinycli_nargs_sidd  4
#define tinycli_nargs_sids  4
#define tinycli_nargs_sidl  4
#define tinycli_nargs_sisi  4
#define tinycli_nargs_sisd  4
#define tinycli_nargs_siss  4
#define tinycli_nargs_sisl  4
#define tinycli_nargs_sili  4
#define tinycli_nargs_sild  4
#define tinycli_nargs_sils  4
#define tinycli_nargs_sill  4
#define tinycli_nargs_sdii  4
#define tinycli_nargs_sdid  4
#define tinycli_nargs_sdis  4
#define tinycli_nargs_sdil  4
#define tinycli_nargs_sddi  4
#define tinycli_nargs_sddd  4
#define tinycli_nargs_sdds  4
#define tinycli_nargs_sddl  4
#define tinycli_nargs_sdsi  4
#define tinycli_nargs_sdsd  4
#define tinycli_nargs_sdss  4
#define tinycli_nargs_sdsl  4
#define tinycli_nargs_sdli  4
#define tinycli_nargs_sdld  4
#define tinycli_nargs_sdls  4
#define tinycli_nargs_sdll  4
#define tinycli_nargs_ssii  4
#define tinycli_nargs_ssid  4
#define tinycli_nargs_ssis  4
#define tinycli_nargs_ssil  4
#define tinycli_nargs_ssdi  4
#define tinycli_nargs_ssdd  4
#define tinycli_nargs_ssds  4
#define tinycli_nargs_ssdl  4
#define tinycli_nargs_sssi  4
#define tinycli_nargs_sssd  4
#define tinycli_nargs_ssss  4
#define tinycli_nargs_sssl  4
#define tinycli_nargs_ssli  4
#define tinycli_nargs_ssld  4
#define tinycli_nargs_ssls  4
#define tinycli_nargs_ssll  4
#define tinycli_nargs_slii  4
#define tinycli_nargs_slid  4
#define tinycli_nargs_slis  4
#define tinycli_nargs_slil  4
#define tinycli_nargs_sldi  4
#define tinycli_nargs_sldd  4
#define tinycli_nargs_slds  4
#define tinycli_nargs_sldl  4
#define tinycli_nargs_slsi  4
#define tinycli_nargs_slsd  4
#define tinycli_nargs_slss  4
#define tinycli_nargs_slsl  4
#define tinycli_nargs_slli  4
#define tinycli_nargs_slld  4
#define tinycli_nargs_slls  4
#define tinycli_nargs_slll  4
#define tinycli_nargs_liii  4
#define tinycli_nargs_liid  4
#define tinycli_nargs_liis  4
#define tinycli_nargs_liil  4
#define tinycli_nargs_lidi  4
#define tinycli_nargs_lidd  4
#define tinycli_nargs_lids  4
#define tinycli_nargs_lidl  4
#define tinycli_nargs_lisi  4
#define tinycli_nargs_lisd  4
#define tinycli_nargs_liss  4
#define tinycli_nargs_lisl  4
#define tinycli_nargs_lili  4
#define tinycli_nargs_lild  4
#define tinycli_nargs_lils  4
#define tinycli_nargs_lill  4
#define tinycli_nargs_ldii  4
#define tinycli_nargs_ldid  4
#define tinycli_nargs_ldis  4
#define tinycli_nargs_ldil  4
#define tinycli_nargs_lddi  4
#define tinycli_nargs_lddd  4
#define tinycli_nargs_ldds  4
#define tinycli_nargs_lddl  4
#define tinycli_nargs_ldsi  4
#define tinycli_nargs_ldsd  4
#define tinycli_nargs_ldss  4
#define tinycli_nargs_ldsl  4
#define tinycli_nargs_ldli  4
#define tinycli_nargs_ldld  4
#define tinycli_nargs_ldls  4
#define tinycli_nargs_ldll  4
#define tinycli_nargs_lsii  4
#define tinycli_nargs_lsid  4
#define tinycli_nargs_lsis  4
#define tinycli_nargs_lsil  4
#define tinycli_nargs_lsdi  4
#define tinycli_nargs_lsdd  4
#define tinycli_nargs_lsds  4
#define tinycli_nargs_lsdl  4
#define tinycli_nargs_lssi  4
#define tinycli_nargs_lssd  4
#define tinycli_nargs_lsss  4
#define tinycli_nargs_lssl  4
#define tinycli_nargs_lsli  4
#define tinycli_nargs_lsld  4
#define tinycli_nargs_lsls  4
#define tinycli_nargs_lsll  4
#define tinycli_nargs_llii  4
#define tinycli_nargs_llid  4
#define tinycli_nargs_llis  4
#define tinycli_nargs_llil  4
#define tinycli_nargs_lldi  4
#define tinycli_nargs_lldd  4
#define tinycli_nargs_llds  4
#define tinycli_nargs_lldl  4
#define tinycli_nargs_llsi  4
#define tinycli_nargs_llsd  4
#define tinycli_nargs_llss  4
#define tinycli_nargs_llsl  4
#define tinycli_nargs_llli  4
#define tinycli_nargs_llld  4
#define tinycli_nargs_llls  4
#define tinycli_nargs_llll  4
#define tinycli_nargs_iiiii 5
#define tinycli_nargs_iiiid 5
#define tinycli_nargs_iiiis 5
#define tinycli_nargs_iiiil 5
#define tinycli_nargs_iiidi 5
#define tinycli_nargs_iiidd 5
#define tinycli_nargs_iiids 5
#define tinycli_nargs_iiidl 5
#define tinycli_nargs_iiisi 5
#define tinycli_nargs_iiisd 5
#define tinycli_nargs_iiiss 5
#define tinycli_nargs_iiisl 5
#define tinycli_nargs_iiili 5
#define tinycli_nargs_iiild 5
#define tinycli_nargs_iiils 5
#define tinycli_nargs_iiill 5
#define tinycli_nargs_iidii 5
#define tinycli_nargs_iidid 5
#define tinycli_nargs_iidis 5
#define tinycli_nargs_iidil 5
#define tinycli_nargs_iiddi 5
#define tinycli_nargs_iiddd 5
#define tinycli_nargs_iidds 5
#define tinycli_nargs_iiddl 5
#define tinycli_nargs_iidsi 5
#define tinycli_nargs_iidsd 5
#define tinycli_nargs_iidss 5
#define tinycli_nargs_iidsl 5
#define tinycli_nargs_iidli 5
#define tinycli_nargs_iidld 5
#define tinycli_nargs_iidls 5
#define tinycli_nargs_iidll 5
#define tinycli_nargs_iisii 5
#define tinycli_nargs_iisid 5
#define tinycli_nargs_iisis 5
#define tinycli_nargs_iisil 5
#define tinycli_nargs_iisdi 5
#define tinycli_nargs_iisdd 5
#define tinycli_nargs_iisds 5
#define tinycli_nargs_iisdl 5
#define tinycli_nargs_iissi 5
#define tinycli_nargs_iissd 5
#define tinycli_nargs_iisss 5
#define tinycli_nargs_iissl 5
#define tinycli_nargs_iisli 5
#define tinycli_nargs_iisld 5
#define tinycli_nargs_iisls 5
#define tinycli_nargs_iisll 5
#define tinycli_nargs_iilii 5
#define tinycli_nargs_iilid 5
#define tinycli_nargs_iilis 5
#define tinycli_nargs_iilil 5
#define tinycli_nargs_iildi 5
#define tinycli_nargs_iildd 5
#define tinycli_nargs_iilds 5
#define tinycli_nargs_iildl 5
#define tinycli_nargs_iilsi 5
#define tinycli_nargs_iilsd 5
#define tinycli_nargs_iilss 5
#define tinycli_nargs_iilsl 5
#define tinycli_nargs_iilli 5
#define tinycli_nargs_iilld 5
#define tinycli_nargs_iills 5
#define tinycli_nargs_iilll 5
#define tinycli_nargs_idiii 5
#define tinycli_nargs_idiid 5
#define tinycli_nargs_idiis 5
#define tinycli_nargs_idiil 5
#define tinycli_nargs_ididi 5
#define tinycli_nargs_ididd 5
#define tinycli_nargs_idids 5
#define tinycli_nargs_ididl 5
#define tinycli_nargs_idisi 5
#define tinycli_nargs_idisd 5
#define tinycli_nargs_idiss 5
#define tinycli_nargs_idisl 5
#define tinycli_nargs_idili 5
#define tinycli_nargs_idild 5
#define tinycli_nargs_idils 5
#define tinycli_nargs_idill 5
#define tinycli_nargs_iddii 5
#define tinycli_nargs_iddid 5
#define tinycli_nargs_iddis 5
#define tinycli_nargs_iddil 5
#define tinycli_nargs_idddi 5
#define tinycli_nargs_idddd 5
#define tinycli_nargs_iddds 5
#define tinycli_nargs_idddl 5
#define tinycli_nargs_iddsi 5
#define tinycli_nargs_iddsd 5
#define tinycli_nargs_iddss 5
#define tinycli_nargs_iddsl 5
#define tinycli_nargs_iddli 5
#define tinycli_nargs_iddld 5
#define tinycli_nargs_iddls 5
#define tinycli_nargs_iddll 5
#define tinycli_nargs_idsii 5
#define tinycli_nargs_idsid 5
#define tinycli_nargs_idsis 5
#define tinycli_nargs_idsil 5
#define tinycli_nargs_idsdi 5
#define tinycli_nargs_idsdd 5
#define tinycli_nargs_idsds 5
#define tinycli_nargs_idsdl 5
#define tinycli_nargs_idssi 5
#define tinycli_nargs_idssd 5
#define tinycli_nargs_idsss 5
#define tinycli_nargs_idssl 5
#define tinycli_nargs_idsli 5
#define tinycli_nargs_idsld 5
#define tinycli_nargs_idsls 5
#define tinycli_nargs_idsll 5
#define tinycli_nargs_idlii 5
#define tinycli_nargs_idlid 5
#define tinycli_nargs_idlis 5
#define tinycli_nargs_idlil 5
#define tinycli_nargs_idldi 5
#define tinycli_nargs_idldd 5
#define tinycli_nargs_idlds 5
#define tinycli_nargs_idldl 5
#define tinycli_nargs_idlsi 5
#define tinycli_nargs_idlsd 5
#define tinycli_nargs_idlss 5
#define tinycli_nargs_idlsl 5
#define tinycli_nargs_idlli 5
#define tinycli_nargs_idlld 5
#define tinycli_nargs_idlls 5
#define tinycli_nargs_idlll 5
#define tinycli_nargs_isiii 5
#define tinycli_nargs_isiid 5
#define tinycli_nargs_isiis 5
#define tinycli_nargs_isiil 5
#define tinycli_nargs_isidi 5
#define tinycli_nargs_isidd 5
#define tinycli_nargs_isids 5
#define tinycli_nargs_isidl 5
#define tinycli_nargs_isisi 5
#define tinycli_nargs_isisd 5
#define tinycli_nargs_isiss 5
#define tinycli_nargs_isisl 5
#define tinycli_nargs_isili 5
#define tinycli_nargs_isild 5
#define tinycli_nargs_isils 5
#define tinycli_nargs_isill 5
#define tinycli_nargs_isdii 5
#define tinycli_nargs_isdid 5
#define tinycli_nargs_isdis 5
#define tinycli_nargs_isdil 5
#define tinycli_nargs_isddi 5
#define tinycli_nargs_isddd 5
#define tinycli_nargs_isdds 5
#define tinycli_nargs_isddl 5
#define tinycli_nargs_isdsi 5
#define tinycli_nargs_isdsd 5
#define tinycli_nargs_isdss 5
#define tinycli_nargs_isdsl 5
#define tinycli_nargs_isdli 5
#define tinycli_nargs_isdld 5
#define tinycli_nargs_isdls 5
#define tinycli_nargs_isdll 5
#define tinycli_nargs_issii 5
#define tinycli_nargs_issid 5
#define tinycli_nargs_issis 5
#define tinycli_nargs_issil 5
#define tinycli_nargs_issdi 5
#define tinycli_nargs_issdd 5
#define tinycli_nargs_issds 5
#define tinycli_nargs_issdl 5
#define tinycli_nargs_isssi 5
#define tinycli_nargs_isssd 5
#define tinycli_nargs_issss 5
#define tinycli_nargs_isssl 5
#define tinycli_nargs_issli 5
#define tinycli_nargs_issld 5
#define tinycli_nargs_issls 5
#define tinycli_nargs_issll 5
#define tinycli_nargs_islii 5
#define tinycli_nargs_islid 5
#define tinycli_nargs_islis 5
#define tinycli_nargs_islil 5
#define tinycli_nargs_isldi 5
#define tinycli_nargs_isldd 5
#define tinycli_nargs_islds 5
#define tinycli_nargs_isldl 5
#define tinycli_nargs_islsi 5
#define tinycli_nargs_islsd 5
#define tinycli_nargs_islss 5
#define tinycli_nargs_islsl 5
#define tinycli_nargs_islli 5
#define tinycli_nargs_islld 5
#define tinycli_nargs_islls 5
#define tinycli_nargs_islll 5
#define tinycli_nargs_iliii 5
#define tinycli_nargs_iliid 5
#define tinycli_nargs_iliis 5
#define tinycli_nargs_iliil 5
#define tinycli_nargs_ilidi 5
#define tinycli_nargs_ilidd 5
#define tinycli_nargs_ilids 5
#define tinycli_nargs_ilidl 5
#define tinycli_nargs_ilisi 5
#define tinycli_nargs_ilisd 5
#define tinycli_nargs_iliss 5
#define tinycli_nargs_ilisl 5
#define tinycli_nargs_ilili 5
#define tinycli_nargs_ilild 5
#define tinycli_nargs_ilils 5
#define tinycli_nargs_ilill 5
#define tinycli_nargs_ildii 5
#define tinycli_nargs_ildid 5
#define tinycli_nargs_ildis 5
#define tinycli_nargs_ildil 5
#define tinycli_nargs_ilddi 5
#define tinycli_nargs_ilddd 5
#define tinycli_nargs_ildds 5
#define tinycli_nargs_ilddl 5
#define tinycli_nargs_ildsi 5
#define tinycli_nargs_ildsd 5
#define tinycli_nargs_ildss 5
#define tinycli_nargs_ildsl 5
#define tinycli_nargs_ildli 5
#define tinycli_nargs_ildld 5
#define tinycli_nargs_ildls 5
#define tinycli_nargs_ildll 5
#define tinycli_nargs_ilsii 5
#define tinycli_nargs_ilsid 5
#define tinycli_nargs_ilsis 5
#define tinycli_nargs_ilsil 5
#define tinycli_nargs_ilsdi 5
#define tinycli_nargs_ilsdd 5
#define tinycli_nargs_ilsds 5
#define tinycli_nargs_ilsdl 5
#define tinycli_nargs_ilssi 5
#define tinycli_nargs_ilssd 5
#define tinycli_nargs_ilsss 5
#define tinycli_nargs_ilssl 5
#define tinycli_nargs_ilsli 5
#define tinycli_nargs_ilsld 5
#define tinycli_nargs_ilsls 5
#define tinycli_nargs_ilsll 5
#define tinycli_nargs_illii 5
#define tinycli_nargs_illid 5
#define tinycli_nargs_illis 5
#define tinycli_nargs_illil 5
#define tinycli_nargs_illdi 5
#define tinycli_nargs_illdd 5
#define tinycli_nargs_illds 5
#define tinycli_nargs_illdl 5
#define tinycli_nargs_illsi 5
#define tinycli_nargs_illsd 5
#define tinycli_nargs_illss 5
#define tinycli_nargs_illsl 5
#define tinycli_nargs_illli 5
#define tinycli_nargs_illld 5
#define tinycli_nargs_illls 5
#define tinycli_nargs_illll 5
#define tinycli_nargs_diiii 5
#define tinycli_nargs_diiid 5
#define tinycli_nargs_diiis 5
#define tinycli_nargs_diiil 5
#define tinycli_nargs_diidi 5
#define tinycli_nargs_diidd 5
#define tinycli_nargs_diids 5
#define tinycli_nargs_diidl 5
#define tinycli_nargs_diisi 5
#define tinycli_nargs_diisd 5
#define tinycli_nargs_diiss 5
#define tinycli_nargs_diisl 5
#define tinycli_nargs_diili 5
#define tinycli_nargs_diild 5
#define tinycli_nargs_diils 5
#define tinycli_nargs_diill 5
#define tinycli_nargs_didii 5
#define tinycli_nargs_didid 5
#define tinycli_nargs_didis 5
#define tinycli_nargs_didil 5
#define tinycli_nargs_diddi 5
#define tinycli_nargs_diddd 5
#define tinycli_nargs_didds 5
#define tinycli_nargs_diddl 5
#define tinycli_nargs_didsi 5
#define tinycli_nargs_didsd 5
#define tinycli_nargs_didss 5
#define tinycli_nargs_didsl 5
#define tinycli_nargs_didli 5
#define tinycli_nargs_didld 5
#define tinycli_nargs_didls 5
#define tinycli_nargs_didll 5
#define tinycli_nargs_disii 5
#define tinycli_nargs_disid 5
#define tinycli_nargs_disis 5
#define tinycli_nargs_disil 5
#define tinycli_nargs_disdi 5
#define tinycli_nargs_disdd 5
#define tinycli_nargs_disds 5
#define tinycli_nargs_disdl 5
#define tinycli_nargs_dissi 5
#define tinycli_nargs_dissd 5
#define tinycli_nargs_disss 5
#define tinycli_nargs_dissl 5
#define tinycli_nargs_disli 5
#define tinycli_nargs_disld 5
#define tinycli_nargs_disls 5
#define tinycli_nargs_disll 5
#define tinycli_nargs_dilii 5
#define tinycli_nargs_dilid 5
#define tinycli_nargs_dilis 5
#define tinycli_nargs_dilil 5
#define tinycli_nargs_dildi 5
#define tinycli_nargs_dildd 5
#define tinycli_nargs_dilds 5
#define tinycli_nargs_dildl 5
#define tinycli_nargs_dilsi 5
#define tinycli_nargs_dilsd 5
#define tinycli_nargs_dilss 5
#define tinycli_nargs_dilsl 5
#define tinycli_nargs_dilli 5
#define tinycli_nargs_dilld 5
#define tinycli_nargs_dills 5
#define tinycli_nargs_dilll 5
#define tinycli_nargs_ddiii 5
#define tinycli_nargs_ddiid 5
#define tinycli_nargs_ddiis 5
#define tinycli_nargs_ddiil 5
#define tinycli_nargs_ddidi 5
#define tinycli_nargs_ddidd 5
#define tinycli_nargs_ddids 5
#define tinycli_nargs_ddidl 5
#define tinycli_nargs_ddisi 5
#define tinycli_nargs_ddisd 5
#define tinycli_nargs_ddiss 5
#define tinycli_nargs_ddisl 5
#define tinycli_nargs_ddili 5
#define tinycli_nargs_ddild 5
#define tinycli_nargs_ddils 5
#define tinycli_nargs_ddill 5
#define tinycli_nargs_dddii 5
#define tinycli_nargs_dddid 5
#define tinycli_nargs_dddis 5
#define tinycli_nargs_dddil 5
#define tinycli_nargs_ddddi 5
#define tinycli_nargs_ddddd 5
#define tinycli_nargs_dddds 5
#define tinycli_nargs_ddddl 5
#define tinycli_nargs_dddsi 5
#define tinycli_nargs_dddsd 5
#define tinycli_nargs_dddss 5
#define tinycli_nargs_dddsl 5
#define tinycli_nargs_dddli 5
#define tinycli_nargs_dddld 5
#define tinycli_nargs_dddls 5
#define tinycli_nargs_dddll 5
#define tinycli_nargs_ddsii 5
#define tinycli_nargs_ddsid 5
#define tinycli_nargs_ddsis 5
#define tinycli_nargs_ddsil 5
#define tinycli_nargs_ddsdi 5
#define tinycli_nargs_ddsdd 5
#define tinycli_nargs_ddsds 5
#define tinycli_nargs_ddsdl 5
#define tinycli_nargs_ddssi 5
#define tinycli_nargs_ddssd 5
#define tinycli_nargs_ddsss 5
#define tinycli_nargs_ddssl 5
#define tinycli_nargs_ddsli 5
#define tinycli_nargs_ddsld 5
#define tinycli_nargs_ddsls 5
#define tinycli_nargs_ddsll 5
#define tinycli_nargs_ddlii 5
#define tinycli_nargs_ddlid 5
#define tinycli_nargs_ddlis 5
#define tinycli_nargs_ddlil 5
#define tinycli_nargs_ddldi 5
#define tinycli_nargs_ddldd 5
#define tinycli_nargs_ddlds 5
#define tinycli_nargs_ddldl 5
#define tinycli_nargs_ddlsi 5
#define tinycli_nargs_ddlsd 5
#define tinycli_nargs_ddlss 5
#define tinycli_nargs_ddlsl 5
#define tinycli_nargs_ddlli 5
#define tinycli_nargs_ddlld 5
#define tinycli_nargs_ddlls 5
#define tinycli_nargs_ddlll 5
#define tinycli_nargs_dsiii 5
#define tinycli_nargs_dsiid 5
#define tinycli_nargs_dsiis 5
#define tinycli_nargs_dsiil 5
#define tinycli_nargs_dsidi 5
#define tinycli_nargs_dsidd 5
#define tinycli_nargs_dsids 5
#define tinycli_nargs_dsidl 5
#define tinycli_nargs_dsisi 5
#define tinycli_nargs_dsisd 5
#define tinycli_nargs_dsiss 5
#define tinycli_nargs_dsisl 5
#define tinycli_nargs_dsili 5
#define tinycli_nargs_dsild 5
#define tinycli_nargs_dsils 5
#define tinycli_nargs_dsill 5
#define tinycli_nargs_dsdii 5
#define tinycli_nargs_dsdid 5
#define tinycli_nargs_dsdis 5
#define tinycli_nargs_dsdil 5
#define tinycli_nargs_dsddi 5
#define tinycli_nargs_dsddd 5
#define tinycli_nargs_dsdds 5
#define tinycli_nargs_dsddl 5
#define tinycli_nargs_dsdsi 5
#define tinycli_nargs_dsdsd 5
#define tinycli_nargs_dsdss 5
#define tinycli_nargs_dsdsl 5
#define tinycli_nargs_dsdli 5
#define tinycli_nargs_dsdld 5
#define tinycli_nargs_dsdls 5
#define tinycli_nargs_dsdll 5
#define tinycli_nargs_dssii 5
#define tinycli_nargs_dssid 5
#define tinycli_nargs_dssis 5
#define tinycli_nargs_dssil 5
#define tinycli_nargs_dssdi 5
#define tinycli_nargs_dssdd 5
#define tinycli_nargs_dssds 5
#define tinycli_nargs_dssdl 5
#define tinycli_nargs_dsssi 5
#define tinycli_nargs_dsssd 5
#define tinycli_nargs_dssss 5
#define tinycli_nargs_dsssl 5
#define tinycli_nargs_dssli 5
#define tinycli_nargs_dssld 5
#define tinycli_nargs_dssls 5
#define tinycli_nargs_dssll 5
#define tinycli_nargs_dslii 5
#define tinycli_nargs_dslid 5
#define tinycli_nargs_dslis 5
#define tinycli_nargs_dslil 5
#define tinycli_nargs_dsldi 5
#define tinycli_nargs_dsldd 5
#define tinycli_nargs_dslds 5
#define tinycli_nargs_dsldl 5
#define tinycli_nargs_dslsi 5
#define tinycli_nargs_dslsd 5
#define tinycli_nargs_dslss 5
#define tinycli_nargs_dslsl 5
#define tinycli_nargs_dslli 5
#define tinycli_nargs_dslld 5
#define tinycli_nargs_dslls 5
#define tinycli_nargs_dslll 5
#define tinycli_nargs_dliii 5
#define tinycli_nargs_dliid 5
#define tinycli_nargs_dliis 5
#define tinycli_nargs_dliil 5
#define tinycli_nargs_dlidi 5
#define tinycli_nargs_dlidd 5
#define tinycli_nargs_dlids 5
#define tinycli_nargs_dlidl 5
#define tinycli_nargs_dlisi 5
#define tinycli_nargs_dlisd 5
#define tinycli_nargs_dliss 5
#define tinycli_nargs_dlisl 5
#define tinycli_nargs_dlili 5
#define tinycli_nargs_dlild 5
#define tinycli_nargs_dlils 5
#define tinycli_nargs_dlill 5
#define tinycli_nargs_dldii 5
#define tinycli_nargs_dldid 5
#define tinycli_nargs_dldis 5
#define tinycli_nargs_dldil 5
#define tinycli_nargs_dlddi 5
#define tinycli_nargs_dlddd 5
#define tinycli_nargs_dldds 5
#define tinycli_nargs_dlddl 5
#define tinycli_nargs_dldsi 5
#define tinycli_nargs_dldsd 5
#define tinycli_nargs_dldss 5
#define tinycli_nargs_dldsl 5
#define tinycli_nargs_dldli 5
#define tinycli_nargs_dldld 5
#define tinycli_nargs_dldls 5
#define tinycli_nargs_dldll 5
#define tinycli_nargs_dlsii 5
#define tinycli_nargs_dlsid 5
#define tinycli_nargs_dlsis 5
#define tinycli_nargs_dlsil 5
#define tinycli_nargs_dlsdi 5
#define tinycli_nargs_dlsdd 5
#define tinycli_nargs_dlsds 5
#define tinycli_nargs_dlsdl 5
#define tinycli_nargs_dlssi 5
#define tinycli_nargs_dlssd 5
#define tinycli_nargs_dlsss 5
#define tinycli_nargs_dlssl 5
#define tinycli_nargs_dlsli 5
#define tinycli_nargs_dlsld 5
#define tinycli_nargs_dlsls 5
#define tinycli_nargs_dlsll 5
#define tinycli_nargs_dllii 5
#define tinycli_nargs_dllid 5
#define tinycli_nargs_dllis 5
#define tinycli_nargs_dllil 5
#define tinycli_nargs_dlldi 5
#define tinycli_nargs_dlldd 5
#define tinycli_nargs_dllds 5
#define tinycli_nargs_dlldl 5
#define tinycli_nargs_dllsi 5
#define tinycli_nargs_dllsd 5
#define tinycli_nargs_dllss 5
#define tinycli_nargs_dllsl 5
#define tinycli_nargs_dllli 5
#define tinycli_nargs_dllld 5
#define tinycli_nargs_dllls 5
#define tinycli_nargs_dllll 5
#define tinycli_nargs_siiii 5
#define tinycli_nargs_siiid 5
#define tinycli_nargs_siiis 5
#define tinycli_nargs_siiil 5
#define tinycli_nargs_siidi 5
#define tinycli_nargs_siidd 5
#define tinycli_nargs_siids 5
#define tinycli_nargs_siidl 5
#define tinycli_nargs_siisi 5
#define tinycli_nargs_siisd 5
#define tinycli_nargs_siiss 5
#define tinycli_nargs_siisl 5
#define tinycli_nargs_siili 5
#define tinycli_nargs_siild 5
#define tinycli_nargs_siils 5
#define tinycli_nargs_siill 5
#define tinycli_nargs_sidii 5
#define tinycli_nargs_sidid 5
#define tinycli_nargs_sidis 5
#define tinycli_nargs_sidil 5
#define tinycli_nargs_siddi 5
#define tinycli_nargs_siddd 5
#define tinycli_nargs_sidds 5
#define tinycli_nargs_siddl 5
#define tinycli_nargs_sidsi 5
#define tinycli_nargs_sidsd 5
#define tinycli_nargs_sidss 5
#define tinycli_nargs_sidsl 5
#define tinycli_nargs_sidli 5
#define tinycli_nargs_sidld 5
#define tinycli_nargs_sidls 5
#define tinycli_nargs_sidll 5
#define tinycli_nargs_sisii 5
#define tinycli_nargs_sisid 5
#define tinycli_nargs_sisis 5
#define tinycli_nargs_sisil 5
#define tinycli_nargs_sisdi 5
#define tinycli_nargs_sisdd 5
#define tinycli_nargs_sisds 5
#define tinycli_nargs_sisdl 5
#define tinycli_nargs_sissi 5
#define tinycli_nargs_sissd 5
#define tinycli_nargs_sisss 5
#define tinycli_nargs_sissl 5
#define tinycli_nargs_sisli 5
#define tinycli_nargs_sisld 5
#define tinycli_nargs_sisls 5
#define tinycli_nargs_sisll 5
#define tinycli_nargs_silii 5
#define tinycli_nargs_silid 5
#define tinycli_nargs_silis 5
#define tinycli_nargs_silil 5
#define tinycli_nargs_sildi 5
#define tinycli_nargs_sildd 5
#define tinycli_nargs_silds 5
#define tinycli_nargs_sildl 5
#define tinycli_nargs_silsi 5
#define tinycli_nargs_silsd 5
#define tinycli_nargs_silss 5
#define tinycli_nargs_silsl 5
#define tinycli_nargs_silli 5
#define tinycli_nargs_silld 5
#define tinycli_nargs_sills 5
#define tinycli_nargs_silll 5
#define tinycli_nargs_sdiii 5
#define tinycli_nargs_sdiid 5
#define tinycli_nargs_sdiis 5
#define tinycli_nargs_sdiil 5
#define tinycli_nargs_sdidi 5
#define tinycli_nargs_sdidd 5
#define tinycli_nargs_sdids 5
#define tinycli_nargs_sdidl 5
#define tinycli_nargs_sdisi 5
#define tinycli_nargs_sdisd 5
#define tinycli_nargs_sdiss 5
#define tinycli_nargs_sdisl 5
#define tinycli_nargs_sdili 5
#define tinycli_nargs_sdild 5
#define tinycli_nargs_sdils 5
#define tinycli_nargs_sdill 5
#define tinycli_nargs_sddii 5
#define tinycli_nargs_sddid 5
#define tinycli_nargs_sddis 5
#define tinycli_nargs_sddil 5
#define tinycli_nargs_sdddi 5
#define tinycli_nargs_sdddd 5
#define tinycli_nargs_sddds 5
#define tinycli_nargs_sdddl 5
#define tinycli_nargs_sddsi 5
#define tinycli_nargs_sddsd 5
#define tinycli_nargs_sddss 5
#define tinycli_nargs_sddsl 5
#define tinycli_nargs_sddli 5
#define tinycli_nargs_sddld 5
#define tinycli_nargs_sddls 5
#define tinycli_nargs_sddll 5
#define tinycli_nargs_sdsii 5
#define tinycli_nargs_sdsid 5
#define tinycli_nargs_sdsis 5
#define tinycli_nargs_sdsil 5
#define tinycli_nargs_sdsdi 5
#define tinycli_nargs_sdsdd 5
#define tinycli_nargs_sdsds 5
#define tinycli_nargs_sdsdl 5
#define tinycli_nargs_sdssi 5
#define tinycli_nargs_sdssd 5
#define tinycli_nargs_sdsss 5
#define tinycli_nargs_sdssl 5
#define tinycli_nargs_sdsli 5
#define tinycli_nargs_sdsld 5
#define tinycli_nargs_sdsls 5
#define tinycli_nargs_sdsll 5
#define tinycli_nargs_sdlii 5
#define tinycli_nargs_sdlid 5
#define tinycli_nargs_sdlis 5
#define tinycli_nargs_sdlil 5
#define tinycli_nargs_sdldi 5
#define tinycli_nargs_sdldd 5
#define tinycli_nargs_sdlds 5
#define tinycli_nargs_sdldl 5
#define tinycli_nargs_sdlsi 5
#define tinycli_nargs_sdlsd 5
#define tinycli_nargs_sdlss 5
#define tinycli_nargs_sdlsl 5
#define tinycli_nargs_sdlli 5
#define tinycli_nargs_sdlld 5
#define tinycli_nargs_sdlls 5
#define tinycli_nargs_sdlll 5
#define tinycli_nargs_ssiii 5
#define tinycli_nargs_ssiid 5
#define tinycli_nargs_ssiis 5
#define tinycli_nargs_ssiil 5
#define tinycli_nargs_ssidi 5
#define tinycli_nargs_ssidd 5
#define tinycli_nargs_ssids 5
#define tinycli_nargs_ssidl 5
#define tinycli_nargs_ssisi 5
#define tinycli_nargs_ssisd 5
#define tinycli_nargs_ssiss 5
#define tinycli_nargs_ssisl 5
#define tinycli_nargs_ssili 5
#define tinycli_nargs_ssild 5
#define tinycli_nargs_ssils 5
#define tinycli_nargs_ssill 5
#define tinycli_nargs_ssdii 5
#define tinycli_nargs_ssdid 5
#define tinycli_nargs_ssdis 5
#define tinycli_nargs_ssdil 5
#define tinycli_nargs_ssddi 5
#define tinycli_nargs_ssddd 5
#define tinycli_nargs_ssdds 5
#define tinycli_nargs_ssddl 5
#define tinycli_nargs_ssdsi 5
#define tinycli_nargs_ssdsd 5
#define tinycli_nargs_ssdss 5
#define tinycli_nargs_ssdsl 5
#define tinycli_nargs_ssdli 5
#define tinycli_nargs_ssdld 5
#define tinycli_nargs_ssdls 5
#define tinycli_nargs_ssdll 5
#define tinycli_nargs_sssii 5
#define tinycli_nargs_sssid 5
#define tinycli_nargs_sssis 5
#define tinycli_nargs_sssil 5
#define tinycli_nargs_sssdi 5
#define tinycli_nargs_sssdd 5
#define tinycli_nargs_sssds 5
#define tinycli_nargs_sssdl 5
#define tinycli_nargs_ssssi 5
#define tinycli_nargs_ssssd 5
#define tinycli_nargs_sssss 5
#define tinycli_nargs_ssssl 5
#define tinycli_nargs_sssli 5
#define tinycli_nargs_sssld 5
#define tinycli_nargs_sssls 5
#define tinycli_nargs_sssll 5
#define tinycli_nargs_sslii 5
#define tinycli_nargs_sslid 5
#define tinycli_nargs_sslis 5
#define tinycli_nargs_sslil 5
#define tinycli_nargs_ssldi 5
#define tinycli_nargs_ssldd 5
#define tinycli_nargs_sslds 5
#define tinycli_nargs_ssldl 5
#define tinycli_nargs_sslsi 5
#define tinycli_nargs_sslsd 5
#define tinycli_nargs_sslss 5
#define tinycli_nargs_sslsl 5
#define tinycli_nargs_sslli 5
#define tinycli_nargs_sslld 5
#define tinycli_nargs_sslls 5
#define tinycli_nargs_sslll 5
#define tinycli_nargs_sliii 5
#define tinycli_nargs_sliid 5
#define tinycli_nargs_sliis 5
#define tinycli_nargs_sliil 5
#define tinycli_nargs_slidi 5
#define tinycli_nargs_slidd 5
#define tinycli_nargs_slids 5
#define tinycli_nargs_slidl 5
#define tinycli_nargs_slisi 5
#define tinycli_nargs_slisd 5
#define tinycli_nargs_sliss 5
#define tinycli_nargs_slisl 5
#define tinycli_nargs_slili 5
#define tinycli_nargs_slild 5
#define tinycli_nargs_slils 5
#define tinycli_nargs_slill 5
#define tinycli_nargs_sldii 5
#define tinycli_nargs_sldid 5
#define tinycli_nargs_sldis 5
#define tinycli_nargs_sldil 5
#define tinycli_nargs_slddi 5
#define tinycli_nargs_slddd 5
#define tinycli_nargs_sldds 5
#define tinycli_nargs_slddl 5
#define tinycli_nargs_sldsi 5
#define tinycli_nargs_sldsd 5
#define tinycli_nargs_sldss 5
#define tinycli_nargs_sldsl 5
#define tinycli_nargs_sldli 5
#define tinycli_nargs_sldld 5
#define tinycli_nargs_sldls 5
#define tinycli_nargs_sldll 5
#define tinycli_nargs_slsii 5
#define tinycli_nargs_slsid 5
#define tinycli_nargs_slsis 5
#define tinycli_nargs_slsil 5
#define tinycli_nargs_slsdi 5
#define tinycli_nargs_slsdd 5
#define tinycli_nargs_slsds 5
#define tinycli_nargs_slsdl 5
#define tinycli_nargs_slssi 5
#define tinycli_nargs_slssd 5
#define tinycli_nargs_slsss 5
#define tinycli_nargs_slssl 5
#define tinycli_nargs_slsli 5
#define tinycli_nargs_slsld 5
#define tinycli_nargs_slsls 5
#define tinycli_nargs_slsll 5
#define tinycli_nargs_sllii 5
#define tinycli_nargs_sllid 5
#define tinycli_nargs_sllis 5
#define tinycli_nargs_sllil 5
#define tinycli_nargs_slldi 5
#define tinycli_nargs_slldd 5
#define tinycli_nargs_sllds 5
#define tinycli_nargs_slldl 5
#define tinycli_nargs_sllsi 5
#define tinycli_nargs_sllsd 5
#define tinycli_nargs_sllss 5
#define tinycli_nargs_sllsl 5
#define tinycli_nargs_sllli 5
#define tinycli_nargs_sllld 5
#define tinycli_nargs_sllls 5
#define tinycli_nargs_sllll 5
#define tinycli_nargs_liiii 5
#define tinycli_nargs_liiid 5
#define tinycli_nargs_liiis 5
#define tinycli_nargs_liiil 5
#define tinycli_nargs_liidi 5
#define tinycli_nargs_liidd 5
#define tinycli_nargs_liids 5
#define tinycli_nargs_liidl 5
#define tinycli_nargs_liisi 5
#define tinycli_nargs_liisd 5
#define tinycli_nargs_liiss 5
#define tinycli_nargs_liisl 5
#define tinycli_nargs_liili 5
#define tinycli_nargs_liild 5
#define tinycli_nargs_liils 5
#define tinycli_nargs_liill 5
#define tinycli_nargs_lidii 5
#define tinycli_nargs_lidid 5
#define tinycli_nargs_lidis 5
#define tinycli_nargs_lidil 5
#define tinycli_nargs_liddi 5
#define tinycli_nargs_liddd 5
#define tinycli_nargs_lidds 5
#define tinycli_nargs_liddl 5
#define tinycli_nargs_lidsi 5
#define tinycli_nargs_lidsd 5
#define tinycli_nargs_lidss 5
#define tinycli_nargs_lidsl 5
#define tinycli_nargs_lidli 5
#define tinycli_nargs_lidld 5
#define tinycli_nargs_lidls 5
#define tinycli_nargs_lidll 5
#define tinycli_nargs_lisii 5
#define tinycli_nargs_lisid 5
#define tinycli_nargs_lisis 5
#define tinycli_nargs_lisil 5
#define tinycli_nargs_lisdi 5
#define tinycli_nargs_lisdd 5
#define tinycli_nargs_lisds 5
#define tinycli_nargs_lisdl 5
#define tinycli_nargs_lissi 5
#define tinycli_nargs_lissd 5
#define tinycli_nargs_lisss 5
#define tinycli_nargs_lissl 5
#define tinycli_nargs_lisli 5
#define tinycli_nargs_lisld 5
#define tinycli_nargs_lisls 5
#define tinycli_nargs_lisll 5
#define tinycli_nargs_lilii 5
#define tinycli_nargs_lilid 5
#define tinycli_nargs_lilis 5
#define tinycli_nargs_lilil 5
#define tinycli_nargs_lildi 5
#define tinycli_nargs_lildd 5
#define tinycli_nargs_lilds 5
#define tinycli_nargs_lildl 5
#define tinycli_nargs_lilsi 5
#define tinycli_nargs_lilsd 5
#define tinycli_nargs_lilss 5
#define tinycli_nargs_lilsl 5
#define tinycli_nargs_lilli 5
#define tinycli_nargs_lilld 5
#define tinycli_nargs_lills 5
#define tinycli_nargs_lilll 5
#define tinycli_nargs_ldiii 5
#define tinycli_nargs_ldiid 5
#define tinycli_nargs_ldiis 5
#define tinycli_nargs_ldiil 5
#define tinycli_nargs_ldidi 5
#define tinycli_nargs_ldidd 5
#define tinycli_nargs_ldids 5
#define tinycli_nargs_ldidl 5
#define tinycli_nargs_ldisi 5
#define tinycli_nargs_ldisd 5
#define tinycli_nargs_ldiss 5
#define tinycli_nargs_ldisl 5
#define tinycli_nargs_ldili 5
#define tinycli_nargs_ldild 5
#define tinycli_nargs_ldils 5
#define tinycli_nargs_ldill 5
#define tinycli_nargs_lddii 5
#define tinycli_nargs_lddid 5
#define tinycli_nargs_lddis 5
#define tinycli_nargs_lddil 5
#define tinycli_nargs_ldddi 5
#define tinycli_nargs_ldddd 5
#define tinycli_nargs_lddds 5
#define tinycli_nargs_ldddl 5
#define tinycli_nargs_lddsi 5
#define tinycli_nargs_lddsd 5
#define tinycli_nargs_lddss 5
#define tinycli_nargs_lddsl 5
#define tinycli_nargs_lddli 5
#define tinycli_nargs_lddld 5
#define tinycli_nargs_lddls 5
#define tinycli_nargs_lddll 5
#define tinycli_nargs_ldsii 5
#define tinycli_nargs_ldsid 5
#define tinycli_nargs_ldsis 5
#define tinycli_nargs_ldsil 5
#define tinycli_nargs_ldsdi 5
#define tinycli_nargs_ldsdd 5
#define tinycli_nargs_ldsds 5
#define tinycli_nargs_ldsdl 5
#define tinycli_nargs_ldssi 5
#define tinycli_nargs_ldssd 5
#define tinycli_nargs_ldsss 5
#define tinycli_nargs_ldssl 5
#define tinycli_nargs_ldsli 5
#define tinycli_nargs_ldsld 5
#define tinycli_nargs_ldsls 5
#define tinycli_nargs_ldsll 5
#define tinycli_nargs_ldlii 5
#define tinycli_nargs_ldlid 5
#define tinycli_nargs_ldlis 5
#define tinycli_nargs_ldlil 5
#define tinycli_nargs_ldldi 5
#define tinycli_nargs_ldldd 5
#define tinycli_nargs_ldlds 5
#define tinycli_nargs_ldldl 5
#define tinycli_nargs_ldlsi 5
#define tinycli_nargs_ldlsd 5
#define tinycli_nargs_ldlss 5
#define tinycli_nargs_ldlsl 5
#define tinycli_nargs_ldlli 5
#define tinycli_nargs_ldlld 5
#define tinycli_nargs_ldlls 5
#define tinycli_nargs_ldlll 5
#define tinycli_nargs_lsiii 5
#define tinycli_nargs_lsiid 5
#define tinycli_nargs_lsiis 5
#define tinycli_nargs_lsiil 5
#define tinycli_nargs_lsidi 5
#define tinycli_nargs_lsidd 5
#define tinycli_nargs_lsids 5
#define tinycli_nargs_lsidl 5
#define tinycli_nargs_lsisi 5
#define tinycli_nargs_lsisd 5
#define tinycli_nargs_lsiss 5
#define tinycli_nargs_lsisl 5
#define tinycli_nargs_lsili 5
#define tinycli_nargs_lsild 5
#define tinycli_nargs_lsils 5
#define tinycli_nargs_lsill 5
#define tinycli_nargs_lsdii 5
#define tinycli_nargs_lsdid 5
#define tinycli_nargs_lsdis 5
#define tinycli_nargs_lsdil 5
#define tinycli_nargs_lsddi 5
#define tinycli_nargs_lsddd 5
#define tinycli_nargs_lsdds 5
#define tinycli_nargs_lsddl 5
#define tinycli_nargs_lsdsi 5
#define tinycli_nargs_lsdsd 5
#define tinycli_nargs_lsdss 5
#define tinycli_nargs_lsdsl 5
#define tinycli_nargs_lsdli 5
#define tinycli_nargs_lsdld 5
#define tinycli_nargs_lsdls 5
#define tinycli_nargs_lsdll 5
#define tinycli_nargs_lssii 5
#define tinycli_nargs_lssid 5
#define tinycli_nargs_lssis 5
#define tinycli_nargs_lssil 5
#define tinycli_nargs_lssdi 5
#define tinycli_nargs_lssdd 5
#define tinycli_nargs_lssds 5
#define tinycli_nargs_lssdl 5
#define tinycli_nargs_lsssi 5
#define tinycli_nargs_lsssd 5
#define tinycli_nargs_lssss 5
#define tinycli_nargs_lsssl 5
#define tinycli_nargs_lssli 5
#define tinycli_nargs_lssld 5
#define tinycli_nargs_lssls 5
#define tinycli_nargs_lssll 5
#define tinycli_nargs_lslii 5
#define tinycli_nargs_lslid 5
#define tinycli_nargs_lslis 5
#define tinycli_nargs_lslil 5
#define tinycli_nargs_lsldi 5
#define tinycli_nargs_lsldd 5
#define tinycli_nargs_lslds 5
#define tinycli_nargs_lsldl 5
#define tinycli_nargs_lslsi 5
#define tinycli_nargs_lslsd 5
#define tinycli_nargs_lslss 5
#define tinycli_nargs_lslsl 5
#define tinycli_nargs_lslli 5
#define tinycli_nargs_lslld 5
#define tinycli_nargs_lslls 5
#define tinycli_nargs_lslll 5
#define tinycli_nargs_lliii 5
#define tinycli_nargs_lliid 5
#define tinycli_nargs_lliis 5
#define tinycli_nargs_lliil 5
#define tinycli_nargs_llidi 5
#define tinycli_nargs_llidd 5
#define tinycli_nargs_llids 5
#define tinycli_nargs_llidl 5
#define tinycli_nargs_llisi 5
#define tinycli_nargs_llisd 5
#define tinycli_nargs_lliss 5
#define tinycli_nargs_llisl 5
#define tinycli_nargs_llili 5
#define tinycli_nargs_llild 5
#define tinycli_nargs_llils 5
#define tinycli_nargs_llill 5
#define tinycli_nargs_lldii 5
#define tinycli_nargs_lldid 5
#define tinycli_nargs_lldis 5
#define tinycli_nargs_lldil 5
#define tinycli_nargs_llddi 5
#define tinycli_nargs_llddd 5
#define tinycli_nargs_lldds 5
#define tinycli_nargs_llddl 5
#define tinycli_nargs_lldsi 5
#define tinycli_nargs_lldsd 5
#define tinycli_nargs_lldss 5
#define tinycli_nargs_lldsl 5
#define tinycli_nargs_lldli 5
#define tinycli_nargs_lldld 5
#define tinycli_nargs_lldls 5
#define tinycli_nargs_lldll 5
#define tinycli_nargs_llsii 5
#define tinycli_nargs_llsid 5
#define tinycli_nargs_llsis 5
#define tinycli_nargs_llsil 5
#define tinycli_nargs_llsdi 5
#define tinycli_nargs_llsdd 5
#define tinycli_nargs_llsds 5
#define tinycli_nargs_llsdl 5
#define tinycli_nargs_llssi 5
#define tinycli_nargs_llssd 5
#define tinycli_nargs_llsss 5
#define tinycli_nargs_llssl 5
#define tinycli_nargs_llsli 5
#define tinycli_nargs_llsld 5
#define tinycli_nargs_llsls 5
#define tinycli_nargs_llsll 5
#define tinycli_nargs_lllii 5
#define tinycli_nargs_lllid 5
#define tinycli_nargs_lllis 5
#define tinycli_nargs_lllil 5
#define tinycli_nargs_llldi 5
#define tinycli_nargs_llldd 5
#define tinycli_nargs_lllds 5
#define tinycli_nargs_llldl 5
#define tinycli_nargs_lllsi 5
#define tinycli_nargs_lllsd 5
#define tinycli_nargs_lllss 5
#define tinycli_nargs_lllsl 5
#define tinycli_nargs_lllli 5
#define tinycli_nargs_lllld 5
#define tinycli_nargs_lllls 5
#define tinycli_nargs_lllll 5

#endif /* __TINYCLI_CONFIG_H__  */
