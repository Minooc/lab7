/*
 * Generated by Bluespec Compiler, version 2016.07.beta1 (build 34806, 2016-07-05)
 * 
 * On Fri Jun  2 20:32:32 PDT 2017
 * 
 */

/* Generation options: */
#ifndef __mkIFFTElasticPipeline_h__
#define __mkIFFTElasticPipeline_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"
#include "mkBfly4.h"


/* Class declaration for the mkIFFTElasticPipeline module */
class MOD_mkIFFTElasticPipeline : public Module {
 
 /* Clock handles */
 private:
  tClock __clk_handle_0;
 
 /* Clock gate handles */
 public:
  tUInt8 *clk_gate[0];
 
 /* Instantiation parameters */
 public:
 
 /* Module state */
 public:
  MOD_mkBfly4 INST_bfly_0_0;
  MOD_mkBfly4 INST_bfly_0_1;
  MOD_mkBfly4 INST_bfly_0_10;
  MOD_mkBfly4 INST_bfly_0_11;
  MOD_mkBfly4 INST_bfly_0_12;
  MOD_mkBfly4 INST_bfly_0_13;
  MOD_mkBfly4 INST_bfly_0_14;
  MOD_mkBfly4 INST_bfly_0_15;
  MOD_mkBfly4 INST_bfly_0_2;
  MOD_mkBfly4 INST_bfly_0_3;
  MOD_mkBfly4 INST_bfly_0_4;
  MOD_mkBfly4 INST_bfly_0_5;
  MOD_mkBfly4 INST_bfly_0_6;
  MOD_mkBfly4 INST_bfly_0_7;
  MOD_mkBfly4 INST_bfly_0_8;
  MOD_mkBfly4 INST_bfly_0_9;
  MOD_mkBfly4 INST_bfly_1_0;
  MOD_mkBfly4 INST_bfly_1_1;
  MOD_mkBfly4 INST_bfly_1_10;
  MOD_mkBfly4 INST_bfly_1_11;
  MOD_mkBfly4 INST_bfly_1_12;
  MOD_mkBfly4 INST_bfly_1_13;
  MOD_mkBfly4 INST_bfly_1_14;
  MOD_mkBfly4 INST_bfly_1_15;
  MOD_mkBfly4 INST_bfly_1_2;
  MOD_mkBfly4 INST_bfly_1_3;
  MOD_mkBfly4 INST_bfly_1_4;
  MOD_mkBfly4 INST_bfly_1_5;
  MOD_mkBfly4 INST_bfly_1_6;
  MOD_mkBfly4 INST_bfly_1_7;
  MOD_mkBfly4 INST_bfly_1_8;
  MOD_mkBfly4 INST_bfly_1_9;
  MOD_mkBfly4 INST_bfly_2_0;
  MOD_mkBfly4 INST_bfly_2_1;
  MOD_mkBfly4 INST_bfly_2_10;
  MOD_mkBfly4 INST_bfly_2_11;
  MOD_mkBfly4 INST_bfly_2_12;
  MOD_mkBfly4 INST_bfly_2_13;
  MOD_mkBfly4 INST_bfly_2_14;
  MOD_mkBfly4 INST_bfly_2_15;
  MOD_mkBfly4 INST_bfly_2_2;
  MOD_mkBfly4 INST_bfly_2_3;
  MOD_mkBfly4 INST_bfly_2_4;
  MOD_mkBfly4 INST_bfly_2_5;
  MOD_mkBfly4 INST_bfly_2_6;
  MOD_mkBfly4 INST_bfly_2_7;
  MOD_mkBfly4 INST_bfly_2_8;
  MOD_mkBfly4 INST_bfly_2_9;
  MOD_Fifo<tUWide> INST_f1;
  MOD_Fifo<tUWide> INST_f2;
  MOD_Fifo<tUWide> INST_f3;
  MOD_Fifo<tUWide> INST_inFIFO;
  MOD_Fifo<tUWide> INST_outFIFO;
 
 /* Constructor */
 public:
  MOD_mkIFFTElasticPipeline(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUWide PORT_enq_in;
  tUWide PORT_deq;
 
 /* Publicly accessible definitions */
 public:
 
 /* Local definitions */
 private:
  tUWide DEF_f2_first____d272;
  tUWide DEF_f1_first____d138;
  tUWide DEF_inFIFO_first____d4;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d400;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d397;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d132;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d129;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d266;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d263;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d394;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d126;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d260;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d391;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d123;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d257;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d388;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d120;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d254;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d385;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d117;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d251;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d382;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d114;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d248;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d379;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d111;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d245;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d376;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d108;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d242;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d373;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d105;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d239;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d370;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d102;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d236;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d367;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d99;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d233;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d364;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d96;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d230;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d361;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d93;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d227;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d358;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d90;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d224;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d355;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d87;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d221;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d352;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d84;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d218;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d347;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d79;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d213;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d342;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d74;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d208;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d337;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d69;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d203;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d332;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d64;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d198;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d327;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d59;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d193;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d322;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d54;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d188;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d317;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d49;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d183;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d312;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d44;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d178;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d307;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d39;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d173;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d302;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d34;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d168;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d297;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d29;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d163;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d292;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d24;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d158;
  tUWide DEF_bfly_2_15_bfly4_2251552690364292668_f2_first___ETC___d287;
  tUWide DEF_bfly_0_15_bfly4_2251552690364292668_inFIFO_fir_ETC___d19;
  tUWide DEF_bfly_1_15_bfly4_2251552690364292668_f1_first___ETC___d153;
  tUWide DEF_deq__avValue1;
 
 /* Rules */
 public:
  void RL_stageOne();
  void RL_stageTwo();
  void RL_stageThree();
 
 /* Methods */
 public:
  void METH_enq(tUWide ARG_enq_in);
  tUInt8 METH_RDY_enq();
  tUWide METH_deq();
  tUInt8 METH_RDY_deq();
 
 /* Reset routines */
 public:
  void reset_RST_N(tUInt8 ARG_rst_in);
 
 /* Static handles to reset routines */
 public:
 
 /* Pointers to reset fns in parent module for asserting output resets */
 private:
 
 /* Functions for the parent module to register its reset fns */
 public:
 
 /* Functions to set the elaborated clock id */
 public:
  void set_clk_0(char const *s);
 
 /* State dumping routine */
 public:
  void dump_state(unsigned int indent);
 
 /* VCD dumping routines */
 public:
  unsigned int dump_VCD_defs(unsigned int levels);
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkIFFTElasticPipeline &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkIFFTElasticPipeline &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkIFFTElasticPipeline &backing);
  void vcd_submodules(tVCDDumpType dt, unsigned int levels, MOD_mkIFFTElasticPipeline &backing);
};

#endif /* ifndef __mkIFFTElasticPipeline_h__ */
