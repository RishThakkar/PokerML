// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _compute_output_buffe_HH_
#define _compute_output_buffe_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "dense_resource.h"
#include "shift_line_buffer.h"

namespace ap_rtl {

struct compute_output_buffe : public sc_module {
    // Port declarations 22
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<16> > in_elem_data_0_V_read;
    sc_in< sc_lv<16> > in_elem_data_1_V_read;
    sc_in< sc_lv<16> > in_elem_data_2_V_read;
    sc_in< sc_lv<16> > in_elem_data_3_V_read;
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


    // Module declarations
    compute_output_buffe(sc_module_name name);
    SC_HAS_PROCESS(compute_output_buffe);

    ~compute_output_buffe();

    sc_trace_file* mVcdFile;

    dense_resource* grp_dense_resource_fu_242;
    shift_line_buffer* call_ret1_shift_line_buffer_fu_322;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<16> > kernel_data_V_1_4;
    sc_signal< sc_lv<16> > kernel_data_V_1_5;
    sc_signal< sc_lv<16> > kernel_data_V_1_6;
    sc_signal< sc_lv<16> > kernel_data_V_1_7;
    sc_signal< sc_lv<16> > kernel_data_V_1_8;
    sc_signal< sc_lv<16> > kernel_data_V_1_9;
    sc_signal< sc_lv<16> > kernel_data_V_1_10;
    sc_signal< sc_lv<16> > kernel_data_V_1_11;
    sc_signal< sc_lv<16> > kernel_data_V_1_16;
    sc_signal< sc_lv<16> > kernel_data_V_1_17;
    sc_signal< sc_lv<16> > kernel_data_V_1_18;
    sc_signal< sc_lv<16> > kernel_data_V_1_19;
    sc_signal< sc_lv<16> > kernel_data_V_1_20;
    sc_signal< sc_lv<16> > kernel_data_V_1_21;
    sc_signal< sc_lv<16> > kernel_data_V_1_22;
    sc_signal< sc_lv<16> > kernel_data_V_1_23;
    sc_signal< sc_lv<16> > kernel_data_V_1_28;
    sc_signal< sc_lv<16> > kernel_data_V_1_29;
    sc_signal< sc_lv<16> > kernel_data_V_1_30;
    sc_signal< sc_lv<16> > kernel_data_V_1_31;
    sc_signal< sc_lv<16> > kernel_data_V_1_32;
    sc_signal< sc_lv<16> > kernel_data_V_1_33;
    sc_signal< sc_lv<16> > kernel_data_V_1_34;
    sc_signal< sc_lv<16> > kernel_data_V_1_35;
    sc_signal< sc_lv<16> > kernel_data_V_1_0;
    sc_signal< sc_lv<16> > kernel_data_V_1_1;
    sc_signal< sc_lv<16> > kernel_data_V_1_2;
    sc_signal< sc_lv<16> > kernel_data_V_1_3;
    sc_signal< sc_lv<16> > kernel_data_V_1_12;
    sc_signal< sc_lv<16> > kernel_data_V_1_13;
    sc_signal< sc_lv<16> > kernel_data_V_1_14;
    sc_signal< sc_lv<16> > kernel_data_V_1_15;
    sc_signal< sc_lv<16> > kernel_data_V_1_24;
    sc_signal< sc_lv<16> > kernel_data_V_1_25;
    sc_signal< sc_lv<16> > kernel_data_V_1_26;
    sc_signal< sc_lv<16> > kernel_data_V_1_27;
    sc_signal< sc_lv<32> > sX_2;
    sc_signal< sc_lv<32> > sY_2;
    sc_signal< sc_lv<32> > pY_2;
    sc_signal< sc_lv<32> > pX_2;
    sc_signal< sc_logic > res_stream_V_data_0_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > and_ln289_2_reg_1071;
    sc_signal< sc_logic > res_stream_V_data_1_V_blk_n;
    sc_signal< sc_logic > res_stream_V_data_2_V_blk_n;
    sc_signal< sc_logic > res_stream_V_data_3_V_blk_n;
    sc_signal< sc_lv<32> > sX_2_load_reg_1039;
    sc_signal< sc_lv<1> > icmp_ln289_fu_858_p2;
    sc_signal< sc_lv<1> > icmp_ln289_reg_1044;
    sc_signal< sc_lv<32> > sY_2_load_reg_1049;
    sc_signal< sc_lv<1> > icmp_ln289_1_fu_868_p2;
    sc_signal< sc_lv<1> > icmp_ln289_1_reg_1054;
    sc_signal< sc_lv<32> > pY_2_load_reg_1059;
    sc_signal< sc_lv<32> > pX_2_load_reg_1065;
    sc_signal< sc_lv<1> > and_ln289_2_fu_926_p2;
    sc_signal< sc_logic > grp_dense_resource_fu_242_ap_start;
    sc_signal< sc_logic > grp_dense_resource_fu_242_ap_done;
    sc_signal< sc_logic > grp_dense_resource_fu_242_ap_idle;
    sc_signal< sc_logic > grp_dense_resource_fu_242_ap_ready;
    sc_signal< sc_lv<16> > grp_dense_resource_fu_242_ap_return_0;
    sc_signal< sc_lv<16> > grp_dense_resource_fu_242_ap_return_1;
    sc_signal< sc_lv<16> > grp_dense_resource_fu_242_ap_return_2;
    sc_signal< sc_lv<16> > grp_dense_resource_fu_242_ap_return_3;
    sc_signal< sc_logic > call_ret1_shift_line_buffer_fu_322_ap_start;
    sc_signal< sc_logic > call_ret1_shift_line_buffer_fu_322_ap_done;
    sc_signal< sc_logic > call_ret1_shift_line_buffer_fu_322_ap_idle;
    sc_signal< sc_logic > call_ret1_shift_line_buffer_fu_322_ap_ready;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_0;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_1;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_2;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_3;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_4;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_5;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_6;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_7;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_8;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_9;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_10;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_11;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_12;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_13;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_14;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_15;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_16;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_17;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_18;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_19;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_20;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_21;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_22;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_23;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_24;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_25;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_26;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_27;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_28;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_29;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_30;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_31;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_32;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_33;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_34;
    sc_signal< sc_lv<16> > call_ret1_shift_line_buffer_fu_322_ap_return_35;
    sc_signal< sc_lv<32> > select_ln323_fu_1019_p3;
    sc_signal< sc_lv<32> > ap_phi_mux_storemerge_phi_fu_235_p4;
    sc_signal< sc_logic > io_acc_block_signal_op128;
    sc_signal< bool > ap_block_state2;
    sc_signal< bool > ap_block_state2_on_subcall_done;
    sc_signal< sc_lv<1> > icmp_ln313_fu_952_p2;
    sc_signal< sc_lv<1> > icmp_ln317_fu_998_p2;
    sc_signal< sc_logic > grp_dense_resource_fu_242_ap_start_reg;
    sc_signal< sc_lv<32> > select_ln328_fu_973_p3;
    sc_signal< sc_lv<32> > add_ln321_fu_1003_p2;
    sc_signal< sc_lv<32> > add_ln326_fu_957_p2;
    sc_signal< sc_lv<31> > tmp_55_fu_878_p4;
    sc_signal< sc_lv<31> > tmp_56_fu_898_p4;
    sc_signal< sc_lv<1> > icmp_ln289_4_fu_888_p2;
    sc_signal< sc_lv<1> > icmp_ln289_5_fu_908_p2;
    sc_signal< sc_lv<1> > and_ln289_1_fu_920_p2;
    sc_signal< sc_lv<1> > and_ln289_fu_914_p2;
    sc_signal< sc_lv<32> > add_ln328_fu_968_p2;
    sc_signal< sc_lv<32> > add_ln323_fu_1014_p2;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    sc_signal< bool > ap_condition_241;
    sc_signal< bool > ap_condition_367;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_fsm_state1;
    static const sc_lv<2> ap_ST_fsm_state2;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_lv<32> ap_const_lv32_1E;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln321_fu_1003_p2();
    void thread_add_ln323_fu_1014_p2();
    void thread_add_ln326_fu_957_p2();
    void thread_add_ln328_fu_968_p2();
    void thread_and_ln289_1_fu_920_p2();
    void thread_and_ln289_2_fu_926_p2();
    void thread_and_ln289_fu_914_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_block_state2();
    void thread_ap_block_state2_on_subcall_done();
    void thread_ap_condition_241();
    void thread_ap_condition_367();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_phi_mux_storemerge_phi_fu_235_p4();
    void thread_ap_ready();
    void thread_call_ret1_shift_line_buffer_fu_322_ap_start();
    void thread_grp_dense_resource_fu_242_ap_start();
    void thread_icmp_ln289_1_fu_868_p2();
    void thread_icmp_ln289_4_fu_888_p2();
    void thread_icmp_ln289_5_fu_908_p2();
    void thread_icmp_ln289_fu_858_p2();
    void thread_icmp_ln313_fu_952_p2();
    void thread_icmp_ln317_fu_998_p2();
    void thread_io_acc_block_signal_op128();
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
    void thread_select_ln323_fu_1019_p3();
    void thread_select_ln328_fu_973_p3();
    void thread_tmp_55_fu_878_p4();
    void thread_tmp_56_fu_898_p4();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
