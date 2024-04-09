// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_HH_
#define _dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "myproject_axi_mux_42_32_1_1.h"
#include "myproject_axi_mul_mul_6s_16s_21_1_1.h"
#include "dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_outidx.h"
#include "dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_w6_V.h"

namespace ap_rtl {

struct dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s : public sc_module {
    // Port declarations 46
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<16> > kernel_data_V_1_0;
    sc_in< sc_lv<16> > kernel_data_V_1_1;
    sc_in< sc_lv<16> > kernel_data_V_1_2;
    sc_in< sc_lv<16> > kernel_data_V_1_3;
    sc_in< sc_lv<16> > kernel_data_V_1_4;
    sc_in< sc_lv<16> > kernel_data_V_1_5;
    sc_in< sc_lv<16> > kernel_data_V_1_6;
    sc_in< sc_lv<16> > kernel_data_V_1_7;
    sc_in< sc_lv<16> > kernel_data_V_1_8;
    sc_in< sc_lv<16> > kernel_data_V_1_9;
    sc_in< sc_lv<16> > kernel_data_V_1_10;
    sc_in< sc_lv<16> > kernel_data_V_1_11;
    sc_in< sc_lv<16> > kernel_data_V_1_12;
    sc_in< sc_lv<16> > kernel_data_V_1_13;
    sc_in< sc_lv<16> > kernel_data_V_1_14;
    sc_in< sc_lv<16> > kernel_data_V_1_15;
    sc_in< sc_lv<16> > kernel_data_V_1_16;
    sc_in< sc_lv<16> > kernel_data_V_1_17;
    sc_in< sc_lv<16> > kernel_data_V_1_18;
    sc_in< sc_lv<16> > kernel_data_V_1_19;
    sc_in< sc_lv<16> > kernel_data_V_1_20;
    sc_in< sc_lv<16> > kernel_data_V_1_21;
    sc_in< sc_lv<16> > kernel_data_V_1_22;
    sc_in< sc_lv<16> > kernel_data_V_1_23;
    sc_in< sc_lv<16> > kernel_data_V_1_24;
    sc_in< sc_lv<16> > kernel_data_V_1_25;
    sc_in< sc_lv<16> > kernel_data_V_1_26;
    sc_in< sc_lv<16> > kernel_data_V_1_27;
    sc_in< sc_lv<16> > kernel_data_V_1_28;
    sc_in< sc_lv<16> > kernel_data_V_1_29;
    sc_in< sc_lv<16> > kernel_data_V_1_30;
    sc_in< sc_lv<16> > kernel_data_V_1_31;
    sc_in< sc_lv<16> > kernel_data_V_1_32;
    sc_in< sc_lv<16> > kernel_data_V_1_33;
    sc_in< sc_lv<16> > kernel_data_V_1_34;
    sc_in< sc_lv<16> > kernel_data_V_1_35;
    sc_out< sc_lv<16> > ap_return_0;
    sc_out< sc_lv<16> > ap_return_1;
    sc_out< sc_lv<16> > ap_return_2;
    sc_out< sc_lv<16> > ap_return_3;


    // Module declarations
    dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s(sc_module_name name);
    SC_HAS_PROCESS(dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s);

    ~dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s();

    sc_trace_file* mVcdFile;

    dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_outidx* outidx_U;
    dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_w6_V* w6_V_U;
    myproject_axi_mux_42_32_1_1<1,1,32,32,32,32,2,32>* myproject_axi_mux_42_32_1_1_U128;
    myproject_axi_mul_mul_6s_16s_21_1_1<1,1,6,16,21>* myproject_axi_mul_mul_6s_16s_21_1_1_U129;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<1> > icmp_ln129_fu_786_p2;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter2;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<8> > outidx_address0;
    sc_signal< sc_logic > outidx_ce0;
    sc_signal< sc_lv<2> > outidx_q0;
    sc_signal< sc_lv<8> > w6_V_address0;
    sc_signal< sc_logic > w6_V_ce0;
    sc_signal< sc_lv<6> > w6_V_q0;
    sc_signal< sc_lv<8> > w_index30_reg_230;
    sc_signal< sc_lv<32> > in_index_0_i_i29_reg_244;
    sc_signal< sc_lv<32> > p_Val2_19_0_i28_reg_350;
    sc_signal< sc_lv<32> > p_Val2_19_1_i26_reg_364;
    sc_signal< sc_lv<32> > p_Val2_19_2_i24_reg_378;
    sc_signal< sc_lv<32> > p_Val2_19_3_i22_reg_392;
    sc_signal< sc_lv<32> > acc_0_V_020_reg_406;
    sc_signal< sc_lv<32> > acc_1_V_019_reg_420;
    sc_signal< sc_lv<32> > acc_2_V_018_reg_434;
    sc_signal< sc_lv<32> > acc_3_V_017_reg_448;
    sc_signal< sc_lv<6> > trunc_ln139_fu_612_p1;
    sc_signal< sc_lv<8> > w_index_fu_616_p2;
    sc_signal< sc_lv<8> > w_index_reg_921;
    sc_signal< sc_lv<32> > select_ln148_fu_778_p3;
    sc_signal< sc_lv<32> > select_ln148_reg_1111;
    sc_signal< sc_lv<1> > icmp_ln129_reg_1116;
    sc_signal< sc_lv<1> > icmp_ln129_reg_1116_pp0_iter1_reg;
    sc_signal< sc_lv<2> > out_index_reg_1120;
    sc_signal< sc_lv<21> > mul_ln728_fu_906_p2;
    sc_signal< sc_lv<21> > mul_ln728_reg_1125;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<8> > ap_phi_mux_w_index30_phi_fu_234_p6;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<32> > ap_phi_mux_in_index_0_i_i29_phi_fu_248_p6;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_UnifiedRetVal_i_i_reg_258;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter1_UnifiedRetVal_i_i_reg_258;
    sc_signal< sc_lv<32> > ap_phi_mux_p_Val2_19_01_i_phi_fu_592_p8;
    sc_signal< sc_lv<32> > ap_phi_mux_p_Val2_19_13_i_phi_fu_574_p8;
    sc_signal< sc_lv<32> > ap_phi_mux_p_Val2_19_25_i_phi_fu_556_p8;
    sc_signal< sc_lv<32> > ap_phi_mux_p_Val2_19_37_i_phi_fu_538_p8;
    sc_signal< sc_lv<32> > ap_phi_mux_acc_0_V_1_phi_fu_520_p8;
    sc_signal< sc_lv<32> > ap_phi_mux_acc_1_V_1_phi_fu_502_p8;
    sc_signal< sc_lv<32> > ap_phi_mux_acc_2_V_1_phi_fu_484_p8;
    sc_signal< sc_lv<32> > ap_phi_mux_acc_3_V_1_phi_fu_466_p8;
    sc_signal< sc_lv<32> > acc_0_V_fu_824_p2;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter2_acc_3_V_1_reg_462;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter2_acc_2_V_1_reg_480;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter2_acc_1_V_1_reg_498;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter2_acc_0_V_1_reg_516;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter2_p_Val2_19_37_i_reg_534;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter2_p_Val2_19_25_i_reg_552;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter2_p_Val2_19_13_i_reg_570;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter2_p_Val2_19_01_i_reg_588;
    sc_signal< sc_lv<64> > zext_ln133_fu_606_p1;
    sc_signal< sc_lv<32> > in_index_fu_766_p2;
    sc_signal< sc_lv<1> > icmp_ln148_fu_772_p2;
    sc_signal< sc_lv<22> > shl_ln_fu_800_p3;
    sc_signal< sc_lv<32> > sext_ln728_fu_807_p1;
    sc_signal< sc_lv<32> > tmp_fu_811_p6;
    sc_signal< sc_lv<16> > ap_return_0_preg;
    sc_signal< sc_lv<16> > ap_return_1_preg;
    sc_signal< sc_lv<16> > ap_return_2_preg;
    sc_signal< sc_lv<16> > ap_return_3_preg;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0_0to1;
    sc_signal< sc_logic > ap_reset_idle_pp0;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< bool > ap_condition_439;
    sc_signal< bool > ap_condition_408;
    sc_signal< bool > ap_condition_40;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_fsm_state1;
    static const sc_lv<2> ap_ST_fsm_pp0_stage0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<6> ap_const_lv6_22;
    static const sc_lv<6> ap_const_lv6_21;
    static const sc_lv<6> ap_const_lv6_20;
    static const sc_lv<6> ap_const_lv6_1F;
    static const sc_lv<6> ap_const_lv6_1E;
    static const sc_lv<6> ap_const_lv6_1D;
    static const sc_lv<6> ap_const_lv6_1C;
    static const sc_lv<6> ap_const_lv6_1B;
    static const sc_lv<6> ap_const_lv6_1A;
    static const sc_lv<6> ap_const_lv6_19;
    static const sc_lv<6> ap_const_lv6_18;
    static const sc_lv<6> ap_const_lv6_17;
    static const sc_lv<6> ap_const_lv6_16;
    static const sc_lv<6> ap_const_lv6_15;
    static const sc_lv<6> ap_const_lv6_14;
    static const sc_lv<6> ap_const_lv6_13;
    static const sc_lv<6> ap_const_lv6_12;
    static const sc_lv<6> ap_const_lv6_11;
    static const sc_lv<6> ap_const_lv6_10;
    static const sc_lv<6> ap_const_lv6_F;
    static const sc_lv<6> ap_const_lv6_E;
    static const sc_lv<6> ap_const_lv6_D;
    static const sc_lv<6> ap_const_lv6_C;
    static const sc_lv<6> ap_const_lv6_B;
    static const sc_lv<6> ap_const_lv6_A;
    static const sc_lv<6> ap_const_lv6_9;
    static const sc_lv<6> ap_const_lv6_8;
    static const sc_lv<6> ap_const_lv6_7;
    static const sc_lv<6> ap_const_lv6_6;
    static const sc_lv<6> ap_const_lv6_5;
    static const sc_lv<6> ap_const_lv6_4;
    static const sc_lv<6> ap_const_lv6_3;
    static const sc_lv<6> ap_const_lv6_2;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<6> ap_const_lv6_3F;
    static const sc_lv<6> ap_const_lv6_3E;
    static const sc_lv<6> ap_const_lv6_3D;
    static const sc_lv<6> ap_const_lv6_3C;
    static const sc_lv<6> ap_const_lv6_3B;
    static const sc_lv<6> ap_const_lv6_3A;
    static const sc_lv<6> ap_const_lv6_39;
    static const sc_lv<6> ap_const_lv6_38;
    static const sc_lv<6> ap_const_lv6_37;
    static const sc_lv<6> ap_const_lv6_36;
    static const sc_lv<6> ap_const_lv6_35;
    static const sc_lv<6> ap_const_lv6_34;
    static const sc_lv<6> ap_const_lv6_33;
    static const sc_lv<6> ap_const_lv6_32;
    static const sc_lv<6> ap_const_lv6_31;
    static const sc_lv<6> ap_const_lv6_30;
    static const sc_lv<6> ap_const_lv6_2F;
    static const sc_lv<6> ap_const_lv6_2E;
    static const sc_lv<6> ap_const_lv6_2D;
    static const sc_lv<6> ap_const_lv6_2C;
    static const sc_lv<6> ap_const_lv6_2B;
    static const sc_lv<6> ap_const_lv6_2A;
    static const sc_lv<6> ap_const_lv6_29;
    static const sc_lv<6> ap_const_lv6_28;
    static const sc_lv<6> ap_const_lv6_27;
    static const sc_lv<6> ap_const_lv6_26;
    static const sc_lv<6> ap_const_lv6_25;
    static const sc_lv<6> ap_const_lv6_24;
    static const sc_lv<6> ap_const_lv6_23;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_FFFFF800;
    static const sc_lv<32> ap_const_lv32_800;
    static const sc_lv<32> ap_const_lv32_FFFFE800;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<32> ap_const_lv32_23;
    static const sc_lv<8> ap_const_lv8_8F;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<16> ap_const_lv16_0;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_acc_0_V_fu_824_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_block_state4_pp0_stage0_iter2();
    void thread_ap_condition_40();
    void thread_ap_condition_408();
    void thread_ap_condition_439();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_reg_pp0_iter0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp0_0to1();
    void thread_ap_phi_mux_acc_0_V_1_phi_fu_520_p8();
    void thread_ap_phi_mux_acc_1_V_1_phi_fu_502_p8();
    void thread_ap_phi_mux_acc_2_V_1_phi_fu_484_p8();
    void thread_ap_phi_mux_acc_3_V_1_phi_fu_466_p8();
    void thread_ap_phi_mux_in_index_0_i_i29_phi_fu_248_p6();
    void thread_ap_phi_mux_p_Val2_19_01_i_phi_fu_592_p8();
    void thread_ap_phi_mux_p_Val2_19_13_i_phi_fu_574_p8();
    void thread_ap_phi_mux_p_Val2_19_25_i_phi_fu_556_p8();
    void thread_ap_phi_mux_p_Val2_19_37_i_phi_fu_538_p8();
    void thread_ap_phi_mux_w_index30_phi_fu_234_p6();
    void thread_ap_phi_reg_pp0_iter0_UnifiedRetVal_i_i_reg_258();
    void thread_ap_phi_reg_pp0_iter2_acc_0_V_1_reg_516();
    void thread_ap_phi_reg_pp0_iter2_acc_1_V_1_reg_498();
    void thread_ap_phi_reg_pp0_iter2_acc_2_V_1_reg_480();
    void thread_ap_phi_reg_pp0_iter2_acc_3_V_1_reg_462();
    void thread_ap_phi_reg_pp0_iter2_p_Val2_19_01_i_reg_588();
    void thread_ap_phi_reg_pp0_iter2_p_Val2_19_13_i_reg_570();
    void thread_ap_phi_reg_pp0_iter2_p_Val2_19_25_i_reg_552();
    void thread_ap_phi_reg_pp0_iter2_p_Val2_19_37_i_reg_534();
    void thread_ap_ready();
    void thread_ap_reset_idle_pp0();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_ap_return_2();
    void thread_ap_return_3();
    void thread_icmp_ln129_fu_786_p2();
    void thread_icmp_ln148_fu_772_p2();
    void thread_in_index_fu_766_p2();
    void thread_outidx_address0();
    void thread_outidx_ce0();
    void thread_select_ln148_fu_778_p3();
    void thread_sext_ln728_fu_807_p1();
    void thread_shl_ln_fu_800_p3();
    void thread_trunc_ln139_fu_612_p1();
    void thread_w6_V_address0();
    void thread_w6_V_ce0();
    void thread_w_index_fu_616_p2();
    void thread_zext_ln133_fu_606_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
