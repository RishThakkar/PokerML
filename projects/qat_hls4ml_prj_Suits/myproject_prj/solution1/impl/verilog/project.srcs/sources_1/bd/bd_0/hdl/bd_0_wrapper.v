//Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2019.2 (lin64) Build 2708876 Wed Nov  6 21:39:14 MST 2019
//Date        : Wed Apr 10 16:01:03 2024
//Host        : socp06-ubuntu running 64-bit Ubuntu 18.04.6 LTS
//Command     : generate_target bd_0_wrapper.bd
//Design      : bd_0_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module bd_0_wrapper
   (ap_clk,
    ap_rst_n,
    in_r_tdata,
    in_r_tlast,
    in_r_tready,
    in_r_tvalid,
    out_r_tdata,
    out_r_tlast,
    out_r_tready,
    out_r_tvalid);
  input ap_clk;
  input ap_rst_n;
  input [31:0]in_r_tdata;
  input [0:0]in_r_tlast;
  output in_r_tready;
  input in_r_tvalid;
  output [31:0]out_r_tdata;
  output [0:0]out_r_tlast;
  input out_r_tready;
  output out_r_tvalid;

  wire ap_clk;
  wire ap_rst_n;
  wire [31:0]in_r_tdata;
  wire [0:0]in_r_tlast;
  wire in_r_tready;
  wire in_r_tvalid;
  wire [31:0]out_r_tdata;
  wire [0:0]out_r_tlast;
  wire out_r_tready;
  wire out_r_tvalid;

  bd_0 bd_0_i
       (.ap_clk(ap_clk),
        .ap_rst_n(ap_rst_n),
        .in_r_tdata(in_r_tdata),
        .in_r_tlast(in_r_tlast),
        .in_r_tready(in_r_tready),
        .in_r_tvalid(in_r_tvalid),
        .out_r_tdata(out_r_tdata),
        .out_r_tlast(out_r_tlast),
        .out_r_tready(out_r_tready),
        .out_r_tvalid(out_r_tvalid));
endmodule
