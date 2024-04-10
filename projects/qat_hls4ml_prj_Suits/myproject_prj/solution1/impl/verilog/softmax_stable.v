// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module softmax_stable (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
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
        res_V_data_3_V_write,
        data_V_data_0_V_blk_n,
        data_V_data_1_V_blk_n,
        data_V_data_2_V_blk_n,
        data_V_data_3_V_blk_n,
        res_V_data_0_V_blk_n,
        res_V_data_1_V_blk_n,
        res_V_data_2_V_blk_n,
        res_V_data_3_V_blk_n
);

parameter    ap_ST_fsm_pp0_stage0 = 4'd1;
parameter    ap_ST_fsm_pp0_stage1 = 4'd2;
parameter    ap_ST_fsm_pp0_stage2 = 4'd4;
parameter    ap_ST_fsm_pp0_stage3 = 4'd8;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
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
output  [15:0] res_V_data_0_V_din;
input   res_V_data_0_V_full_n;
output   res_V_data_0_V_write;
output  [15:0] res_V_data_1_V_din;
input   res_V_data_1_V_full_n;
output   res_V_data_1_V_write;
output  [15:0] res_V_data_2_V_din;
input   res_V_data_2_V_full_n;
output   res_V_data_2_V_write;
output  [15:0] res_V_data_3_V_din;
input   res_V_data_3_V_full_n;
output   res_V_data_3_V_write;
output   data_V_data_0_V_blk_n;
output   data_V_data_1_V_blk_n;
output   data_V_data_2_V_blk_n;
output   data_V_data_3_V_blk_n;
output   res_V_data_0_V_blk_n;
output   res_V_data_1_V_blk_n;
output   res_V_data_2_V_blk_n;
output   res_V_data_3_V_blk_n;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg data_V_data_0_V_read;
reg data_V_data_1_V_read;
reg data_V_data_2_V_read;
reg data_V_data_3_V_read;
reg res_V_data_0_V_write;
reg res_V_data_1_V_write;
reg res_V_data_2_V_write;
reg res_V_data_3_V_write;
reg data_V_data_0_V_blk_n;
reg data_V_data_1_V_blk_n;
reg data_V_data_2_V_blk_n;
reg data_V_data_3_V_blk_n;
reg res_V_data_0_V_blk_n;
reg res_V_data_1_V_blk_n;
reg res_V_data_2_V_blk_n;
reg res_V_data_3_V_blk_n;

(* fsm_encoding = "none" *) reg   [3:0] ap_CS_fsm;
wire    ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter0;
wire    ap_block_pp0_stage0;
reg    ap_enable_reg_pp0_iter1;
reg    ap_enable_reg_pp0_iter2;
reg    ap_idle_pp0;
wire    ap_CS_fsm_pp0_stage3;
wire    ap_block_state4_pp0_stage3_iter0;
wire    ap_block_state8_pp0_stage3_iter1;
wire    ap_block_pp0_stage3_11001;
reg   [9:0] exp_table1_address0;
reg    exp_table1_ce0;
wire   [16:0] exp_table1_q0;
wire   [9:0] invert_table2_address0;
reg    invert_table2_ce0;
wire   [17:0] invert_table2_q0;
wire    ap_CS_fsm_pp0_stage2;
wire    ap_block_pp0_stage2;
reg  signed [15:0] tmp_data_0_V_1_reg_910;
wire    io_acc_block_signal_op12;
reg    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state5_pp0_stage0_iter1;
wire    ap_block_state9_pp0_stage0_iter2;
reg    ap_block_pp0_stage0_11001;
reg  signed [15:0] tmp_data_1_V_1_reg_915;
reg  signed [15:0] tmp_data_2_V_1_reg_920;
reg  signed [15:0] tmp_data_3_V_1_reg_925;
wire   [15:0] select_ln65_fu_319_p3;
reg   [15:0] select_ln65_reg_930;
wire   [15:0] select_ln65_1_fu_333_p3;
reg   [15:0] select_ln65_1_reg_936;
wire    ap_CS_fsm_pp0_stage1;
wire    ap_block_state2_pp0_stage1_iter0;
wire    ap_block_state6_pp0_stage1_iter1;
wire    ap_block_state10_pp0_stage1_iter2;
wire    ap_block_pp0_stage1_11001;
wire   [9:0] y_V_1_fu_640_p3;
reg   [9:0] y_V_1_reg_947;
wire   [9:0] y_V_2_fu_674_p3;
reg   [9:0] y_V_2_reg_952;
wire   [9:0] y_V_3_fu_708_p3;
reg   [9:0] y_V_3_reg_957;
reg   [16:0] exp_res_0_V_reg_962;
wire    ap_block_state3_pp0_stage2_iter0;
wire    ap_block_state7_pp0_stage2_iter1;
wire    io_acc_block_signal_op157;
reg    ap_block_state11_pp0_stage2_iter2;
reg    ap_block_pp0_stage2_11001;
reg   [16:0] exp_res_0_V_reg_962_pp0_iter1_reg;
reg   [16:0] exp_res_1_V_reg_973;
reg   [16:0] exp_res_1_V_reg_973_pp0_iter1_reg;
reg   [16:0] exp_res_2_V_reg_984;
reg   [16:0] exp_res_2_V_reg_984_pp0_iter2_reg;
reg   [16:0] exp_res_3_V_reg_995;
reg   [16:0] exp_res_3_V_reg_995_pp0_iter2_reg;
wire  signed [25:0] sext_ln241_fu_889_p1;
reg  signed [25:0] sext_ln241_reg_1006;
reg   [15:0] tmp_data_0_V_reg_1011;
reg   [15:0] tmp_data_1_V_reg_1016;
reg   [15:0] tmp_data_2_V_reg_1021;
reg    ap_enable_reg_pp0_iter0_reg;
wire    ap_block_pp0_stage3_subdone;
reg    ap_block_pp0_stage2_subdone;
wire   [63:0] zext_ln225_fu_609_p1;
wire    ap_block_pp0_stage1;
wire   [63:0] zext_ln225_1_fu_716_p1;
wire   [63:0] zext_ln225_2_fu_720_p1;
wire    ap_block_pp0_stage3;
wire   [63:0] zext_ln225_3_fu_724_p1;
wire   [63:0] zext_ln235_fu_884_p1;
reg    ap_block_pp0_stage2_01001;
reg  signed [17:0] grp_fu_266_p0;
reg   [16:0] grp_fu_266_p1;
wire   [25:0] zext_ln1118_fu_894_p1;
wire   [25:0] zext_ln1118_1_fu_898_p1;
wire   [25:0] zext_ln1118_2_fu_902_p1;
wire   [25:0] zext_ln1118_3_fu_906_p1;
wire   [25:0] grp_fu_266_p2;
wire  signed [15:0] icmp_ln1496_fu_313_p0;
wire  signed [15:0] icmp_ln1496_fu_313_p1;
wire   [0:0] icmp_ln1496_fu_313_p2;
wire  signed [15:0] select_ln65_fu_319_p1;
wire  signed [15:0] select_ln65_fu_319_p2;
wire  signed [15:0] icmp_ln1496_1_fu_327_p0;
wire  signed [15:0] icmp_ln1496_1_fu_327_p1;
wire   [0:0] icmp_ln1496_1_fu_327_p2;
wire  signed [15:0] select_ln65_1_fu_333_p1;
wire  signed [15:0] select_ln65_1_fu_333_p2;
wire   [0:0] icmp_ln1496_2_fu_341_p2;
wire   [15:0] x_max_V_fu_345_p3;
wire  signed [16:0] sext_ln703_fu_351_p1;
wire  signed [16:0] sext_ln703_1_fu_354_p1;
wire   [16:0] sub_ln1193_fu_358_p2;
wire   [0:0] tmp_10_fu_372_p3;
wire   [0:0] tmp_8_fu_364_p3;
wire   [0:0] xor_ln786_fu_380_p2;
wire   [0:0] xor_ln340_fu_398_p2;
wire  signed [16:0] sext_ln703_2_fu_410_p1;
wire   [16:0] sub_ln1193_1_fu_413_p2;
wire   [0:0] tmp_12_fu_427_p3;
wire   [0:0] tmp_11_fu_419_p3;
wire   [0:0] xor_ln786_1_fu_435_p2;
wire   [0:0] xor_ln340_1_fu_453_p2;
wire  signed [16:0] sext_ln703_3_fu_465_p1;
wire   [16:0] sub_ln1193_2_fu_468_p2;
wire   [0:0] tmp_14_fu_482_p3;
wire   [0:0] tmp_13_fu_474_p3;
wire   [0:0] xor_ln786_2_fu_490_p2;
wire   [0:0] xor_ln340_2_fu_508_p2;
wire  signed [16:0] sext_ln703_4_fu_520_p1;
wire   [16:0] sub_ln1193_3_fu_523_p2;
wire   [0:0] tmp_16_fu_537_p3;
wire   [0:0] tmp_15_fu_529_p3;
wire   [0:0] xor_ln786_3_fu_545_p2;
wire   [0:0] xor_ln340_3_fu_563_p2;
wire   [0:0] xor_ln340_5_fu_392_p2;
wire   [9:0] tmp_fu_575_p4;
wire   [0:0] and_ln786_fu_386_p2;
wire   [0:0] or_ln340_fu_404_p2;
wire   [9:0] select_ln340_fu_585_p3;
wire   [9:0] select_ln388_fu_593_p3;
wire   [9:0] y_V_fu_601_p3;
wire   [0:0] xor_ln340_6_fu_447_p2;
wire   [9:0] tmp_7_fu_614_p4;
wire   [0:0] and_ln786_1_fu_441_p2;
wire   [0:0] or_ln340_1_fu_459_p2;
wire   [9:0] select_ln340_2_fu_624_p3;
wire   [9:0] select_ln388_1_fu_632_p3;
wire   [0:0] xor_ln340_7_fu_502_p2;
wire   [9:0] tmp_9_fu_648_p4;
wire   [0:0] and_ln786_2_fu_496_p2;
wire   [0:0] or_ln340_2_fu_514_p2;
wire   [9:0] select_ln340_4_fu_658_p3;
wire   [9:0] select_ln388_2_fu_666_p3;
wire   [0:0] xor_ln340_8_fu_557_p2;
wire   [9:0] tmp_s_fu_682_p4;
wire   [0:0] and_ln786_3_fu_551_p2;
wire   [0:0] or_ln340_3_fu_569_p2;
wire   [9:0] select_ln340_6_fu_692_p3;
wire   [9:0] select_ln388_3_fu_700_p3;
wire   [17:0] p_Val2_5_fu_728_p1;
wire   [17:0] p_Val2_6_fu_731_p1;
wire   [17:0] p_Val2_7_fu_734_p2;
wire   [0:0] p_Result_s_fu_740_p3;
wire   [17:0] p_Val2_8_fu_756_p1;
wire   [17:0] p_Val2_9_fu_759_p1;
wire   [17:0] p_Val2_10_fu_762_p2;
wire   [0:0] p_Result_10_fu_768_p3;
wire  signed [17:0] p_Val2_11_fu_748_p3;
wire  signed [17:0] p_Val2_12_fu_776_p3;
wire  signed [18:0] lhs_V_fu_784_p1;
wire  signed [18:0] rhs_V_fu_788_p1;
wire   [18:0] ret_V_fu_792_p2;
wire   [17:0] p_Val2_14_fu_806_p2;
wire   [0:0] p_Result_12_fu_812_p3;
wire   [0:0] p_Result_11_fu_798_p3;
wire   [0:0] xor_ln786_4_fu_820_p2;
wire   [0:0] xor_ln340_4_fu_838_p2;
wire   [0:0] xor_ln340_9_fu_832_p2;
wire   [9:0] tmp_6_fu_850_p4;
wire   [0:0] underflow_fu_826_p2;
wire   [0:0] or_ln340_4_fu_844_p2;
wire   [9:0] select_ln340_10_fu_860_p3;
wire   [9:0] select_ln388_4_fu_868_p3;
wire   [9:0] y_V_4_fu_876_p3;
reg   [3:0] ap_NS_fsm;
reg    ap_block_pp0_stage0_subdone;
reg    ap_idle_pp0_1to2;
wire    ap_block_pp0_stage1_subdone;
reg    ap_idle_pp0_0to1;
reg    ap_reset_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 ap_CS_fsm = 4'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter0_reg = 1'b0;
end

softmax_stable_exEe0 #(
    .DataWidth( 17 ),
    .AddressRange( 1024 ),
    .AddressWidth( 10 ))
exp_table1_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(exp_table1_address0),
    .ce0(exp_table1_ce0),
    .q0(exp_table1_q0)
);

softmax_stable_inFfa #(
    .DataWidth( 18 ),
    .AddressRange( 1024 ),
    .AddressWidth( 10 ))
invert_table2_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(invert_table2_address0),
    .ce0(invert_table2_ce0),
    .q0(invert_table2_q0)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_pp0_stage0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_pp0_stage0)) begin
            ap_enable_reg_pp0_iter0_reg <= ap_start;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage3_subdone) & (1'b1 == ap_CS_fsm_pp0_stage3))) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage3_subdone) & (1'b1 == ap_CS_fsm_pp0_stage3))) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end else if (((ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage2_subdone) & (1'b1 == ap_CS_fsm_pp0_stage2))) begin
            ap_enable_reg_pp0_iter2 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage2) & (1'b0 == ap_block_pp0_stage2_11001))) begin
        exp_res_0_V_reg_962 <= exp_table1_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage2) & (1'b0 == ap_block_pp0_stage2_11001))) begin
        exp_res_0_V_reg_962_pp0_iter1_reg <= exp_res_0_V_reg_962;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage3_11001) & (1'b1 == ap_CS_fsm_pp0_stage3) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
        exp_res_1_V_reg_973 <= exp_table1_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage3_11001) & (1'b1 == ap_CS_fsm_pp0_stage3))) begin
        exp_res_1_V_reg_973_pp0_iter1_reg <= exp_res_1_V_reg_973;
        sext_ln241_reg_1006 <= sext_ln241_fu_889_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        exp_res_2_V_reg_984 <= exp_table1_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        exp_res_2_V_reg_984_pp0_iter2_reg <= exp_res_2_V_reg_984;
        select_ln65_1_reg_936 <= select_ln65_1_fu_333_p3;
        select_ln65_reg_930 <= select_ln65_fu_319_p3;
        tmp_data_0_V_1_reg_910 <= data_V_data_0_V_dout;
        tmp_data_1_V_1_reg_915 <= data_V_data_1_V_dout;
        tmp_data_2_V_1_reg_920 <= data_V_data_2_V_dout;
        tmp_data_3_V_1_reg_925 <= data_V_data_3_V_dout;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001))) begin
        exp_res_3_V_reg_995 <= exp_table1_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001))) begin
        exp_res_3_V_reg_995_pp0_iter2_reg <= exp_res_3_V_reg_995;
        y_V_1_reg_947 <= y_V_1_fu_640_p3;
        y_V_2_reg_952 <= y_V_2_fu_674_p3;
        y_V_3_reg_957 <= y_V_3_fu_708_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage3_11001) & (1'b1 == ap_CS_fsm_pp0_stage3) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        tmp_data_0_V_reg_1011 <= {{grp_fu_266_p2[25:10]}};
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        tmp_data_1_V_reg_1016 <= {{grp_fu_266_p2[25:10]}};
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001))) begin
        tmp_data_2_V_reg_1021 <= {{grp_fu_266_p2[25:10]}};
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | ((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage2) & (1'b0 == ap_block_pp0_stage2_11001)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_pp0_stage0)) begin
        ap_enable_reg_pp0_iter0 = ap_start;
    end else begin
        ap_enable_reg_pp0_iter0 = ap_enable_reg_pp0_iter0_reg;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (ap_idle_pp0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
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
    if (((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0_0to1 = 1'b1;
    end else begin
        ap_idle_pp0_0to1 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0))) begin
        ap_idle_pp0_1to2 = 1'b1;
    end else begin
        ap_idle_pp0_1to2 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage3_11001) & (1'b1 == ap_CS_fsm_pp0_stage3) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (ap_idle_pp0_0to1 == 1'b1))) begin
        ap_reset_idle_pp0 = 1'b1;
    end else begin
        ap_reset_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        data_V_data_0_V_blk_n = data_V_data_0_V_empty_n;
    end else begin
        data_V_data_0_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        data_V_data_0_V_read = 1'b1;
    end else begin
        data_V_data_0_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        data_V_data_1_V_blk_n = data_V_data_1_V_empty_n;
    end else begin
        data_V_data_1_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        data_V_data_1_V_read = 1'b1;
    end else begin
        data_V_data_1_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        data_V_data_2_V_blk_n = data_V_data_2_V_empty_n;
    end else begin
        data_V_data_2_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        data_V_data_2_V_read = 1'b1;
    end else begin
        data_V_data_2_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        data_V_data_3_V_blk_n = data_V_data_3_V_empty_n;
    end else begin
        data_V_data_3_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        data_V_data_3_V_read = 1'b1;
    end else begin
        data_V_data_3_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        exp_table1_address0 = zext_ln225_3_fu_724_p1;
    end else if (((1'b0 == ap_block_pp0_stage3) & (1'b1 == ap_CS_fsm_pp0_stage3) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
        exp_table1_address0 = zext_ln225_2_fu_720_p1;
    end else if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage2) & (1'b0 == ap_block_pp0_stage2))) begin
        exp_table1_address0 = zext_ln225_1_fu_716_p1;
    end else if (((1'b0 == ap_block_pp0_stage1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
        exp_table1_address0 = zext_ln225_fu_609_p1;
    end else begin
        exp_table1_address0 = 'bx;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_block_pp0_stage3_11001) & (1'b1 == ap_CS_fsm_pp0_stage3) & (ap_enable_reg_pp0_iter0 == 1'b1)) | ((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001)) | ((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage2) & (1'b0 == ap_block_pp0_stage2_11001)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001)))) begin
        exp_table1_ce0 = 1'b1;
    end else begin
        exp_table1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | ((1'b0 == ap_block_pp0_stage1) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1)) | ((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage2) & (1'b0 == ap_block_pp0_stage2)))) begin
        grp_fu_266_p0 = sext_ln241_reg_1006;
    end else if (((1'b0 == ap_block_pp0_stage3) & (1'b1 == ap_CS_fsm_pp0_stage3) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        grp_fu_266_p0 = sext_ln241_fu_889_p1;
    end else begin
        grp_fu_266_p0 = 'bx;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage2) & (1'b0 == ap_block_pp0_stage2))) begin
        grp_fu_266_p1 = zext_ln1118_3_fu_906_p1;
    end else if (((1'b0 == ap_block_pp0_stage1) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
        grp_fu_266_p1 = zext_ln1118_2_fu_902_p1;
    end else if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        grp_fu_266_p1 = zext_ln1118_1_fu_898_p1;
    end else if (((1'b0 == ap_block_pp0_stage3) & (1'b1 == ap_CS_fsm_pp0_stage3) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        grp_fu_266_p1 = zext_ln1118_fu_894_p1;
    end else begin
        grp_fu_266_p1 = 'bx;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage2) & (1'b0 == ap_block_pp0_stage2_11001))) begin
        invert_table2_ce0 = 1'b1;
    end else begin
        invert_table2_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage2) & (1'b0 == ap_block_pp0_stage2))) begin
        res_V_data_0_V_blk_n = res_V_data_0_V_full_n;
    end else begin
        res_V_data_0_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage2) & (1'b0 == ap_block_pp0_stage2_11001))) begin
        res_V_data_0_V_write = 1'b1;
    end else begin
        res_V_data_0_V_write = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage2) & (1'b0 == ap_block_pp0_stage2))) begin
        res_V_data_1_V_blk_n = res_V_data_1_V_full_n;
    end else begin
        res_V_data_1_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage2) & (1'b0 == ap_block_pp0_stage2_11001))) begin
        res_V_data_1_V_write = 1'b1;
    end else begin
        res_V_data_1_V_write = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage2) & (1'b0 == ap_block_pp0_stage2))) begin
        res_V_data_2_V_blk_n = res_V_data_2_V_full_n;
    end else begin
        res_V_data_2_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage2) & (1'b0 == ap_block_pp0_stage2_11001))) begin
        res_V_data_2_V_write = 1'b1;
    end else begin
        res_V_data_2_V_write = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage2) & (1'b0 == ap_block_pp0_stage2))) begin
        res_V_data_3_V_blk_n = res_V_data_3_V_full_n;
    end else begin
        res_V_data_3_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage2) & (1'b0 == ap_block_pp0_stage2_11001))) begin
        res_V_data_3_V_write = 1'b1;
    end else begin
        res_V_data_3_V_write = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((ap_start == 1'b0) & (ap_idle_pp0_1to2 == 1'b1)) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_pp0_stage1 : begin
            if ((1'b0 == ap_block_pp0_stage1_subdone)) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end
        end
        ap_ST_fsm_pp0_stage2 : begin
            if (((ap_reset_idle_pp0 == 1'b0) & (1'b0 == ap_block_pp0_stage2_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            end else if (((1'b0 == ap_block_pp0_stage2_subdone) & (ap_reset_idle_pp0 == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            end
        end
        ap_ST_fsm_pp0_stage3 : begin
            if ((1'b0 == ap_block_pp0_stage3_subdone)) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign and_ln786_1_fu_441_p2 = (xor_ln786_1_fu_435_p2 & tmp_11_fu_419_p3);

assign and_ln786_2_fu_496_p2 = (xor_ln786_2_fu_490_p2 & tmp_13_fu_474_p3);

assign and_ln786_3_fu_551_p2 = (xor_ln786_3_fu_545_p2 & tmp_15_fu_529_p3);

assign and_ln786_fu_386_p2 = (xor_ln786_fu_380_p2 & tmp_8_fu_364_p3);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_pp0_stage1 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_pp0_stage2 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_pp0_stage3 = ap_CS_fsm[32'd3];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_11001 = ((ap_enable_reg_pp0_iter0 == 1'b1) & ((ap_start == 1'b0) | (io_acc_block_signal_op12 == 1'b0)));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = ((ap_enable_reg_pp0_iter0 == 1'b1) & ((ap_start == 1'b0) | (io_acc_block_signal_op12 == 1'b0)));
end

assign ap_block_pp0_stage1 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage2 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage2_01001 = ((io_acc_block_signal_op157 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1));
end

always @ (*) begin
    ap_block_pp0_stage2_11001 = ((io_acc_block_signal_op157 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1));
end

always @ (*) begin
    ap_block_pp0_stage2_subdone = ((io_acc_block_signal_op157 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b1));
end

assign ap_block_pp0_stage3 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage3_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage3_subdone = ~(1'b1 == 1'b1);

assign ap_block_state10_pp0_stage1_iter2 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state11_pp0_stage2_iter2 = (io_acc_block_signal_op157 == 1'b0);
end

always @ (*) begin
    ap_block_state1_pp0_stage0_iter0 = ((ap_start == 1'b0) | (io_acc_block_signal_op12 == 1'b0));
end

assign ap_block_state2_pp0_stage1_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage2_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage3_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage1_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage2_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage3_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign grp_fu_266_p2 = ($signed(grp_fu_266_p0) * $signed({{1'b0}, {grp_fu_266_p1}}));

assign icmp_ln1496_1_fu_327_p0 = data_V_data_2_V_dout;

assign icmp_ln1496_1_fu_327_p1 = data_V_data_3_V_dout;

assign icmp_ln1496_1_fu_327_p2 = (($signed(icmp_ln1496_1_fu_327_p0) < $signed(icmp_ln1496_1_fu_327_p1)) ? 1'b1 : 1'b0);

assign icmp_ln1496_2_fu_341_p2 = (($signed(select_ln65_reg_930) < $signed(select_ln65_1_reg_936)) ? 1'b1 : 1'b0);

assign icmp_ln1496_fu_313_p0 = data_V_data_0_V_dout;

assign icmp_ln1496_fu_313_p1 = data_V_data_1_V_dout;

assign icmp_ln1496_fu_313_p2 = (($signed(icmp_ln1496_fu_313_p0) < $signed(icmp_ln1496_fu_313_p1)) ? 1'b1 : 1'b0);

assign invert_table2_address0 = zext_ln235_fu_884_p1;

assign io_acc_block_signal_op12 = (data_V_data_3_V_empty_n & data_V_data_2_V_empty_n & data_V_data_1_V_empty_n & data_V_data_0_V_empty_n);

assign io_acc_block_signal_op157 = (res_V_data_3_V_full_n & res_V_data_2_V_full_n & res_V_data_1_V_full_n & res_V_data_0_V_full_n);

assign lhs_V_fu_784_p1 = p_Val2_11_fu_748_p3;

assign or_ln340_1_fu_459_p2 = (xor_ln340_1_fu_453_p2 | tmp_12_fu_427_p3);

assign or_ln340_2_fu_514_p2 = (xor_ln340_2_fu_508_p2 | tmp_14_fu_482_p3);

assign or_ln340_3_fu_569_p2 = (xor_ln340_3_fu_563_p2 | tmp_16_fu_537_p3);

assign or_ln340_4_fu_844_p2 = (xor_ln340_4_fu_838_p2 | p_Result_12_fu_812_p3);

assign or_ln340_fu_404_p2 = (xor_ln340_fu_398_p2 | tmp_10_fu_372_p3);

assign p_Result_10_fu_768_p3 = p_Val2_10_fu_762_p2[32'd17];

assign p_Result_11_fu_798_p3 = ret_V_fu_792_p2[32'd18];

assign p_Result_12_fu_812_p3 = p_Val2_14_fu_806_p2[32'd17];

assign p_Result_s_fu_740_p3 = p_Val2_7_fu_734_p2[32'd17];

assign p_Val2_10_fu_762_p2 = (p_Val2_8_fu_756_p1 + p_Val2_9_fu_759_p1);

assign p_Val2_11_fu_748_p3 = ((p_Result_s_fu_740_p3[0:0] === 1'b1) ? 18'd131071 : p_Val2_7_fu_734_p2);

assign p_Val2_12_fu_776_p3 = ((p_Result_10_fu_768_p3[0:0] === 1'b1) ? 18'd131071 : p_Val2_10_fu_762_p2);

assign p_Val2_14_fu_806_p2 = ($signed(p_Val2_12_fu_776_p3) + $signed(p_Val2_11_fu_748_p3));

assign p_Val2_5_fu_728_p1 = exp_res_0_V_reg_962;

assign p_Val2_6_fu_731_p1 = exp_res_1_V_reg_973;

assign p_Val2_7_fu_734_p2 = (p_Val2_5_fu_728_p1 + p_Val2_6_fu_731_p1);

assign p_Val2_8_fu_756_p1 = exp_res_2_V_reg_984;

assign p_Val2_9_fu_759_p1 = exp_res_3_V_reg_995;

assign res_V_data_0_V_din = tmp_data_0_V_reg_1011;

assign res_V_data_1_V_din = tmp_data_1_V_reg_1016;

assign res_V_data_2_V_din = tmp_data_2_V_reg_1021;

assign res_V_data_3_V_din = {{grp_fu_266_p2[25:10]}};

assign ret_V_fu_792_p2 = ($signed(lhs_V_fu_784_p1) + $signed(rhs_V_fu_788_p1));

assign rhs_V_fu_788_p1 = p_Val2_12_fu_776_p3;

assign select_ln340_10_fu_860_p3 = ((xor_ln340_9_fu_832_p2[0:0] === 1'b1) ? 10'd511 : tmp_6_fu_850_p4);

assign select_ln340_2_fu_624_p3 = ((xor_ln340_6_fu_447_p2[0:0] === 1'b1) ? 10'd511 : tmp_7_fu_614_p4);

assign select_ln340_4_fu_658_p3 = ((xor_ln340_7_fu_502_p2[0:0] === 1'b1) ? 10'd511 : tmp_9_fu_648_p4);

assign select_ln340_6_fu_692_p3 = ((xor_ln340_8_fu_557_p2[0:0] === 1'b1) ? 10'd511 : tmp_s_fu_682_p4);

assign select_ln340_fu_585_p3 = ((xor_ln340_5_fu_392_p2[0:0] === 1'b1) ? 10'd511 : tmp_fu_575_p4);

assign select_ln388_1_fu_632_p3 = ((and_ln786_1_fu_441_p2[0:0] === 1'b1) ? 10'd512 : tmp_7_fu_614_p4);

assign select_ln388_2_fu_666_p3 = ((and_ln786_2_fu_496_p2[0:0] === 1'b1) ? 10'd512 : tmp_9_fu_648_p4);

assign select_ln388_3_fu_700_p3 = ((and_ln786_3_fu_551_p2[0:0] === 1'b1) ? 10'd512 : tmp_s_fu_682_p4);

assign select_ln388_4_fu_868_p3 = ((underflow_fu_826_p2[0:0] === 1'b1) ? 10'd512 : tmp_6_fu_850_p4);

assign select_ln388_fu_593_p3 = ((and_ln786_fu_386_p2[0:0] === 1'b1) ? 10'd512 : tmp_fu_575_p4);

assign select_ln65_1_fu_333_p1 = data_V_data_3_V_dout;

assign select_ln65_1_fu_333_p2 = data_V_data_2_V_dout;

assign select_ln65_1_fu_333_p3 = ((icmp_ln1496_1_fu_327_p2[0:0] === 1'b1) ? select_ln65_1_fu_333_p1 : select_ln65_1_fu_333_p2);

assign select_ln65_fu_319_p1 = data_V_data_1_V_dout;

assign select_ln65_fu_319_p2 = data_V_data_0_V_dout;

assign select_ln65_fu_319_p3 = ((icmp_ln1496_fu_313_p2[0:0] === 1'b1) ? select_ln65_fu_319_p1 : select_ln65_fu_319_p2);

assign sext_ln241_fu_889_p1 = $signed(invert_table2_q0);

assign sext_ln703_1_fu_354_p1 = $signed(x_max_V_fu_345_p3);

assign sext_ln703_2_fu_410_p1 = tmp_data_1_V_1_reg_915;

assign sext_ln703_3_fu_465_p1 = tmp_data_2_V_1_reg_920;

assign sext_ln703_4_fu_520_p1 = tmp_data_3_V_1_reg_925;

assign sext_ln703_fu_351_p1 = tmp_data_0_V_1_reg_910;

assign sub_ln1193_1_fu_413_p2 = ($signed(sext_ln703_2_fu_410_p1) - $signed(sext_ln703_1_fu_354_p1));

assign sub_ln1193_2_fu_468_p2 = ($signed(sext_ln703_3_fu_465_p1) - $signed(sext_ln703_1_fu_354_p1));

assign sub_ln1193_3_fu_523_p2 = ($signed(sext_ln703_4_fu_520_p1) - $signed(sext_ln703_1_fu_354_p1));

assign sub_ln1193_fu_358_p2 = ($signed(sext_ln703_fu_351_p1) - $signed(sext_ln703_1_fu_354_p1));

assign tmp_10_fu_372_p3 = sub_ln1193_fu_358_p2[32'd15];

assign tmp_11_fu_419_p3 = sub_ln1193_1_fu_413_p2[32'd16];

assign tmp_12_fu_427_p3 = sub_ln1193_1_fu_413_p2[32'd15];

assign tmp_13_fu_474_p3 = sub_ln1193_2_fu_468_p2[32'd16];

assign tmp_14_fu_482_p3 = sub_ln1193_2_fu_468_p2[32'd15];

assign tmp_15_fu_529_p3 = sub_ln1193_3_fu_523_p2[32'd16];

assign tmp_16_fu_537_p3 = sub_ln1193_3_fu_523_p2[32'd15];

assign tmp_6_fu_850_p4 = {{p_Val2_14_fu_806_p2[17:8]}};

assign tmp_7_fu_614_p4 = {{sub_ln1193_1_fu_413_p2[15:6]}};

assign tmp_8_fu_364_p3 = sub_ln1193_fu_358_p2[32'd16];

assign tmp_9_fu_648_p4 = {{sub_ln1193_2_fu_468_p2[15:6]}};

assign tmp_fu_575_p4 = {{sub_ln1193_fu_358_p2[15:6]}};

assign tmp_s_fu_682_p4 = {{sub_ln1193_3_fu_523_p2[15:6]}};

assign underflow_fu_826_p2 = (xor_ln786_4_fu_820_p2 & p_Result_11_fu_798_p3);

assign x_max_V_fu_345_p3 = ((icmp_ln1496_2_fu_341_p2[0:0] === 1'b1) ? select_ln65_1_reg_936 : select_ln65_reg_930);

assign xor_ln340_1_fu_453_p2 = (tmp_11_fu_419_p3 ^ 1'd1);

assign xor_ln340_2_fu_508_p2 = (tmp_13_fu_474_p3 ^ 1'd1);

assign xor_ln340_3_fu_563_p2 = (tmp_15_fu_529_p3 ^ 1'd1);

assign xor_ln340_4_fu_838_p2 = (p_Result_11_fu_798_p3 ^ 1'd1);

assign xor_ln340_5_fu_392_p2 = (tmp_8_fu_364_p3 ^ tmp_10_fu_372_p3);

assign xor_ln340_6_fu_447_p2 = (tmp_12_fu_427_p3 ^ tmp_11_fu_419_p3);

assign xor_ln340_7_fu_502_p2 = (tmp_14_fu_482_p3 ^ tmp_13_fu_474_p3);

assign xor_ln340_8_fu_557_p2 = (tmp_16_fu_537_p3 ^ tmp_15_fu_529_p3);

assign xor_ln340_9_fu_832_p2 = (p_Result_12_fu_812_p3 ^ p_Result_11_fu_798_p3);

assign xor_ln340_fu_398_p2 = (tmp_8_fu_364_p3 ^ 1'd1);

assign xor_ln786_1_fu_435_p2 = (tmp_12_fu_427_p3 ^ 1'd1);

assign xor_ln786_2_fu_490_p2 = (tmp_14_fu_482_p3 ^ 1'd1);

assign xor_ln786_3_fu_545_p2 = (tmp_16_fu_537_p3 ^ 1'd1);

assign xor_ln786_4_fu_820_p2 = (p_Result_12_fu_812_p3 ^ 1'd1);

assign xor_ln786_fu_380_p2 = (tmp_10_fu_372_p3 ^ 1'd1);

assign y_V_1_fu_640_p3 = ((or_ln340_1_fu_459_p2[0:0] === 1'b1) ? select_ln340_2_fu_624_p3 : select_ln388_1_fu_632_p3);

assign y_V_2_fu_674_p3 = ((or_ln340_2_fu_514_p2[0:0] === 1'b1) ? select_ln340_4_fu_658_p3 : select_ln388_2_fu_666_p3);

assign y_V_3_fu_708_p3 = ((or_ln340_3_fu_569_p2[0:0] === 1'b1) ? select_ln340_6_fu_692_p3 : select_ln388_3_fu_700_p3);

assign y_V_4_fu_876_p3 = ((or_ln340_4_fu_844_p2[0:0] === 1'b1) ? select_ln340_10_fu_860_p3 : select_ln388_4_fu_868_p3);

assign y_V_fu_601_p3 = ((or_ln340_fu_404_p2[0:0] === 1'b1) ? select_ln340_fu_585_p3 : select_ln388_fu_593_p3);

assign zext_ln1118_1_fu_898_p1 = exp_res_1_V_reg_973_pp0_iter1_reg;

assign zext_ln1118_2_fu_902_p1 = exp_res_2_V_reg_984_pp0_iter2_reg;

assign zext_ln1118_3_fu_906_p1 = exp_res_3_V_reg_995_pp0_iter2_reg;

assign zext_ln1118_fu_894_p1 = exp_res_0_V_reg_962_pp0_iter1_reg;

assign zext_ln225_1_fu_716_p1 = y_V_1_reg_947;

assign zext_ln225_2_fu_720_p1 = y_V_2_reg_952;

assign zext_ln225_3_fu_724_p1 = y_V_3_reg_957;

assign zext_ln225_fu_609_p1 = y_V_fu_601_p3;

assign zext_ln235_fu_884_p1 = y_V_4_fu_876_p3;

endmodule //softmax_stable
