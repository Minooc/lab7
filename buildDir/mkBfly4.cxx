/*
 * Generated by Bluespec Compiler, version 2016.07.beta1 (build 34806, 2016-07-05)
 * 
 * On Thu Jun  1 15:36:17 PDT 2017
 * 
 */
#include "bluesim_primitives.h"
#include "mkBfly4.h"


/* Constructor */
MOD_mkBfly4::MOD_mkBfly4(tSimStateHdl simHdl, char const *name, Module *parent)
  : Module(simHdl, name, parent), __clk_handle_0(BAD_CLOCK_HANDLE), PORT_RST_N((tUInt8)1u)
{
  symbol_count = 0u;
  init_symbols_0();
}


/* Symbol init fns */

void MOD_mkBfly4::init_symbols_0()
{
}


/* Rule actions */


/* Methods */

tUInt64 MOD_mkBfly4::METH_bfly4(tUInt64 ARG_bfly4_t, tUInt64 ARG_bfly4_x)
{
  tUInt8 DEF_x__h1777;
  tUInt8 DEF_x__h1826;
  tUInt8 DEF_y__h1586;
  tUInt8 DEF_x__h1585;
  tUInt8 DEF_y__h1634;
  tUInt8 DEF_x__h1633;
  tUInt8 DEF_y__h1723;
  tUInt8 DEF_x__h1722;
  tUInt8 DEF_y__h1463;
  tUInt8 DEF_x__h1462;
  tUInt8 DEF_y__h1477;
  tUInt8 DEF_x__h1476;
  tUInt8 DEF_y__h1461;
  tUInt8 DEF_x__h1460;
  tUInt8 DEF_y__h1554;
  tUInt8 DEF_x__h1553;
  tUInt8 DEF_y__h1654;
  tUInt8 DEF_x__h1653;
  tUInt8 DEF_x__h1741;
  tUInt8 DEF_x__h1692;
  tUInt32 DEF_bfly4_x_BITS_15_TO_8_MUL_bfly4_t_BITS_15_TO_8__ETC___d72;
  tUInt8 DEF_x__h1652;
  tUInt8 DEF_x__h1523;
  tUInt8 DEF_x__h1459;
  tUInt8 DEF_x__h239;
  tUInt32 DEF_bfly4_x_BITS_15_TO_8_MUL_bfly4_t_BITS_15_TO_8__ETC___d69;
  tUInt8 DEF_y__h1465;
  tUInt8 DEF_y__h1468;
  tUInt8 DEF_y__h1479;
  tUInt8 DEF_y__h1482;
  tUInt8 DEF_y__h1471;
  tUInt8 DEF_y__h1474;
  tUInt8 DEF_y__h1485;
  tUInt8 DEF_y__h1488;
  tUInt8 DEF_x__h1467;
  tUInt8 DEF_x__h1464;
  tUInt8 DEF_x__h1481;
  tUInt8 DEF_x__h1478;
  tUInt8 DEF_x__h1473;
  tUInt8 DEF_x__h1470;
  tUInt8 DEF_x__h1487;
  tUInt8 DEF_x__h1484;
  tUInt8 DEF_ii__h798;
  tUInt8 DEF_rr__h797;
  tUInt8 DEF_rr__h1103;
  tUInt8 DEF_ii__h1104;
  tUInt8 DEF_rr__h1247;
  tUInt8 DEF_ii__h1248;
  tUInt8 DEF_rr__h1359;
  tUInt8 DEF_ii__h1360;
  tUInt8 DEF_ri__h800;
  tUInt8 DEF_ir__h799;
  tUInt8 DEF_ri__h1106;
  tUInt8 DEF_ir__h1105;
  tUInt8 DEF_ri__h1250;
  tUInt8 DEF_ir__h1249;
  tUInt8 DEF_ri__h1362;
  tUInt8 DEF_ir__h1361;
  tUInt64 PORT_bfly4;
  DEF_x__h1484 = (tUInt8)(ARG_bfly4_x >> 56u);
  DEF_x__h1487 = (tUInt8)((tUInt8)255u & (ARG_bfly4_x >> 48u));
  DEF_x__h1470 = (tUInt8)((tUInt8)255u & (ARG_bfly4_x >> 40u));
  DEF_x__h1478 = (tUInt8)((tUInt8)255u & (ARG_bfly4_x >> 24u));
  DEF_x__h1473 = (tUInt8)((tUInt8)255u & (ARG_bfly4_x >> 32u));
  DEF_x__h1481 = (tUInt8)((tUInt8)255u & (ARG_bfly4_x >> 16u));
  DEF_x__h1464 = (tUInt8)((tUInt8)255u & (ARG_bfly4_x >> 8u));
  DEF_x__h1467 = (tUInt8)((tUInt8)255u & ARG_bfly4_x);
  DEF_y__h1488 = (tUInt8)(ARG_bfly4_t >> 56u);
  DEF_ir__h1361 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1487)) * ((tUInt32)(DEF_y__h1488)))));
  DEF_rr__h1359 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1484)) * ((tUInt32)(DEF_y__h1488)))));
  DEF_y__h1485 = (tUInt8)((tUInt8)255u & (ARG_bfly4_t >> 48u));
  DEF_ri__h1362 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1484)) * ((tUInt32)(DEF_y__h1485)))));
  DEF_ii__h1360 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1487)) * ((tUInt32)(DEF_y__h1485)))));
  DEF_y__h1474 = (tUInt8)((tUInt8)255u & (ARG_bfly4_t >> 40u));
  DEF_ir__h1105 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1473)) * ((tUInt32)(DEF_y__h1474)))));
  DEF_rr__h1103 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1470)) * ((tUInt32)(DEF_y__h1474)))));
  DEF_y__h1471 = (tUInt8)((tUInt8)255u & (ARG_bfly4_t >> 32u));
  DEF_ri__h1106 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1470)) * ((tUInt32)(DEF_y__h1471)))));
  DEF_ii__h1104 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1473)) * ((tUInt32)(DEF_y__h1471)))));
  DEF_y__h1482 = (tUInt8)((tUInt8)255u & (ARG_bfly4_t >> 24u));
  DEF_ir__h1249 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1481)) * ((tUInt32)(DEF_y__h1482)))));
  DEF_rr__h1247 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1478)) * ((tUInt32)(DEF_y__h1482)))));
  DEF_y__h1479 = (tUInt8)((tUInt8)255u & (ARG_bfly4_t >> 16u));
  DEF_ri__h1250 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1478)) * ((tUInt32)(DEF_y__h1479)))));
  DEF_ii__h1248 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1481)) * ((tUInt32)(DEF_y__h1479)))));
  DEF_y__h1468 = (tUInt8)((tUInt8)255u & (ARG_bfly4_t >> 8u));
  DEF_ir__h799 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1467)) * ((tUInt32)(DEF_y__h1468)))));
  DEF_rr__h797 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1464)) * ((tUInt32)(DEF_y__h1468)))));
  DEF_y__h1465 = (tUInt8)((tUInt8)255u & ARG_bfly4_t);
  DEF_ri__h800 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1464)) * ((tUInt32)(DEF_y__h1465)))));
  DEF_ii__h798 = (tUInt8)((tUInt8)255u & (65535u & (((tUInt32)(DEF_x__h1467)) * ((tUInt32)(DEF_y__h1465)))));
  DEF_x__h1476 = (tUInt8)255u & (DEF_ri__h1250 + DEF_ir__h1249);
  DEF_y__h1477 = (tUInt8)255u & (DEF_ri__h1362 + DEF_ir__h1361);
  DEF_y__h1654 = (tUInt8)255u & (DEF_x__h1476 + DEF_y__h1477);
  DEF_y__h1461 = (tUInt8)255u & (DEF_x__h1476 - DEF_y__h1477);
  DEF_x__h1462 = (tUInt8)255u & (DEF_ri__h800 + DEF_ir__h799);
  DEF_y__h1463 = (tUInt8)255u & (DEF_ri__h1106 + DEF_ir__h1105);
  DEF_x__h1653 = (tUInt8)255u & (DEF_x__h1462 + DEF_y__h1463);
  DEF_x__h1652 = (tUInt8)255u & (DEF_x__h1653 - DEF_y__h1654);
  DEF_x__h1460 = (tUInt8)255u & (DEF_x__h1462 - DEF_y__h1463);
  DEF_x__h1459 = (tUInt8)255u & (DEF_x__h1460 - DEF_y__h1461);
  DEF_x__h1741 = (tUInt8)255u & (DEF_x__h1460 + DEF_y__h1461);
  DEF_x__h1633 = (tUInt8)255u & (DEF_rr__h1247 - DEF_ii__h1248);
  DEF_y__h1634 = (tUInt8)255u & (DEF_rr__h1359 - DEF_ii__h1360);
  DEF_y__h1554 = (tUInt8)255u & (DEF_x__h1633 + DEF_y__h1634);
  DEF_y__h1723 = (tUInt8)255u & (DEF_x__h1633 - DEF_y__h1634);
  DEF_x__h1585 = (tUInt8)255u & (DEF_rr__h797 - DEF_ii__h798);
  DEF_y__h1586 = (tUInt8)255u & (DEF_rr__h1103 - DEF_ii__h1104);
  DEF_x__h1553 = (tUInt8)255u & (DEF_x__h1585 + DEF_y__h1586);
  DEF_x__h1523 = (tUInt8)255u & (DEF_x__h1553 - DEF_y__h1554);
  DEF_x__h1722 = (tUInt8)255u & (DEF_x__h1585 - DEF_y__h1586);
  DEF_x__h239 = (tUInt8)255u & (DEF_x__h1722 - DEF_y__h1723);
  DEF_bfly4_x_BITS_15_TO_8_MUL_bfly4_t_BITS_15_TO_8__ETC___d69 = (((((tUInt32)(DEF_x__h239)) << 24u) | (((tUInt32)(DEF_x__h1459)) << 16u)) | (((tUInt32)(DEF_x__h1523)) << 8u)) | (tUInt32)(DEF_x__h1652);
  DEF_x__h1692 = (tUInt8)255u & (DEF_x__h1722 + DEF_y__h1723);
  DEF_bfly4_x_BITS_15_TO_8_MUL_bfly4_t_BITS_15_TO_8__ETC___d72 = 65535u & ((((tUInt32)(DEF_x__h1692)) << 8u) | (tUInt32)(DEF_x__h1741));
  DEF_x__h1826 = (tUInt8)255u & (DEF_x__h1653 + DEF_y__h1654);
  DEF_x__h1777 = (tUInt8)255u & (DEF_x__h1553 + DEF_y__h1554);
  PORT_bfly4 = (((((tUInt64)(DEF_bfly4_x_BITS_15_TO_8_MUL_bfly4_t_BITS_15_TO_8__ETC___d69)) << 32u) | (((tUInt64)(DEF_bfly4_x_BITS_15_TO_8_MUL_bfly4_t_BITS_15_TO_8__ETC___d72)) << 16u)) | (((tUInt64)(DEF_x__h1777)) << 8u)) | (tUInt64)(DEF_x__h1826);
  return PORT_bfly4;
}

tUInt8 MOD_mkBfly4::METH_RDY_bfly4()
{
  tUInt8 DEF_CAN_FIRE_bfly4;
  tUInt8 PORT_RDY_bfly4;
  DEF_CAN_FIRE_bfly4 = (tUInt8)1u;
  PORT_RDY_bfly4 = DEF_CAN_FIRE_bfly4;
  return PORT_RDY_bfly4;
}


/* Reset routines */

void MOD_mkBfly4::reset_RST_N(tUInt8 ARG_rst_in)
{
  PORT_RST_N = ARG_rst_in;
}


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */

void MOD_mkBfly4::set_clk_0(char const *s)
{
  __clk_handle_0 = bk_get_or_define_clock(sim_hdl, s);
}


/* State dumping routine */
void MOD_mkBfly4::dump_state(unsigned int indent)
{
}


/* VCD dumping routines */

unsigned int MOD_mkBfly4::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 1u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, bk_clock_vcd_num(sim_hdl, __clk_handle_0), "CLK", 1u);
  vcd_write_def(sim_hdl, num++, "RST_N", 1u);
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_mkBfly4::dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkBfly4 &backing)
{
  vcd_defs(dt, backing);
}

void MOD_mkBfly4::vcd_defs(tVCDDumpType dt, MOD_mkBfly4 &backing)
{
  unsigned int num = vcd_num;
  if (dt == VCD_DUMP_XS)
  {
    vcd_write_x(sim_hdl, num++, 1u);
  }
  else
    if (dt == VCD_DUMP_CHANGES)
    {
      if ((backing.PORT_RST_N) != PORT_RST_N)
      {
	vcd_write_val(sim_hdl, num, PORT_RST_N, 1u);
	backing.PORT_RST_N = PORT_RST_N;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, PORT_RST_N, 1u);
      backing.PORT_RST_N = PORT_RST_N;
    }
}
