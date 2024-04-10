// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_resource_1_jbC_H__
#define __dense_resource_1_jbC_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_resource_1_jbC_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 6;
  static const unsigned AddressRange = 108;
  static const unsigned AddressWidth = 7;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(dense_resource_1_jbC_ram) {
        ram[0] = "0b000000";
        ram[1] = "0b110101";
        ram[2] = "0b000010";
        ram[3] = "0b111010";
        ram[4] = "0b111001";
        ram[5] = "0b001010";
        ram[6] = "0b110111";
        ram[7] = "0b001000";
        ram[8] = "0b000101";
        ram[9] = "0b000011";
        ram[10] = "0b111011";
        ram[11] = "0b001000";
        ram[12] = "0b000110";
        ram[13] = "0b111111";
        ram[14] = "0b111010";
        ram[15] = "0b000010";
        ram[16] = "0b000101";
        ram[17] = "0b001100";
        ram[18] = "0b110000";
        ram[19] = "0b000111";
        ram[20] = "0b000110";
        ram[21] = "0b111011";
        ram[22] = "0b000001";
        ram[23] = "0b001101";
        ram[24] = "0b000110";
        ram[25] = "0b001101";
        ram[26] = "0b001110";
        ram[27] = "0b111100";
        ram[28] = "0b000011";
        ram[29] = "0b000111";
        ram[30] = "0b001100";
        ram[31] = "0b001000";
        ram[32] = "0b000110";
        ram[33] = "0b001011";
        ram[34] = "0b111101";
        ram[35] = "0b111110";
        ram[36] = "0b111101";
        ram[37] = "0b000000";
        ram[38] = "0b000010";
        ram[39] = "0b110110";
        ram[40] = "0b000010";
        ram[41] = "0b000111";
        ram[42] = "0b111010";
        ram[43] = "0b000100";
        ram[44] = "0b111010";
        ram[45] = "0b000000";
        ram[46] = "0b111100";
        ram[47] = "0b000010";
        ram[48] = "0b110100";
        ram[49] = "0b111101";
        ram[50] = "0b111101";
        ram[51] = "0b101101";
        ram[52] = "0b111101";
        ram[53] = "0b111011";
        ram[54] = "0b110111";
        ram[55] = "0b001110";
        ram[56] = "0b010000";
        ram[57] = "0b110110";
        ram[58] = "0b111101";
        ram[59] = "0b001100";
        ram[60] = "0b000010";
        ram[61] = "0b001011";
        ram[62] = "0b001000";
        ram[63] = "0b111111";
        ram[64] = "0b000110";
        ram[65] = "0b111111";
        ram[66] = "0b001010";
        ram[67] = "0b000001";
        ram[68] = "0b000110";
        ram[69] = "0b111010";
        ram[70] = "0b111100";
        ram[71] = "0b001000";
        ram[72] = "0b110001";
        ram[73] = "0b101110";
        ram[74] = "0b110011";
        ram[75] = "0b000101";
        ram[76] = "0b110100";
        ram[77] = "0b111010";
        ram[78] = "0b001001";
        ram[79] = "0b111000";
        ram[80] = "0b111110";
        ram[81] = "0b101111";
        ram[82] = "0b111011";
        ram[83] = "0b111010";
        ram[84] = "0b110110";
        ram[85] = "0b111111";
        ram[86] = "0b110110";
        ram[87] = "0b110011";
        ram[88] = "0b000001";
        ram[89] = "0b000101";
        ram[90] = "0b110010";
        ram[91] = "0b000001";
        ram[92] = "0b001000";
        ram[93] = "0b111000";
        ram[94] = "0b111000";
        ram[95] = "0b000010";
        ram[96] = "0b000001";
        ram[97] = "0b111011";
        ram[98] = "0b001000";
        ram[99] = "0b001100";
        ram[100] = "0b000011";
        ram[101] = "0b000111";
        ram[102] = "0b000110";
        ram[103] = "0b001001";
        ram[104] = "0b111111";
        ram[105] = "0b001000";
        ram[106] = "0b001010";
        ram[107] = "0b111100";


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


SC_MODULE(dense_resource_1_jbC) {


static const unsigned DataWidth = 6;
static const unsigned AddressRange = 108;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_resource_1_jbC_ram* meminst;


SC_CTOR(dense_resource_1_jbC) {
meminst = new dense_resource_1_jbC_ram("dense_resource_1_jbC_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_resource_1_jbC() {
    delete meminst;
}


};//endmodule
#endif
