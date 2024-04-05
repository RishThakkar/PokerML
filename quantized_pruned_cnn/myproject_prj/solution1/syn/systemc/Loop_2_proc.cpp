// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "Loop_2_proc.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic Loop_2_proc::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic Loop_2_proc::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<5> Loop_2_proc::ap_ST_fsm_state1 = "1";
const sc_lv<5> Loop_2_proc::ap_ST_fsm_state2 = "10";
const sc_lv<5> Loop_2_proc::ap_ST_fsm_state3 = "100";
const sc_lv<5> Loop_2_proc::ap_ST_fsm_state4 = "1000";
const sc_lv<5> Loop_2_proc::ap_ST_fsm_state5 = "10000";
const sc_lv<32> Loop_2_proc::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> Loop_2_proc::ap_const_lv32_3 = "11";
const sc_lv<32> Loop_2_proc::ap_const_lv32_4 = "100";
const sc_lv<32> Loop_2_proc::ap_const_lv32_1 = "1";
const sc_lv<1> Loop_2_proc::ap_const_lv1_0 = "0";
const sc_lv<32> Loop_2_proc::ap_const_lv32_2 = "10";
const sc_lv<4> Loop_2_proc::ap_const_lv4_0 = "0000";
const sc_lv<4> Loop_2_proc::ap_const_lv4_A = "1010";
const sc_lv<4> Loop_2_proc::ap_const_lv4_1 = "1";
const sc_lv<4> Loop_2_proc::ap_const_lv4_9 = "1001";
const sc_lv<16> Loop_2_proc::ap_const_lv16_0 = "0000000000000000";
const sc_lv<32> Loop_2_proc::ap_const_lv32_F = "1111";
const sc_lv<16> Loop_2_proc::ap_const_lv16_FFFF = "1111111111111111";
const sc_lv<1> Loop_2_proc::ap_const_lv1_1 = "1";
const sc_lv<32> Loop_2_proc::ap_const_lv32_10 = "10000";
const sc_lv<32> Loop_2_proc::ap_const_lv32_FFFFFFE8 = "11111111111111111111111111101000";
const sc_lv<32> Loop_2_proc::ap_const_lv32_1F = "11111";
const sc_lv<31> Loop_2_proc::ap_const_lv31_0 = "0000000000000000000000000000000";
const sc_lv<5> Loop_2_proc::ap_const_lv5_9 = "1001";
const sc_lv<16> Loop_2_proc::ap_const_lv16_FFE8 = "1111111111101000";
const sc_lv<32> Loop_2_proc::ap_const_lv32_FFFFFFE7 = "11111111111111111111111111100111";
const sc_lv<32> Loop_2_proc::ap_const_lv32_19 = "11001";
const sc_lv<32> Loop_2_proc::ap_const_lv32_3F = "111111";
const sc_lv<8> Loop_2_proc::ap_const_lv8_7F = "1111111";
const sc_lv<8> Loop_2_proc::ap_const_lv8_7E = "1111110";
const sc_lv<8> Loop_2_proc::ap_const_lv8_6 = "110";
const sc_lv<32> Loop_2_proc::ap_const_lv32_17 = "10111";
const bool Loop_2_proc::ap_const_boolean_1 = true;

Loop_2_proc::Loop_2_proc(sc_module_name name) : sc_module(name), mVcdFile(0) {
    myproject_axi_mux_104_16_1_1_U2513 = new myproject_axi_mux_104_16_1_1<1,1,16,16,16,16,16,16,16,16,16,16,4,16>("myproject_axi_mux_104_16_1_1_U2513");
    myproject_axi_mux_104_16_1_1_U2513->din0(tmp_data_V_0);
    myproject_axi_mux_104_16_1_1_U2513->din1(tmp_data_V_1);
    myproject_axi_mux_104_16_1_1_U2513->din2(tmp_data_V_2);
    myproject_axi_mux_104_16_1_1_U2513->din3(tmp_data_V_3);
    myproject_axi_mux_104_16_1_1_U2513->din4(tmp_data_V_4);
    myproject_axi_mux_104_16_1_1_U2513->din5(tmp_data_V_5);
    myproject_axi_mux_104_16_1_1_U2513->din6(tmp_data_V_6);
    myproject_axi_mux_104_16_1_1_U2513->din7(tmp_data_V_7);
    myproject_axi_mux_104_16_1_1_U2513->din8(tmp_data_V_8);
    myproject_axi_mux_104_16_1_1_U2513->din9(tmp_data_V_9);
    myproject_axi_mux_104_16_1_1_U2513->din10(j3_0_i_reg_194);
    myproject_axi_mux_104_16_1_1_U2513->dout(tmp_V_3_fu_228_p12);
    regslice_both_out_data_U = new regslice_both<32>("regslice_both_out_data_U");
    regslice_both_out_data_U->ap_clk(ap_clk);
    regslice_both_out_data_U->ap_rst(ap_rst);
    regslice_both_out_data_U->data_in(out_r_TDATA_int);
    regslice_both_out_data_U->vld_in(out_r_TVALID_int);
    regslice_both_out_data_U->ack_in(out_r_TREADY_int);
    regslice_both_out_data_U->data_out(out_r_TDATA);
    regslice_both_out_data_U->vld_out(regslice_both_out_data_U_vld_out);
    regslice_both_out_data_U->ack_out(out_r_TREADY);
    regslice_both_out_data_U->apdone_blk(regslice_both_out_data_U_apdone_blk);
    regslice_both_out_last_V_U = new regslice_both<1>("regslice_both_out_last_V_U");
    regslice_both_out_last_V_U->ap_clk(ap_clk);
    regslice_both_out_last_V_U->ap_rst(ap_rst);
    regslice_both_out_last_V_U->data_in(last_reg_574);
    regslice_both_out_last_V_U->vld_in(out_r_TVALID_int);
    regslice_both_out_last_V_U->ack_in(regslice_both_out_last_V_U_ack_in_dummy);
    regslice_both_out_last_V_U->data_out(out_r_TLAST);
    regslice_both_out_last_V_U->vld_out(regslice_both_out_last_V_U_vld_out);
    regslice_both_out_last_V_U->ack_out(out_r_TREADY);
    regslice_both_out_last_V_U->apdone_blk(regslice_both_out_last_V_U_apdone_blk);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_a_fu_374_p2);
    sensitive << ( icmp_ln947_fu_337_p2 );
    sensitive << ( icmp_ln947_1_fu_368_p2 );

    SC_METHOD(thread_add_ln949_fu_394_p2);
    sensitive << ( trunc_ln944_fu_317_p1 );

    SC_METHOD(thread_add_ln958_fu_439_p2);
    sensitive << ( sub_ln944_reg_607 );

    SC_METHOD(thread_add_ln964_fu_520_p2);
    sensitive << ( sub_ln964_fu_515_p2 );
    sensitive << ( select_ln964_fu_507_p3 );

    SC_METHOD(thread_and_ln949_fu_407_p2);
    sensitive << ( p_Result_31_fu_400_p3 );
    sensitive << ( xor_ln949_fu_388_p2 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_state1);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( regslice_both_out_data_U_apdone_blk );
    sensitive << ( icmp_ln31_fu_205_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( regslice_both_out_data_U_apdone_blk );
    sensitive << ( icmp_ln31_fu_205_p2 );

    SC_METHOD(thread_bitcast_ln739_fu_549_p1);
    sensitive << ( trunc_ln738_fu_545_p1 );

    SC_METHOD(thread_icmp_ln31_fu_205_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( regslice_both_out_data_U_apdone_blk );
    sensitive << ( j3_0_i_reg_194 );

    SC_METHOD(thread_icmp_ln32_fu_217_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( regslice_both_out_data_U_apdone_blk );
    sensitive << ( icmp_ln31_fu_205_p2 );
    sensitive << ( j3_0_i_reg_194 );

    SC_METHOD(thread_icmp_ln935_fu_254_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( regslice_both_out_data_U_apdone_blk );
    sensitive << ( icmp_ln31_fu_205_p2 );
    sensitive << ( tmp_V_3_fu_228_p12 );

    SC_METHOD(thread_icmp_ln947_1_fu_368_p2);
    sensitive << ( icmp_ln935_reg_579 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( p_Result_30_fu_363_p2 );

    SC_METHOD(thread_icmp_ln947_fu_337_p2);
    sensitive << ( icmp_ln935_reg_579 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_fu_327_p4 );

    SC_METHOD(thread_icmp_ln958_fu_427_p2);
    sensitive << ( icmp_ln935_reg_579 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( lsb_index_fu_321_p2 );

    SC_METHOD(thread_j_fu_211_p2);
    sensitive << ( j3_0_i_reg_194 );

    SC_METHOD(thread_l_fu_300_p3);
    sensitive << ( p_Result_34_fu_292_p3 );

    SC_METHOD(thread_last_fu_223_p2);
    sensitive << ( p_read );
    sensitive << ( icmp_ln32_fu_217_p2 );

    SC_METHOD(thread_lsb_index_fu_321_p2);
    sensitive << ( sub_ln944_fu_312_p2 );

    SC_METHOD(thread_lshr_ln947_fu_357_p2);
    sensitive << ( zext_ln947_fu_353_p1 );

    SC_METHOD(thread_lshr_ln958_fu_444_p2);
    sensitive << ( zext_ln957_1_fu_436_p1 );
    sensitive << ( add_ln958_fu_439_p2 );

    SC_METHOD(thread_m_1_fu_469_p3);
    sensitive << ( icmp_ln958_reg_618 );
    sensitive << ( zext_ln958_fu_450_p1 );
    sensitive << ( shl_ln958_fu_463_p2 );

    SC_METHOD(thread_m_2_fu_479_p2);
    sensitive << ( zext_ln961_fu_476_p1 );
    sensitive << ( m_1_fu_469_p3 );

    SC_METHOD(thread_m_5_fu_485_p4);
    sensitive << ( m_2_fu_479_p2 );

    SC_METHOD(thread_m_6_fu_495_p1);
    sensitive << ( m_5_fu_485_p4 );

    SC_METHOD(thread_m_fu_433_p1);
    sensitive << ( tmp_V_4_reg_589 );

    SC_METHOD(thread_or_ln949_fu_413_p2);
    sensitive << ( and_ln949_fu_407_p2 );
    sensitive << ( a_fu_374_p2 );

    SC_METHOD(thread_or_ln_i_fu_419_p3);
    sensitive << ( or_ln949_fu_413_p2 );

    SC_METHOD(thread_out_r_TDATA_blk_n);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( out_r_TREADY_int );

    SC_METHOD(thread_out_r_TDATA_int);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln935_reg_579 );
    sensitive << ( bitcast_ln739_fu_549_p1 );

    SC_METHOD(thread_out_r_TVALID);
    sensitive << ( regslice_both_out_data_U_vld_out );

    SC_METHOD(thread_out_r_TVALID_int);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( out_r_TREADY_int );

    SC_METHOD(thread_p_Result_30_fu_363_p2);
    sensitive << ( tmp_V_4_reg_589 );
    sensitive << ( lshr_ln947_fu_357_p2 );

    SC_METHOD(thread_p_Result_31_fu_400_p3);
    sensitive << ( tmp_V_4_reg_589 );
    sensitive << ( add_ln949_fu_394_p2 );

    SC_METHOD(thread_p_Result_33_fu_260_p3);
    sensitive << ( tmp_V_3_fu_228_p12 );

    SC_METHOD(thread_p_Result_34_fu_292_p3);
    sensitive << ( p_Result_s_fu_282_p4 );

    SC_METHOD(thread_p_Result_35_fu_533_p5);
    sensitive << ( m_6_fu_495_p1 );
    sensitive << ( tmp_572_i_fu_526_p3 );

    SC_METHOD(thread_p_Result_s_fu_282_p4);
    sensitive << ( tmp_V_4_fu_274_p3 );

    SC_METHOD(thread_select_ln964_fu_507_p3);
    sensitive << ( tmp_750_fu_499_p3 );

    SC_METHOD(thread_shl_ln958_fu_463_p2);
    sensitive << ( m_fu_433_p1 );
    sensitive << ( zext_ln958_1_fu_459_p1 );

    SC_METHOD(thread_sub_ln944_fu_312_p2);
    sensitive << ( l_reg_597 );

    SC_METHOD(thread_sub_ln947_fu_347_p2);
    sensitive << ( trunc_ln947_fu_343_p1 );

    SC_METHOD(thread_sub_ln958_fu_454_p2);
    sensitive << ( sub_ln944_reg_607 );

    SC_METHOD(thread_sub_ln964_fu_515_p2);
    sensitive << ( trunc_ln943_reg_602 );

    SC_METHOD(thread_tmp_572_i_fu_526_p3);
    sensitive << ( p_Result_33_reg_584 );
    sensitive << ( add_ln964_fu_520_p2 );

    SC_METHOD(thread_tmp_749_fu_380_p3);
    sensitive << ( lsb_index_fu_321_p2 );

    SC_METHOD(thread_tmp_750_fu_499_p3);
    sensitive << ( m_2_fu_479_p2 );

    SC_METHOD(thread_tmp_V_4_fu_274_p3);
    sensitive << ( p_Result_33_fu_260_p3 );
    sensitive << ( tmp_V_3_fu_228_p12 );
    sensitive << ( tmp_V_fu_268_p2 );

    SC_METHOD(thread_tmp_V_fu_268_p2);
    sensitive << ( tmp_V_3_fu_228_p12 );

    SC_METHOD(thread_tmp_fu_327_p4);
    sensitive << ( lsb_index_fu_321_p2 );

    SC_METHOD(thread_trunc_ln738_fu_545_p1);
    sensitive << ( p_Result_35_fu_533_p5 );

    SC_METHOD(thread_trunc_ln943_fu_308_p1);
    sensitive << ( l_fu_300_p3 );

    SC_METHOD(thread_trunc_ln944_fu_317_p1);
    sensitive << ( sub_ln944_fu_312_p2 );

    SC_METHOD(thread_trunc_ln947_fu_343_p1);
    sensitive << ( sub_ln944_fu_312_p2 );

    SC_METHOD(thread_xor_ln949_fu_388_p2);
    sensitive << ( tmp_749_fu_380_p3 );

    SC_METHOD(thread_zext_ln947_fu_353_p1);
    sensitive << ( sub_ln947_fu_347_p2 );

    SC_METHOD(thread_zext_ln957_1_fu_436_p1);
    sensitive << ( tmp_V_4_reg_589 );

    SC_METHOD(thread_zext_ln958_1_fu_459_p1);
    sensitive << ( sub_ln958_fu_454_p2 );

    SC_METHOD(thread_zext_ln958_fu_450_p1);
    sensitive << ( lshr_ln958_fu_444_p2 );

    SC_METHOD(thread_zext_ln961_fu_476_p1);
    sensitive << ( or_ln_i_reg_613 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( regslice_both_out_data_U_apdone_blk );
    sensitive << ( icmp_ln31_fu_205_p2 );
    sensitive << ( out_r_TREADY_int );

    ap_done_reg = SC_LOGIC_0;
    ap_CS_fsm = "00001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "Loop_2_proc_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, out_r_TDATA, "(port)out_r_TDATA");
    sc_trace(mVcdFile, out_r_TVALID, "(port)out_r_TVALID");
    sc_trace(mVcdFile, out_r_TREADY, "(port)out_r_TREADY");
    sc_trace(mVcdFile, out_r_TLAST, "(port)out_r_TLAST");
    sc_trace(mVcdFile, p_read, "(port)p_read");
    sc_trace(mVcdFile, tmp_data_V_0, "(port)tmp_data_V_0");
    sc_trace(mVcdFile, tmp_data_V_1, "(port)tmp_data_V_1");
    sc_trace(mVcdFile, tmp_data_V_2, "(port)tmp_data_V_2");
    sc_trace(mVcdFile, tmp_data_V_3, "(port)tmp_data_V_3");
    sc_trace(mVcdFile, tmp_data_V_4, "(port)tmp_data_V_4");
    sc_trace(mVcdFile, tmp_data_V_5, "(port)tmp_data_V_5");
    sc_trace(mVcdFile, tmp_data_V_6, "(port)tmp_data_V_6");
    sc_trace(mVcdFile, tmp_data_V_7, "(port)tmp_data_V_7");
    sc_trace(mVcdFile, tmp_data_V_8, "(port)tmp_data_V_8");
    sc_trace(mVcdFile, tmp_data_V_9, "(port)tmp_data_V_9");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_done_reg, "ap_done_reg");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, out_r_TDATA_blk_n, "out_r_TDATA_blk_n");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, ap_block_state1, "ap_block_state1");
    sc_trace(mVcdFile, j_fu_211_p2, "j_fu_211_p2");
    sc_trace(mVcdFile, j_reg_569, "j_reg_569");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, regslice_both_out_data_U_apdone_blk, "regslice_both_out_data_U_apdone_blk");
    sc_trace(mVcdFile, last_fu_223_p2, "last_fu_223_p2");
    sc_trace(mVcdFile, last_reg_574, "last_reg_574");
    sc_trace(mVcdFile, icmp_ln31_fu_205_p2, "icmp_ln31_fu_205_p2");
    sc_trace(mVcdFile, icmp_ln935_fu_254_p2, "icmp_ln935_fu_254_p2");
    sc_trace(mVcdFile, icmp_ln935_reg_579, "icmp_ln935_reg_579");
    sc_trace(mVcdFile, p_Result_33_fu_260_p3, "p_Result_33_fu_260_p3");
    sc_trace(mVcdFile, p_Result_33_reg_584, "p_Result_33_reg_584");
    sc_trace(mVcdFile, tmp_V_4_fu_274_p3, "tmp_V_4_fu_274_p3");
    sc_trace(mVcdFile, tmp_V_4_reg_589, "tmp_V_4_reg_589");
    sc_trace(mVcdFile, l_fu_300_p3, "l_fu_300_p3");
    sc_trace(mVcdFile, l_reg_597, "l_reg_597");
    sc_trace(mVcdFile, trunc_ln943_fu_308_p1, "trunc_ln943_fu_308_p1");
    sc_trace(mVcdFile, trunc_ln943_reg_602, "trunc_ln943_reg_602");
    sc_trace(mVcdFile, sub_ln944_fu_312_p2, "sub_ln944_fu_312_p2");
    sc_trace(mVcdFile, sub_ln944_reg_607, "sub_ln944_reg_607");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, or_ln_i_fu_419_p3, "or_ln_i_fu_419_p3");
    sc_trace(mVcdFile, or_ln_i_reg_613, "or_ln_i_reg_613");
    sc_trace(mVcdFile, icmp_ln958_fu_427_p2, "icmp_ln958_fu_427_p2");
    sc_trace(mVcdFile, icmp_ln958_reg_618, "icmp_ln958_reg_618");
    sc_trace(mVcdFile, j3_0_i_reg_194, "j3_0_i_reg_194");
    sc_trace(mVcdFile, icmp_ln32_fu_217_p2, "icmp_ln32_fu_217_p2");
    sc_trace(mVcdFile, tmp_V_3_fu_228_p12, "tmp_V_3_fu_228_p12");
    sc_trace(mVcdFile, tmp_V_fu_268_p2, "tmp_V_fu_268_p2");
    sc_trace(mVcdFile, p_Result_s_fu_282_p4, "p_Result_s_fu_282_p4");
    sc_trace(mVcdFile, p_Result_34_fu_292_p3, "p_Result_34_fu_292_p3");
    sc_trace(mVcdFile, lsb_index_fu_321_p2, "lsb_index_fu_321_p2");
    sc_trace(mVcdFile, tmp_fu_327_p4, "tmp_fu_327_p4");
    sc_trace(mVcdFile, trunc_ln947_fu_343_p1, "trunc_ln947_fu_343_p1");
    sc_trace(mVcdFile, sub_ln947_fu_347_p2, "sub_ln947_fu_347_p2");
    sc_trace(mVcdFile, zext_ln947_fu_353_p1, "zext_ln947_fu_353_p1");
    sc_trace(mVcdFile, lshr_ln947_fu_357_p2, "lshr_ln947_fu_357_p2");
    sc_trace(mVcdFile, p_Result_30_fu_363_p2, "p_Result_30_fu_363_p2");
    sc_trace(mVcdFile, icmp_ln947_fu_337_p2, "icmp_ln947_fu_337_p2");
    sc_trace(mVcdFile, icmp_ln947_1_fu_368_p2, "icmp_ln947_1_fu_368_p2");
    sc_trace(mVcdFile, tmp_749_fu_380_p3, "tmp_749_fu_380_p3");
    sc_trace(mVcdFile, trunc_ln944_fu_317_p1, "trunc_ln944_fu_317_p1");
    sc_trace(mVcdFile, add_ln949_fu_394_p2, "add_ln949_fu_394_p2");
    sc_trace(mVcdFile, p_Result_31_fu_400_p3, "p_Result_31_fu_400_p3");
    sc_trace(mVcdFile, xor_ln949_fu_388_p2, "xor_ln949_fu_388_p2");
    sc_trace(mVcdFile, and_ln949_fu_407_p2, "and_ln949_fu_407_p2");
    sc_trace(mVcdFile, a_fu_374_p2, "a_fu_374_p2");
    sc_trace(mVcdFile, or_ln949_fu_413_p2, "or_ln949_fu_413_p2");
    sc_trace(mVcdFile, zext_ln957_1_fu_436_p1, "zext_ln957_1_fu_436_p1");
    sc_trace(mVcdFile, add_ln958_fu_439_p2, "add_ln958_fu_439_p2");
    sc_trace(mVcdFile, lshr_ln958_fu_444_p2, "lshr_ln958_fu_444_p2");
    sc_trace(mVcdFile, sub_ln958_fu_454_p2, "sub_ln958_fu_454_p2");
    sc_trace(mVcdFile, m_fu_433_p1, "m_fu_433_p1");
    sc_trace(mVcdFile, zext_ln958_1_fu_459_p1, "zext_ln958_1_fu_459_p1");
    sc_trace(mVcdFile, zext_ln958_fu_450_p1, "zext_ln958_fu_450_p1");
    sc_trace(mVcdFile, shl_ln958_fu_463_p2, "shl_ln958_fu_463_p2");
    sc_trace(mVcdFile, zext_ln961_fu_476_p1, "zext_ln961_fu_476_p1");
    sc_trace(mVcdFile, m_1_fu_469_p3, "m_1_fu_469_p3");
    sc_trace(mVcdFile, m_2_fu_479_p2, "m_2_fu_479_p2");
    sc_trace(mVcdFile, m_5_fu_485_p4, "m_5_fu_485_p4");
    sc_trace(mVcdFile, tmp_750_fu_499_p3, "tmp_750_fu_499_p3");
    sc_trace(mVcdFile, sub_ln964_fu_515_p2, "sub_ln964_fu_515_p2");
    sc_trace(mVcdFile, select_ln964_fu_507_p3, "select_ln964_fu_507_p3");
    sc_trace(mVcdFile, add_ln964_fu_520_p2, "add_ln964_fu_520_p2");
    sc_trace(mVcdFile, m_6_fu_495_p1, "m_6_fu_495_p1");
    sc_trace(mVcdFile, tmp_572_i_fu_526_p3, "tmp_572_i_fu_526_p3");
    sc_trace(mVcdFile, p_Result_35_fu_533_p5, "p_Result_35_fu_533_p5");
    sc_trace(mVcdFile, trunc_ln738_fu_545_p1, "trunc_ln738_fu_545_p1");
    sc_trace(mVcdFile, bitcast_ln739_fu_549_p1, "bitcast_ln739_fu_549_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, out_r_TDATA_int, "out_r_TDATA_int");
    sc_trace(mVcdFile, out_r_TVALID_int, "out_r_TVALID_int");
    sc_trace(mVcdFile, out_r_TREADY_int, "out_r_TREADY_int");
    sc_trace(mVcdFile, regslice_both_out_data_U_vld_out, "regslice_both_out_data_U_vld_out");
    sc_trace(mVcdFile, regslice_both_out_last_V_U_apdone_blk, "regslice_both_out_last_V_U_apdone_blk");
    sc_trace(mVcdFile, regslice_both_out_last_V_U_ack_in_dummy, "regslice_both_out_last_V_U_ack_in_dummy");
    sc_trace(mVcdFile, regslice_both_out_last_V_U_vld_out, "regslice_both_out_last_V_U_vld_out");
#endif

    }
}

Loop_2_proc::~Loop_2_proc() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete myproject_axi_mux_104_16_1_1_U2513;
    delete regslice_both_out_data_U;
    delete regslice_both_out_last_V_U;
}

void Loop_2_proc::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                    esl_seteq<1,1,1>(regslice_both_out_data_U_apdone_blk.read(), ap_const_logic_0) && 
                    esl_seteq<1,1,1>(icmp_ln31_fu_205_p2.read(), ap_const_lv1_1))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,1,1>(out_r_TREADY_int.read(), ap_const_logic_1))) {
        j3_0_i_reg_194 = j_reg_569.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        j3_0_i_reg_194 = ap_const_lv4_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(regslice_both_out_data_U_apdone_blk.read(), ap_const_logic_0) && esl_seteq<1,1,1>(icmp_ln31_fu_205_p2.read(), ap_const_lv1_0))) {
        icmp_ln935_reg_579 = icmp_ln935_fu_254_p2.read();
        l_reg_597 = l_fu_300_p3.read();
        last_reg_574 = last_fu_223_p2.read();
        p_Result_33_reg_584 = tmp_V_3_fu_228_p12.read().range(15, 15);
        tmp_V_4_reg_589 = tmp_V_4_fu_274_p3.read();
        trunc_ln943_reg_602 = trunc_ln943_fu_308_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln935_reg_579.read()))) {
        icmp_ln958_reg_618 = icmp_ln958_fu_427_p2.read();
        or_ln_i_reg_613 = or_ln_i_fu_419_p3.read();
        sub_ln944_reg_607 = sub_ln944_fu_312_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(regslice_both_out_data_U_apdone_blk.read(), ap_const_logic_0))) {
        j_reg_569 = j_fu_211_p2.read();
    }
}

void Loop_2_proc::thread_a_fu_374_p2() {
    a_fu_374_p2 = (icmp_ln947_fu_337_p2.read() & icmp_ln947_1_fu_368_p2.read());
}

void Loop_2_proc::thread_add_ln949_fu_394_p2() {
    add_ln949_fu_394_p2 = (!ap_const_lv16_FFE8.is_01() || !trunc_ln944_fu_317_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(ap_const_lv16_FFE8) + sc_biguint<16>(trunc_ln944_fu_317_p1.read()));
}

void Loop_2_proc::thread_add_ln958_fu_439_p2() {
    add_ln958_fu_439_p2 = (!ap_const_lv32_FFFFFFE7.is_01() || !sub_ln944_reg_607.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFE7) + sc_biguint<32>(sub_ln944_reg_607.read()));
}

void Loop_2_proc::thread_add_ln964_fu_520_p2() {
    add_ln964_fu_520_p2 = (!sub_ln964_fu_515_p2.read().is_01() || !select_ln964_fu_507_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(sub_ln964_fu_515_p2.read()) + sc_biguint<8>(select_ln964_fu_507_p3.read()));
}

void Loop_2_proc::thread_and_ln949_fu_407_p2() {
    and_ln949_fu_407_p2 = (p_Result_31_fu_400_p3.read() & xor_ln949_fu_388_p2.read());
}

void Loop_2_proc::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void Loop_2_proc::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void Loop_2_proc::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void Loop_2_proc::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void Loop_2_proc::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void Loop_2_proc::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void Loop_2_proc::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(regslice_both_out_data_U_apdone_blk.read(), ap_const_logic_0) && 
         esl_seteq<1,1,1>(icmp_ln31_fu_205_p2.read(), ap_const_lv1_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void Loop_2_proc::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void Loop_2_proc::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(regslice_both_out_data_U_apdone_blk.read(), ap_const_logic_0) && 
         esl_seteq<1,1,1>(icmp_ln31_fu_205_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void Loop_2_proc::thread_bitcast_ln739_fu_549_p1() {
    bitcast_ln739_fu_549_p1 = trunc_ln738_fu_545_p1.read();
}

void Loop_2_proc::thread_icmp_ln31_fu_205_p2() {
    icmp_ln31_fu_205_p2 = (!j3_0_i_reg_194.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(j3_0_i_reg_194.read() == ap_const_lv4_A);
}

void Loop_2_proc::thread_icmp_ln32_fu_217_p2() {
    icmp_ln32_fu_217_p2 = (!j3_0_i_reg_194.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(j3_0_i_reg_194.read() == ap_const_lv4_9);
}

void Loop_2_proc::thread_icmp_ln935_fu_254_p2() {
    icmp_ln935_fu_254_p2 = (!tmp_V_3_fu_228_p12.read().is_01() || !ap_const_lv16_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_3_fu_228_p12.read() == ap_const_lv16_0);
}

void Loop_2_proc::thread_icmp_ln947_1_fu_368_p2() {
    icmp_ln947_1_fu_368_p2 = (!p_Result_30_fu_363_p2.read().is_01() || !ap_const_lv16_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_30_fu_363_p2.read() != ap_const_lv16_0);
}

void Loop_2_proc::thread_icmp_ln947_fu_337_p2() {
    icmp_ln947_fu_337_p2 = (!tmp_fu_327_p4.read().is_01() || !ap_const_lv31_0.is_01())? sc_lv<1>(): (sc_bigint<31>(tmp_fu_327_p4.read()) > sc_bigint<31>(ap_const_lv31_0));
}

void Loop_2_proc::thread_icmp_ln958_fu_427_p2() {
    icmp_ln958_fu_427_p2 = (!lsb_index_fu_321_p2.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): (sc_bigint<32>(lsb_index_fu_321_p2.read()) > sc_bigint<32>(ap_const_lv32_0));
}

void Loop_2_proc::thread_j_fu_211_p2() {
    j_fu_211_p2 = (!j3_0_i_reg_194.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(j3_0_i_reg_194.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void Loop_2_proc::thread_l_fu_300_p3() {
    l_fu_300_p3 = esl_cttz<32,32>(p_Result_34_fu_292_p3.read());
}

void Loop_2_proc::thread_last_fu_223_p2() {
    last_fu_223_p2 = (icmp_ln32_fu_217_p2.read() & p_read.read());
}

void Loop_2_proc::thread_lsb_index_fu_321_p2() {
    lsb_index_fu_321_p2 = (!ap_const_lv32_FFFFFFE8.is_01() || !sub_ln944_fu_312_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFE8) + sc_biguint<32>(sub_ln944_fu_312_p2.read()));
}

void Loop_2_proc::thread_lshr_ln947_fu_357_p2() {
    lshr_ln947_fu_357_p2 = (!zext_ln947_fu_353_p1.read().is_01())? sc_lv<16>(): ap_const_lv16_FFFF >> (unsigned short)zext_ln947_fu_353_p1.read().to_uint();
}

void Loop_2_proc::thread_lshr_ln958_fu_444_p2() {
    lshr_ln958_fu_444_p2 = (!add_ln958_fu_439_p2.read().is_01())? sc_lv<32>(): zext_ln957_1_fu_436_p1.read() >> (unsigned short)add_ln958_fu_439_p2.read().to_uint();
}

void Loop_2_proc::thread_m_1_fu_469_p3() {
    m_1_fu_469_p3 = (!icmp_ln958_reg_618.read()[0].is_01())? sc_lv<64>(): ((icmp_ln958_reg_618.read()[0].to_bool())? zext_ln958_fu_450_p1.read(): shl_ln958_fu_463_p2.read());
}

void Loop_2_proc::thread_m_2_fu_479_p2() {
    m_2_fu_479_p2 = (!zext_ln961_fu_476_p1.read().is_01() || !m_1_fu_469_p3.read().is_01())? sc_lv<64>(): (sc_biguint<64>(zext_ln961_fu_476_p1.read()) + sc_biguint<64>(m_1_fu_469_p3.read()));
}

void Loop_2_proc::thread_m_5_fu_485_p4() {
    m_5_fu_485_p4 = m_2_fu_479_p2.read().range(63, 1);
}

void Loop_2_proc::thread_m_6_fu_495_p1() {
    m_6_fu_495_p1 = esl_zext<64,63>(m_5_fu_485_p4.read());
}

void Loop_2_proc::thread_m_fu_433_p1() {
    m_fu_433_p1 = esl_zext<64,16>(tmp_V_4_reg_589.read());
}

void Loop_2_proc::thread_or_ln949_fu_413_p2() {
    or_ln949_fu_413_p2 = (and_ln949_fu_407_p2.read() | a_fu_374_p2.read());
}

void Loop_2_proc::thread_or_ln_i_fu_419_p3() {
    or_ln_i_fu_419_p3 = esl_concat<31,1>(ap_const_lv31_0, or_ln949_fu_413_p2.read());
}

void Loop_2_proc::thread_out_r_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        out_r_TDATA_blk_n = out_r_TREADY_int.read();
    } else {
        out_r_TDATA_blk_n = ap_const_logic_1;
    }
}

void Loop_2_proc::thread_out_r_TDATA_int() {
    out_r_TDATA_int = (!icmp_ln935_reg_579.read()[0].is_01())? sc_lv<32>(): ((icmp_ln935_reg_579.read()[0].to_bool())? ap_const_lv32_0: bitcast_ln739_fu_549_p1.read());
}

void Loop_2_proc::thread_out_r_TVALID() {
    out_r_TVALID = regslice_both_out_data_U_vld_out.read();
}

void Loop_2_proc::thread_out_r_TVALID_int() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(out_r_TREADY_int.read(), ap_const_logic_1))) {
        out_r_TVALID_int = ap_const_logic_1;
    } else {
        out_r_TVALID_int = ap_const_logic_0;
    }
}

void Loop_2_proc::thread_p_Result_30_fu_363_p2() {
    p_Result_30_fu_363_p2 = (tmp_V_4_reg_589.read() & lshr_ln947_fu_357_p2.read());
}

void Loop_2_proc::thread_p_Result_31_fu_400_p3() {
    p_Result_31_fu_400_p3 = (!add_ln949_fu_394_p2.read().is_01() || sc_biguint<16>(add_ln949_fu_394_p2.read()).to_uint() >= 16)? sc_lv<1>(): tmp_V_4_reg_589.read().range(sc_biguint<16>(add_ln949_fu_394_p2.read()).to_uint(), sc_biguint<16>(add_ln949_fu_394_p2.read()).to_uint());
}

void Loop_2_proc::thread_p_Result_33_fu_260_p3() {
    p_Result_33_fu_260_p3 = tmp_V_3_fu_228_p12.read().range(15, 15);
}

void Loop_2_proc::thread_p_Result_34_fu_292_p3() {
    p_Result_34_fu_292_p3 = esl_concat<16,16>(ap_const_lv16_FFFF, p_Result_s_fu_282_p4.read());
}

void Loop_2_proc::thread_p_Result_35_fu_533_p5() {
    p_Result_35_fu_533_p5 = esl_partset<64,64,9,32,32>(m_6_fu_495_p1.read(), tmp_572_i_fu_526_p3.read(), ap_const_lv32_17, ap_const_lv32_1F);
}

void Loop_2_proc::thread_p_Result_s_fu_282_p4() {
    p_Result_s_fu_282_p4 = tmp_V_4_fu_274_p3.read().range(0, 15);
}

void Loop_2_proc::thread_select_ln964_fu_507_p3() {
    select_ln964_fu_507_p3 = (!tmp_750_fu_499_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_750_fu_499_p3.read()[0].to_bool())? ap_const_lv8_7F: ap_const_lv8_7E);
}

void Loop_2_proc::thread_shl_ln958_fu_463_p2() {
    shl_ln958_fu_463_p2 = (!zext_ln958_1_fu_459_p1.read().is_01())? sc_lv<64>(): m_fu_433_p1.read() << (unsigned short)zext_ln958_1_fu_459_p1.read().to_uint();
}

void Loop_2_proc::thread_sub_ln944_fu_312_p2() {
    sub_ln944_fu_312_p2 = (!ap_const_lv32_10.is_01() || !l_reg_597.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_10) - sc_biguint<32>(l_reg_597.read()));
}

void Loop_2_proc::thread_sub_ln947_fu_347_p2() {
    sub_ln947_fu_347_p2 = (!ap_const_lv5_9.is_01() || !trunc_ln947_fu_343_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_9) - sc_biguint<5>(trunc_ln947_fu_343_p1.read()));
}

void Loop_2_proc::thread_sub_ln958_fu_454_p2() {
    sub_ln958_fu_454_p2 = (!ap_const_lv32_19.is_01() || !sub_ln944_reg_607.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_19) - sc_biguint<32>(sub_ln944_reg_607.read()));
}

void Loop_2_proc::thread_sub_ln964_fu_515_p2() {
    sub_ln964_fu_515_p2 = (!ap_const_lv8_6.is_01() || !trunc_ln943_reg_602.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_6) - sc_biguint<8>(trunc_ln943_reg_602.read()));
}

void Loop_2_proc::thread_tmp_572_i_fu_526_p3() {
    tmp_572_i_fu_526_p3 = esl_concat<1,8>(p_Result_33_reg_584.read(), add_ln964_fu_520_p2.read());
}

void Loop_2_proc::thread_tmp_749_fu_380_p3() {
    tmp_749_fu_380_p3 = lsb_index_fu_321_p2.read().range(31, 31);
}

void Loop_2_proc::thread_tmp_750_fu_499_p3() {
    tmp_750_fu_499_p3 = m_2_fu_479_p2.read().range(25, 25);
}

void Loop_2_proc::thread_tmp_V_4_fu_274_p3() {
    tmp_V_4_fu_274_p3 = (!p_Result_33_fu_260_p3.read()[0].is_01())? sc_lv<16>(): ((p_Result_33_fu_260_p3.read()[0].to_bool())? tmp_V_fu_268_p2.read(): tmp_V_3_fu_228_p12.read());
}

void Loop_2_proc::thread_tmp_V_fu_268_p2() {
    tmp_V_fu_268_p2 = (!ap_const_lv16_0.is_01() || !tmp_V_3_fu_228_p12.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(tmp_V_3_fu_228_p12.read()));
}

void Loop_2_proc::thread_tmp_fu_327_p4() {
    tmp_fu_327_p4 = lsb_index_fu_321_p2.read().range(31, 1);
}

void Loop_2_proc::thread_trunc_ln738_fu_545_p1() {
    trunc_ln738_fu_545_p1 = p_Result_35_fu_533_p5.read().range(32-1, 0);
}

void Loop_2_proc::thread_trunc_ln943_fu_308_p1() {
    trunc_ln943_fu_308_p1 = l_fu_300_p3.read().range(8-1, 0);
}

void Loop_2_proc::thread_trunc_ln944_fu_317_p1() {
    trunc_ln944_fu_317_p1 = sub_ln944_fu_312_p2.read().range(16-1, 0);
}

void Loop_2_proc::thread_trunc_ln947_fu_343_p1() {
    trunc_ln947_fu_343_p1 = sub_ln944_fu_312_p2.read().range(5-1, 0);
}

void Loop_2_proc::thread_xor_ln949_fu_388_p2() {
    xor_ln949_fu_388_p2 = (tmp_749_fu_380_p3.read() ^ ap_const_lv1_1);
}

void Loop_2_proc::thread_zext_ln947_fu_353_p1() {
    zext_ln947_fu_353_p1 = esl_zext<16,5>(sub_ln947_fu_347_p2.read());
}

void Loop_2_proc::thread_zext_ln957_1_fu_436_p1() {
    zext_ln957_1_fu_436_p1 = esl_zext<32,16>(tmp_V_4_reg_589.read());
}

void Loop_2_proc::thread_zext_ln958_1_fu_459_p1() {
    zext_ln958_1_fu_459_p1 = esl_zext<64,32>(sub_ln958_fu_454_p2.read());
}

void Loop_2_proc::thread_zext_ln958_fu_450_p1() {
    zext_ln958_fu_450_p1 = esl_zext<64,32>(lshr_ln958_fu_444_p2.read());
}

void Loop_2_proc::thread_zext_ln961_fu_476_p1() {
    zext_ln961_fu_476_p1 = esl_zext<64,32>(or_ln_i_reg_613.read());
}

void Loop_2_proc::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(regslice_both_out_data_U_apdone_blk.read(), ap_const_logic_0) && esl_seteq<1,1,1>(icmp_ln31_fu_205_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(regslice_both_out_data_U_apdone_blk.read(), ap_const_logic_0) && esl_seteq<1,1,1>(icmp_ln31_fu_205_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(out_r_TREADY_int.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(out_r_TREADY_int.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        default : 
            ap_NS_fsm = "XXXXX";
            break;
    }
}

}

