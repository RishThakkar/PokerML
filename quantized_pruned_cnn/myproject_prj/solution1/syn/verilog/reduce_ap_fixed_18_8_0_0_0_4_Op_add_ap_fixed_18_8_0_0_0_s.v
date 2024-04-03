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


input   ap_clk;
input   ap_rst;
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

reg[17:0] ap_return;

wire  signed [17:0] p_Val2_s_fu_162_p12;
reg  signed [17:0] p_Val2_s_reg_554;
wire    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_state3_pp0_stage0_iter2;
wire    ap_block_pp0_stage0_11001;
wire  signed [17:0] p_Val2_32_fu_198_p12;
reg  signed [17:0] p_Val2_32_reg_560;
wire  signed [17:0] p_Val2_35_fu_234_p12;
reg  signed [17:0] p_Val2_35_reg_566;
wire  signed [17:0] p_Val2_2_fu_270_p12;
reg  signed [17:0] p_Val2_2_reg_572;
wire  signed [17:0] p_Val2_38_fu_374_p3;
reg  signed [17:0] p_Val2_38_reg_578;
wire  signed [17:0] p_Val2_39_fu_460_p3;
reg  signed [17:0] p_Val2_39_reg_584;
wire    ap_block_pp0_stage0;
wire   [17:0] zext_ln43_fu_122_p1;
wire   [17:0] zext_ln43_2_fu_126_p1;
wire   [17:0] zext_ln43_3_fu_130_p1;
wire   [17:0] zext_ln43_4_fu_134_p1;
wire   [17:0] zext_ln43_5_fu_138_p1;
wire   [17:0] zext_ln43_6_fu_142_p1;
wire   [17:0] zext_ln43_7_fu_146_p1;
wire   [17:0] zext_ln43_8_fu_150_p1;
wire   [17:0] zext_ln43_9_fu_154_p1;
wire   [17:0] zext_ln43_10_fu_158_p1;
wire   [3:0] p_Val2_s_fu_162_p11;
wire   [2:0] empty_fu_114_p1;
wire   [2:0] add_ln43_fu_188_p2;
wire   [3:0] p_Val2_32_fu_198_p11;
wire   [2:0] add_ln45_fu_224_p2;
wire   [3:0] p_Val2_35_fu_234_p11;
wire   [2:0] add_ln43_1_fu_260_p2;
wire   [3:0] p_Val2_2_fu_270_p11;
wire  signed [18:0] rhs_V_2_fu_299_p1;
wire  signed [18:0] lhs_V_2_fu_296_p1;
wire   [18:0] ret_V_fu_302_p2;
wire   [17:0] p_Val2_34_fu_316_p2;
wire   [0:0] p_Result_22_fu_320_p3;
wire   [0:0] p_Result_s_fu_308_p3;
wire   [0:0] xor_ln786_12_fu_328_p2;
wire   [0:0] xor_ln340_25_fu_346_p2;
wire   [0:0] xor_ln340_24_fu_340_p2;
wire   [0:0] underflow_fu_334_p2;
wire   [0:0] or_ln340_12_fu_352_p2;
wire   [17:0] select_ln340_128_fu_358_p3;
wire   [17:0] select_ln388_12_fu_366_p3;
wire  signed [18:0] rhs_V_3_fu_385_p1;
wire  signed [18:0] lhs_V_3_fu_382_p1;
wire   [18:0] ret_V_2_fu_388_p2;
wire   [17:0] p_Val2_37_fu_402_p2;
wire   [0:0] p_Result_24_fu_406_p3;
wire   [0:0] p_Result_23_fu_394_p3;
wire   [0:0] xor_ln786_13_fu_414_p2;
wire   [0:0] xor_ln340_27_fu_432_p2;
wire   [0:0] xor_ln340_26_fu_426_p2;
wire   [0:0] underflow_2_fu_420_p2;
wire   [0:0] or_ln340_13_fu_438_p2;
wire   [17:0] select_ln340_130_fu_444_p3;
wire   [17:0] select_ln388_13_fu_452_p3;
wire  signed [18:0] lhs_V_fu_468_p1;
wire  signed [18:0] rhs_V_fu_471_p1;
wire   [18:0] ret_V_3_fu_474_p2;
wire   [17:0] p_Val2_41_fu_488_p2;
wire   [0:0] p_Result_26_fu_492_p3;
wire   [0:0] p_Result_25_fu_480_p3;
wire   [0:0] xor_ln786_fu_500_p2;
wire   [0:0] xor_ln340_fu_518_p2;
wire   [0:0] xor_ln340_28_fu_512_p2;
wire   [0:0] underflow_3_fu_506_p2;
wire   [0:0] or_ln340_fu_524_p2;
wire   [17:0] select_ln340_fu_530_p3;
wire   [17:0] select_ln388_fu_538_p3;
wire   [17:0] select_ln340_132_fu_546_p3;
reg    ap_ce_reg;
reg   [16:0] x_0_V_int_reg;
reg   [16:0] x_1_V_int_reg;
reg   [16:0] x_2_V_int_reg;
reg   [16:0] x_3_V_int_reg;
reg   [16:0] x_4_V_int_reg;
reg   [16:0] x_5_V_int_reg;
reg   [16:0] x_6_V_int_reg;
reg   [16:0] x_7_V_int_reg;
reg   [16:0] x_8_V_int_reg;
reg   [16:0] x_9_V_int_reg;
reg   [4:0] x_V_offset_int_reg;
reg   [17:0] ap_return_int_reg;

myproject_axi_mux_104_18_1_0 #(
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
myproject_axi_mux_104_18_1_0_U2354(
    .din0(zext_ln43_fu_122_p1),
    .din1(zext_ln43_2_fu_126_p1),
    .din2(zext_ln43_3_fu_130_p1),
    .din3(zext_ln43_4_fu_134_p1),
    .din4(zext_ln43_5_fu_138_p1),
    .din5(zext_ln43_6_fu_142_p1),
    .din6(zext_ln43_7_fu_146_p1),
    .din7(zext_ln43_8_fu_150_p1),
    .din8(zext_ln43_9_fu_154_p1),
    .din9(zext_ln43_10_fu_158_p1),
    .din10(p_Val2_s_fu_162_p11),
    .dout(p_Val2_s_fu_162_p12)
);

myproject_axi_mux_104_18_1_0 #(
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
myproject_axi_mux_104_18_1_0_U2355(
    .din0(zext_ln43_fu_122_p1),
    .din1(zext_ln43_2_fu_126_p1),
    .din2(zext_ln43_3_fu_130_p1),
    .din3(zext_ln43_4_fu_134_p1),
    .din4(zext_ln43_5_fu_138_p1),
    .din5(zext_ln43_6_fu_142_p1),
    .din6(zext_ln43_7_fu_146_p1),
    .din7(zext_ln43_8_fu_150_p1),
    .din8(zext_ln43_9_fu_154_p1),
    .din9(zext_ln43_10_fu_158_p1),
    .din10(p_Val2_32_fu_198_p11),
    .dout(p_Val2_32_fu_198_p12)
);

myproject_axi_mux_104_18_1_0 #(
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
myproject_axi_mux_104_18_1_0_U2356(
    .din0(zext_ln43_fu_122_p1),
    .din1(zext_ln43_2_fu_126_p1),
    .din2(zext_ln43_3_fu_130_p1),
    .din3(zext_ln43_4_fu_134_p1),
    .din4(zext_ln43_5_fu_138_p1),
    .din5(zext_ln43_6_fu_142_p1),
    .din6(zext_ln43_7_fu_146_p1),
    .din7(zext_ln43_8_fu_150_p1),
    .din8(zext_ln43_9_fu_154_p1),
    .din9(zext_ln43_10_fu_158_p1),
    .din10(p_Val2_35_fu_234_p11),
    .dout(p_Val2_35_fu_234_p12)
);

myproject_axi_mux_104_18_1_0 #(
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
myproject_axi_mux_104_18_1_0_U2357(
    .din0(zext_ln43_fu_122_p1),
    .din1(zext_ln43_2_fu_126_p1),
    .din2(zext_ln43_3_fu_130_p1),
    .din3(zext_ln43_4_fu_134_p1),
    .din4(zext_ln43_5_fu_138_p1),
    .din5(zext_ln43_6_fu_142_p1),
    .din6(zext_ln43_7_fu_146_p1),
    .din7(zext_ln43_8_fu_150_p1),
    .din8(zext_ln43_9_fu_154_p1),
    .din9(zext_ln43_10_fu_158_p1),
    .din10(p_Val2_2_fu_270_p11),
    .dout(p_Val2_2_fu_270_p12)
);

always @ (posedge ap_clk) begin
    ap_ce_reg <= ap_ce;
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_ce_reg)) begin
        ap_return_int_reg <= select_ln340_132_fu_546_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_ce_reg) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        p_Val2_2_reg_572 <= p_Val2_2_fu_270_p12;
        p_Val2_32_reg_560 <= p_Val2_32_fu_198_p12;
        p_Val2_35_reg_566 <= p_Val2_35_fu_234_p12;
        p_Val2_38_reg_578 <= p_Val2_38_fu_374_p3;
        p_Val2_39_reg_584 <= p_Val2_39_fu_460_p3;
        p_Val2_s_reg_554 <= p_Val2_s_fu_162_p12;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_ce)) begin
        x_0_V_int_reg <= x_0_V;
        x_1_V_int_reg <= x_1_V;
        x_2_V_int_reg <= x_2_V;
        x_3_V_int_reg <= x_3_V;
        x_4_V_int_reg <= x_4_V;
        x_5_V_int_reg <= x_5_V;
        x_6_V_int_reg <= x_6_V;
        x_7_V_int_reg <= x_7_V;
        x_8_V_int_reg <= x_8_V;
        x_9_V_int_reg <= x_9_V;
        x_V_offset_int_reg <= x_V_offset;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        ap_return = ap_return_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        ap_return = select_ln340_132_fu_546_p3;
    end
end

assign add_ln43_1_fu_260_p2 = (3'd3 + empty_fu_114_p1);

assign add_ln43_fu_188_p2 = (3'd1 + empty_fu_114_p1);

assign add_ln45_fu_224_p2 = (3'd2 + empty_fu_114_p1);

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign empty_fu_114_p1 = x_V_offset_int_reg[2:0];

assign lhs_V_2_fu_296_p1 = p_Val2_s_reg_554;

assign lhs_V_3_fu_382_p1 = p_Val2_35_reg_566;

assign lhs_V_fu_468_p1 = p_Val2_38_reg_578;

assign or_ln340_12_fu_352_p2 = (xor_ln340_25_fu_346_p2 | p_Result_22_fu_320_p3);

assign or_ln340_13_fu_438_p2 = (xor_ln340_27_fu_432_p2 | p_Result_24_fu_406_p3);

assign or_ln340_fu_524_p2 = (xor_ln340_fu_518_p2 | p_Result_26_fu_492_p3);

assign p_Result_22_fu_320_p3 = p_Val2_34_fu_316_p2[32'd17];

assign p_Result_23_fu_394_p3 = ret_V_2_fu_388_p2[32'd18];

assign p_Result_24_fu_406_p3 = p_Val2_37_fu_402_p2[32'd17];

assign p_Result_25_fu_480_p3 = ret_V_3_fu_474_p2[32'd18];

assign p_Result_26_fu_492_p3 = p_Val2_41_fu_488_p2[32'd17];

assign p_Result_s_fu_308_p3 = ret_V_fu_302_p2[32'd18];

assign p_Val2_2_fu_270_p11 = add_ln43_1_fu_260_p2;

assign p_Val2_32_fu_198_p11 = add_ln43_fu_188_p2;

assign p_Val2_34_fu_316_p2 = ($signed(p_Val2_s_reg_554) + $signed(p_Val2_32_reg_560));

assign p_Val2_35_fu_234_p11 = add_ln45_fu_224_p2;

assign p_Val2_37_fu_402_p2 = ($signed(p_Val2_35_reg_566) + $signed(p_Val2_2_reg_572));

assign p_Val2_38_fu_374_p3 = ((or_ln340_12_fu_352_p2[0:0] === 1'b1) ? select_ln340_128_fu_358_p3 : select_ln388_12_fu_366_p3);

assign p_Val2_39_fu_460_p3 = ((or_ln340_13_fu_438_p2[0:0] === 1'b1) ? select_ln340_130_fu_444_p3 : select_ln388_13_fu_452_p3);

assign p_Val2_41_fu_488_p2 = ($signed(p_Val2_39_reg_584) + $signed(p_Val2_38_reg_578));

assign p_Val2_s_fu_162_p11 = x_V_offset_int_reg[3:0];

assign ret_V_2_fu_388_p2 = ($signed(rhs_V_3_fu_385_p1) + $signed(lhs_V_3_fu_382_p1));

assign ret_V_3_fu_474_p2 = ($signed(lhs_V_fu_468_p1) + $signed(rhs_V_fu_471_p1));

assign ret_V_fu_302_p2 = ($signed(rhs_V_2_fu_299_p1) + $signed(lhs_V_2_fu_296_p1));

assign rhs_V_2_fu_299_p1 = p_Val2_32_reg_560;

assign rhs_V_3_fu_385_p1 = p_Val2_2_reg_572;

assign rhs_V_fu_471_p1 = p_Val2_39_reg_584;

assign select_ln340_128_fu_358_p3 = ((xor_ln340_24_fu_340_p2[0:0] === 1'b1) ? 18'd131071 : p_Val2_34_fu_316_p2);

assign select_ln340_130_fu_444_p3 = ((xor_ln340_26_fu_426_p2[0:0] === 1'b1) ? 18'd131071 : p_Val2_37_fu_402_p2);

assign select_ln340_132_fu_546_p3 = ((or_ln340_fu_524_p2[0:0] === 1'b1) ? select_ln340_fu_530_p3 : select_ln388_fu_538_p3);

assign select_ln340_fu_530_p3 = ((xor_ln340_28_fu_512_p2[0:0] === 1'b1) ? 18'd131071 : p_Val2_41_fu_488_p2);

assign select_ln388_12_fu_366_p3 = ((underflow_fu_334_p2[0:0] === 1'b1) ? 18'd131072 : p_Val2_34_fu_316_p2);

assign select_ln388_13_fu_452_p3 = ((underflow_2_fu_420_p2[0:0] === 1'b1) ? 18'd131072 : p_Val2_37_fu_402_p2);

assign select_ln388_fu_538_p3 = ((underflow_3_fu_506_p2[0:0] === 1'b1) ? 18'd131072 : p_Val2_41_fu_488_p2);

assign underflow_2_fu_420_p2 = (xor_ln786_13_fu_414_p2 & p_Result_23_fu_394_p3);

assign underflow_3_fu_506_p2 = (xor_ln786_fu_500_p2 & p_Result_25_fu_480_p3);

assign underflow_fu_334_p2 = (xor_ln786_12_fu_328_p2 & p_Result_s_fu_308_p3);

assign xor_ln340_24_fu_340_p2 = (p_Result_s_fu_308_p3 ^ p_Result_22_fu_320_p3);

assign xor_ln340_25_fu_346_p2 = (p_Result_s_fu_308_p3 ^ 1'd1);

assign xor_ln340_26_fu_426_p2 = (p_Result_24_fu_406_p3 ^ p_Result_23_fu_394_p3);

assign xor_ln340_27_fu_432_p2 = (p_Result_23_fu_394_p3 ^ 1'd1);

assign xor_ln340_28_fu_512_p2 = (p_Result_26_fu_492_p3 ^ p_Result_25_fu_480_p3);

assign xor_ln340_fu_518_p2 = (p_Result_25_fu_480_p3 ^ 1'd1);

assign xor_ln786_12_fu_328_p2 = (p_Result_22_fu_320_p3 ^ 1'd1);

assign xor_ln786_13_fu_414_p2 = (p_Result_24_fu_406_p3 ^ 1'd1);

assign xor_ln786_fu_500_p2 = (p_Result_26_fu_492_p3 ^ 1'd1);

assign zext_ln43_10_fu_158_p1 = x_9_V_int_reg;

assign zext_ln43_2_fu_126_p1 = x_1_V_int_reg;

assign zext_ln43_3_fu_130_p1 = x_2_V_int_reg;

assign zext_ln43_4_fu_134_p1 = x_3_V_int_reg;

assign zext_ln43_5_fu_138_p1 = x_4_V_int_reg;

assign zext_ln43_6_fu_142_p1 = x_5_V_int_reg;

assign zext_ln43_7_fu_146_p1 = x_6_V_int_reg;

assign zext_ln43_8_fu_150_p1 = x_7_V_int_reg;

assign zext_ln43_9_fu_154_p1 = x_8_V_int_reg;

assign zext_ln43_fu_122_p1 = x_0_V_int_reg;

endmodule //reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s
