// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_w6_V_H__
#define __dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_w6_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_w6_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 6;
  static const unsigned AddressRange = 144;
  static const unsigned AddressWidth = 8;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_w6_V_ram) {
        ram[0] = "0b000101";
        ram[1] = "0b010101";
        ram[2] = "0b111110";
        ram[3] = "0b000001";
        ram[4] = "0b000011";
        ram[5] = "0b010011";
        ram[6] = "0b000100";
        ram[7] = "0b010010";
        ram[8] = "0b111000";
        ram[9] = "0b010001";
        ram[10] = "0b000010";
        ram[11] = "0b001011";
        ram[12] = "0b000000";
        ram[13] = "0b111110";
        ram[14] = "0b000011";
        ram[15] = "0b001010";
        ram[16] = "0b000000";
        ram[17] = "0b001111";
        ram[18] = "0b000100";
        ram[19] = "0b010100";
        ram[20] = "0b000000";
        ram[21] = "0b000101";
        ram[22] = "0b111001";
        ram[23] = "0b010001";
        ram[24] = "0b111111";
        ram[25] = "0b000100";
        ram[26] = "0b001001";
        ram[27] = "0b010011";
        ram[28] = "0b111000";
        ram[29] = "0b000101";
        ram[30] = "0b111110";
        ram[31] = "0b001011";
        ram[32] = "0b000010";
        ram[33] = "0b000011";
        ram[34] = "0b111100";
        ram[35] = "0b001100";
        ram[36] = "0b111010";
        ram[37] = "0b111011";
        ram[38] = "0b010001";
        ram[39] = "0b111100";
        ram[40] = "0b111110";
        ram[41] = "0b111010";
        ram[42] = "0b010010";
        ram[43] = "0b111001";
        ram[44] = "0b111100";
        ram[45] = "0b000011";
        ram[46] = "0b001010";
        ram[47] = "0b000000";
        ram[48] = "0b111010";
        ram[49] = "0b110101";
        ram[50] = "0b000000";
        ram[51] = "0b111011";
        ram[52] = "0b111100";
        ram[53] = "0b110001";
        ram[54] = "0b111110";
        ram[55] = "0b110101";
        ram[56] = "0b111110";
        ram[57] = "0b110100";
        ram[58] = "0b111111";
        ram[59] = "0b111110";
        ram[60] = "0b110110";
        ram[61] = "0b000000";
        ram[62] = "0b111010";
        ram[63] = "0b101100";
        ram[64] = "0b000010";
        ram[65] = "0b101100";
        ram[66] = "0b110111";
        ram[67] = "0b110011";
        ram[68] = "0b001111";
        ram[69] = "0b111011";
        ram[70] = "0b000001";
        ram[71] = "0b111011";
        ram[72] = "0b111110";
        ram[73] = "0b111101";
        ram[74] = "0b001011";
        ram[75] = "0b000110";
        ram[76] = "0b001000";
        ram[77] = "0b001111";
        ram[78] = "0b001111";
        ram[79] = "0b001001";
        ram[80] = "0b001110";
        ram[81] = "0b000110";
        ram[82] = "0b001100";
        ram[83] = "0b111101";
        ram[84] = "0b110001";
        ram[85] = "0b000111";
        ram[86] = "0b111100";
        ram[87] = "0b110100";
        ram[88] = "0b000011";
        ram[89] = "0b000000";
        ram[90] = "0b001110";
        ram[91] = "0b111100";
        ram[92] = "0b111110";
        ram[93] = "0b001010";
        ram[94] = "0b001011";
        ram[95] = "0b110010";
        ram[96] = "0b110111";
        ram[97] = "0b110101";
        ram[98] = "0b111101";
        ram[99] = "0b001101";
        ram[100] = "0b110100";
        ram[101] = "0b111010";
        ram[102] = "0b111010";
        ram[103] = "0b001010";
        ram[104] = "0b110100";
        ram[105] = "0b111010";
        ram[106] = "0b111100";
        ram[107] = "0b111000";
        ram[108] = "0b111011";
        ram[109] = "0b110110";
        ram[110] = "0b101100";
        ram[111] = "0b000000";
        ram[112] = "0b000111";
        ram[113] = "0b111000";
        ram[114] = "0b111100";
        ram[115] = "0b101111";
        ram[116] = "0b000101";
        ram[117] = "0b110110";
        ram[118] = "0b110100";
        ram[119] = "0b111110";
        ram[120] = "0b000011";
        ram[121] = "0b000010";
        ram[122] = "0b001000";
        ram[123] = "0b000000";
        ram[124] = "0b000100";
        ram[125] = "0b000001";
        ram[126] = "0b000111";
        ram[127] = "0b111010";
        ram[128] = "0b001010";
        ram[129] = "0b110101";
        ram[130] = "0b111111";
        ram[131] = "0b101110";
        ram[132] = "0b000011";
        ram[133] = "0b001111";
        ram[134] = "0b000111";
        ram[135] = "0b000110";
        ram[136] = "0b111101";
        ram[137] = "0b000111";
        ram[138] = "0b000011";
        ram[139] = "0b110100";
        ram[140] = "0b000101";
        ram[141] = "0b000111";
        ram[142] = "0b111011";
        ram[143] = "0b101011";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_w6_V) {


static const unsigned DataWidth = 6;
static const unsigned AddressRange = 144;
static const unsigned AddressWidth = 8;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_w6_V_ram* meminst;


SC_CTOR(dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_w6_V) {
meminst = new dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_w6_V_ram("dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_w6_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_w6_V() {
    delete meminst;
}


};//endmodule
#endif
