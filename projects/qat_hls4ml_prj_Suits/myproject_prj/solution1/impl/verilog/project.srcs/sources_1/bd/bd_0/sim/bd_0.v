//Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2019.2 (lin64) Build 2708876 Wed Nov  6 21:39:14 MST 2019
//Date        : Wed Apr 10 16:01:03 2024
//Host        : socp06-ubuntu running 64-bit Ubuntu 18.04.6 LTS
//Command     : generate_target bd_0.bd
//Design      : bd_0
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CORE_GENERATION_INFO = "bd_0,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=bd_0,x_ipVersion=1.00.a,x_ipLanguage=VERILOG,numBlks=1,numReposBlks=1,numNonXlnxBlks=0,numHierBlks=0,maxHierDepth=0,numSysgenBlks=0,numHlsBlks=1,numHdlrefBlks=0,numPkgbdBlks=0,bdsource=USER,synth_mode=OOC_per_IP}" *) (* HW_HANDOFF = "bd_0.hwdef" *) 
module bd_0
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
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 CLK.AP_CLK CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME CLK.AP_CLK, ASSOCIATED_BUSIF in_r:out_r, ASSOCIATED_RESET ap_rst_n, CLK_DOMAIN bd_0_ap_clk_0, FREQ_HZ 200000000.0, INSERT_VIP 0, PHASE 0.000" *) input ap_clk;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 RST.AP_RST_N RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME RST.AP_RST_N, INSERT_VIP 0, POLARITY ACTIVE_LOW" *) input ap_rst_n;
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 in_r " *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME in_r, CLK_DOMAIN bd_0_ap_clk_0, FREQ_HZ 200000000.0, HAS_TKEEP 0, HAS_TLAST 1, HAS_TREADY 1, HAS_TSTRB 0, INSERT_VIP 0, LAYERED_METADATA undef, PHASE 0.000, TDATA_NUM_BYTES 4, TDEST_WIDTH 0, TID_WIDTH 0, TUSER_WIDTH 0" *) input [31:0]in_r_tdata;
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 in_r " *) input [0:0]in_r_tlast;
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 in_r " *) output in_r_tready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 in_r " *) input in_r_tvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 out_r " *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME out_r, CLK_DOMAIN bd_0_ap_clk_0, FREQ_HZ 200000000.0, HAS_TKEEP 0, HAS_TLAST 1, HAS_TREADY 1, HAS_TSTRB 0, INSERT_VIP 0, LAYERED_METADATA undef, PHASE 0.000, TDATA_NUM_BYTES 4, TDEST_WIDTH 0, TID_WIDTH 0, TUSER_WIDTH 0" *) output [31:0]out_r_tdata;
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 out_r " *) output [0:0]out_r_tlast;
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 out_r " *) input out_r_tready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 out_r " *) output out_r_tvalid;

  wire ap_clk_0_1;
  wire ap_rst_n_0_1;
  wire [31:0]hls_inst_out_r_TDATA;
  wire [0:0]hls_inst_out_r_TLAST;
  wire hls_inst_out_r_TREADY;
  wire hls_inst_out_r_TVALID;
  wire [31:0]in_r_0_1_TDATA;
  wire [0:0]in_r_0_1_TLAST;
  wire in_r_0_1_TREADY;
  wire in_r_0_1_TVALID;

  assign ap_clk_0_1 = ap_clk;
  assign ap_rst_n_0_1 = ap_rst_n;
  assign hls_inst_out_r_TREADY = out_r_tready;
  assign in_r_0_1_TDATA = in_r_tdata[31:0];
  assign in_r_0_1_TLAST = in_r_tlast[0];
  assign in_r_0_1_TVALID = in_r_tvalid;
  assign in_r_tready = in_r_0_1_TREADY;
  assign out_r_tdata[31:0] = hls_inst_out_r_TDATA;
  assign out_r_tlast[0] = hls_inst_out_r_TLAST;
  assign out_r_tvalid = hls_inst_out_r_TVALID;
  bd_0_hls_inst_0 hls_inst
       (.ap_clk(ap_clk_0_1),
        .ap_rst_n(ap_rst_n_0_1),
        .in_r_TDATA(in_r_0_1_TDATA),
        .in_r_TLAST(in_r_0_1_TLAST),
        .in_r_TREADY(in_r_0_1_TREADY),
        .in_r_TVALID(in_r_0_1_TVALID),
        .out_r_TDATA(hls_inst_out_r_TDATA),
        .out_r_TLAST(hls_inst_out_r_TLAST),
        .out_r_TREADY(hls_inst_out_r_TREADY),
        .out_r_TVALID(hls_inst_out_r_TVALID));
endmodule
