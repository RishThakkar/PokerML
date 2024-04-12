// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="myproject_axi,hls_ip_2019_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xczu5ev-sfvc784-2LV-e,HLS_INPUT_CLOCK=5.000000,HLS_INPUT_ARCH=dataflow,HLS_SYN_CLOCK=4.355000,HLS_SYN_LAT=462949,HLS_SYN_TPT=237570,HLS_SYN_MEM=57,HLS_SYN_DSP=19,HLS_SYN_FF=45725,HLS_SYN_LUT=60945,HLS_VERSION=2019_2}" *)

module myproject_axi (
        in_r_TDATA,
        in_r_TLAST,
        out_r_TDATA,
        out_r_TLAST,
        ap_clk,
        ap_rst_n,
        in_r_TVALID,
        in_r_TREADY,
        out_r_TVALID,
        out_r_TREADY
);


input  [31:0] in_r_TDATA;
input  [0:0] in_r_TLAST;
output  [31:0] out_r_TDATA;
output  [0:0] out_r_TLAST;
input   ap_clk;
input   ap_rst_n;
input   in_r_TVALID;
output   in_r_TREADY;
output   out_r_TVALID;
input   out_r_TREADY;

 reg    ap_rst_n_inv;
wire    Loop_1_proc290_U0_ap_start;
wire    Loop_1_proc290_U0_ap_done;
wire    Loop_1_proc290_U0_ap_continue;
wire    Loop_1_proc290_U0_ap_idle;
wire    Loop_1_proc290_U0_ap_ready;
wire    Loop_1_proc290_U0_start_out;
wire    Loop_1_proc290_U0_start_write;
wire   [15:0] Loop_1_proc290_U0_in_local_V_data_0_V_din;
wire    Loop_1_proc290_U0_in_local_V_data_0_V_write;
wire   [15:0] Loop_1_proc290_U0_in_local_V_data_1_V_din;
wire    Loop_1_proc290_U0_in_local_V_data_1_V_write;
wire   [15:0] Loop_1_proc290_U0_in_local_V_data_2_V_din;
wire    Loop_1_proc290_U0_in_local_V_data_2_V_write;
wire    Loop_1_proc290_U0_in_r_TREADY;
wire   [0:0] Loop_1_proc290_U0_ap_return;
wire    ap_channel_done_is_last_0_i_loc_channel;
wire    is_last_0_i_loc_channel_full_n;
wire    myproject_U0_ap_start;
wire    myproject_U0_start_out;
wire    myproject_U0_start_write;
wire    myproject_U0_conv1_input_V_data_0_V_read;
wire    myproject_U0_conv1_input_V_data_1_V_read;
wire    myproject_U0_conv1_input_V_data_2_V_read;
wire   [15:0] myproject_U0_layer12_out_V_data_0_V_din;
wire    myproject_U0_layer12_out_V_data_0_V_write;
wire   [15:0] myproject_U0_layer12_out_V_data_1_V_din;
wire    myproject_U0_layer12_out_V_data_1_V_write;
wire   [15:0] myproject_U0_layer12_out_V_data_2_V_din;
wire    myproject_U0_layer12_out_V_data_2_V_write;
wire   [15:0] myproject_U0_layer12_out_V_data_3_V_din;
wire    myproject_U0_layer12_out_V_data_3_V_write;
wire    myproject_U0_ap_done;
wire    myproject_U0_ap_ready;
wire    myproject_U0_ap_idle;
wire    myproject_U0_ap_continue;
wire    Block_myproject_axi_exit44_proc_U0_ap_start;
wire    Block_myproject_axi_exit44_proc_U0_ap_done;
wire    Block_myproject_axi_exit44_proc_U0_ap_continue;
wire    Block_myproject_axi_exit44_proc_U0_ap_idle;
wire    Block_myproject_axi_exit44_proc_U0_ap_ready;
wire    Block_myproject_axi_exit44_proc_U0_out_local_V_data_0_V_read;
wire    Block_myproject_axi_exit44_proc_U0_out_local_V_data_1_V_read;
wire    Block_myproject_axi_exit44_proc_U0_out_local_V_data_2_V_read;
wire    Block_myproject_axi_exit44_proc_U0_out_local_V_data_3_V_read;
wire   [15:0] Block_myproject_axi_exit44_proc_U0_tmp_data_V_0;
wire    Block_myproject_axi_exit44_proc_U0_tmp_data_V_0_ap_vld;
wire   [15:0] Block_myproject_axi_exit44_proc_U0_tmp_data_V_1;
wire    Block_myproject_axi_exit44_proc_U0_tmp_data_V_1_ap_vld;
wire   [15:0] Block_myproject_axi_exit44_proc_U0_tmp_data_V_2;
wire    Block_myproject_axi_exit44_proc_U0_tmp_data_V_2_ap_vld;
wire   [15:0] Block_myproject_axi_exit44_proc_U0_tmp_data_V_3;
wire    Block_myproject_axi_exit44_proc_U0_tmp_data_V_3_ap_vld;
wire    ap_channel_done_tmp_data_V_3;
wire    tmp_data_V_3_full_n;
reg    ap_sync_reg_channel_write_tmp_data_V_3;
wire    ap_sync_channel_write_tmp_data_V_3;
wire    ap_channel_done_tmp_data_V_2;
wire    tmp_data_V_2_full_n;
reg    ap_sync_reg_channel_write_tmp_data_V_2;
wire    ap_sync_channel_write_tmp_data_V_2;
wire    ap_channel_done_tmp_data_V_1;
wire    tmp_data_V_1_full_n;
reg    ap_sync_reg_channel_write_tmp_data_V_1;
wire    ap_sync_channel_write_tmp_data_V_1;
wire    ap_channel_done_tmp_data_V_0;
wire    tmp_data_V_0_full_n;
reg    ap_sync_reg_channel_write_tmp_data_V_0;
wire    ap_sync_channel_write_tmp_data_V_0;
wire    Loop_2_proc_U0_ap_start;
wire    Loop_2_proc_U0_ap_done;
wire    Loop_2_proc_U0_ap_continue;
wire    Loop_2_proc_U0_ap_idle;
wire    Loop_2_proc_U0_ap_ready;
wire   [31:0] Loop_2_proc_U0_out_r_TDATA;
wire    Loop_2_proc_U0_out_r_TVALID;
wire   [0:0] Loop_2_proc_U0_out_r_TLAST;
wire    ap_sync_continue;
wire    in_local_V_data_0_V_full_n;
wire   [15:0] in_local_V_data_0_V_dout;
wire    in_local_V_data_0_V_empty_n;
wire    in_local_V_data_1_V_full_n;
wire   [15:0] in_local_V_data_1_V_dout;
wire    in_local_V_data_1_V_empty_n;
wire    in_local_V_data_2_V_full_n;
wire   [15:0] in_local_V_data_2_V_dout;
wire    in_local_V_data_2_V_empty_n;
wire   [0:0] is_last_0_i_loc_channel_dout;
wire    is_last_0_i_loc_channel_empty_n;
wire    out_local_V_data_0_V_full_n;
wire   [15:0] out_local_V_data_0_V_dout;
wire    out_local_V_data_0_V_empty_n;
wire    out_local_V_data_1_V_full_n;
wire   [15:0] out_local_V_data_1_V_dout;
wire    out_local_V_data_1_V_empty_n;
wire    out_local_V_data_2_V_full_n;
wire   [15:0] out_local_V_data_2_V_dout;
wire    out_local_V_data_2_V_empty_n;
wire    out_local_V_data_3_V_full_n;
wire   [15:0] out_local_V_data_3_V_dout;
wire    out_local_V_data_3_V_empty_n;
wire   [15:0] tmp_data_V_0_dout;
wire    tmp_data_V_0_empty_n;
wire   [15:0] tmp_data_V_1_dout;
wire    tmp_data_V_1_empty_n;
wire   [15:0] tmp_data_V_2_dout;
wire    tmp_data_V_2_empty_n;
wire   [15:0] tmp_data_V_3_dout;
wire    tmp_data_V_3_empty_n;
wire   [0:0] start_for_myproject_U0_din;
wire    start_for_myproject_U0_full_n;
wire   [0:0] start_for_myproject_U0_dout;
wire    start_for_myproject_U0_empty_n;
wire   [0:0] start_for_Block_myproject_axi_exit44_proc_U0_din;
wire    start_for_Block_myproject_axi_exit44_proc_U0_full_n;
wire   [0:0] start_for_Block_myproject_axi_exit44_proc_U0_dout;
wire    start_for_Block_myproject_axi_exit44_proc_U0_empty_n;
wire    Block_myproject_axi_exit44_proc_U0_start_full_n;
wire    Block_myproject_axi_exit44_proc_U0_start_write;
wire    Loop_2_proc_U0_start_full_n;
wire    Loop_2_proc_U0_start_write;

// power-on initialization
initial begin
#0 ap_sync_reg_channel_write_tmp_data_V_3 = 1'b0;
#0 ap_sync_reg_channel_write_tmp_data_V_2 = 1'b0;
#0 ap_sync_reg_channel_write_tmp_data_V_1 = 1'b0;
#0 ap_sync_reg_channel_write_tmp_data_V_0 = 1'b0;
end

Loop_1_proc290 Loop_1_proc290_U0(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst_n_inv),
    .ap_start(Loop_1_proc290_U0_ap_start),
    .start_full_n(start_for_myproject_U0_full_n),
    .ap_done(Loop_1_proc290_U0_ap_done),
    .ap_continue(Loop_1_proc290_U0_ap_continue),
    .ap_idle(Loop_1_proc290_U0_ap_idle),
    .ap_ready(Loop_1_proc290_U0_ap_ready),
    .start_out(Loop_1_proc290_U0_start_out),
    .start_write(Loop_1_proc290_U0_start_write),
    .in_local_V_data_0_V_din(Loop_1_proc290_U0_in_local_V_data_0_V_din),
    .in_local_V_data_0_V_full_n(in_local_V_data_0_V_full_n),
    .in_local_V_data_0_V_write(Loop_1_proc290_U0_in_local_V_data_0_V_write),
    .in_local_V_data_1_V_din(Loop_1_proc290_U0_in_local_V_data_1_V_din),
    .in_local_V_data_1_V_full_n(in_local_V_data_1_V_full_n),
    .in_local_V_data_1_V_write(Loop_1_proc290_U0_in_local_V_data_1_V_write),
    .in_local_V_data_2_V_din(Loop_1_proc290_U0_in_local_V_data_2_V_din),
    .in_local_V_data_2_V_full_n(in_local_V_data_2_V_full_n),
    .in_local_V_data_2_V_write(Loop_1_proc290_U0_in_local_V_data_2_V_write),
    .in_r_TLAST(in_r_TLAST),
    .in_r_TVALID(in_r_TVALID),
    .in_r_TREADY(Loop_1_proc290_U0_in_r_TREADY),
    .in_r_TDATA(in_r_TDATA),
    .ap_return(Loop_1_proc290_U0_ap_return)
);

myproject myproject_U0(
    .ap_start(myproject_U0_ap_start),
    .start_full_n(start_for_Block_myproject_axi_exit44_proc_U0_full_n),
    .start_out(myproject_U0_start_out),
    .start_write(myproject_U0_start_write),
    .conv1_input_V_data_0_V_dout(in_local_V_data_0_V_dout),
    .conv1_input_V_data_0_V_empty_n(in_local_V_data_0_V_empty_n),
    .conv1_input_V_data_0_V_read(myproject_U0_conv1_input_V_data_0_V_read),
    .conv1_input_V_data_1_V_dout(in_local_V_data_1_V_dout),
    .conv1_input_V_data_1_V_empty_n(in_local_V_data_1_V_empty_n),
    .conv1_input_V_data_1_V_read(myproject_U0_conv1_input_V_data_1_V_read),
    .conv1_input_V_data_2_V_dout(in_local_V_data_2_V_dout),
    .conv1_input_V_data_2_V_empty_n(in_local_V_data_2_V_empty_n),
    .conv1_input_V_data_2_V_read(myproject_U0_conv1_input_V_data_2_V_read),
    .layer12_out_V_data_0_V_din(myproject_U0_layer12_out_V_data_0_V_din),
    .layer12_out_V_data_0_V_full_n(out_local_V_data_0_V_full_n),
    .layer12_out_V_data_0_V_write(myproject_U0_layer12_out_V_data_0_V_write),
    .layer12_out_V_data_1_V_din(myproject_U0_layer12_out_V_data_1_V_din),
    .layer12_out_V_data_1_V_full_n(out_local_V_data_1_V_full_n),
    .layer12_out_V_data_1_V_write(myproject_U0_layer12_out_V_data_1_V_write),
    .layer12_out_V_data_2_V_din(myproject_U0_layer12_out_V_data_2_V_din),
    .layer12_out_V_data_2_V_full_n(out_local_V_data_2_V_full_n),
    .layer12_out_V_data_2_V_write(myproject_U0_layer12_out_V_data_2_V_write),
    .layer12_out_V_data_3_V_din(myproject_U0_layer12_out_V_data_3_V_din),
    .layer12_out_V_data_3_V_full_n(out_local_V_data_3_V_full_n),
    .layer12_out_V_data_3_V_write(myproject_U0_layer12_out_V_data_3_V_write),
    .ap_clk(ap_clk),
    .ap_rst(ap_rst_n_inv),
    .ap_done(myproject_U0_ap_done),
    .ap_ready(myproject_U0_ap_ready),
    .ap_idle(myproject_U0_ap_idle),
    .ap_continue(myproject_U0_ap_continue)
);

Block_myproject_axi_exit44_proc Block_myproject_axi_exit44_proc_U0(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst_n_inv),
    .ap_start(Block_myproject_axi_exit44_proc_U0_ap_start),
    .ap_done(Block_myproject_axi_exit44_proc_U0_ap_done),
    .ap_continue(Block_myproject_axi_exit44_proc_U0_ap_continue),
    .ap_idle(Block_myproject_axi_exit44_proc_U0_ap_idle),
    .ap_ready(Block_myproject_axi_exit44_proc_U0_ap_ready),
    .out_local_V_data_0_V_dout(out_local_V_data_0_V_dout),
    .out_local_V_data_0_V_empty_n(out_local_V_data_0_V_empty_n),
    .out_local_V_data_0_V_read(Block_myproject_axi_exit44_proc_U0_out_local_V_data_0_V_read),
    .out_local_V_data_1_V_dout(out_local_V_data_1_V_dout),
    .out_local_V_data_1_V_empty_n(out_local_V_data_1_V_empty_n),
    .out_local_V_data_1_V_read(Block_myproject_axi_exit44_proc_U0_out_local_V_data_1_V_read),
    .out_local_V_data_2_V_dout(out_local_V_data_2_V_dout),
    .out_local_V_data_2_V_empty_n(out_local_V_data_2_V_empty_n),
    .out_local_V_data_2_V_read(Block_myproject_axi_exit44_proc_U0_out_local_V_data_2_V_read),
    .out_local_V_data_3_V_dout(out_local_V_data_3_V_dout),
    .out_local_V_data_3_V_empty_n(out_local_V_data_3_V_empty_n),
    .out_local_V_data_3_V_read(Block_myproject_axi_exit44_proc_U0_out_local_V_data_3_V_read),
    .tmp_data_V_0(Block_myproject_axi_exit44_proc_U0_tmp_data_V_0),
    .tmp_data_V_0_ap_vld(Block_myproject_axi_exit44_proc_U0_tmp_data_V_0_ap_vld),
    .tmp_data_V_1(Block_myproject_axi_exit44_proc_U0_tmp_data_V_1),
    .tmp_data_V_1_ap_vld(Block_myproject_axi_exit44_proc_U0_tmp_data_V_1_ap_vld),
    .tmp_data_V_2(Block_myproject_axi_exit44_proc_U0_tmp_data_V_2),
    .tmp_data_V_2_ap_vld(Block_myproject_axi_exit44_proc_U0_tmp_data_V_2_ap_vld),
    .tmp_data_V_3(Block_myproject_axi_exit44_proc_U0_tmp_data_V_3),
    .tmp_data_V_3_ap_vld(Block_myproject_axi_exit44_proc_U0_tmp_data_V_3_ap_vld)
);

Loop_2_proc Loop_2_proc_U0(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst_n_inv),
    .ap_start(Loop_2_proc_U0_ap_start),
    .ap_done(Loop_2_proc_U0_ap_done),
    .ap_continue(Loop_2_proc_U0_ap_continue),
    .ap_idle(Loop_2_proc_U0_ap_idle),
    .ap_ready(Loop_2_proc_U0_ap_ready),
    .out_r_TDATA(Loop_2_proc_U0_out_r_TDATA),
    .out_r_TVALID(Loop_2_proc_U0_out_r_TVALID),
    .out_r_TREADY(out_r_TREADY),
    .out_r_TLAST(Loop_2_proc_U0_out_r_TLAST),
    .p_read(is_last_0_i_loc_channel_dout),
    .tmp_data_V_0(tmp_data_V_0_dout),
    .tmp_data_V_1(tmp_data_V_1_dout),
    .tmp_data_V_2(tmp_data_V_2_dout),
    .tmp_data_V_3(tmp_data_V_3_dout)
);

fifo_w16_d4096_A in_local_V_data_0_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(Loop_1_proc290_U0_in_local_V_data_0_V_din),
    .if_full_n(in_local_V_data_0_V_full_n),
    .if_write(Loop_1_proc290_U0_in_local_V_data_0_V_write),
    .if_dout(in_local_V_data_0_V_dout),
    .if_empty_n(in_local_V_data_0_V_empty_n),
    .if_read(myproject_U0_conv1_input_V_data_0_V_read)
);

fifo_w16_d4096_A in_local_V_data_1_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(Loop_1_proc290_U0_in_local_V_data_1_V_din),
    .if_full_n(in_local_V_data_1_V_full_n),
    .if_write(Loop_1_proc290_U0_in_local_V_data_1_V_write),
    .if_dout(in_local_V_data_1_V_dout),
    .if_empty_n(in_local_V_data_1_V_empty_n),
    .if_read(myproject_U0_conv1_input_V_data_1_V_read)
);

fifo_w16_d4096_A in_local_V_data_2_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(Loop_1_proc290_U0_in_local_V_data_2_V_din),
    .if_full_n(in_local_V_data_2_V_full_n),
    .if_write(Loop_1_proc290_U0_in_local_V_data_2_V_write),
    .if_dout(in_local_V_data_2_V_dout),
    .if_empty_n(in_local_V_data_2_V_empty_n),
    .if_read(myproject_U0_conv1_input_V_data_2_V_read)
);

fifo_w1_d2_A is_last_0_i_loc_channel_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(Loop_1_proc290_U0_ap_return),
    .if_full_n(is_last_0_i_loc_channel_full_n),
    .if_write(Loop_1_proc290_U0_ap_done),
    .if_dout(is_last_0_i_loc_channel_dout),
    .if_empty_n(is_last_0_i_loc_channel_empty_n),
    .if_read(Loop_2_proc_U0_ap_ready)
);

fifo_w16_d1_A_x out_local_V_data_0_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(myproject_U0_layer12_out_V_data_0_V_din),
    .if_full_n(out_local_V_data_0_V_full_n),
    .if_write(myproject_U0_layer12_out_V_data_0_V_write),
    .if_dout(out_local_V_data_0_V_dout),
    .if_empty_n(out_local_V_data_0_V_empty_n),
    .if_read(Block_myproject_axi_exit44_proc_U0_out_local_V_data_0_V_read)
);

fifo_w16_d1_A_x out_local_V_data_1_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(myproject_U0_layer12_out_V_data_1_V_din),
    .if_full_n(out_local_V_data_1_V_full_n),
    .if_write(myproject_U0_layer12_out_V_data_1_V_write),
    .if_dout(out_local_V_data_1_V_dout),
    .if_empty_n(out_local_V_data_1_V_empty_n),
    .if_read(Block_myproject_axi_exit44_proc_U0_out_local_V_data_1_V_read)
);

fifo_w16_d1_A_x out_local_V_data_2_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(myproject_U0_layer12_out_V_data_2_V_din),
    .if_full_n(out_local_V_data_2_V_full_n),
    .if_write(myproject_U0_layer12_out_V_data_2_V_write),
    .if_dout(out_local_V_data_2_V_dout),
    .if_empty_n(out_local_V_data_2_V_empty_n),
    .if_read(Block_myproject_axi_exit44_proc_U0_out_local_V_data_2_V_read)
);

fifo_w16_d1_A_x out_local_V_data_3_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(myproject_U0_layer12_out_V_data_3_V_din),
    .if_full_n(out_local_V_data_3_V_full_n),
    .if_write(myproject_U0_layer12_out_V_data_3_V_write),
    .if_dout(out_local_V_data_3_V_dout),
    .if_empty_n(out_local_V_data_3_V_empty_n),
    .if_read(Block_myproject_axi_exit44_proc_U0_out_local_V_data_3_V_read)
);

fifo_w16_d2_A tmp_data_V_0_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(Block_myproject_axi_exit44_proc_U0_tmp_data_V_0),
    .if_full_n(tmp_data_V_0_full_n),
    .if_write(ap_channel_done_tmp_data_V_0),
    .if_dout(tmp_data_V_0_dout),
    .if_empty_n(tmp_data_V_0_empty_n),
    .if_read(Loop_2_proc_U0_ap_ready)
);

fifo_w16_d2_A tmp_data_V_1_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(Block_myproject_axi_exit44_proc_U0_tmp_data_V_1),
    .if_full_n(tmp_data_V_1_full_n),
    .if_write(ap_channel_done_tmp_data_V_1),
    .if_dout(tmp_data_V_1_dout),
    .if_empty_n(tmp_data_V_1_empty_n),
    .if_read(Loop_2_proc_U0_ap_ready)
);

fifo_w16_d2_A tmp_data_V_2_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(Block_myproject_axi_exit44_proc_U0_tmp_data_V_2),
    .if_full_n(tmp_data_V_2_full_n),
    .if_write(ap_channel_done_tmp_data_V_2),
    .if_dout(tmp_data_V_2_dout),
    .if_empty_n(tmp_data_V_2_empty_n),
    .if_read(Loop_2_proc_U0_ap_ready)
);

fifo_w16_d2_A tmp_data_V_3_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(Block_myproject_axi_exit44_proc_U0_tmp_data_V_3),
    .if_full_n(tmp_data_V_3_full_n),
    .if_write(ap_channel_done_tmp_data_V_3),
    .if_dout(tmp_data_V_3_dout),
    .if_empty_n(tmp_data_V_3_empty_n),
    .if_read(Loop_2_proc_U0_ap_ready)
);

start_for_myproject_U0 start_for_myproject_U0_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(start_for_myproject_U0_din),
    .if_full_n(start_for_myproject_U0_full_n),
    .if_write(Loop_1_proc290_U0_start_write),
    .if_dout(start_for_myproject_U0_dout),
    .if_empty_n(start_for_myproject_U0_empty_n),
    .if_read(myproject_U0_ap_ready)
);

start_for_Block_myproject_axi_exit44_proc_U0 start_for_Block_myproject_axi_exit44_proc_U0_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    .if_din(start_for_Block_myproject_axi_exit44_proc_U0_din),
    .if_full_n(start_for_Block_myproject_axi_exit44_proc_U0_full_n),
    .if_write(myproject_U0_start_write),
    .if_dout(start_for_Block_myproject_axi_exit44_proc_U0_dout),
    .if_empty_n(start_for_Block_myproject_axi_exit44_proc_U0_empty_n),
    .if_read(Block_myproject_axi_exit44_proc_U0_ap_ready)
);

always @ (posedge ap_clk) begin
    if (ap_rst_n_inv == 1'b1) begin
        ap_sync_reg_channel_write_tmp_data_V_0 <= 1'b0;
    end else begin
        if (((Block_myproject_axi_exit44_proc_U0_ap_done & Block_myproject_axi_exit44_proc_U0_ap_continue) == 1'b1)) begin
            ap_sync_reg_channel_write_tmp_data_V_0 <= 1'b0;
        end else begin
            ap_sync_reg_channel_write_tmp_data_V_0 <= ap_sync_channel_write_tmp_data_V_0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst_n_inv == 1'b1) begin
        ap_sync_reg_channel_write_tmp_data_V_1 <= 1'b0;
    end else begin
        if (((Block_myproject_axi_exit44_proc_U0_ap_done & Block_myproject_axi_exit44_proc_U0_ap_continue) == 1'b1)) begin
            ap_sync_reg_channel_write_tmp_data_V_1 <= 1'b0;
        end else begin
            ap_sync_reg_channel_write_tmp_data_V_1 <= ap_sync_channel_write_tmp_data_V_1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst_n_inv == 1'b1) begin
        ap_sync_reg_channel_write_tmp_data_V_2 <= 1'b0;
    end else begin
        if (((Block_myproject_axi_exit44_proc_U0_ap_done & Block_myproject_axi_exit44_proc_U0_ap_continue) == 1'b1)) begin
            ap_sync_reg_channel_write_tmp_data_V_2 <= 1'b0;
        end else begin
            ap_sync_reg_channel_write_tmp_data_V_2 <= ap_sync_channel_write_tmp_data_V_2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst_n_inv == 1'b1) begin
        ap_sync_reg_channel_write_tmp_data_V_3 <= 1'b0;
    end else begin
        if (((Block_myproject_axi_exit44_proc_U0_ap_done & Block_myproject_axi_exit44_proc_U0_ap_continue) == 1'b1)) begin
            ap_sync_reg_channel_write_tmp_data_V_3 <= 1'b0;
        end else begin
            ap_sync_reg_channel_write_tmp_data_V_3 <= ap_sync_channel_write_tmp_data_V_3;
        end
    end
end

assign Block_myproject_axi_exit44_proc_U0_ap_continue = (ap_sync_channel_write_tmp_data_V_3 & ap_sync_channel_write_tmp_data_V_2 & ap_sync_channel_write_tmp_data_V_1 & ap_sync_channel_write_tmp_data_V_0);

assign Block_myproject_axi_exit44_proc_U0_ap_start = start_for_Block_myproject_axi_exit44_proc_U0_empty_n;

assign Block_myproject_axi_exit44_proc_U0_start_full_n = 1'b1;

assign Block_myproject_axi_exit44_proc_U0_start_write = 1'b0;

assign Loop_1_proc290_U0_ap_continue = is_last_0_i_loc_channel_full_n;

assign Loop_1_proc290_U0_ap_start = 1'b1;

assign Loop_2_proc_U0_ap_continue = 1'b1;

assign Loop_2_proc_U0_ap_start = (tmp_data_V_3_empty_n & tmp_data_V_2_empty_n & tmp_data_V_1_empty_n & tmp_data_V_0_empty_n & is_last_0_i_loc_channel_empty_n);

assign Loop_2_proc_U0_start_full_n = 1'b1;

assign Loop_2_proc_U0_start_write = 1'b0;

assign ap_channel_done_is_last_0_i_loc_channel = Loop_1_proc290_U0_ap_done;

assign ap_channel_done_tmp_data_V_0 = ((ap_sync_reg_channel_write_tmp_data_V_0 ^ 1'b1) & Block_myproject_axi_exit44_proc_U0_ap_done);

assign ap_channel_done_tmp_data_V_1 = ((ap_sync_reg_channel_write_tmp_data_V_1 ^ 1'b1) & Block_myproject_axi_exit44_proc_U0_ap_done);

assign ap_channel_done_tmp_data_V_2 = ((ap_sync_reg_channel_write_tmp_data_V_2 ^ 1'b1) & Block_myproject_axi_exit44_proc_U0_ap_done);

assign ap_channel_done_tmp_data_V_3 = ((ap_sync_reg_channel_write_tmp_data_V_3 ^ 1'b1) & Block_myproject_axi_exit44_proc_U0_ap_done);

always @ (*) begin
    ap_rst_n_inv = ~ap_rst_n;
end

assign ap_sync_channel_write_tmp_data_V_0 = ((tmp_data_V_0_full_n & ap_channel_done_tmp_data_V_0) | ap_sync_reg_channel_write_tmp_data_V_0);

assign ap_sync_channel_write_tmp_data_V_1 = ((tmp_data_V_1_full_n & ap_channel_done_tmp_data_V_1) | ap_sync_reg_channel_write_tmp_data_V_1);

assign ap_sync_channel_write_tmp_data_V_2 = ((tmp_data_V_2_full_n & ap_channel_done_tmp_data_V_2) | ap_sync_reg_channel_write_tmp_data_V_2);

assign ap_sync_channel_write_tmp_data_V_3 = ((tmp_data_V_3_full_n & ap_channel_done_tmp_data_V_3) | ap_sync_reg_channel_write_tmp_data_V_3);

assign ap_sync_continue = 1'b0;

assign in_r_TREADY = Loop_1_proc290_U0_in_r_TREADY;

assign myproject_U0_ap_continue = 1'b1;

assign myproject_U0_ap_start = start_for_myproject_U0_empty_n;

assign out_r_TDATA = Loop_2_proc_U0_out_r_TDATA;

assign out_r_TLAST = Loop_2_proc_U0_out_r_TLAST;

assign out_r_TVALID = Loop_2_proc_U0_out_r_TVALID;

assign start_for_Block_myproject_axi_exit44_proc_U0_din = 1'b1;

assign start_for_myproject_U0_din = 1'b1;

endmodule //myproject_axi