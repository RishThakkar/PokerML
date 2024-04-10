// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _conv_2d_cl_HH_
#define _conv_2d_cl_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "compute_output_buffe.h"

namespace ap_rtl {

struct conv_2d_cl : public sc_module {
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
    sc_out< sc_lv<16> > res_V_data_0_V_din;
    sc_in< sc_logic > res_V_data_0_V_full_n;
    sc_out< sc_logic > res_V_data_0_V_write;
    sc_out< sc_lv<16> > res_V_data_1_V_din;
    sc_in< sc_logic > res_V_data_1_V_full_n;
    sc_out< sc_logic > res_V_data_1_V_write;
    sc_out< sc_lv<16> > res_V_data_2_V_din;
    sc_in< sc_logic > res_V_data_2_V_full_n;
    sc_out< sc_logic > res_V_data_2_V_write;
    sc_out< sc_lv<16> > res_V_data_3_V_din;
    sc_in< sc_logic > res_V_data_3_V_full_n;
    sc_out< sc_logic > res_V_data_3_V_write;


    // Module declarations
    conv_2d_cl(sc_module_name name);
    SC_HAS_PROCESS(conv_2d_cl);

    ~conv_2d_cl();

    sc_trace_file* mVcdFile;

    compute_output_buffe* grp_compute_output_buffe_fu_265;
    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_logic > data_V_data_0_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > icmp_ln79_fu_381_p2;
    sc_signal< sc_logic > data_V_data_1_V_blk_n;
    sc_signal< sc_logic > data_V_data_2_V_blk_n;
    sc_signal< sc_logic > data_V_data_3_V_blk_n;
    sc_signal< sc_lv<10> > add_ln79_fu_387_p2;
    sc_signal< sc_lv<10> > add_ln79_reg_416;
    sc_signal< sc_logic > io_acc_block_signal_op17;
    sc_signal< bool > ap_block_state2;
    sc_signal< sc_lv<16> > tmp_data_0_V_reg_421;
    sc_signal< sc_lv<16> > tmp_data_1_V_reg_426;
    sc_signal< sc_lv<16> > tmp_data_2_V_reg_431;
    sc_signal< sc_lv<16> > tmp_data_3_V_reg_436;
    sc_signal< sc_logic > grp_compute_output_buffe_fu_265_ap_start;
    sc_signal< sc_logic > grp_compute_output_buffe_fu_265_ap_done;
    sc_signal< sc_logic > grp_compute_output_buffe_fu_265_ap_idle;
    sc_signal< sc_logic > grp_compute_output_buffe_fu_265_ap_ready;
    sc_signal< sc_lv<16> > grp_compute_output_buffe_fu_265_res_stream_V_data_0_V_din;
    sc_signal< sc_logic > grp_compute_output_buffe_fu_265_res_stream_V_data_0_V_write;
    sc_signal< sc_lv<16> > grp_compute_output_buffe_fu_265_res_stream_V_data_1_V_din;
    sc_signal< sc_logic > grp_compute_output_buffe_fu_265_res_stream_V_data_1_V_write;
    sc_signal< sc_lv<16> > grp_compute_output_buffe_fu_265_res_stream_V_data_2_V_din;
    sc_signal< sc_logic > grp_compute_output_buffe_fu_265_res_stream_V_data_2_V_write;
    sc_signal< sc_lv<16> > grp_compute_output_buffe_fu_265_res_stream_V_data_3_V_din;
    sc_signal< sc_logic > grp_compute_output_buffe_fu_265_res_stream_V_data_3_V_write;
    sc_signal< sc_lv<10> > indvar_flatten_reg_254;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > grp_compute_output_buffe_fu_265_ap_start_reg;
    sc_signal< bool > ap_block_state2_ignore_call8;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_state2;
    static const sc_lv<3> ap_ST_fsm_state3;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<10> ap_const_lv10_3C1;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln79_fu_387_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_block_state1();
    void thread_ap_block_state2();
    void thread_ap_block_state2_ignore_call8();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_data_V_data_0_V_blk_n();
    void thread_data_V_data_0_V_read();
    void thread_data_V_data_1_V_blk_n();
    void thread_data_V_data_1_V_read();
    void thread_data_V_data_2_V_blk_n();
    void thread_data_V_data_2_V_read();
    void thread_data_V_data_3_V_blk_n();
    void thread_data_V_data_3_V_read();
    void thread_grp_compute_output_buffe_fu_265_ap_start();
    void thread_icmp_ln79_fu_381_p2();
    void thread_internal_ap_ready();
    void thread_io_acc_block_signal_op17();
    void thread_real_start();
    void thread_res_V_data_0_V_din();
    void thread_res_V_data_0_V_write();
    void thread_res_V_data_1_V_din();
    void thread_res_V_data_1_V_write();
    void thread_res_V_data_2_V_din();
    void thread_res_V_data_2_V_write();
    void thread_res_V_data_3_V_din();
    void thread_res_V_data_3_V_write();
    void thread_start_out();
    void thread_start_write();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
