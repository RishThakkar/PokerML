// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module relu (
        ap_clk,
        ap_rst,
        ap_start,
        start_full_n,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        start_out,
        start_write,
        data_V_data_0_V_dout,
        data_V_data_0_V_empty_n,
        data_V_data_0_V_read,
        data_V_data_1_V_dout,
        data_V_data_1_V_empty_n,
        data_V_data_1_V_read,
        data_V_data_2_V_dout,
        data_V_data_2_V_empty_n,
        data_V_data_2_V_read,
        data_V_data_3_V_dout,
        data_V_data_3_V_empty_n,
        data_V_data_3_V_read,
        res_V_data_0_V_din,
        res_V_data_0_V_full_n,
        res_V_data_0_V_write,
        res_V_data_1_V_din,
        res_V_data_1_V_full_n,
        res_V_data_1_V_write,
        res_V_data_2_V_din,
        res_V_data_2_V_full_n,
        res_V_data_2_V_write,
        res_V_data_3_V_din,
        res_V_data_3_V_full_n,
        res_V_data_3_V_write
);

parameter    ap_ST_fsm_state1 = 3'd1;
parameter    ap_ST_fsm_pp0_stage0 = 3'd2;
parameter    ap_ST_fsm_state5 = 3'd4;

input   ap_clk;
input   ap_rst;
input   ap_start;
input   start_full_n;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
output   start_out;
output   start_write;
input  [15:0] data_V_data_0_V_dout;
input   data_V_data_0_V_empty_n;
output   data_V_data_0_V_read;
input  [15:0] data_V_data_1_V_dout;
input   data_V_data_1_V_empty_n;
output   data_V_data_1_V_read;
input  [15:0] data_V_data_2_V_dout;
input   data_V_data_2_V_empty_n;
output   data_V_data_2_V_read;
input  [15:0] data_V_data_3_V_dout;
input   data_V_data_3_V_empty_n;
output   data_V_data_3_V_read;
output  [5:0] res_V_data_0_V_din;
input   res_V_data_0_V_full_n;
output   res_V_data_0_V_write;
output  [5:0] res_V_data_1_V_din;
input   res_V_data_1_V_full_n;
output   res_V_data_1_V_write;
output  [5:0] res_V_data_2_V_din;
input   res_V_data_2_V_full_n;
output   res_V_data_2_V_write;
output  [5:0] res_V_data_3_V_din;
input   res_V_data_3_V_full_n;
output   res_V_data_3_V_write;

reg ap_done;
reg ap_idle;
reg start_write;
reg data_V_data_0_V_read;
reg data_V_data_1_V_read;
reg data_V_data_2_V_read;
reg data_V_data_3_V_read;
reg res_V_data_0_V_write;
reg res_V_data_1_V_write;
reg res_V_data_2_V_write;
reg res_V_data_3_V_write;

reg    real_start;
reg    start_once_reg;
reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    internal_ap_ready;
reg    data_V_data_0_V_blk_n;
wire    ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp0_stage0;
reg   [0:0] icmp_ln41_reg_799;
reg    data_V_data_1_V_blk_n;
reg    data_V_data_2_V_blk_n;
reg    data_V_data_3_V_blk_n;
reg    res_V_data_0_V_blk_n;
reg    ap_enable_reg_pp0_iter2;
reg   [0:0] icmp_ln41_reg_799_pp0_iter1_reg;
reg    res_V_data_1_V_blk_n;
reg    res_V_data_2_V_blk_n;
reg    res_V_data_3_V_blk_n;
reg   [9:0] i_0_reg_208;
wire   [0:0] icmp_ln41_fu_219_p2;
wire    ap_block_state2_pp0_stage0_iter0;
wire    io_acc_block_signal_op20;
reg    ap_block_state3_pp0_stage0_iter1;
wire    io_acc_block_signal_op108;
reg    ap_block_state4_pp0_stage0_iter2;
reg    ap_block_pp0_stage0_11001;
wire   [9:0] i_fu_225_p2;
reg    ap_enable_reg_pp0_iter0;
wire   [5:0] tmp_data_0_V_3_fu_377_p3;
reg   [5:0] tmp_data_0_V_3_reg_808;
wire   [5:0] tmp_data_1_V_3_fu_515_p3;
reg   [5:0] tmp_data_1_V_3_reg_813;
wire   [5:0] tmp_data_2_V_3_fu_653_p3;
reg   [5:0] tmp_data_2_V_3_reg_818;
wire   [5:0] tmp_data_3_V_3_fu_791_p3;
reg   [5:0] tmp_data_3_V_3_reg_823;
reg    ap_block_state1;
reg    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state2;
reg    ap_block_pp0_stage0_01001;
wire   [2:0] trunc_ln718_fu_271_p1;
wire   [0:0] icmp_ln718_fu_275_p2;
wire   [0:0] tmp_37_fu_263_p3;
wire   [0:0] or_ln412_fu_289_p2;
wire   [0:0] tmp_39_fu_295_p3;
wire   [0:0] and_ln415_fu_303_p2;
wire   [5:0] zext_ln415_fu_309_p1;
wire   [5:0] trunc_ln_fu_253_p4;
wire   [5:0] add_ln415_fu_313_p2;
wire   [0:0] tmp_40_fu_319_p3;
wire   [0:0] tmp_38_fu_281_p3;
wire   [0:0] xor_ln416_fu_327_p2;
wire   [5:0] p_Result_s_fu_339_p4;
wire   [0:0] and_ln416_fu_333_p2;
wire   [0:0] icmp_ln879_fu_349_p2;
wire   [0:0] icmp_ln768_fu_355_p2;
wire   [0:0] select_ln777_fu_361_p3;
wire   [0:0] icmp_ln1494_fu_247_p2;
wire   [5:0] select_ln340_fu_369_p3;
wire   [2:0] trunc_ln718_4_fu_409_p1;
wire   [0:0] icmp_ln718_1_fu_413_p2;
wire   [0:0] tmp_41_fu_401_p3;
wire   [0:0] or_ln412_1_fu_427_p2;
wire   [0:0] tmp_43_fu_433_p3;
wire   [0:0] and_ln415_1_fu_441_p2;
wire   [5:0] zext_ln415_1_fu_447_p1;
wire   [5:0] trunc_ln708_4_fu_391_p4;
wire   [5:0] add_ln415_1_fu_451_p2;
wire   [0:0] tmp_44_fu_457_p3;
wire   [0:0] tmp_42_fu_419_p3;
wire   [0:0] xor_ln416_4_fu_465_p2;
wire   [5:0] p_Result_10_1_fu_477_p4;
wire   [0:0] and_ln416_1_fu_471_p2;
wire   [0:0] icmp_ln879_1_fu_487_p2;
wire   [0:0] icmp_ln768_1_fu_493_p2;
wire   [0:0] select_ln777_1_fu_499_p3;
wire   [0:0] icmp_ln1494_1_fu_385_p2;
wire   [5:0] select_ln340_1_fu_507_p3;
wire   [2:0] trunc_ln718_5_fu_547_p1;
wire   [0:0] icmp_ln718_2_fu_551_p2;
wire   [0:0] tmp_45_fu_539_p3;
wire   [0:0] or_ln412_2_fu_565_p2;
wire   [0:0] tmp_47_fu_571_p3;
wire   [0:0] and_ln415_2_fu_579_p2;
wire   [5:0] zext_ln415_2_fu_585_p1;
wire   [5:0] trunc_ln708_5_fu_529_p4;
wire   [5:0] add_ln415_2_fu_589_p2;
wire   [0:0] tmp_48_fu_595_p3;
wire   [0:0] tmp_46_fu_557_p3;
wire   [0:0] xor_ln416_5_fu_603_p2;
wire   [5:0] p_Result_10_2_fu_615_p4;
wire   [0:0] and_ln416_2_fu_609_p2;
wire   [0:0] icmp_ln879_2_fu_625_p2;
wire   [0:0] icmp_ln768_2_fu_631_p2;
wire   [0:0] select_ln777_2_fu_637_p3;
wire   [0:0] icmp_ln1494_2_fu_523_p2;
wire   [5:0] select_ln340_2_fu_645_p3;
wire   [2:0] trunc_ln718_6_fu_685_p1;
wire   [0:0] icmp_ln718_3_fu_689_p2;
wire   [0:0] tmp_49_fu_677_p3;
wire   [0:0] or_ln412_3_fu_703_p2;
wire   [0:0] tmp_51_fu_709_p3;
wire   [0:0] and_ln415_3_fu_717_p2;
wire   [5:0] zext_ln415_3_fu_723_p1;
wire   [5:0] trunc_ln708_6_fu_667_p4;
wire   [5:0] add_ln415_3_fu_727_p2;
wire   [0:0] tmp_52_fu_733_p3;
wire   [0:0] tmp_50_fu_695_p3;
wire   [0:0] xor_ln416_6_fu_741_p2;
wire   [5:0] p_Result_10_3_fu_753_p4;
wire   [0:0] and_ln416_3_fu_747_p2;
wire   [0:0] icmp_ln879_3_fu_763_p2;
wire   [0:0] icmp_ln768_3_fu_769_p2;
wire   [0:0] select_ln777_3_fu_775_p3;
wire   [0:0] icmp_ln1494_3_fu_661_p2;
wire   [5:0] select_ln340_3_fu_783_p3;
wire    ap_CS_fsm_state5;
reg   [2:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 start_once_reg = 1'b0;
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 3'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if ((1'b1 == ap_CS_fsm_state5)) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_condition_pp0_exit_iter0_state2) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            if ((1'b1 == ap_condition_pp0_exit_iter0_state2)) begin
                ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state2);
            end else if ((1'b1 == 1'b1)) begin
                ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
            end
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end else if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter2 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        start_once_reg <= 1'b0;
    end else begin
        if (((internal_ap_ready == 1'b0) & (real_start == 1'b1))) begin
            start_once_reg <= 1'b1;
        end else if ((internal_ap_ready == 1'b1)) begin
            start_once_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln41_fu_219_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        i_0_reg_208 <= i_fu_225_p2;
    end else if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        i_0_reg_208 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        icmp_ln41_reg_799 <= icmp_ln41_fu_219_p2;
        icmp_ln41_reg_799_pp0_iter1_reg <= icmp_ln41_reg_799;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln41_reg_799 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        tmp_data_0_V_3_reg_808 <= tmp_data_0_V_3_fu_377_p3;
        tmp_data_1_V_3_reg_813 <= tmp_data_1_V_3_fu_515_p3;
        tmp_data_2_V_3_reg_818 <= tmp_data_2_V_3_fu_653_p3;
        tmp_data_3_V_3_reg_823 <= tmp_data_3_V_3_fu_791_p3;
    end
end

always @ (*) begin
    if ((icmp_ln41_fu_219_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state2 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state2 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
    end
end

always @ (*) begin
    if (((real_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln41_reg_799 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        data_V_data_0_V_blk_n = data_V_data_0_V_empty_n;
    end else begin
        data_V_data_0_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((icmp_ln41_reg_799 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        data_V_data_0_V_read = 1'b1;
    end else begin
        data_V_data_0_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln41_reg_799 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        data_V_data_1_V_blk_n = data_V_data_1_V_empty_n;
    end else begin
        data_V_data_1_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((icmp_ln41_reg_799 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        data_V_data_1_V_read = 1'b1;
    end else begin
        data_V_data_1_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln41_reg_799 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        data_V_data_2_V_blk_n = data_V_data_2_V_empty_n;
    end else begin
        data_V_data_2_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((icmp_ln41_reg_799 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        data_V_data_2_V_read = 1'b1;
    end else begin
        data_V_data_2_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln41_reg_799 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        data_V_data_3_V_blk_n = data_V_data_3_V_empty_n;
    end else begin
        data_V_data_3_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((icmp_ln41_reg_799 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        data_V_data_3_V_read = 1'b1;
    end else begin
        data_V_data_3_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        internal_ap_ready = 1'b1;
    end else begin
        internal_ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((start_once_reg == 1'b0) & (start_full_n == 1'b0))) begin
        real_start = 1'b0;
    end else begin
        real_start = ap_start;
    end
end

always @ (*) begin
    if (((icmp_ln41_reg_799_pp0_iter1_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        res_V_data_0_V_blk_n = res_V_data_0_V_full_n;
    end else begin
        res_V_data_0_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((icmp_ln41_reg_799_pp0_iter1_reg == 1'd0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        res_V_data_0_V_write = 1'b1;
    end else begin
        res_V_data_0_V_write = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln41_reg_799_pp0_iter1_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        res_V_data_1_V_blk_n = res_V_data_1_V_full_n;
    end else begin
        res_V_data_1_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((icmp_ln41_reg_799_pp0_iter1_reg == 1'd0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        res_V_data_1_V_write = 1'b1;
    end else begin
        res_V_data_1_V_write = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln41_reg_799_pp0_iter1_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        res_V_data_2_V_blk_n = res_V_data_2_V_full_n;
    end else begin
        res_V_data_2_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((icmp_ln41_reg_799_pp0_iter1_reg == 1'd0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        res_V_data_2_V_write = 1'b1;
    end else begin
        res_V_data_2_V_write = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln41_reg_799_pp0_iter1_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        res_V_data_3_V_blk_n = res_V_data_3_V_full_n;
    end else begin
        res_V_data_3_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((icmp_ln41_reg_799_pp0_iter1_reg == 1'd0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        res_V_data_3_V_write = 1'b1;
    end else begin
        res_V_data_3_V_write = 1'b0;
    end
end

always @ (*) begin
    if (((start_once_reg == 1'b0) & (real_start == 1'b1))) begin
        start_write = 1'b1;
    end else begin
        start_write = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (icmp_ln41_fu_219_p2 == 1'd1)) & ~((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone)))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if ((((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone)) | ((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (icmp_ln41_fu_219_p2 == 1'd1)))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln415_1_fu_451_p2 = (zext_ln415_1_fu_447_p1 + trunc_ln708_4_fu_391_p4);

assign add_ln415_2_fu_589_p2 = (zext_ln415_2_fu_585_p1 + trunc_ln708_5_fu_529_p4);

assign add_ln415_3_fu_727_p2 = (zext_ln415_3_fu_723_p1 + trunc_ln708_6_fu_667_p4);

assign add_ln415_fu_313_p2 = (zext_ln415_fu_309_p1 + trunc_ln_fu_253_p4);

assign and_ln415_1_fu_441_p2 = (tmp_43_fu_433_p3 & or_ln412_1_fu_427_p2);

assign and_ln415_2_fu_579_p2 = (tmp_47_fu_571_p3 & or_ln412_2_fu_565_p2);

assign and_ln415_3_fu_717_p2 = (tmp_51_fu_709_p3 & or_ln412_3_fu_703_p2);

assign and_ln415_fu_303_p2 = (tmp_39_fu_295_p3 & or_ln412_fu_289_p2);

assign and_ln416_1_fu_471_p2 = (xor_ln416_4_fu_465_p2 & tmp_42_fu_419_p3);

assign and_ln416_2_fu_609_p2 = (xor_ln416_5_fu_603_p2 & tmp_46_fu_557_p3);

assign and_ln416_3_fu_747_p2 = (xor_ln416_6_fu_741_p2 & tmp_50_fu_695_p3);

assign and_ln416_fu_333_p2 = (xor_ln416_fu_327_p2 & tmp_38_fu_281_p3);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd2];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_01001 = (((icmp_ln41_reg_799_pp0_iter1_reg == 1'd0) & (io_acc_block_signal_op108 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1)) | ((icmp_ln41_reg_799 == 1'd0) & (io_acc_block_signal_op20 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1)));
end

always @ (*) begin
    ap_block_pp0_stage0_11001 = (((icmp_ln41_reg_799_pp0_iter1_reg == 1'd0) & (io_acc_block_signal_op108 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1)) | ((icmp_ln41_reg_799 == 1'd0) & (io_acc_block_signal_op20 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1)));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = (((icmp_ln41_reg_799_pp0_iter1_reg == 1'd0) & (io_acc_block_signal_op108 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1)) | ((icmp_ln41_reg_799 == 1'd0) & (io_acc_block_signal_op20 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1)));
end

always @ (*) begin
    ap_block_state1 = ((real_start == 1'b0) | (ap_done_reg == 1'b1));
end

assign ap_block_state2_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state3_pp0_stage0_iter1 = ((icmp_ln41_reg_799 == 1'd0) & (io_acc_block_signal_op20 == 1'b0));
end

always @ (*) begin
    ap_block_state4_pp0_stage0_iter2 = ((icmp_ln41_reg_799_pp0_iter1_reg == 1'd0) & (io_acc_block_signal_op108 == 1'b0));
end

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_ready = internal_ap_ready;

assign i_fu_225_p2 = (i_0_reg_208 + 10'd1);

assign icmp_ln1494_1_fu_385_p2 = (($signed(data_V_data_1_V_dout) > $signed(16'd0)) ? 1'b1 : 1'b0);

assign icmp_ln1494_2_fu_523_p2 = (($signed(data_V_data_2_V_dout) > $signed(16'd0)) ? 1'b1 : 1'b0);

assign icmp_ln1494_3_fu_661_p2 = (($signed(data_V_data_3_V_dout) > $signed(16'd0)) ? 1'b1 : 1'b0);

assign icmp_ln1494_fu_247_p2 = (($signed(data_V_data_0_V_dout) > $signed(16'd0)) ? 1'b1 : 1'b0);

assign icmp_ln41_fu_219_p2 = ((i_0_reg_208 == 10'd841) ? 1'b1 : 1'b0);

assign icmp_ln718_1_fu_413_p2 = ((trunc_ln718_4_fu_409_p1 != 3'd0) ? 1'b1 : 1'b0);

assign icmp_ln718_2_fu_551_p2 = ((trunc_ln718_5_fu_547_p1 != 3'd0) ? 1'b1 : 1'b0);

assign icmp_ln718_3_fu_689_p2 = ((trunc_ln718_6_fu_685_p1 != 3'd0) ? 1'b1 : 1'b0);

assign icmp_ln718_fu_275_p2 = ((trunc_ln718_fu_271_p1 != 3'd0) ? 1'b1 : 1'b0);

assign icmp_ln768_1_fu_493_p2 = ((p_Result_10_1_fu_477_p4 == 6'd0) ? 1'b1 : 1'b0);

assign icmp_ln768_2_fu_631_p2 = ((p_Result_10_2_fu_615_p4 == 6'd0) ? 1'b1 : 1'b0);

assign icmp_ln768_3_fu_769_p2 = ((p_Result_10_3_fu_753_p4 == 6'd0) ? 1'b1 : 1'b0);

assign icmp_ln768_fu_355_p2 = ((p_Result_s_fu_339_p4 == 6'd0) ? 1'b1 : 1'b0);

assign icmp_ln879_1_fu_487_p2 = ((p_Result_10_1_fu_477_p4 == 6'd63) ? 1'b1 : 1'b0);

assign icmp_ln879_2_fu_625_p2 = ((p_Result_10_2_fu_615_p4 == 6'd63) ? 1'b1 : 1'b0);

assign icmp_ln879_3_fu_763_p2 = ((p_Result_10_3_fu_753_p4 == 6'd63) ? 1'b1 : 1'b0);

assign icmp_ln879_fu_349_p2 = ((p_Result_s_fu_339_p4 == 6'd63) ? 1'b1 : 1'b0);

assign io_acc_block_signal_op108 = (res_V_data_3_V_full_n & res_V_data_2_V_full_n & res_V_data_1_V_full_n & res_V_data_0_V_full_n);

assign io_acc_block_signal_op20 = (data_V_data_3_V_empty_n & data_V_data_2_V_empty_n & data_V_data_1_V_empty_n & data_V_data_0_V_empty_n);

assign or_ln412_1_fu_427_p2 = (tmp_41_fu_401_p3 | icmp_ln718_1_fu_413_p2);

assign or_ln412_2_fu_565_p2 = (tmp_45_fu_539_p3 | icmp_ln718_2_fu_551_p2);

assign or_ln412_3_fu_703_p2 = (tmp_49_fu_677_p3 | icmp_ln718_3_fu_689_p2);

assign or_ln412_fu_289_p2 = (tmp_37_fu_263_p3 | icmp_ln718_fu_275_p2);

assign p_Result_10_1_fu_477_p4 = {{data_V_data_1_V_dout[15:10]}};

assign p_Result_10_2_fu_615_p4 = {{data_V_data_2_V_dout[15:10]}};

assign p_Result_10_3_fu_753_p4 = {{data_V_data_3_V_dout[15:10]}};

assign p_Result_s_fu_339_p4 = {{data_V_data_0_V_dout[15:10]}};

assign res_V_data_0_V_din = tmp_data_0_V_3_reg_808;

assign res_V_data_1_V_din = tmp_data_1_V_3_reg_813;

assign res_V_data_2_V_din = tmp_data_2_V_3_reg_818;

assign res_V_data_3_V_din = tmp_data_3_V_3_reg_823;

assign select_ln340_1_fu_507_p3 = ((select_ln777_1_fu_499_p3[0:0] === 1'b1) ? add_ln415_1_fu_451_p2 : 6'd63);

assign select_ln340_2_fu_645_p3 = ((select_ln777_2_fu_637_p3[0:0] === 1'b1) ? add_ln415_2_fu_589_p2 : 6'd63);

assign select_ln340_3_fu_783_p3 = ((select_ln777_3_fu_775_p3[0:0] === 1'b1) ? add_ln415_3_fu_727_p2 : 6'd63);

assign select_ln340_fu_369_p3 = ((select_ln777_fu_361_p3[0:0] === 1'b1) ? add_ln415_fu_313_p2 : 6'd63);

assign select_ln777_1_fu_499_p3 = ((and_ln416_1_fu_471_p2[0:0] === 1'b1) ? icmp_ln879_1_fu_487_p2 : icmp_ln768_1_fu_493_p2);

assign select_ln777_2_fu_637_p3 = ((and_ln416_2_fu_609_p2[0:0] === 1'b1) ? icmp_ln879_2_fu_625_p2 : icmp_ln768_2_fu_631_p2);

assign select_ln777_3_fu_775_p3 = ((and_ln416_3_fu_747_p2[0:0] === 1'b1) ? icmp_ln879_3_fu_763_p2 : icmp_ln768_3_fu_769_p2);

assign select_ln777_fu_361_p3 = ((and_ln416_fu_333_p2[0:0] === 1'b1) ? icmp_ln879_fu_349_p2 : icmp_ln768_fu_355_p2);

assign start_out = real_start;

assign tmp_37_fu_263_p3 = data_V_data_0_V_dout[32'd4];

assign tmp_38_fu_281_p3 = data_V_data_0_V_dout[32'd9];

assign tmp_39_fu_295_p3 = data_V_data_0_V_dout[32'd3];

assign tmp_40_fu_319_p3 = add_ln415_fu_313_p2[32'd5];

assign tmp_41_fu_401_p3 = data_V_data_1_V_dout[32'd4];

assign tmp_42_fu_419_p3 = data_V_data_1_V_dout[32'd9];

assign tmp_43_fu_433_p3 = data_V_data_1_V_dout[32'd3];

assign tmp_44_fu_457_p3 = add_ln415_1_fu_451_p2[32'd5];

assign tmp_45_fu_539_p3 = data_V_data_2_V_dout[32'd4];

assign tmp_46_fu_557_p3 = data_V_data_2_V_dout[32'd9];

assign tmp_47_fu_571_p3 = data_V_data_2_V_dout[32'd3];

assign tmp_48_fu_595_p3 = add_ln415_2_fu_589_p2[32'd5];

assign tmp_49_fu_677_p3 = data_V_data_3_V_dout[32'd4];

assign tmp_50_fu_695_p3 = data_V_data_3_V_dout[32'd9];

assign tmp_51_fu_709_p3 = data_V_data_3_V_dout[32'd3];

assign tmp_52_fu_733_p3 = add_ln415_3_fu_727_p2[32'd5];

assign tmp_data_0_V_3_fu_377_p3 = ((icmp_ln1494_fu_247_p2[0:0] === 1'b1) ? select_ln340_fu_369_p3 : 6'd0);

assign tmp_data_1_V_3_fu_515_p3 = ((icmp_ln1494_1_fu_385_p2[0:0] === 1'b1) ? select_ln340_1_fu_507_p3 : 6'd0);

assign tmp_data_2_V_3_fu_653_p3 = ((icmp_ln1494_2_fu_523_p2[0:0] === 1'b1) ? select_ln340_2_fu_645_p3 : 6'd0);

assign tmp_data_3_V_3_fu_791_p3 = ((icmp_ln1494_3_fu_661_p2[0:0] === 1'b1) ? select_ln340_3_fu_783_p3 : 6'd0);

assign trunc_ln708_4_fu_391_p4 = {{data_V_data_1_V_dout[9:4]}};

assign trunc_ln708_5_fu_529_p4 = {{data_V_data_2_V_dout[9:4]}};

assign trunc_ln708_6_fu_667_p4 = {{data_V_data_3_V_dout[9:4]}};

assign trunc_ln718_4_fu_409_p1 = data_V_data_1_V_dout[2:0];

assign trunc_ln718_5_fu_547_p1 = data_V_data_2_V_dout[2:0];

assign trunc_ln718_6_fu_685_p1 = data_V_data_3_V_dout[2:0];

assign trunc_ln718_fu_271_p1 = data_V_data_0_V_dout[2:0];

assign trunc_ln_fu_253_p4 = {{data_V_data_0_V_dout[9:4]}};

assign xor_ln416_4_fu_465_p2 = (tmp_44_fu_457_p3 ^ 1'd1);

assign xor_ln416_5_fu_603_p2 = (tmp_48_fu_595_p3 ^ 1'd1);

assign xor_ln416_6_fu_741_p2 = (tmp_52_fu_733_p3 ^ 1'd1);

assign xor_ln416_fu_327_p2 = (tmp_40_fu_319_p3 ^ 1'd1);

assign zext_ln415_1_fu_447_p1 = and_ln415_1_fu_441_p2;

assign zext_ln415_2_fu_585_p1 = and_ln415_2_fu_579_p2;

assign zext_ln415_3_fu_723_p1 = and_ln415_3_fu_717_p2;

assign zext_ln415_fu_309_p1 = and_ln415_fu_303_p2;

endmodule //relu
