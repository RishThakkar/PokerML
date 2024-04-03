// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _dense_array_ap_ufixed_64u_array_ap_fixed_16_6_5_3_0_10u_config23_s_HH_
#define _dense_array_ap_ufixed_64u_array_ap_fixed_16_6_5_3_0_10u_config23_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "dense_wrapper_ap_ufixed_6_0_4_0_0_ap_fixed_16_6_5_3_0_config23_s.h"

namespace ap_rtl {

struct dense_array_ap_ufixed_64u_array_ap_fixed_16_6_5_3_0_10u_config23_s : public sc_module {
    // Port declarations 232
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
    sc_in< sc_lv<6> > data_stream_V_data_0_V_dout;
    sc_in< sc_logic > data_stream_V_data_0_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_0_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_1_V_dout;
    sc_in< sc_logic > data_stream_V_data_1_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_1_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_2_V_dout;
    sc_in< sc_logic > data_stream_V_data_2_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_2_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_3_V_dout;
    sc_in< sc_logic > data_stream_V_data_3_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_3_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_4_V_dout;
    sc_in< sc_logic > data_stream_V_data_4_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_4_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_5_V_dout;
    sc_in< sc_logic > data_stream_V_data_5_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_5_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_6_V_dout;
    sc_in< sc_logic > data_stream_V_data_6_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_6_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_7_V_dout;
    sc_in< sc_logic > data_stream_V_data_7_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_7_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_8_V_dout;
    sc_in< sc_logic > data_stream_V_data_8_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_8_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_9_V_dout;
    sc_in< sc_logic > data_stream_V_data_9_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_9_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_10_V_dout;
    sc_in< sc_logic > data_stream_V_data_10_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_10_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_11_V_dout;
    sc_in< sc_logic > data_stream_V_data_11_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_11_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_12_V_dout;
    sc_in< sc_logic > data_stream_V_data_12_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_12_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_13_V_dout;
    sc_in< sc_logic > data_stream_V_data_13_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_13_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_14_V_dout;
    sc_in< sc_logic > data_stream_V_data_14_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_14_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_15_V_dout;
    sc_in< sc_logic > data_stream_V_data_15_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_15_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_16_V_dout;
    sc_in< sc_logic > data_stream_V_data_16_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_16_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_17_V_dout;
    sc_in< sc_logic > data_stream_V_data_17_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_17_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_18_V_dout;
    sc_in< sc_logic > data_stream_V_data_18_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_18_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_19_V_dout;
    sc_in< sc_logic > data_stream_V_data_19_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_19_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_20_V_dout;
    sc_in< sc_logic > data_stream_V_data_20_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_20_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_21_V_dout;
    sc_in< sc_logic > data_stream_V_data_21_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_21_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_22_V_dout;
    sc_in< sc_logic > data_stream_V_data_22_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_22_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_23_V_dout;
    sc_in< sc_logic > data_stream_V_data_23_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_23_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_24_V_dout;
    sc_in< sc_logic > data_stream_V_data_24_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_24_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_25_V_dout;
    sc_in< sc_logic > data_stream_V_data_25_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_25_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_26_V_dout;
    sc_in< sc_logic > data_stream_V_data_26_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_26_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_27_V_dout;
    sc_in< sc_logic > data_stream_V_data_27_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_27_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_28_V_dout;
    sc_in< sc_logic > data_stream_V_data_28_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_28_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_29_V_dout;
    sc_in< sc_logic > data_stream_V_data_29_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_29_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_30_V_dout;
    sc_in< sc_logic > data_stream_V_data_30_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_30_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_31_V_dout;
    sc_in< sc_logic > data_stream_V_data_31_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_31_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_32_V_dout;
    sc_in< sc_logic > data_stream_V_data_32_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_32_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_33_V_dout;
    sc_in< sc_logic > data_stream_V_data_33_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_33_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_34_V_dout;
    sc_in< sc_logic > data_stream_V_data_34_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_34_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_35_V_dout;
    sc_in< sc_logic > data_stream_V_data_35_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_35_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_36_V_dout;
    sc_in< sc_logic > data_stream_V_data_36_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_36_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_37_V_dout;
    sc_in< sc_logic > data_stream_V_data_37_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_37_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_38_V_dout;
    sc_in< sc_logic > data_stream_V_data_38_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_38_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_39_V_dout;
    sc_in< sc_logic > data_stream_V_data_39_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_39_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_40_V_dout;
    sc_in< sc_logic > data_stream_V_data_40_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_40_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_41_V_dout;
    sc_in< sc_logic > data_stream_V_data_41_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_41_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_42_V_dout;
    sc_in< sc_logic > data_stream_V_data_42_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_42_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_43_V_dout;
    sc_in< sc_logic > data_stream_V_data_43_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_43_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_44_V_dout;
    sc_in< sc_logic > data_stream_V_data_44_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_44_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_45_V_dout;
    sc_in< sc_logic > data_stream_V_data_45_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_45_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_46_V_dout;
    sc_in< sc_logic > data_stream_V_data_46_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_46_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_47_V_dout;
    sc_in< sc_logic > data_stream_V_data_47_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_47_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_48_V_dout;
    sc_in< sc_logic > data_stream_V_data_48_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_48_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_49_V_dout;
    sc_in< sc_logic > data_stream_V_data_49_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_49_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_50_V_dout;
    sc_in< sc_logic > data_stream_V_data_50_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_50_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_51_V_dout;
    sc_in< sc_logic > data_stream_V_data_51_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_51_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_52_V_dout;
    sc_in< sc_logic > data_stream_V_data_52_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_52_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_53_V_dout;
    sc_in< sc_logic > data_stream_V_data_53_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_53_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_54_V_dout;
    sc_in< sc_logic > data_stream_V_data_54_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_54_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_55_V_dout;
    sc_in< sc_logic > data_stream_V_data_55_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_55_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_56_V_dout;
    sc_in< sc_logic > data_stream_V_data_56_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_56_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_57_V_dout;
    sc_in< sc_logic > data_stream_V_data_57_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_57_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_58_V_dout;
    sc_in< sc_logic > data_stream_V_data_58_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_58_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_59_V_dout;
    sc_in< sc_logic > data_stream_V_data_59_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_59_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_60_V_dout;
    sc_in< sc_logic > data_stream_V_data_60_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_60_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_61_V_dout;
    sc_in< sc_logic > data_stream_V_data_61_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_61_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_62_V_dout;
    sc_in< sc_logic > data_stream_V_data_62_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_62_V_read;
    sc_in< sc_lv<6> > data_stream_V_data_63_V_dout;
    sc_in< sc_logic > data_stream_V_data_63_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_63_V_read;
    sc_out< sc_lv<16> > res_stream_V_data_0_V_din;
    sc_in< sc_logic > res_stream_V_data_0_V_full_n;
    sc_out< sc_logic > res_stream_V_data_0_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_1_V_din;
    sc_in< sc_logic > res_stream_V_data_1_V_full_n;
    sc_out< sc_logic > res_stream_V_data_1_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_2_V_din;
    sc_in< sc_logic > res_stream_V_data_2_V_full_n;
    sc_out< sc_logic > res_stream_V_data_2_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_3_V_din;
    sc_in< sc_logic > res_stream_V_data_3_V_full_n;
    sc_out< sc_logic > res_stream_V_data_3_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_4_V_din;
    sc_in< sc_logic > res_stream_V_data_4_V_full_n;
    sc_out< sc_logic > res_stream_V_data_4_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_5_V_din;
    sc_in< sc_logic > res_stream_V_data_5_V_full_n;
    sc_out< sc_logic > res_stream_V_data_5_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_6_V_din;
    sc_in< sc_logic > res_stream_V_data_6_V_full_n;
    sc_out< sc_logic > res_stream_V_data_6_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_7_V_din;
    sc_in< sc_logic > res_stream_V_data_7_V_full_n;
    sc_out< sc_logic > res_stream_V_data_7_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_8_V_din;
    sc_in< sc_logic > res_stream_V_data_8_V_full_n;
    sc_out< sc_logic > res_stream_V_data_8_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_9_V_din;
    sc_in< sc_logic > res_stream_V_data_9_V_full_n;
    sc_out< sc_logic > res_stream_V_data_9_V_write;


    // Module declarations
    dense_array_ap_ufixed_64u_array_ap_fixed_16_6_5_3_0_10u_config23_s(sc_module_name name);
    SC_HAS_PROCESS(dense_array_ap_ufixed_64u_array_ap_fixed_16_6_5_3_0_10u_config23_s);

    ~dense_array_ap_ufixed_64u_array_ap_fixed_16_6_5_3_0_10u_config23_s();

    sc_trace_file* mVcdFile;

    dense_wrapper_ap_ufixed_6_0_4_0_0_ap_fixed_16_6_5_3_0_config23_s* grp_dense_wrapper_ap_ufixed_6_0_4_0_0_ap_fixed_16_6_5_3_0_config23_s_fu_338;
    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<10> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_logic > data_stream_V_data_0_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_1_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_2_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_3_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_4_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_5_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_6_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_7_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_8_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_9_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_10_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_11_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_12_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_13_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_14_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_15_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_16_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_17_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_18_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_19_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_20_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_21_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_22_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_23_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_24_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_25_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_26_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_27_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_28_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_29_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_30_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_31_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_32_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_33_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_34_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_35_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_36_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_37_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_38_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_39_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_40_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_41_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_42_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_43_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_44_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_45_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_46_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_47_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_48_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_49_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_50_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_51_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_52_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_53_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_54_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_55_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_56_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_57_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_58_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_59_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_60_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_61_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_62_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_63_V_blk_n;
    sc_signal< sc_logic > res_stream_V_data_0_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > res_stream_V_data_1_V_blk_n;
    sc_signal< sc_logic > res_stream_V_data_2_V_blk_n;
    sc_signal< sc_logic > res_stream_V_data_3_V_blk_n;
    sc_signal< sc_logic > res_stream_V_data_4_V_blk_n;
    sc_signal< sc_logic > res_stream_V_data_5_V_blk_n;
    sc_signal< sc_logic > res_stream_V_data_6_V_blk_n;
    sc_signal< sc_logic > res_stream_V_data_7_V_blk_n;
    sc_signal< sc_logic > res_stream_V_data_8_V_blk_n;
    sc_signal< sc_logic > res_stream_V_data_9_V_blk_n;
    sc_signal< sc_lv<6> > data_0_V_reg_702;
    sc_signal< sc_logic > io_acc_block_signal_op11;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<6> > data_1_V_reg_707;
    sc_signal< sc_lv<6> > data_2_V_reg_712;
    sc_signal< sc_lv<6> > data_3_V_reg_717;
    sc_signal< sc_lv<6> > data_4_V_reg_722;
    sc_signal< sc_lv<6> > data_5_V_reg_727;
    sc_signal< sc_lv<6> > data_6_V_reg_732;
    sc_signal< sc_lv<6> > data_7_V_reg_737;
    sc_signal< sc_lv<6> > data_8_V_reg_742;
    sc_signal< sc_lv<6> > data_9_V_reg_747;
    sc_signal< sc_lv<6> > data_10_V_reg_752;
    sc_signal< sc_lv<6> > data_11_V_reg_757;
    sc_signal< sc_lv<6> > data_12_V_reg_762;
    sc_signal< sc_lv<6> > data_13_V_reg_767;
    sc_signal< sc_lv<6> > data_14_V_reg_772;
    sc_signal< sc_lv<6> > data_15_V_reg_777;
    sc_signal< sc_lv<6> > data_16_V_reg_782;
    sc_signal< sc_lv<6> > data_17_V_reg_787;
    sc_signal< sc_lv<6> > data_18_V_reg_792;
    sc_signal< sc_lv<6> > data_19_V_reg_797;
    sc_signal< sc_lv<6> > data_20_V_reg_802;
    sc_signal< sc_lv<6> > data_21_V_reg_807;
    sc_signal< sc_lv<6> > data_22_V_reg_812;
    sc_signal< sc_lv<6> > data_23_V_reg_817;
    sc_signal< sc_lv<6> > data_24_V_reg_822;
    sc_signal< sc_lv<6> > data_25_V_reg_827;
    sc_signal< sc_lv<6> > data_26_V_reg_832;
    sc_signal< sc_lv<6> > data_27_V_reg_837;
    sc_signal< sc_lv<6> > data_28_V_reg_842;
    sc_signal< sc_lv<6> > data_29_V_reg_847;
    sc_signal< sc_lv<6> > data_30_V_reg_852;
    sc_signal< sc_lv<6> > data_31_V_reg_857;
    sc_signal< sc_lv<6> > data_32_V_reg_862;
    sc_signal< sc_lv<6> > data_33_V_reg_867;
    sc_signal< sc_lv<6> > data_34_V_reg_872;
    sc_signal< sc_lv<6> > data_35_V_reg_877;
    sc_signal< sc_lv<6> > data_36_V_reg_882;
    sc_signal< sc_lv<6> > data_37_V_reg_887;
    sc_signal< sc_lv<6> > data_38_V_reg_892;
    sc_signal< sc_lv<6> > data_39_V_reg_897;
    sc_signal< sc_lv<6> > data_40_V_reg_902;
    sc_signal< sc_lv<6> > data_41_V_reg_907;
    sc_signal< sc_lv<6> > data_42_V_reg_912;
    sc_signal< sc_lv<6> > data_43_V_reg_917;
    sc_signal< sc_lv<6> > data_44_V_reg_922;
    sc_signal< sc_lv<6> > data_45_V_reg_927;
    sc_signal< sc_lv<6> > data_46_V_reg_932;
    sc_signal< sc_lv<6> > data_47_V_reg_937;
    sc_signal< sc_lv<6> > data_48_V_reg_942;
    sc_signal< sc_lv<6> > data_49_V_reg_947;
    sc_signal< sc_lv<6> > data_50_V_reg_952;
    sc_signal< sc_lv<6> > data_51_V_reg_957;
    sc_signal< sc_lv<6> > data_52_V_reg_962;
    sc_signal< sc_lv<6> > data_53_V_reg_967;
    sc_signal< sc_lv<6> > data_54_V_reg_972;
    sc_signal< sc_lv<6> > data_55_V_reg_977;
    sc_signal< sc_lv<6> > data_56_V_reg_982;
    sc_signal< sc_lv<6> > data_57_V_reg_987;
    sc_signal< sc_lv<6> > data_58_V_reg_992;
    sc_signal< sc_lv<6> > data_59_V_reg_997;
    sc_signal< sc_lv<6> > data_60_V_reg_1002;
    sc_signal< sc_lv<6> > data_61_V_reg_1007;
    sc_signal< sc_lv<6> > data_62_V_reg_1012;
    sc_signal< sc_lv<6> > data_63_V_reg_1017;
    sc_signal< sc_lv<16> > tmp_data_0_V_reg_1022;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<16> > tmp_data_1_V_reg_1027;
    sc_signal< sc_lv<16> > tmp_data_2_V_reg_1032;
    sc_signal< sc_lv<16> > tmp_data_3_V_reg_1037;
    sc_signal< sc_lv<16> > tmp_data_4_V_reg_1042;
    sc_signal< sc_lv<16> > tmp_data_5_V_reg_1047;
    sc_signal< sc_lv<16> > tmp_data_6_V_reg_1052;
    sc_signal< sc_lv<16> > tmp_data_7_V_reg_1057;
    sc_signal< sc_lv<16> > tmp_data_8_V_reg_1062;
    sc_signal< sc_lv<16> > tmp_data_9_V_reg_1067;
    sc_signal< sc_lv<16> > grp_dense_wrapper_ap_ufixed_6_0_4_0_0_ap_fixed_16_6_5_3_0_config23_s_fu_338_ap_return_0;
    sc_signal< sc_lv<16> > grp_dense_wrapper_ap_ufixed_6_0_4_0_0_ap_fixed_16_6_5_3_0_config23_s_fu_338_ap_return_1;
    sc_signal< sc_lv<16> > grp_dense_wrapper_ap_ufixed_6_0_4_0_0_ap_fixed_16_6_5_3_0_config23_s_fu_338_ap_return_2;
    sc_signal< sc_lv<16> > grp_dense_wrapper_ap_ufixed_6_0_4_0_0_ap_fixed_16_6_5_3_0_config23_s_fu_338_ap_return_3;
    sc_signal< sc_lv<16> > grp_dense_wrapper_ap_ufixed_6_0_4_0_0_ap_fixed_16_6_5_3_0_config23_s_fu_338_ap_return_4;
    sc_signal< sc_lv<16> > grp_dense_wrapper_ap_ufixed_6_0_4_0_0_ap_fixed_16_6_5_3_0_config23_s_fu_338_ap_return_5;
    sc_signal< sc_lv<16> > grp_dense_wrapper_ap_ufixed_6_0_4_0_0_ap_fixed_16_6_5_3_0_config23_s_fu_338_ap_return_6;
    sc_signal< sc_lv<16> > grp_dense_wrapper_ap_ufixed_6_0_4_0_0_ap_fixed_16_6_5_3_0_config23_s_fu_338_ap_return_7;
    sc_signal< sc_lv<16> > grp_dense_wrapper_ap_ufixed_6_0_4_0_0_ap_fixed_16_6_5_3_0_config23_s_fu_338_ap_return_8;
    sc_signal< sc_lv<16> > grp_dense_wrapper_ap_ufixed_6_0_4_0_0_ap_fixed_16_6_5_3_0_config23_s_fu_338_ap_return_9;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > io_acc_block_signal_op170;
    sc_signal< sc_lv<10> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<10> ap_ST_fsm_state1;
    static const sc_lv<10> ap_ST_fsm_state2;
    static const sc_lv<10> ap_ST_fsm_state3;
    static const sc_lv<10> ap_ST_fsm_state4;
    static const sc_lv<10> ap_ST_fsm_state5;
    static const sc_lv<10> ap_ST_fsm_state6;
    static const sc_lv<10> ap_ST_fsm_state7;
    static const sc_lv<10> ap_ST_fsm_state8;
    static const sc_lv<10> ap_ST_fsm_state9;
    static const sc_lv<10> ap_ST_fsm_state10;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_state1();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_data_stream_V_data_0_V_blk_n();
    void thread_data_stream_V_data_0_V_read();
    void thread_data_stream_V_data_10_V_blk_n();
    void thread_data_stream_V_data_10_V_read();
    void thread_data_stream_V_data_11_V_blk_n();
    void thread_data_stream_V_data_11_V_read();
    void thread_data_stream_V_data_12_V_blk_n();
    void thread_data_stream_V_data_12_V_read();
    void thread_data_stream_V_data_13_V_blk_n();
    void thread_data_stream_V_data_13_V_read();
    void thread_data_stream_V_data_14_V_blk_n();
    void thread_data_stream_V_data_14_V_read();
    void thread_data_stream_V_data_15_V_blk_n();
    void thread_data_stream_V_data_15_V_read();
    void thread_data_stream_V_data_16_V_blk_n();
    void thread_data_stream_V_data_16_V_read();
    void thread_data_stream_V_data_17_V_blk_n();
    void thread_data_stream_V_data_17_V_read();
    void thread_data_stream_V_data_18_V_blk_n();
    void thread_data_stream_V_data_18_V_read();
    void thread_data_stream_V_data_19_V_blk_n();
    void thread_data_stream_V_data_19_V_read();
    void thread_data_stream_V_data_1_V_blk_n();
    void thread_data_stream_V_data_1_V_read();
    void thread_data_stream_V_data_20_V_blk_n();
    void thread_data_stream_V_data_20_V_read();
    void thread_data_stream_V_data_21_V_blk_n();
    void thread_data_stream_V_data_21_V_read();
    void thread_data_stream_V_data_22_V_blk_n();
    void thread_data_stream_V_data_22_V_read();
    void thread_data_stream_V_data_23_V_blk_n();
    void thread_data_stream_V_data_23_V_read();
    void thread_data_stream_V_data_24_V_blk_n();
    void thread_data_stream_V_data_24_V_read();
    void thread_data_stream_V_data_25_V_blk_n();
    void thread_data_stream_V_data_25_V_read();
    void thread_data_stream_V_data_26_V_blk_n();
    void thread_data_stream_V_data_26_V_read();
    void thread_data_stream_V_data_27_V_blk_n();
    void thread_data_stream_V_data_27_V_read();
    void thread_data_stream_V_data_28_V_blk_n();
    void thread_data_stream_V_data_28_V_read();
    void thread_data_stream_V_data_29_V_blk_n();
    void thread_data_stream_V_data_29_V_read();
    void thread_data_stream_V_data_2_V_blk_n();
    void thread_data_stream_V_data_2_V_read();
    void thread_data_stream_V_data_30_V_blk_n();
    void thread_data_stream_V_data_30_V_read();
    void thread_data_stream_V_data_31_V_blk_n();
    void thread_data_stream_V_data_31_V_read();
    void thread_data_stream_V_data_32_V_blk_n();
    void thread_data_stream_V_data_32_V_read();
    void thread_data_stream_V_data_33_V_blk_n();
    void thread_data_stream_V_data_33_V_read();
    void thread_data_stream_V_data_34_V_blk_n();
    void thread_data_stream_V_data_34_V_read();
    void thread_data_stream_V_data_35_V_blk_n();
    void thread_data_stream_V_data_35_V_read();
    void thread_data_stream_V_data_36_V_blk_n();
    void thread_data_stream_V_data_36_V_read();
    void thread_data_stream_V_data_37_V_blk_n();
    void thread_data_stream_V_data_37_V_read();
    void thread_data_stream_V_data_38_V_blk_n();
    void thread_data_stream_V_data_38_V_read();
    void thread_data_stream_V_data_39_V_blk_n();
    void thread_data_stream_V_data_39_V_read();
    void thread_data_stream_V_data_3_V_blk_n();
    void thread_data_stream_V_data_3_V_read();
    void thread_data_stream_V_data_40_V_blk_n();
    void thread_data_stream_V_data_40_V_read();
    void thread_data_stream_V_data_41_V_blk_n();
    void thread_data_stream_V_data_41_V_read();
    void thread_data_stream_V_data_42_V_blk_n();
    void thread_data_stream_V_data_42_V_read();
    void thread_data_stream_V_data_43_V_blk_n();
    void thread_data_stream_V_data_43_V_read();
    void thread_data_stream_V_data_44_V_blk_n();
    void thread_data_stream_V_data_44_V_read();
    void thread_data_stream_V_data_45_V_blk_n();
    void thread_data_stream_V_data_45_V_read();
    void thread_data_stream_V_data_46_V_blk_n();
    void thread_data_stream_V_data_46_V_read();
    void thread_data_stream_V_data_47_V_blk_n();
    void thread_data_stream_V_data_47_V_read();
    void thread_data_stream_V_data_48_V_blk_n();
    void thread_data_stream_V_data_48_V_read();
    void thread_data_stream_V_data_49_V_blk_n();
    void thread_data_stream_V_data_49_V_read();
    void thread_data_stream_V_data_4_V_blk_n();
    void thread_data_stream_V_data_4_V_read();
    void thread_data_stream_V_data_50_V_blk_n();
    void thread_data_stream_V_data_50_V_read();
    void thread_data_stream_V_data_51_V_blk_n();
    void thread_data_stream_V_data_51_V_read();
    void thread_data_stream_V_data_52_V_blk_n();
    void thread_data_stream_V_data_52_V_read();
    void thread_data_stream_V_data_53_V_blk_n();
    void thread_data_stream_V_data_53_V_read();
    void thread_data_stream_V_data_54_V_blk_n();
    void thread_data_stream_V_data_54_V_read();
    void thread_data_stream_V_data_55_V_blk_n();
    void thread_data_stream_V_data_55_V_read();
    void thread_data_stream_V_data_56_V_blk_n();
    void thread_data_stream_V_data_56_V_read();
    void thread_data_stream_V_data_57_V_blk_n();
    void thread_data_stream_V_data_57_V_read();
    void thread_data_stream_V_data_58_V_blk_n();
    void thread_data_stream_V_data_58_V_read();
    void thread_data_stream_V_data_59_V_blk_n();
    void thread_data_stream_V_data_59_V_read();
    void thread_data_stream_V_data_5_V_blk_n();
    void thread_data_stream_V_data_5_V_read();
    void thread_data_stream_V_data_60_V_blk_n();
    void thread_data_stream_V_data_60_V_read();
    void thread_data_stream_V_data_61_V_blk_n();
    void thread_data_stream_V_data_61_V_read();
    void thread_data_stream_V_data_62_V_blk_n();
    void thread_data_stream_V_data_62_V_read();
    void thread_data_stream_V_data_63_V_blk_n();
    void thread_data_stream_V_data_63_V_read();
    void thread_data_stream_V_data_6_V_blk_n();
    void thread_data_stream_V_data_6_V_read();
    void thread_data_stream_V_data_7_V_blk_n();
    void thread_data_stream_V_data_7_V_read();
    void thread_data_stream_V_data_8_V_blk_n();
    void thread_data_stream_V_data_8_V_read();
    void thread_data_stream_V_data_9_V_blk_n();
    void thread_data_stream_V_data_9_V_read();
    void thread_internal_ap_ready();
    void thread_io_acc_block_signal_op11();
    void thread_io_acc_block_signal_op170();
    void thread_real_start();
    void thread_res_stream_V_data_0_V_blk_n();
    void thread_res_stream_V_data_0_V_din();
    void thread_res_stream_V_data_0_V_write();
    void thread_res_stream_V_data_1_V_blk_n();
    void thread_res_stream_V_data_1_V_din();
    void thread_res_stream_V_data_1_V_write();
    void thread_res_stream_V_data_2_V_blk_n();
    void thread_res_stream_V_data_2_V_din();
    void thread_res_stream_V_data_2_V_write();
    void thread_res_stream_V_data_3_V_blk_n();
    void thread_res_stream_V_data_3_V_din();
    void thread_res_stream_V_data_3_V_write();
    void thread_res_stream_V_data_4_V_blk_n();
    void thread_res_stream_V_data_4_V_din();
    void thread_res_stream_V_data_4_V_write();
    void thread_res_stream_V_data_5_V_blk_n();
    void thread_res_stream_V_data_5_V_din();
    void thread_res_stream_V_data_5_V_write();
    void thread_res_stream_V_data_6_V_blk_n();
    void thread_res_stream_V_data_6_V_din();
    void thread_res_stream_V_data_6_V_write();
    void thread_res_stream_V_data_7_V_blk_n();
    void thread_res_stream_V_data_7_V_din();
    void thread_res_stream_V_data_7_V_write();
    void thread_res_stream_V_data_8_V_blk_n();
    void thread_res_stream_V_data_8_V_din();
    void thread_res_stream_V_data_8_V_write();
    void thread_res_stream_V_data_9_V_blk_n();
    void thread_res_stream_V_data_9_V_din();
    void thread_res_stream_V_data_9_V_write();
    void thread_start_out();
    void thread_start_write();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
