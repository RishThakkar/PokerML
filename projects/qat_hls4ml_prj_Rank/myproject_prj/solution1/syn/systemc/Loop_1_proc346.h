// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _Loop_1_proc346_HH_
#define _Loop_1_proc346_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "myproject_axi_fpext_32ns_64_2_1.h"

namespace ap_rtl {

struct Loop_1_proc346 : public sc_module {
    // Port declarations 24
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_in< sc_logic > start_full_n;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > start_out;
    sc_out< sc_logic > start_write;
    sc_out< sc_lv<16> > in_local_V_data_0_V_din;
    sc_in< sc_logic > in_local_V_data_0_V_full_n;
    sc_out< sc_logic > in_local_V_data_0_V_write;
    sc_out< sc_lv<16> > in_local_V_data_1_V_din;
    sc_in< sc_logic > in_local_V_data_1_V_full_n;
    sc_out< sc_logic > in_local_V_data_1_V_write;
    sc_out< sc_lv<16> > in_local_V_data_2_V_din;
    sc_in< sc_logic > in_local_V_data_2_V_full_n;
    sc_out< sc_logic > in_local_V_data_2_V_write;
    sc_in< sc_lv<1> > in_r_TLAST;
    sc_in< sc_logic > in_r_TVALID;
    sc_out< sc_logic > in_r_TREADY;
    sc_in< sc_lv<32> > in_r_TDATA;
    sc_out< sc_lv<1> > ap_return;


    // Module declarations
    Loop_1_proc346(sc_module_name name);
    SC_HAS_PROCESS(Loop_1_proc346);

    ~Loop_1_proc346();

    sc_trace_file* mVcdFile;

    myproject_axi_fpext_32ns_64_2_1<1,2,32,64>* myproject_axi_fpext_32ns_64_2_1_U1;
    regslice_both<1>* regslice_both_in_last_V_U;
    regslice_both<32>* regslice_both_in_data_U;
    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<6> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_logic > in_local_V_data_0_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > icmp_ln20_fu_232_p2;
    sc_signal< sc_logic > in_local_V_data_1_V_blk_n;
    sc_signal< sc_logic > in_local_V_data_2_V_blk_n;
    sc_signal< sc_logic > in_r_TDATA_blk_n;
    sc_signal< sc_lv<13> > i_fu_226_p2;
    sc_signal< sc_lv<13> > i_reg_734;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<2> > j_fu_238_p2;
    sc_signal< sc_lv<2> > j_reg_742;
    sc_signal< sc_logic > io_acc_block_signal_op40;
    sc_signal< bool > ap_block_state3;
    sc_signal< sc_lv<32> > in_data_tmp_reg_747;
    sc_signal< sc_lv<1> > p_Result_s_reg_753;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<52> > trunc_ln565_fu_321_p1;
    sc_signal< sc_lv<52> > trunc_ln565_reg_758;
    sc_signal< sc_lv<1> > icmp_ln571_fu_325_p2;
    sc_signal< sc_lv<1> > icmp_ln571_reg_763;
    sc_signal< sc_lv<12> > F2_fu_331_p2;
    sc_signal< sc_lv<12> > F2_reg_769;
    sc_signal< sc_lv<16> > select_ln603_3_fu_568_p3;
    sc_signal< sc_lv<16> > select_ln603_3_reg_777;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<13> > i_0_i_reg_183;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<2> > j_0_i_reg_194;
    sc_signal< sc_lv<1> > icmp_ln17_fu_220_p2;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<1> > is_last_1_fu_154;
    sc_signal< sc_lv<1> > is_last_fu_253_p2;
    sc_signal< sc_lv<48> > ctype_data_V_fu_158;
    sc_signal< sc_lv<48> > ctype_data_V_1_fu_707_p2;
    sc_signal< sc_lv<64> > grp_fu_206_p1;
    sc_signal< sc_lv<64> > ireg_V_fu_291_p1;
    sc_signal< sc_lv<11> > exp_tmp_V_fu_307_p4;
    sc_signal< sc_lv<63> > trunc_ln556_fu_295_p1;
    sc_signal< sc_lv<12> > zext_ln461_fu_317_p1;
    sc_signal< sc_lv<53> > tmp_s_fu_337_p3;
    sc_signal< sc_lv<54> > p_Result_42_fu_344_p1;
    sc_signal< sc_lv<54> > man_V_1_fu_348_p2;
    sc_signal< sc_lv<1> > icmp_ln581_fu_361_p2;
    sc_signal< sc_lv<12> > add_ln581_fu_366_p2;
    sc_signal< sc_lv<12> > sub_ln581_fu_371_p2;
    sc_signal< sc_lv<12> > sh_amt_fu_376_p3;
    sc_signal< sc_lv<54> > man_V_2_fu_354_p3;
    sc_signal< sc_lv<8> > tmp_96_fu_407_p4;
    sc_signal< sc_lv<32> > sext_ln581_fu_384_p1;
    sc_signal< sc_lv<54> > zext_ln586_fu_423_p1;
    sc_signal< sc_lv<54> > ashr_ln586_fu_427_p2;
    sc_signal< sc_lv<32> > bitcast_ln696_fu_437_p1;
    sc_signal< sc_lv<1> > tmp_97_fu_440_p3;
    sc_signal< sc_lv<16> > trunc_ln583_fu_397_p1;
    sc_signal< sc_lv<16> > sext_ln581_1_fu_388_p1;
    sc_signal< sc_lv<1> > icmp_ln582_fu_392_p2;
    sc_signal< sc_lv<1> > xor_ln571_fu_462_p2;
    sc_signal< sc_lv<1> > or_ln582_fu_473_p2;
    sc_signal< sc_lv<1> > xor_ln582_fu_478_p2;
    sc_signal< sc_lv<1> > icmp_ln585_fu_401_p2;
    sc_signal< sc_lv<1> > and_ln581_fu_484_p2;
    sc_signal< sc_lv<1> > xor_ln585_fu_490_p2;
    sc_signal< sc_lv<1> > or_ln581_fu_508_p2;
    sc_signal< sc_lv<1> > icmp_ln603_fu_417_p2;
    sc_signal< sc_lv<1> > xor_ln581_fu_514_p2;
    sc_signal< sc_lv<1> > and_ln603_fu_520_p2;
    sc_signal< sc_lv<16> > shl_ln604_fu_456_p2;
    sc_signal< sc_lv<16> > trunc_ln586_fu_433_p1;
    sc_signal< sc_lv<1> > and_ln585_1_fu_502_p2;
    sc_signal< sc_lv<1> > and_ln585_fu_496_p2;
    sc_signal< sc_lv<16> > select_ln588_fu_448_p3;
    sc_signal< sc_lv<1> > and_ln582_fu_467_p2;
    sc_signal< sc_lv<1> > or_ln603_fu_534_p2;
    sc_signal< sc_lv<16> > select_ln603_fu_526_p3;
    sc_signal< sc_lv<16> > select_ln603_1_fu_540_p3;
    sc_signal< sc_lv<1> > or_ln603_1_fu_548_p2;
    sc_signal< sc_lv<1> > or_ln603_2_fu_562_p2;
    sc_signal< sc_lv<16> > select_ln603_2_fu_554_p3;
    sc_signal< sc_lv<6> > shl_ln_fu_576_p3;
    sc_signal< sc_lv<6> > empty_219_fu_584_p2;
    sc_signal< sc_lv<1> > icmp_ln203_fu_590_p2;
    sc_signal< sc_lv<6> > sub_ln203_fu_599_p2;
    sc_signal< sc_lv<6> > select_ln203_fu_605_p3;
    sc_signal< sc_lv<6> > select_ln203_2_fu_621_p3;
    sc_signal< sc_lv<6> > select_ln203_1_fu_613_p3;
    sc_signal< sc_lv<6> > sub_ln203_1_fu_629_p2;
    sc_signal< sc_lv<48> > zext_ln203_fu_596_p1;
    sc_signal< sc_lv<48> > zext_ln203_1_fu_635_p1;
    sc_signal< sc_lv<48> > shl_ln203_fu_647_p2;
    sc_signal< sc_lv<48> > tmp_98_fu_653_p4;
    sc_signal< sc_lv<48> > zext_ln203_2_fu_639_p1;
    sc_signal< sc_lv<48> > zext_ln203_3_fu_643_p1;
    sc_signal< sc_lv<48> > shl_ln203_1_fu_671_p2;
    sc_signal< sc_lv<48> > lshr_ln203_fu_677_p2;
    sc_signal< sc_lv<48> > and_ln203_fu_683_p2;
    sc_signal< sc_lv<48> > xor_ln203_fu_689_p2;
    sc_signal< sc_lv<48> > select_ln203_3_fu_663_p3;
    sc_signal< sc_lv<48> > and_ln203_1_fu_695_p2;
    sc_signal< sc_lv<48> > and_ln203_2_fu_701_p2;
    sc_signal< sc_logic > grp_fu_206_ce;
    sc_signal< sc_lv<6> > ap_NS_fsm;
    sc_signal< sc_logic > regslice_both_in_last_V_U_apdone_blk;
    sc_signal< sc_lv<1> > in_r_TLAST_int;
    sc_signal< sc_logic > in_r_TVALID_int;
    sc_signal< sc_logic > in_r_TREADY_int;
    sc_signal< sc_logic > regslice_both_in_last_V_U_ack_in;
    sc_signal< sc_logic > regslice_both_in_data_U_apdone_blk;
    sc_signal< sc_lv<32> > in_r_TDATA_int;
    sc_signal< sc_logic > regslice_both_in_data_U_vld_out;
    sc_signal< sc_logic > regslice_both_in_data_U_ack_in;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<6> ap_ST_fsm_state1;
    static const sc_lv<6> ap_ST_fsm_state2;
    static const sc_lv<6> ap_ST_fsm_state3;
    static const sc_lv<6> ap_ST_fsm_state4;
    static const sc_lv<6> ap_ST_fsm_state5;
    static const sc_lv<6> ap_ST_fsm_state6;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<13> ap_const_lv13_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<13> ap_const_lv13_1000;
    static const sc_lv<13> ap_const_lv13_1;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_34;
    static const sc_lv<32> ap_const_lv32_3E;
    static const sc_lv<63> ap_const_lv63_0;
    static const sc_lv<12> ap_const_lv12_433;
    static const sc_lv<54> ap_const_lv54_0;
    static const sc_lv<12> ap_const_lv12_A;
    static const sc_lv<12> ap_const_lv12_FF6;
    static const sc_lv<12> ap_const_lv12_36;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<16> ap_const_lv16_FFFF;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<6> ap_const_lv6_F;
    static const sc_lv<6> ap_const_lv6_2F;
    static const sc_lv<48> ap_const_lv48_FFFFFFFFFFFF;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_F2_fu_331_p2();
    void thread_add_ln581_fu_366_p2();
    void thread_and_ln203_1_fu_695_p2();
    void thread_and_ln203_2_fu_701_p2();
    void thread_and_ln203_fu_683_p2();
    void thread_and_ln581_fu_484_p2();
    void thread_and_ln582_fu_467_p2();
    void thread_and_ln585_1_fu_502_p2();
    void thread_and_ln585_fu_496_p2();
    void thread_and_ln603_fu_520_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_block_state1();
    void thread_ap_block_state3();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_ashr_ln586_fu_427_p2();
    void thread_bitcast_ln696_fu_437_p1();
    void thread_ctype_data_V_1_fu_707_p2();
    void thread_empty_219_fu_584_p2();
    void thread_exp_tmp_V_fu_307_p4();
    void thread_grp_fu_206_ce();
    void thread_i_fu_226_p2();
    void thread_icmp_ln17_fu_220_p2();
    void thread_icmp_ln203_fu_590_p2();
    void thread_icmp_ln20_fu_232_p2();
    void thread_icmp_ln571_fu_325_p2();
    void thread_icmp_ln581_fu_361_p2();
    void thread_icmp_ln582_fu_392_p2();
    void thread_icmp_ln585_fu_401_p2();
    void thread_icmp_ln603_fu_417_p2();
    void thread_in_local_V_data_0_V_blk_n();
    void thread_in_local_V_data_0_V_din();
    void thread_in_local_V_data_0_V_write();
    void thread_in_local_V_data_1_V_blk_n();
    void thread_in_local_V_data_1_V_din();
    void thread_in_local_V_data_1_V_write();
    void thread_in_local_V_data_2_V_blk_n();
    void thread_in_local_V_data_2_V_din();
    void thread_in_local_V_data_2_V_write();
    void thread_in_r_TDATA_blk_n();
    void thread_in_r_TREADY();
    void thread_in_r_TREADY_int();
    void thread_internal_ap_ready();
    void thread_io_acc_block_signal_op40();
    void thread_ireg_V_fu_291_p1();
    void thread_is_last_fu_253_p2();
    void thread_j_fu_238_p2();
    void thread_lshr_ln203_fu_677_p2();
    void thread_man_V_1_fu_348_p2();
    void thread_man_V_2_fu_354_p3();
    void thread_or_ln581_fu_508_p2();
    void thread_or_ln582_fu_473_p2();
    void thread_or_ln603_1_fu_548_p2();
    void thread_or_ln603_2_fu_562_p2();
    void thread_or_ln603_fu_534_p2();
    void thread_p_Result_42_fu_344_p1();
    void thread_real_start();
    void thread_select_ln203_1_fu_613_p3();
    void thread_select_ln203_2_fu_621_p3();
    void thread_select_ln203_3_fu_663_p3();
    void thread_select_ln203_fu_605_p3();
    void thread_select_ln588_fu_448_p3();
    void thread_select_ln603_1_fu_540_p3();
    void thread_select_ln603_2_fu_554_p3();
    void thread_select_ln603_3_fu_568_p3();
    void thread_select_ln603_fu_526_p3();
    void thread_sext_ln581_1_fu_388_p1();
    void thread_sext_ln581_fu_384_p1();
    void thread_sh_amt_fu_376_p3();
    void thread_shl_ln203_1_fu_671_p2();
    void thread_shl_ln203_fu_647_p2();
    void thread_shl_ln604_fu_456_p2();
    void thread_shl_ln_fu_576_p3();
    void thread_start_out();
    void thread_start_write();
    void thread_sub_ln203_1_fu_629_p2();
    void thread_sub_ln203_fu_599_p2();
    void thread_sub_ln581_fu_371_p2();
    void thread_tmp_96_fu_407_p4();
    void thread_tmp_97_fu_440_p3();
    void thread_tmp_98_fu_653_p4();
    void thread_tmp_s_fu_337_p3();
    void thread_trunc_ln556_fu_295_p1();
    void thread_trunc_ln565_fu_321_p1();
    void thread_trunc_ln583_fu_397_p1();
    void thread_trunc_ln586_fu_433_p1();
    void thread_xor_ln203_fu_689_p2();
    void thread_xor_ln571_fu_462_p2();
    void thread_xor_ln581_fu_514_p2();
    void thread_xor_ln582_fu_478_p2();
    void thread_xor_ln585_fu_490_p2();
    void thread_zext_ln203_1_fu_635_p1();
    void thread_zext_ln203_2_fu_639_p1();
    void thread_zext_ln203_3_fu_643_p1();
    void thread_zext_ln203_fu_596_p1();
    void thread_zext_ln461_fu_317_p1();
    void thread_zext_ln586_fu_423_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif