// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module Loop_2_proc (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        out_r_TDATA,
        out_r_TVALID,
        out_r_TREADY,
        out_r_TLAST,
        p_read,
        tmp_data_V_0,
        tmp_data_V_1,
        tmp_data_V_2,
        tmp_data_V_3,
        tmp_data_V_4,
        tmp_data_V_5,
        tmp_data_V_6,
        tmp_data_V_7,
        tmp_data_V_8,
        tmp_data_V_9
);

parameter    ap_ST_fsm_state1 = 12'd1;
parameter    ap_ST_fsm_state2 = 12'd2;
parameter    ap_ST_fsm_state3 = 12'd4;
parameter    ap_ST_fsm_state4 = 12'd8;
parameter    ap_ST_fsm_state5 = 12'd16;
parameter    ap_ST_fsm_state6 = 12'd32;
parameter    ap_ST_fsm_state7 = 12'd64;
parameter    ap_ST_fsm_state8 = 12'd128;
parameter    ap_ST_fsm_state9 = 12'd256;
parameter    ap_ST_fsm_state10 = 12'd512;
parameter    ap_ST_fsm_state11 = 12'd1024;
parameter    ap_ST_fsm_state12 = 12'd2048;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
output  [31:0] out_r_TDATA;
output   out_r_TVALID;
input   out_r_TREADY;
output  [0:0] out_r_TLAST;
input  [0:0] p_read;
input  [15:0] tmp_data_V_0;
input  [15:0] tmp_data_V_1;
input  [15:0] tmp_data_V_2;
input  [15:0] tmp_data_V_3;
input  [15:0] tmp_data_V_4;
input  [15:0] tmp_data_V_5;
input  [15:0] tmp_data_V_6;
input  [15:0] tmp_data_V_7;
input  [15:0] tmp_data_V_8;
input  [15:0] tmp_data_V_9;

reg ap_done;
reg ap_idle;
reg ap_ready;

reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [11:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    out_r_TDATA_blk_n;
wire    ap_CS_fsm_state11;
wire    ap_CS_fsm_state12;
reg    ap_block_state1;
wire   [3:0] j_fu_211_p2;
reg   [3:0] j_reg_550;
wire    ap_CS_fsm_state2;
wire    regslice_both_out_data_U_apdone_blk;
wire   [0:0] last_fu_223_p2;
reg   [0:0] last_reg_555;
wire   [0:0] icmp_ln31_fu_205_p2;
wire   [15:0] tmp_V_3_fu_228_p12;
reg   [15:0] tmp_V_3_reg_560;
reg   [0:0] p_Result_33_reg_567;
wire   [15:0] tmp_V_fu_262_p2;
reg   [15:0] tmp_V_reg_573;
wire    ap_CS_fsm_state3;
wire   [0:0] icmp_ln935_fu_267_p2;
reg   [0:0] icmp_ln935_reg_578;
wire    ap_CS_fsm_state4;
wire   [15:0] tmp_V_4_fu_272_p3;
reg   [15:0] tmp_V_4_reg_583;
reg   [31:0] l_fu_295_p3;
reg   [31:0] l_reg_591;
wire   [7:0] trunc_ln943_fu_303_p1;
reg   [7:0] trunc_ln943_reg_596;
wire   [31:0] sub_ln944_fu_307_p2;
reg   [31:0] sub_ln944_reg_601;
wire    ap_CS_fsm_state5;
wire   [15:0] trunc_ln944_fu_312_p1;
reg   [15:0] trunc_ln944_reg_608;
wire   [4:0] sub_ln947_fu_320_p2;
reg   [4:0] sub_ln947_reg_613;
wire   [31:0] lsb_index_fu_326_p2;
reg   [31:0] lsb_index_reg_618;
wire    ap_CS_fsm_state6;
reg   [30:0] tmp_reg_624;
wire   [0:0] icmp_ln947_1_fu_355_p2;
reg   [0:0] icmp_ln947_1_reg_629;
wire   [31:0] add_ln958_fu_361_p2;
reg   [31:0] add_ln958_reg_634;
wire   [31:0] sub_ln958_fu_366_p2;
reg   [31:0] sub_ln958_reg_639;
wire   [31:0] or_ln_i_fu_418_p3;
reg   [31:0] or_ln_i_reg_644;
wire    ap_CS_fsm_state7;
wire   [0:0] icmp_ln958_fu_432_p2;
reg   [0:0] icmp_ln958_reg_659;
wire   [31:0] grp_fu_437_p2;
reg   [31:0] lshr_ln958_reg_669;
wire    ap_CS_fsm_state8;
wire   [63:0] grp_fu_445_p2;
reg   [63:0] shl_ln958_reg_674;
reg   [62:0] m_5_reg_679;
wire    ap_CS_fsm_state9;
reg   [0:0] tmp_750_reg_684;
wire   [7:0] select_ln964_fu_487_p3;
reg   [7:0] select_ln964_reg_689;
wire    ap_CS_fsm_state10;
reg   [3:0] j3_0_i_reg_194;
wire   [0:0] icmp_ln32_fu_217_p2;
reg   [15:0] p_Result_s_fu_277_p4;
wire   [31:0] p_Result_34_fu_287_p3;
wire   [4:0] trunc_ln947_fu_316_p1;
wire   [15:0] zext_ln947_fu_341_p1;
wire   [15:0] lshr_ln947_fu_344_p2;
wire   [15:0] p_Result_30_fu_350_p2;
wire   [0:0] icmp_ln947_fu_371_p2;
wire   [0:0] tmp_749_fu_381_p3;
wire   [15:0] add_ln949_fu_394_p2;
wire   [0:0] p_Result_31_fu_399_p3;
wire   [0:0] xor_ln949_fu_388_p2;
wire   [0:0] and_ln949_fu_406_p2;
wire   [0:0] a_fu_376_p2;
wire   [0:0] or_ln949_fu_412_p2;
wire   [31:0] grp_fu_437_p0;
wire   [63:0] grp_fu_445_p0;
wire   [63:0] grp_fu_445_p1;
wire   [63:0] zext_ln958_fu_451_p1;
wire   [63:0] zext_ln961_fu_460_p1;
wire   [63:0] m_1_fu_454_p3;
wire   [63:0] m_2_fu_463_p2;
wire   [7:0] sub_ln964_fu_497_p2;
wire   [7:0] add_ln964_fu_502_p2;
wire   [63:0] m_6_fu_494_p1;
wire   [8:0] tmp_572_i_fu_507_p3;
wire   [63:0] p_Result_35_fu_514_p5;
wire   [31:0] trunc_ln738_fu_526_p1;
wire   [31:0] bitcast_ln739_fu_530_p1;
reg   [11:0] ap_NS_fsm;
wire   [31:0] out_r_TDATA_int;
reg    out_r_TVALID_int;
wire    out_r_TREADY_int;
wire    regslice_both_out_data_U_vld_out;
wire    regslice_both_out_last_V_U_apdone_blk;
wire    regslice_both_out_last_V_U_ack_in_dummy;
wire    regslice_both_out_last_V_U_vld_out;

// power-on initialization
initial begin
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 12'd1;
end

myproject_axi_mux_104_16_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 16 ),
    .din2_WIDTH( 16 ),
    .din3_WIDTH( 16 ),
    .din4_WIDTH( 16 ),
    .din5_WIDTH( 16 ),
    .din6_WIDTH( 16 ),
    .din7_WIDTH( 16 ),
    .din8_WIDTH( 16 ),
    .din9_WIDTH( 16 ),
    .din10_WIDTH( 4 ),
    .dout_WIDTH( 16 ))
myproject_axi_mux_104_16_1_1_U2569(
    .din0(tmp_data_V_0),
    .din1(tmp_data_V_1),
    .din2(tmp_data_V_2),
    .din3(tmp_data_V_3),
    .din4(tmp_data_V_4),
    .din5(tmp_data_V_5),
    .din6(tmp_data_V_6),
    .din7(tmp_data_V_7),
    .din8(tmp_data_V_8),
    .din9(tmp_data_V_9),
    .din10(j3_0_i_reg_194),
    .dout(tmp_V_3_fu_228_p12)
);

myproject_axi_lshr_32ns_32ns_32_2_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .OP( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
myproject_axi_lshr_32ns_32ns_32_2_1_U2570(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_437_p0),
    .din1(add_ln958_reg_634),
    .ce(1'b1),
    .dout(grp_fu_437_p2)
);

myproject_axi_shl_64ns_32ns_64_2_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .OP( 0 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 64 ))
myproject_axi_shl_64ns_32ns_64_2_1_U2571(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_445_p0),
    .din1(grp_fu_445_p1),
    .ce(1'b1),
    .dout(grp_fu_445_p2)
);

regslice_both #(
    .DataWidth( 32 ))
regslice_both_out_data_U(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .data_in(out_r_TDATA_int),
    .vld_in(out_r_TVALID_int),
    .ack_in(out_r_TREADY_int),
    .data_out(out_r_TDATA),
    .vld_out(regslice_both_out_data_U_vld_out),
    .ack_out(out_r_TREADY),
    .apdone_blk(regslice_both_out_data_U_apdone_blk)
);

regslice_both #(
    .DataWidth( 1 ))
regslice_both_out_last_V_U(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .data_in(last_reg_555),
    .vld_in(out_r_TVALID_int),
    .ack_in(regslice_both_out_last_V_U_ack_in_dummy),
    .data_out(out_r_TLAST),
    .vld_out(regslice_both_out_last_V_U_vld_out),
    .ack_out(out_r_TREADY),
    .apdone_blk(regslice_both_out_last_V_U_apdone_blk)
);

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
        end else if (((icmp_ln31_fu_205_p2 == 1'd1) & (regslice_both_out_data_U_apdone_blk == 1'b0) & (1'b1 == ap_CS_fsm_state2))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((out_r_TREADY_int == 1'b1) & (1'b1 == ap_CS_fsm_state12))) begin
        j3_0_i_reg_194 <= j_reg_550;
    end else if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        j3_0_i_reg_194 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln935_reg_578 == 1'd0) & (1'b1 == ap_CS_fsm_state6))) begin
        add_ln958_reg_634 <= add_ln958_fu_361_p2;
        icmp_ln947_1_reg_629 <= icmp_ln947_1_fu_355_p2;
        lsb_index_reg_618 <= lsb_index_fu_326_p2;
        sub_ln958_reg_639 <= sub_ln958_fu_366_p2;
        tmp_reg_624 <= {{lsb_index_fu_326_p2[31:1]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        icmp_ln935_reg_578 <= icmp_ln935_fu_267_p2;
        l_reg_591 <= l_fu_295_p3;
        tmp_V_4_reg_583 <= tmp_V_4_fu_272_p3;
        trunc_ln943_reg_596 <= trunc_ln943_fu_303_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln935_reg_578 == 1'd0) & (1'b1 == ap_CS_fsm_state7))) begin
        icmp_ln958_reg_659 <= icmp_ln958_fu_432_p2;
        or_ln_i_reg_644[0] <= or_ln_i_fu_418_p3[0];
    end
end

always @ (posedge ap_clk) begin
    if (((regslice_both_out_data_U_apdone_blk == 1'b0) & (1'b1 == ap_CS_fsm_state2))) begin
        j_reg_550 <= j_fu_211_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln31_fu_205_p2 == 1'd0) & (regslice_both_out_data_U_apdone_blk == 1'b0) & (1'b1 == ap_CS_fsm_state2))) begin
        last_reg_555 <= last_fu_223_p2;
        p_Result_33_reg_567 <= tmp_V_3_fu_228_p12[32'd15];
        tmp_V_3_reg_560 <= tmp_V_3_fu_228_p12;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln935_reg_578 == 1'd0) & (1'b1 == ap_CS_fsm_state8))) begin
        lshr_ln958_reg_669 <= grp_fu_437_p2;
        shl_ln958_reg_674 <= grp_fu_445_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln935_reg_578 == 1'd0) & (1'b1 == ap_CS_fsm_state9))) begin
        m_5_reg_679 <= {{m_2_fu_463_p2[63:1]}};
        tmp_750_reg_684 <= m_2_fu_463_p2[32'd25];
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln935_reg_578 == 1'd0) & (1'b1 == ap_CS_fsm_state10))) begin
        select_ln964_reg_689[0] <= select_ln964_fu_487_p3[0];
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln935_reg_578 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
        sub_ln944_reg_601 <= sub_ln944_fu_307_p2;
        sub_ln947_reg_613 <= sub_ln947_fu_320_p2;
        trunc_ln944_reg_608 <= trunc_ln944_fu_312_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((p_Result_33_reg_567 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        tmp_V_reg_573 <= tmp_V_fu_262_p2;
    end
end

always @ (*) begin
    if (((icmp_ln31_fu_205_p2 == 1'd1) & (regslice_both_out_data_U_apdone_blk == 1'b0) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln31_fu_205_p2 == 1'd1) & (regslice_both_out_data_U_apdone_blk == 1'b0) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11))) begin
        out_r_TDATA_blk_n = out_r_TREADY_int;
    end else begin
        out_r_TDATA_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((out_r_TREADY_int == 1'b1) & (1'b1 == ap_CS_fsm_state11))) begin
        out_r_TVALID_int = 1'b1;
    end else begin
        out_r_TVALID_int = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((icmp_ln31_fu_205_p2 == 1'd1) & (regslice_both_out_data_U_apdone_blk == 1'b0) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else if (((icmp_ln31_fu_205_p2 == 1'd0) & (regslice_both_out_data_U_apdone_blk == 1'b0) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            if (((out_r_TREADY_int == 1'b1) & (1'b1 == ap_CS_fsm_state11))) begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end
        end
        ap_ST_fsm_state12 : begin
            if (((out_r_TREADY_int == 1'b1) & (1'b1 == ap_CS_fsm_state12))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign a_fu_376_p2 = (icmp_ln947_fu_371_p2 & icmp_ln947_1_reg_629);

assign add_ln949_fu_394_p2 = ($signed(16'd65512) + $signed(trunc_ln944_reg_608));

assign add_ln958_fu_361_p2 = ($signed(32'd4294967271) + $signed(sub_ln944_reg_601));

assign add_ln964_fu_502_p2 = (sub_ln964_fu_497_p2 + select_ln964_reg_689);

assign and_ln949_fu_406_p2 = (xor_ln949_fu_388_p2 & p_Result_31_fu_399_p3);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

always @ (*) begin
    ap_block_state1 = ((ap_start == 1'b0) | (ap_done_reg == 1'b1));
end

assign bitcast_ln739_fu_530_p1 = trunc_ln738_fu_526_p1;

assign grp_fu_437_p0 = tmp_V_4_reg_583;

assign grp_fu_445_p0 = tmp_V_4_reg_583;

assign grp_fu_445_p1 = sub_ln958_reg_639;

assign icmp_ln31_fu_205_p2 = ((j3_0_i_reg_194 == 4'd10) ? 1'b1 : 1'b0);

assign icmp_ln32_fu_217_p2 = ((j3_0_i_reg_194 == 4'd9) ? 1'b1 : 1'b0);

assign icmp_ln935_fu_267_p2 = ((tmp_V_3_reg_560 == 16'd0) ? 1'b1 : 1'b0);

assign icmp_ln947_1_fu_355_p2 = ((p_Result_30_fu_350_p2 != 16'd0) ? 1'b1 : 1'b0);

assign icmp_ln947_fu_371_p2 = (($signed(tmp_reg_624) > $signed(31'd0)) ? 1'b1 : 1'b0);

assign icmp_ln958_fu_432_p2 = (($signed(lsb_index_reg_618) > $signed(32'd0)) ? 1'b1 : 1'b0);

assign j_fu_211_p2 = (j3_0_i_reg_194 + 4'd1);


always @ (p_Result_34_fu_287_p3) begin
    if (p_Result_34_fu_287_p3[0] == 1'b1) begin
        l_fu_295_p3 = 32'd0;
    end else if (p_Result_34_fu_287_p3[1] == 1'b1) begin
        l_fu_295_p3 = 32'd1;
    end else if (p_Result_34_fu_287_p3[2] == 1'b1) begin
        l_fu_295_p3 = 32'd2;
    end else if (p_Result_34_fu_287_p3[3] == 1'b1) begin
        l_fu_295_p3 = 32'd3;
    end else if (p_Result_34_fu_287_p3[4] == 1'b1) begin
        l_fu_295_p3 = 32'd4;
    end else if (p_Result_34_fu_287_p3[5] == 1'b1) begin
        l_fu_295_p3 = 32'd5;
    end else if (p_Result_34_fu_287_p3[6] == 1'b1) begin
        l_fu_295_p3 = 32'd6;
    end else if (p_Result_34_fu_287_p3[7] == 1'b1) begin
        l_fu_295_p3 = 32'd7;
    end else if (p_Result_34_fu_287_p3[8] == 1'b1) begin
        l_fu_295_p3 = 32'd8;
    end else if (p_Result_34_fu_287_p3[9] == 1'b1) begin
        l_fu_295_p3 = 32'd9;
    end else if (p_Result_34_fu_287_p3[10] == 1'b1) begin
        l_fu_295_p3 = 32'd10;
    end else if (p_Result_34_fu_287_p3[11] == 1'b1) begin
        l_fu_295_p3 = 32'd11;
    end else if (p_Result_34_fu_287_p3[12] == 1'b1) begin
        l_fu_295_p3 = 32'd12;
    end else if (p_Result_34_fu_287_p3[13] == 1'b1) begin
        l_fu_295_p3 = 32'd13;
    end else if (p_Result_34_fu_287_p3[14] == 1'b1) begin
        l_fu_295_p3 = 32'd14;
    end else if (p_Result_34_fu_287_p3[15] == 1'b1) begin
        l_fu_295_p3 = 32'd15;
    end else if (p_Result_34_fu_287_p3[16] == 1'b1) begin
        l_fu_295_p3 = 32'd16;
    end else if (p_Result_34_fu_287_p3[17] == 1'b1) begin
        l_fu_295_p3 = 32'd17;
    end else if (p_Result_34_fu_287_p3[18] == 1'b1) begin
        l_fu_295_p3 = 32'd18;
    end else if (p_Result_34_fu_287_p3[19] == 1'b1) begin
        l_fu_295_p3 = 32'd19;
    end else if (p_Result_34_fu_287_p3[20] == 1'b1) begin
        l_fu_295_p3 = 32'd20;
    end else if (p_Result_34_fu_287_p3[21] == 1'b1) begin
        l_fu_295_p3 = 32'd21;
    end else if (p_Result_34_fu_287_p3[22] == 1'b1) begin
        l_fu_295_p3 = 32'd22;
    end else if (p_Result_34_fu_287_p3[23] == 1'b1) begin
        l_fu_295_p3 = 32'd23;
    end else if (p_Result_34_fu_287_p3[24] == 1'b1) begin
        l_fu_295_p3 = 32'd24;
    end else if (p_Result_34_fu_287_p3[25] == 1'b1) begin
        l_fu_295_p3 = 32'd25;
    end else if (p_Result_34_fu_287_p3[26] == 1'b1) begin
        l_fu_295_p3 = 32'd26;
    end else if (p_Result_34_fu_287_p3[27] == 1'b1) begin
        l_fu_295_p3 = 32'd27;
    end else if (p_Result_34_fu_287_p3[28] == 1'b1) begin
        l_fu_295_p3 = 32'd28;
    end else if (p_Result_34_fu_287_p3[29] == 1'b1) begin
        l_fu_295_p3 = 32'd29;
    end else if (p_Result_34_fu_287_p3[30] == 1'b1) begin
        l_fu_295_p3 = 32'd30;
    end else if (p_Result_34_fu_287_p3[31] == 1'b1) begin
        l_fu_295_p3 = 32'd31;
    end else begin
        l_fu_295_p3 = 32'd32;
    end
end

assign last_fu_223_p2 = (p_read & icmp_ln32_fu_217_p2);

assign lsb_index_fu_326_p2 = ($signed(32'd4294967272) + $signed(sub_ln944_reg_601));

assign lshr_ln947_fu_344_p2 = 16'd65535 >> zext_ln947_fu_341_p1;

assign m_1_fu_454_p3 = ((icmp_ln958_reg_659[0:0] === 1'b1) ? zext_ln958_fu_451_p1 : shl_ln958_reg_674);

assign m_2_fu_463_p2 = (zext_ln961_fu_460_p1 + m_1_fu_454_p3);

assign m_6_fu_494_p1 = m_5_reg_679;

assign or_ln949_fu_412_p2 = (and_ln949_fu_406_p2 | a_fu_376_p2);

assign or_ln_i_fu_418_p3 = {{31'd0}, {or_ln949_fu_412_p2}};

assign out_r_TDATA_int = ((icmp_ln935_reg_578[0:0] === 1'b1) ? 32'd0 : bitcast_ln739_fu_530_p1);

assign out_r_TVALID = regslice_both_out_data_U_vld_out;

assign p_Result_30_fu_350_p2 = (tmp_V_4_reg_583 & lshr_ln947_fu_344_p2);

assign p_Result_31_fu_399_p3 = tmp_V_4_reg_583[add_ln949_fu_394_p2];

assign p_Result_34_fu_287_p3 = {{16'd65535}, {p_Result_s_fu_277_p4}};

assign p_Result_35_fu_514_p5 = {{m_6_fu_494_p1[63:32]}, {tmp_572_i_fu_507_p3}, {m_6_fu_494_p1[22:0]}};

integer ap_tvar_int_0;

always @ (tmp_V_4_fu_272_p3) begin
    for (ap_tvar_int_0 = 16 - 1; ap_tvar_int_0 >= 0; ap_tvar_int_0 = ap_tvar_int_0 - 1) begin
        if (ap_tvar_int_0 > 15 - 0) begin
            p_Result_s_fu_277_p4[ap_tvar_int_0] = 1'b0;
        end else begin
            p_Result_s_fu_277_p4[ap_tvar_int_0] = tmp_V_4_fu_272_p3[15 - ap_tvar_int_0];
        end
    end
end

assign select_ln964_fu_487_p3 = ((tmp_750_reg_684[0:0] === 1'b1) ? 8'd127 : 8'd126);

assign sub_ln944_fu_307_p2 = (32'd16 - l_reg_591);

assign sub_ln947_fu_320_p2 = (5'd9 - trunc_ln947_fu_316_p1);

assign sub_ln958_fu_366_p2 = (32'd25 - sub_ln944_reg_601);

assign sub_ln964_fu_497_p2 = (8'd6 - trunc_ln943_reg_596);

assign tmp_572_i_fu_507_p3 = {{p_Result_33_reg_567}, {add_ln964_fu_502_p2}};

assign tmp_749_fu_381_p3 = lsb_index_reg_618[32'd31];

assign tmp_V_4_fu_272_p3 = ((p_Result_33_reg_567[0:0] === 1'b1) ? tmp_V_reg_573 : tmp_V_3_reg_560);

assign tmp_V_fu_262_p2 = (16'd0 - tmp_V_3_reg_560);

assign trunc_ln738_fu_526_p1 = p_Result_35_fu_514_p5[31:0];

assign trunc_ln943_fu_303_p1 = l_fu_295_p3[7:0];

assign trunc_ln944_fu_312_p1 = sub_ln944_fu_307_p2[15:0];

assign trunc_ln947_fu_316_p1 = sub_ln944_fu_307_p2[4:0];

assign xor_ln949_fu_388_p2 = (tmp_749_fu_381_p3 ^ 1'd1);

assign zext_ln947_fu_341_p1 = sub_ln947_reg_613;

assign zext_ln958_fu_451_p1 = lshr_ln958_reg_669;

assign zext_ln961_fu_460_p1 = or_ln_i_reg_644;

always @ (posedge ap_clk) begin
    or_ln_i_reg_644[31:1] <= 31'b0000000000000000000000000000000;
    select_ln964_reg_689[7:1] <= 7'b0111111;
end

endmodule //Loop_2_proc
