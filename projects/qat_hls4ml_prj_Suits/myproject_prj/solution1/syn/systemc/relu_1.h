// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _relu_1_HH_
#define _relu_1_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct relu_1 : public sc_module {
    // Port declarations 34
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
    sc_in< sc_lv<16> > data_V_data_0_V_dout;
    sc_in< sc_logic > data_V_data_0_V_empty_n;
    sc_out< sc_logic > data_V_data_0_V_read;
    sc_in< sc_lv<16> > data_V_data_1_V_dout;
    sc_in< sc_logic > data_V_data_1_V_empty_n;
    sc_out< sc_logic > data_V_data_1_V_read;
    sc_in< sc_lv<16> > data_V_data_2_V_dout;
    sc_in< sc_logic > data_V_data_2_V_empty_n;
    sc_out< sc_logic > data_V_data_2_V_read;
    sc_in< sc_lv<16> > data_V_data_3_V_dout;
    sc_in< sc_logic > data_V_data_3_V_empty_n;
    sc_out< sc_logic > data_V_data_3_V_read;
    sc_out< sc_lv<6> > res_V_data_0_V_din;
    sc_in< sc_logic > res_V_data_0_V_full_n;
    sc_out< sc_logic > res_V_data_0_V_write;
    sc_out< sc_lv<6> > res_V_data_1_V_din;
    sc_in< sc_logic > res_V_data_1_V_full_n;
    sc_out< sc_logic > res_V_data_1_V_write;
    sc_out< sc_lv<6> > res_V_data_2_V_din;
    sc_in< sc_logic > res_V_data_2_V_full_n;
    sc_out< sc_logic > res_V_data_2_V_write;
    sc_out< sc_lv<6> > res_V_data_3_V_din;
    sc_in< sc_logic > res_V_data_3_V_full_n;
    sc_out< sc_logic > res_V_data_3_V_write;


    // Module declarations
    relu_1(sc_module_name name);
    SC_HAS_PROCESS(relu_1);

    ~relu_1();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_logic > data_V_data_0_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > icmp_ln41_reg_799;
    sc_signal< sc_logic > data_V_data_1_V_blk_n;
    sc_signal< sc_logic > data_V_data_2_V_blk_n;
    sc_signal< sc_logic > data_V_data_3_V_blk_n;
    sc_signal< sc_logic > res_V_data_0_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<1> > icmp_ln41_reg_799_pp0_iter1_reg;
    sc_signal< sc_logic > res_V_data_1_V_blk_n;
    sc_signal< sc_logic > res_V_data_2_V_blk_n;
    sc_signal< sc_logic > res_V_data_3_V_blk_n;
    sc_signal< sc_lv<12> > i_0_reg_208;
    sc_signal< sc_lv<1> > icmp_ln41_fu_219_p2;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< sc_logic > io_acc_block_signal_op20;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< sc_logic > io_acc_block_signal_op108;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter2;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<12> > i_fu_225_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<6> > tmp_data_0_V_2_fu_377_p3;
    sc_signal< sc_lv<6> > tmp_data_0_V_2_reg_808;
    sc_signal< sc_lv<6> > tmp_data_1_V_2_fu_515_p3;
    sc_signal< sc_lv<6> > tmp_data_1_V_2_reg_813;
    sc_signal< sc_lv<6> > tmp_data_2_V_2_fu_653_p3;
    sc_signal< sc_lv<6> > tmp_data_2_V_2_reg_818;
    sc_signal< sc_lv<6> > tmp_data_3_V_2_fu_791_p3;
    sc_signal< sc_lv<6> > tmp_data_3_V_2_reg_823;
    sc_signal< bool > ap_block_state1;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<3> > trunc_ln718_fu_271_p1;
    sc_signal< sc_lv<1> > icmp_ln718_fu_275_p2;
    sc_signal< sc_lv<1> > tmp_21_fu_263_p3;
    sc_signal< sc_lv<1> > or_ln412_fu_289_p2;
    sc_signal< sc_lv<1> > tmp_23_fu_295_p3;
    sc_signal< sc_lv<1> > and_ln415_fu_303_p2;
    sc_signal< sc_lv<6> > zext_ln415_fu_309_p1;
    sc_signal< sc_lv<6> > trunc_ln_fu_253_p4;
    sc_signal< sc_lv<6> > add_ln415_fu_313_p2;
    sc_signal< sc_lv<1> > tmp_24_fu_319_p3;
    sc_signal< sc_lv<1> > tmp_22_fu_281_p3;
    sc_signal< sc_lv<1> > xor_ln416_fu_327_p2;
    sc_signal< sc_lv<6> > p_Result_s_fu_339_p4;
    sc_signal< sc_lv<1> > and_ln416_fu_333_p2;
    sc_signal< sc_lv<1> > icmp_ln879_fu_349_p2;
    sc_signal< sc_lv<1> > icmp_ln768_fu_355_p2;
    sc_signal< sc_lv<1> > select_ln777_fu_361_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_fu_247_p2;
    sc_signal< sc_lv<6> > select_ln340_fu_369_p3;
    sc_signal< sc_lv<3> > trunc_ln718_1_fu_409_p1;
    sc_signal< sc_lv<1> > icmp_ln718_1_fu_413_p2;
    sc_signal< sc_lv<1> > tmp_25_fu_401_p3;
    sc_signal< sc_lv<1> > or_ln412_1_fu_427_p2;
    sc_signal< sc_lv<1> > tmp_27_fu_433_p3;
    sc_signal< sc_lv<1> > and_ln415_1_fu_441_p2;
    sc_signal< sc_lv<6> > zext_ln415_1_fu_447_p1;
    sc_signal< sc_lv<6> > trunc_ln708_7_fu_391_p4;
    sc_signal< sc_lv<6> > add_ln415_1_fu_451_p2;
    sc_signal< sc_lv<1> > tmp_28_fu_457_p3;
    sc_signal< sc_lv<1> > tmp_26_fu_419_p3;
    sc_signal< sc_lv<1> > xor_ln416_1_fu_465_p2;
    sc_signal< sc_lv<6> > p_Result_16_1_fu_477_p4;
    sc_signal< sc_lv<1> > and_ln416_1_fu_471_p2;
    sc_signal< sc_lv<1> > icmp_ln879_1_fu_487_p2;
    sc_signal< sc_lv<1> > icmp_ln768_1_fu_493_p2;
    sc_signal< sc_lv<1> > select_ln777_1_fu_499_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_1_fu_385_p2;
    sc_signal< sc_lv<6> > select_ln340_1_fu_507_p3;
    sc_signal< sc_lv<3> > trunc_ln718_2_fu_547_p1;
    sc_signal< sc_lv<1> > icmp_ln718_2_fu_551_p2;
    sc_signal< sc_lv<1> > tmp_29_fu_539_p3;
    sc_signal< sc_lv<1> > or_ln412_2_fu_565_p2;
    sc_signal< sc_lv<1> > tmp_31_fu_571_p3;
    sc_signal< sc_lv<1> > and_ln415_2_fu_579_p2;
    sc_signal< sc_lv<6> > zext_ln415_2_fu_585_p1;
    sc_signal< sc_lv<6> > trunc_ln708_8_fu_529_p4;
    sc_signal< sc_lv<6> > add_ln415_2_fu_589_p2;
    sc_signal< sc_lv<1> > tmp_32_fu_595_p3;
    sc_signal< sc_lv<1> > tmp_30_fu_557_p3;
    sc_signal< sc_lv<1> > xor_ln416_2_fu_603_p2;
    sc_signal< sc_lv<6> > p_Result_16_2_fu_615_p4;
    sc_signal< sc_lv<1> > and_ln416_2_fu_609_p2;
    sc_signal< sc_lv<1> > icmp_ln879_2_fu_625_p2;
    sc_signal< sc_lv<1> > icmp_ln768_2_fu_631_p2;
    sc_signal< sc_lv<1> > select_ln777_2_fu_637_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_2_fu_523_p2;
    sc_signal< sc_lv<6> > select_ln340_2_fu_645_p3;
    sc_signal< sc_lv<3> > trunc_ln718_3_fu_685_p1;
    sc_signal< sc_lv<1> > icmp_ln718_3_fu_689_p2;
    sc_signal< sc_lv<1> > tmp_33_fu_677_p3;
    sc_signal< sc_lv<1> > or_ln412_3_fu_703_p2;
    sc_signal< sc_lv<1> > tmp_35_fu_709_p3;
    sc_signal< sc_lv<1> > and_ln415_3_fu_717_p2;
    sc_signal< sc_lv<6> > zext_ln415_3_fu_723_p1;
    sc_signal< sc_lv<6> > trunc_ln708_9_fu_667_p4;
    sc_signal< sc_lv<6> > add_ln415_3_fu_727_p2;
    sc_signal< sc_lv<1> > tmp_36_fu_733_p3;
    sc_signal< sc_lv<1> > tmp_34_fu_695_p3;
    sc_signal< sc_lv<1> > xor_ln416_3_fu_741_p2;
    sc_signal< sc_lv<6> > p_Result_16_3_fu_753_p4;
    sc_signal< sc_lv<1> > and_ln416_3_fu_747_p2;
    sc_signal< sc_lv<1> > icmp_ln879_3_fu_763_p2;
    sc_signal< sc_lv<1> > icmp_ln768_3_fu_769_p2;
    sc_signal< sc_lv<1> > select_ln777_3_fu_775_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_3_fu_661_p2;
    sc_signal< sc_lv<6> > select_ln340_3_fu_783_p3;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_pp0_stage0;
    static const sc_lv<3> ap_ST_fsm_state5;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<12> ap_const_lv12_0;
    static const sc_lv<12> ap_const_lv12_F04;
    static const sc_lv<12> ap_const_lv12_1;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<6> ap_const_lv6_3F;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<32> ap_const_lv32_2;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln415_1_fu_451_p2();
    void thread_add_ln415_2_fu_589_p2();
    void thread_add_ln415_3_fu_727_p2();
    void thread_add_ln415_fu_313_p2();
    void thread_and_ln415_1_fu_441_p2();
    void thread_and_ln415_2_fu_579_p2();
    void thread_and_ln415_3_fu_717_p2();
    void thread_and_ln415_fu_303_p2();
    void thread_and_ln416_1_fu_471_p2();
    void thread_and_ln416_2_fu_609_p2();
    void thread_and_ln416_3_fu_747_p2();
    void thread_and_ln416_fu_333_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state5();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_block_state4_pp0_stage0_iter2();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_ready();
    void thread_data_V_data_0_V_blk_n();
    void thread_data_V_data_0_V_read();
    void thread_data_V_data_1_V_blk_n();
    void thread_data_V_data_1_V_read();
    void thread_data_V_data_2_V_blk_n();
    void thread_data_V_data_2_V_read();
    void thread_data_V_data_3_V_blk_n();
    void thread_data_V_data_3_V_read();
    void thread_i_fu_225_p2();
    void thread_icmp_ln1494_1_fu_385_p2();
    void thread_icmp_ln1494_2_fu_523_p2();
    void thread_icmp_ln1494_3_fu_661_p2();
    void thread_icmp_ln1494_fu_247_p2();
    void thread_icmp_ln41_fu_219_p2();
    void thread_icmp_ln718_1_fu_413_p2();
    void thread_icmp_ln718_2_fu_551_p2();
    void thread_icmp_ln718_3_fu_689_p2();
    void thread_icmp_ln718_fu_275_p2();
    void thread_icmp_ln768_1_fu_493_p2();
    void thread_icmp_ln768_2_fu_631_p2();
    void thread_icmp_ln768_3_fu_769_p2();
    void thread_icmp_ln768_fu_355_p2();
    void thread_icmp_ln879_1_fu_487_p2();
    void thread_icmp_ln879_2_fu_625_p2();
    void thread_icmp_ln879_3_fu_763_p2();
    void thread_icmp_ln879_fu_349_p2();
    void thread_internal_ap_ready();
    void thread_io_acc_block_signal_op108();
    void thread_io_acc_block_signal_op20();
    void thread_or_ln412_1_fu_427_p2();
    void thread_or_ln412_2_fu_565_p2();
    void thread_or_ln412_3_fu_703_p2();
    void thread_or_ln412_fu_289_p2();
    void thread_p_Result_16_1_fu_477_p4();
    void thread_p_Result_16_2_fu_615_p4();
    void thread_p_Result_16_3_fu_753_p4();
    void thread_p_Result_s_fu_339_p4();
    void thread_real_start();
    void thread_res_V_data_0_V_blk_n();
    void thread_res_V_data_0_V_din();
    void thread_res_V_data_0_V_write();
    void thread_res_V_data_1_V_blk_n();
    void thread_res_V_data_1_V_din();
    void thread_res_V_data_1_V_write();
    void thread_res_V_data_2_V_blk_n();
    void thread_res_V_data_2_V_din();
    void thread_res_V_data_2_V_write();
    void thread_res_V_data_3_V_blk_n();
    void thread_res_V_data_3_V_din();
    void thread_res_V_data_3_V_write();
    void thread_select_ln340_1_fu_507_p3();
    void thread_select_ln340_2_fu_645_p3();
    void thread_select_ln340_3_fu_783_p3();
    void thread_select_ln340_fu_369_p3();
    void thread_select_ln777_1_fu_499_p3();
    void thread_select_ln777_2_fu_637_p3();
    void thread_select_ln777_3_fu_775_p3();
    void thread_select_ln777_fu_361_p3();
    void thread_start_out();
    void thread_start_write();
    void thread_tmp_21_fu_263_p3();
    void thread_tmp_22_fu_281_p3();
    void thread_tmp_23_fu_295_p3();
    void thread_tmp_24_fu_319_p3();
    void thread_tmp_25_fu_401_p3();
    void thread_tmp_26_fu_419_p3();
    void thread_tmp_27_fu_433_p3();
    void thread_tmp_28_fu_457_p3();
    void thread_tmp_29_fu_539_p3();
    void thread_tmp_30_fu_557_p3();
    void thread_tmp_31_fu_571_p3();
    void thread_tmp_32_fu_595_p3();
    void thread_tmp_33_fu_677_p3();
    void thread_tmp_34_fu_695_p3();
    void thread_tmp_35_fu_709_p3();
    void thread_tmp_36_fu_733_p3();
    void thread_tmp_data_0_V_2_fu_377_p3();
    void thread_tmp_data_1_V_2_fu_515_p3();
    void thread_tmp_data_2_V_2_fu_653_p3();
    void thread_tmp_data_3_V_2_fu_791_p3();
    void thread_trunc_ln708_7_fu_391_p4();
    void thread_trunc_ln708_8_fu_529_p4();
    void thread_trunc_ln708_9_fu_667_p4();
    void thread_trunc_ln718_1_fu_409_p1();
    void thread_trunc_ln718_2_fu_547_p1();
    void thread_trunc_ln718_3_fu_685_p1();
    void thread_trunc_ln718_fu_271_p1();
    void thread_trunc_ln_fu_253_p4();
    void thread_xor_ln416_1_fu_465_p2();
    void thread_xor_ln416_2_fu_603_p2();
    void thread_xor_ln416_3_fu_741_p2();
    void thread_xor_ln416_fu_327_p2();
    void thread_zext_ln415_1_fu_447_p1();
    void thread_zext_ln415_2_fu_585_p1();
    void thread_zext_ln415_3_fu_723_p1();
    void thread_zext_ln415_fu_309_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
