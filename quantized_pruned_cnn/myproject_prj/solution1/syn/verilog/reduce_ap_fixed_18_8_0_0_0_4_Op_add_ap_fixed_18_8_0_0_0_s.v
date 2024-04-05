// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        x_0_V,
        x_1_V,
        x_2_V,
        x_3_V,
        x_4_V,
        x_5_V,
        x_6_V,
        x_7_V,
        x_8_V,
        x_9_V,
        x_V_offset,
        ap_return,
        ap_ce
);

parameter    ap_ST_fsm_state1 = 2'd1;
parameter    ap_ST_fsm_state2 = 2'd2;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [16:0] x_0_V;
input  [16:0] x_1_V;
input  [16:0] x_2_V;
input  [16:0] x_3_V;
input  [16:0] x_4_V;
input  [16:0] x_5_V;
input  [16:0] x_6_V;
input  [16:0] x_7_V;
input  [16:0] x_8_V;
input  [16:0] x_9_V;
input  [4:0] x_V_offset;
output  [17:0] ap_return;
input   ap_ce;

reg ap_done;
reg ap_idle;
reg ap_ready;

(* fsm_encoding = "none" *) reg   [1:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [3:0] trunc_ln36_fu_118_p1;
reg   [3:0] trunc_ln36_reg_562;
wire   [2:0] add_ln43_fu_122_p2;
reg   [2:0] add_ln43_reg_567;
wire   [2:0] add_ln45_fu_128_p2;
reg   [2:0] add_ln45_reg_572;
wire   [2:0] add_ln43_1_fu_134_p2;
reg   [2:0] add_ln43_1_reg_577;
reg   [16:0] ap_port_reg_x_0_V;
reg   [16:0] ap_port_reg_x_1_V;
reg   [16:0] ap_port_reg_x_2_V;
reg   [16:0] ap_port_reg_x_3_V;
reg   [16:0] ap_port_reg_x_4_V;
reg   [16:0] ap_port_reg_x_5_V;
reg   [16:0] ap_port_reg_x_6_V;
reg   [16:0] ap_port_reg_x_7_V;
reg   [16:0] ap_port_reg_x_8_V;
reg   [16:0] ap_port_reg_x_9_V;
wire    ap_CS_fsm_state2;
wire   [2:0] empty_fu_114_p1;
wire   [17:0] zext_ln43_fu_140_p1;
wire   [17:0] zext_ln43_2_fu_144_p1;
wire   [17:0] zext_ln43_3_fu_148_p1;
wire   [17:0] zext_ln43_4_fu_152_p1;
wire   [17:0] zext_ln43_5_fu_156_p1;
wire   [17:0] zext_ln43_6_fu_160_p1;
wire   [17:0] zext_ln43_7_fu_164_p1;
wire   [17:0] zext_ln43_8_fu_168_p1;
wire   [17:0] zext_ln43_9_fu_172_p1;
wire   [17:0] zext_ln43_10_fu_176_p1;
wire   [3:0] p_Val2_32_fu_208_p11;
wire  signed [17:0] p_Val2_s_fu_180_p12;
wire  signed [17:0] p_Val2_32_fu_208_p12;
wire  signed [18:0] rhs_V_2_fu_238_p1;
wire  signed [18:0] lhs_V_2_fu_234_p1;
wire   [18:0] ret_V_fu_242_p2;
wire   [17:0] p_Val2_34_fu_256_p2;
wire   [0:0] p_Result_22_fu_262_p3;
wire   [0:0] p_Result_s_fu_248_p3;
wire   [0:0] xor_ln786_12_fu_270_p2;
wire   [0:0] xor_ln340_25_fu_288_p2;
wire   [0:0] xor_ln340_24_fu_282_p2;
wire   [0:0] underflow_fu_276_p2;
wire   [0:0] or_ln340_12_fu_294_p2;
wire   [17:0] select_ln340_128_fu_300_p3;
wire   [17:0] select_ln388_12_fu_308_p3;
wire   [3:0] p_Val2_35_fu_327_p11;
wire   [3:0] p_Val2_2_fu_356_p11;
wire  signed [17:0] p_Val2_35_fu_327_p12;
wire  signed [17:0] p_Val2_2_fu_356_p12;
wire  signed [18:0] rhs_V_3_fu_386_p1;
wire  signed [18:0] lhs_V_3_fu_382_p1;
wire   [18:0] ret_V_2_fu_390_p2;
wire   [17:0] p_Val2_37_fu_404_p2;
wire   [0:0] p_Result_24_fu_410_p3;
wire   [0:0] p_Result_23_fu_396_p3;
wire   [0:0] xor_ln786_13_fu_418_p2;
wire   [0:0] xor_ln340_27_fu_436_p2;
wire   [0:0] xor_ln340_26_fu_430_p2;
wire   [0:0] underflow_2_fu_424_p2;
wire   [0:0] or_ln340_13_fu_442_p2;
wire   [17:0] select_ln340_130_fu_448_p3;
wire   [17:0] select_ln388_13_fu_456_p3;
wire  signed [17:0] p_Val2_38_fu_316_p3;
wire  signed [17:0] p_Val2_39_fu_464_p3;
wire  signed [18:0] lhs_V_fu_472_p1;
wire  signed [18:0] rhs_V_fu_476_p1;
wire   [18:0] ret_V_3_fu_480_p2;
wire   [17:0] p_Val2_41_fu_494_p2;
wire   [0:0] p_Result_26_fu_500_p3;
wire   [0:0] p_Result_25_fu_486_p3;
wire   [0:0] xor_ln786_fu_508_p2;
wire   [0:0] xor_ln340_fu_526_p2;
wire   [0:0] xor_ln340_28_fu_520_p2;
wire   [0:0] underflow_3_fu_514_p2;
wire   [0:0] or_ln340_fu_532_p2;
wire   [17:0] select_ln340_fu_538_p3;
wire   [17:0] select_ln388_fu_546_p3;
reg   [1:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 2'd1;
end

myproject_axi_mux_104_18_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 18 ),
    .din1_WIDTH( 18 ),
    .din2_WIDTH( 18 ),
    .din3_WIDTH( 18 ),
    .din4_WIDTH( 18 ),
    .din5_WIDTH( 18 ),
    .din6_WIDTH( 18 ),
    .din7_WIDTH( 18 ),
    .din8_WIDTH( 18 ),
    .din9_WIDTH( 18 ),
    .din10_WIDTH( 4 ),
    .dout_WIDTH( 18 ))
myproject_axi_mux_104_18_1_1_U1910(
    .din0(zext_ln43_fu_140_p1),
    .din1(zext_ln43_2_fu_144_p1),
    .din2(zext_ln43_3_fu_148_p1),
    .din3(zext_ln43_4_fu_152_p1),
    .din4(zext_ln43_5_fu_156_p1),
    .din5(zext_ln43_6_fu_160_p1),
    .din6(zext_ln43_7_fu_164_p1),
    .din7(zext_ln43_8_fu_168_p1),
    .din8(zext_ln43_9_fu_172_p1),
    .din9(zext_ln43_10_fu_176_p1),
    .din10(trunc_ln36_reg_562),
    .dout(p_Val2_s_fu_180_p12)
);

myproject_axi_mux_104_18_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 18 ),
    .din1_WIDTH( 18 ),
    .din2_WIDTH( 18 ),
    .din3_WIDTH( 18 ),
    .din4_WIDTH( 18 ),
    .din5_WIDTH( 18 ),
    .din6_WIDTH( 18 ),
    .din7_WIDTH( 18 ),
    .din8_WIDTH( 18 ),
    .din9_WIDTH( 18 ),
    .din10_WIDTH( 4 ),
    .dout_WIDTH( 18 ))
myproject_axi_mux_104_18_1_1_U1911(
    .din0(zext_ln43_fu_140_p1),
    .din1(zext_ln43_2_fu_144_p1),
    .din2(zext_ln43_3_fu_148_p1),
    .din3(zext_ln43_4_fu_152_p1),
    .din4(zext_ln43_5_fu_156_p1),
    .din5(zext_ln43_6_fu_160_p1),
    .din6(zext_ln43_7_fu_164_p1),
    .din7(zext_ln43_8_fu_168_p1),
    .din8(zext_ln43_9_fu_172_p1),
    .din9(zext_ln43_10_fu_176_p1),
    .din10(p_Val2_32_fu_208_p11),
    .dout(p_Val2_32_fu_208_p12)
);

myproject_axi_mux_104_18_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 18 ),
    .din1_WIDTH( 18 ),
    .din2_WIDTH( 18 ),
    .din3_WIDTH( 18 ),
    .din4_WIDTH( 18 ),
    .din5_WIDTH( 18 ),
    .din6_WIDTH( 18 ),
    .din7_WIDTH( 18 ),
    .din8_WIDTH( 18 ),
    .din9_WIDTH( 18 ),
    .din10_WIDTH( 4 ),
    .dout_WIDTH( 18 ))
myproject_axi_mux_104_18_1_1_U1912(
    .din0(zext_ln43_fu_140_p1),
    .din1(zext_ln43_2_fu_144_p1),
    .din2(zext_ln43_3_fu_148_p1),
    .din3(zext_ln43_4_fu_152_p1),
    .din4(zext_ln43_5_fu_156_p1),
    .din5(zext_ln43_6_fu_160_p1),
    .din6(zext_ln43_7_fu_164_p1),
    .din7(zext_ln43_8_fu_168_p1),
    .din8(zext_ln43_9_fu_172_p1),
    .din9(zext_ln43_10_fu_176_p1),
    .din10(p_Val2_35_fu_327_p11),
    .dout(p_Val2_35_fu_327_p12)
);

myproject_axi_mux_104_18_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 18 ),
    .din1_WIDTH( 18 ),
    .din2_WIDTH( 18 ),
    .din3_WIDTH( 18 ),
    .din4_WIDTH( 18 ),
    .din5_WIDTH( 18 ),
    .din6_WIDTH( 18 ),
    .din7_WIDTH( 18 ),
    .din8_WIDTH( 18 ),
    .din9_WIDTH( 18 ),
    .din10_WIDTH( 4 ),
    .dout_WIDTH( 18 ))
myproject_axi_mux_104_18_1_1_U1913(
    .din0(zext_ln43_fu_140_p1),
    .din1(zext_ln43_2_fu_144_p1),
    .din2(zext_ln43_3_fu_148_p1),
    .din3(zext_ln43_4_fu_152_p1),
    .din4(zext_ln43_5_fu_156_p1),
    .din5(zext_ln43_6_fu_160_p1),
    .din6(zext_ln43_7_fu_164_p1),
    .din7(zext_ln43_8_fu_168_p1),
    .din8(zext_ln43_9_fu_172_p1),
    .din9(zext_ln43_10_fu_176_p1),
    .din10(p_Val2_2_fu_356_p11),
    .dout(p_Val2_2_fu_356_p12)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_ce) & (1'b1 == ap_CS_fsm_state1))) begin
        add_ln43_1_reg_577 <= add_ln43_1_fu_134_p2;
        add_ln43_reg_567 <= add_ln43_fu_122_p2;
        add_ln45_reg_572 <= add_ln45_fu_128_p2;
        ap_port_reg_x_0_V <= x_0_V;
        ap_port_reg_x_1_V <= x_1_V;
        ap_port_reg_x_2_V <= x_2_V;
        ap_port_reg_x_3_V <= x_3_V;
        ap_port_reg_x_4_V <= x_4_V;
        ap_port_reg_x_5_V <= x_5_V;
        ap_port_reg_x_6_V <= x_6_V;
        ap_port_reg_x_7_V <= x_7_V;
        ap_port_reg_x_8_V <= x_8_V;
        ap_port_reg_x_9_V <= x_9_V;
        trunc_ln36_reg_562 <= trunc_ln36_fu_118_p1;
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) | ((1'b1 == ap_ce) & (1'b1 == ap_CS_fsm_state2)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
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
    if (((1'b1 == ap_ce) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_ce) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_ce) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln43_1_fu_134_p2 = (3'd3 + empty_fu_114_p1);

assign add_ln43_fu_122_p2 = (3'd1 + empty_fu_114_p1);

assign add_ln45_fu_128_p2 = (3'd2 + empty_fu_114_p1);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_return = ((or_ln340_fu_532_p2[0:0] === 1'b1) ? select_ln340_fu_538_p3 : select_ln388_fu_546_p3);

assign empty_fu_114_p1 = x_V_offset[2:0];

assign lhs_V_2_fu_234_p1 = p_Val2_s_fu_180_p12;

assign lhs_V_3_fu_382_p1 = p_Val2_35_fu_327_p12;

assign lhs_V_fu_472_p1 = p_Val2_38_fu_316_p3;

assign or_ln340_12_fu_294_p2 = (xor_ln340_25_fu_288_p2 | p_Result_22_fu_262_p3);

assign or_ln340_13_fu_442_p2 = (xor_ln340_27_fu_436_p2 | p_Result_24_fu_410_p3);

assign or_ln340_fu_532_p2 = (xor_ln340_fu_526_p2 | p_Result_26_fu_500_p3);

assign p_Result_22_fu_262_p3 = p_Val2_34_fu_256_p2[32'd17];

assign p_Result_23_fu_396_p3 = ret_V_2_fu_390_p2[32'd18];

assign p_Result_24_fu_410_p3 = p_Val2_37_fu_404_p2[32'd17];

assign p_Result_25_fu_486_p3 = ret_V_3_fu_480_p2[32'd18];

assign p_Result_26_fu_500_p3 = p_Val2_41_fu_494_p2[32'd17];

assign p_Result_s_fu_248_p3 = ret_V_fu_242_p2[32'd18];

assign p_Val2_2_fu_356_p11 = add_ln43_1_reg_577;

assign p_Val2_32_fu_208_p11 = add_ln43_reg_567;

assign p_Val2_34_fu_256_p2 = ($signed(p_Val2_s_fu_180_p12) + $signed(p_Val2_32_fu_208_p12));

assign p_Val2_35_fu_327_p11 = add_ln45_reg_572;

assign p_Val2_37_fu_404_p2 = ($signed(p_Val2_35_fu_327_p12) + $signed(p_Val2_2_fu_356_p12));

assign p_Val2_38_fu_316_p3 = ((or_ln340_12_fu_294_p2[0:0] === 1'b1) ? select_ln340_128_fu_300_p3 : select_ln388_12_fu_308_p3);

assign p_Val2_39_fu_464_p3 = ((or_ln340_13_fu_442_p2[0:0] === 1'b1) ? select_ln340_130_fu_448_p3 : select_ln388_13_fu_456_p3);

assign p_Val2_41_fu_494_p2 = ($signed(p_Val2_39_fu_464_p3) + $signed(p_Val2_38_fu_316_p3));

assign ret_V_2_fu_390_p2 = ($signed(rhs_V_3_fu_386_p1) + $signed(lhs_V_3_fu_382_p1));

assign ret_V_3_fu_480_p2 = ($signed(lhs_V_fu_472_p1) + $signed(rhs_V_fu_476_p1));

assign ret_V_fu_242_p2 = ($signed(rhs_V_2_fu_238_p1) + $signed(lhs_V_2_fu_234_p1));

assign rhs_V_2_fu_238_p1 = p_Val2_32_fu_208_p12;

assign rhs_V_3_fu_386_p1 = p_Val2_2_fu_356_p12;

assign rhs_V_fu_476_p1 = p_Val2_39_fu_464_p3;

assign select_ln340_128_fu_300_p3 = ((xor_ln340_24_fu_282_p2[0:0] === 1'b1) ? 18'd131071 : p_Val2_34_fu_256_p2);

assign select_ln340_130_fu_448_p3 = ((xor_ln340_26_fu_430_p2[0:0] === 1'b1) ? 18'd131071 : p_Val2_37_fu_404_p2);

assign select_ln340_fu_538_p3 = ((xor_ln340_28_fu_520_p2[0:0] === 1'b1) ? 18'd131071 : p_Val2_41_fu_494_p2);

assign select_ln388_12_fu_308_p3 = ((underflow_fu_276_p2[0:0] === 1'b1) ? 18'd131072 : p_Val2_34_fu_256_p2);

assign select_ln388_13_fu_456_p3 = ((underflow_2_fu_424_p2[0:0] === 1'b1) ? 18'd131072 : p_Val2_37_fu_404_p2);

assign select_ln388_fu_546_p3 = ((underflow_3_fu_514_p2[0:0] === 1'b1) ? 18'd131072 : p_Val2_41_fu_494_p2);

assign trunc_ln36_fu_118_p1 = x_V_offset[3:0];

assign underflow_2_fu_424_p2 = (xor_ln786_13_fu_418_p2 & p_Result_23_fu_396_p3);

assign underflow_3_fu_514_p2 = (xor_ln786_fu_508_p2 & p_Result_25_fu_486_p3);

assign underflow_fu_276_p2 = (xor_ln786_12_fu_270_p2 & p_Result_s_fu_248_p3);

assign xor_ln340_24_fu_282_p2 = (p_Result_s_fu_248_p3 ^ p_Result_22_fu_262_p3);

assign xor_ln340_25_fu_288_p2 = (p_Result_s_fu_248_p3 ^ 1'd1);

assign xor_ln340_26_fu_430_p2 = (p_Result_24_fu_410_p3 ^ p_Result_23_fu_396_p3);

assign xor_ln340_27_fu_436_p2 = (p_Result_23_fu_396_p3 ^ 1'd1);

assign xor_ln340_28_fu_520_p2 = (p_Result_26_fu_500_p3 ^ p_Result_25_fu_486_p3);

assign xor_ln340_fu_526_p2 = (p_Result_25_fu_486_p3 ^ 1'd1);

assign xor_ln786_12_fu_270_p2 = (p_Result_22_fu_262_p3 ^ 1'd1);

assign xor_ln786_13_fu_418_p2 = (p_Result_24_fu_410_p3 ^ 1'd1);

assign xor_ln786_fu_508_p2 = (p_Result_26_fu_500_p3 ^ 1'd1);

assign zext_ln43_10_fu_176_p1 = ap_port_reg_x_9_V;

assign zext_ln43_2_fu_144_p1 = ap_port_reg_x_1_V;

assign zext_ln43_3_fu_148_p1 = ap_port_reg_x_2_V;

assign zext_ln43_4_fu_152_p1 = ap_port_reg_x_3_V;

assign zext_ln43_5_fu_156_p1 = ap_port_reg_x_4_V;

assign zext_ln43_6_fu_160_p1 = ap_port_reg_x_5_V;

assign zext_ln43_7_fu_164_p1 = ap_port_reg_x_6_V;

assign zext_ln43_8_fu_168_p1 = ap_port_reg_x_7_V;

assign zext_ln43_9_fu_172_p1 = ap_port_reg_x_8_V;

assign zext_ln43_fu_140_p1 = ap_port_reg_x_0_V;

endmodule //reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s