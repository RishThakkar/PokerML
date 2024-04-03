set moduleName pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_24u_config13_s
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {pooling2d_cl<array,array<ap_fixed<16,6,5,3,0>,24u>,config13>}
set C_modelType { void 0 }
set C_modelArgList {
	{ data_V_data_0_V int 6 regular {fifo 0 volatile }  }
	{ data_V_data_1_V int 6 regular {fifo 0 volatile }  }
	{ data_V_data_2_V int 6 regular {fifo 0 volatile }  }
	{ data_V_data_3_V int 6 regular {fifo 0 volatile }  }
	{ data_V_data_4_V int 6 regular {fifo 0 volatile }  }
	{ data_V_data_5_V int 6 regular {fifo 0 volatile }  }
	{ data_V_data_6_V int 6 regular {fifo 0 volatile }  }
	{ data_V_data_7_V int 6 regular {fifo 0 volatile }  }
	{ data_V_data_8_V int 6 regular {fifo 0 volatile }  }
	{ data_V_data_9_V int 6 regular {fifo 0 volatile }  }
	{ data_V_data_10_V int 6 regular {fifo 0 volatile }  }
	{ data_V_data_11_V int 6 regular {fifo 0 volatile }  }
	{ data_V_data_12_V int 6 regular {fifo 0 volatile }  }
	{ data_V_data_13_V int 6 regular {fifo 0 volatile }  }
	{ data_V_data_14_V int 6 regular {fifo 0 volatile }  }
	{ data_V_data_15_V int 6 regular {fifo 0 volatile }  }
	{ data_V_data_16_V int 6 regular {fifo 0 volatile }  }
	{ data_V_data_17_V int 6 regular {fifo 0 volatile }  }
	{ data_V_data_18_V int 6 regular {fifo 0 volatile }  }
	{ data_V_data_19_V int 6 regular {fifo 0 volatile }  }
	{ data_V_data_20_V int 6 regular {fifo 0 volatile }  }
	{ data_V_data_21_V int 6 regular {fifo 0 volatile }  }
	{ data_V_data_22_V int 6 regular {fifo 0 volatile }  }
	{ data_V_data_23_V int 6 regular {fifo 0 volatile }  }
	{ res_V_data_0_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_1_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_2_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_3_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_4_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_5_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_6_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_7_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_8_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_9_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_10_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_11_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_12_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_13_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_14_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_15_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_16_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_17_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_18_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_19_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_20_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_21_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_22_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_23_V int 16 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_V_data_0_V", "interface" : "fifo", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_1_V", "interface" : "fifo", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_2_V", "interface" : "fifo", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_3_V", "interface" : "fifo", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_4_V", "interface" : "fifo", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_5_V", "interface" : "fifo", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_6_V", "interface" : "fifo", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_7_V", "interface" : "fifo", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_8_V", "interface" : "fifo", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_9_V", "interface" : "fifo", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_10_V", "interface" : "fifo", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_11_V", "interface" : "fifo", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_12_V", "interface" : "fifo", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_13_V", "interface" : "fifo", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_14_V", "interface" : "fifo", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_15_V", "interface" : "fifo", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_16_V", "interface" : "fifo", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_17_V", "interface" : "fifo", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_18_V", "interface" : "fifo", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_19_V", "interface" : "fifo", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_20_V", "interface" : "fifo", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_21_V", "interface" : "fifo", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_22_V", "interface" : "fifo", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_23_V", "interface" : "fifo", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "res_V_data_0_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_1_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_2_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_3_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_4_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_5_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_6_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_7_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_8_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_9_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_10_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_11_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_12_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_13_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_14_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_15_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_16_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_17_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_18_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_19_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_20_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_21_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_22_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_23_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 154
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ start_full_n sc_in sc_logic 1 signal -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ start_out sc_out sc_logic 1 signal -1 } 
	{ start_write sc_out sc_logic 1 signal -1 } 
	{ data_V_data_0_V_dout sc_in sc_lv 6 signal 0 } 
	{ data_V_data_0_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ data_V_data_0_V_read sc_out sc_logic 1 signal 0 } 
	{ data_V_data_1_V_dout sc_in sc_lv 6 signal 1 } 
	{ data_V_data_1_V_empty_n sc_in sc_logic 1 signal 1 } 
	{ data_V_data_1_V_read sc_out sc_logic 1 signal 1 } 
	{ data_V_data_2_V_dout sc_in sc_lv 6 signal 2 } 
	{ data_V_data_2_V_empty_n sc_in sc_logic 1 signal 2 } 
	{ data_V_data_2_V_read sc_out sc_logic 1 signal 2 } 
	{ data_V_data_3_V_dout sc_in sc_lv 6 signal 3 } 
	{ data_V_data_3_V_empty_n sc_in sc_logic 1 signal 3 } 
	{ data_V_data_3_V_read sc_out sc_logic 1 signal 3 } 
	{ data_V_data_4_V_dout sc_in sc_lv 6 signal 4 } 
	{ data_V_data_4_V_empty_n sc_in sc_logic 1 signal 4 } 
	{ data_V_data_4_V_read sc_out sc_logic 1 signal 4 } 
	{ data_V_data_5_V_dout sc_in sc_lv 6 signal 5 } 
	{ data_V_data_5_V_empty_n sc_in sc_logic 1 signal 5 } 
	{ data_V_data_5_V_read sc_out sc_logic 1 signal 5 } 
	{ data_V_data_6_V_dout sc_in sc_lv 6 signal 6 } 
	{ data_V_data_6_V_empty_n sc_in sc_logic 1 signal 6 } 
	{ data_V_data_6_V_read sc_out sc_logic 1 signal 6 } 
	{ data_V_data_7_V_dout sc_in sc_lv 6 signal 7 } 
	{ data_V_data_7_V_empty_n sc_in sc_logic 1 signal 7 } 
	{ data_V_data_7_V_read sc_out sc_logic 1 signal 7 } 
	{ data_V_data_8_V_dout sc_in sc_lv 6 signal 8 } 
	{ data_V_data_8_V_empty_n sc_in sc_logic 1 signal 8 } 
	{ data_V_data_8_V_read sc_out sc_logic 1 signal 8 } 
	{ data_V_data_9_V_dout sc_in sc_lv 6 signal 9 } 
	{ data_V_data_9_V_empty_n sc_in sc_logic 1 signal 9 } 
	{ data_V_data_9_V_read sc_out sc_logic 1 signal 9 } 
	{ data_V_data_10_V_dout sc_in sc_lv 6 signal 10 } 
	{ data_V_data_10_V_empty_n sc_in sc_logic 1 signal 10 } 
	{ data_V_data_10_V_read sc_out sc_logic 1 signal 10 } 
	{ data_V_data_11_V_dout sc_in sc_lv 6 signal 11 } 
	{ data_V_data_11_V_empty_n sc_in sc_logic 1 signal 11 } 
	{ data_V_data_11_V_read sc_out sc_logic 1 signal 11 } 
	{ data_V_data_12_V_dout sc_in sc_lv 6 signal 12 } 
	{ data_V_data_12_V_empty_n sc_in sc_logic 1 signal 12 } 
	{ data_V_data_12_V_read sc_out sc_logic 1 signal 12 } 
	{ data_V_data_13_V_dout sc_in sc_lv 6 signal 13 } 
	{ data_V_data_13_V_empty_n sc_in sc_logic 1 signal 13 } 
	{ data_V_data_13_V_read sc_out sc_logic 1 signal 13 } 
	{ data_V_data_14_V_dout sc_in sc_lv 6 signal 14 } 
	{ data_V_data_14_V_empty_n sc_in sc_logic 1 signal 14 } 
	{ data_V_data_14_V_read sc_out sc_logic 1 signal 14 } 
	{ data_V_data_15_V_dout sc_in sc_lv 6 signal 15 } 
	{ data_V_data_15_V_empty_n sc_in sc_logic 1 signal 15 } 
	{ data_V_data_15_V_read sc_out sc_logic 1 signal 15 } 
	{ data_V_data_16_V_dout sc_in sc_lv 6 signal 16 } 
	{ data_V_data_16_V_empty_n sc_in sc_logic 1 signal 16 } 
	{ data_V_data_16_V_read sc_out sc_logic 1 signal 16 } 
	{ data_V_data_17_V_dout sc_in sc_lv 6 signal 17 } 
	{ data_V_data_17_V_empty_n sc_in sc_logic 1 signal 17 } 
	{ data_V_data_17_V_read sc_out sc_logic 1 signal 17 } 
	{ data_V_data_18_V_dout sc_in sc_lv 6 signal 18 } 
	{ data_V_data_18_V_empty_n sc_in sc_logic 1 signal 18 } 
	{ data_V_data_18_V_read sc_out sc_logic 1 signal 18 } 
	{ data_V_data_19_V_dout sc_in sc_lv 6 signal 19 } 
	{ data_V_data_19_V_empty_n sc_in sc_logic 1 signal 19 } 
	{ data_V_data_19_V_read sc_out sc_logic 1 signal 19 } 
	{ data_V_data_20_V_dout sc_in sc_lv 6 signal 20 } 
	{ data_V_data_20_V_empty_n sc_in sc_logic 1 signal 20 } 
	{ data_V_data_20_V_read sc_out sc_logic 1 signal 20 } 
	{ data_V_data_21_V_dout sc_in sc_lv 6 signal 21 } 
	{ data_V_data_21_V_empty_n sc_in sc_logic 1 signal 21 } 
	{ data_V_data_21_V_read sc_out sc_logic 1 signal 21 } 
	{ data_V_data_22_V_dout sc_in sc_lv 6 signal 22 } 
	{ data_V_data_22_V_empty_n sc_in sc_logic 1 signal 22 } 
	{ data_V_data_22_V_read sc_out sc_logic 1 signal 22 } 
	{ data_V_data_23_V_dout sc_in sc_lv 6 signal 23 } 
	{ data_V_data_23_V_empty_n sc_in sc_logic 1 signal 23 } 
	{ data_V_data_23_V_read sc_out sc_logic 1 signal 23 } 
	{ res_V_data_0_V_din sc_out sc_lv 16 signal 24 } 
	{ res_V_data_0_V_full_n sc_in sc_logic 1 signal 24 } 
	{ res_V_data_0_V_write sc_out sc_logic 1 signal 24 } 
	{ res_V_data_1_V_din sc_out sc_lv 16 signal 25 } 
	{ res_V_data_1_V_full_n sc_in sc_logic 1 signal 25 } 
	{ res_V_data_1_V_write sc_out sc_logic 1 signal 25 } 
	{ res_V_data_2_V_din sc_out sc_lv 16 signal 26 } 
	{ res_V_data_2_V_full_n sc_in sc_logic 1 signal 26 } 
	{ res_V_data_2_V_write sc_out sc_logic 1 signal 26 } 
	{ res_V_data_3_V_din sc_out sc_lv 16 signal 27 } 
	{ res_V_data_3_V_full_n sc_in sc_logic 1 signal 27 } 
	{ res_V_data_3_V_write sc_out sc_logic 1 signal 27 } 
	{ res_V_data_4_V_din sc_out sc_lv 16 signal 28 } 
	{ res_V_data_4_V_full_n sc_in sc_logic 1 signal 28 } 
	{ res_V_data_4_V_write sc_out sc_logic 1 signal 28 } 
	{ res_V_data_5_V_din sc_out sc_lv 16 signal 29 } 
	{ res_V_data_5_V_full_n sc_in sc_logic 1 signal 29 } 
	{ res_V_data_5_V_write sc_out sc_logic 1 signal 29 } 
	{ res_V_data_6_V_din sc_out sc_lv 16 signal 30 } 
	{ res_V_data_6_V_full_n sc_in sc_logic 1 signal 30 } 
	{ res_V_data_6_V_write sc_out sc_logic 1 signal 30 } 
	{ res_V_data_7_V_din sc_out sc_lv 16 signal 31 } 
	{ res_V_data_7_V_full_n sc_in sc_logic 1 signal 31 } 
	{ res_V_data_7_V_write sc_out sc_logic 1 signal 31 } 
	{ res_V_data_8_V_din sc_out sc_lv 16 signal 32 } 
	{ res_V_data_8_V_full_n sc_in sc_logic 1 signal 32 } 
	{ res_V_data_8_V_write sc_out sc_logic 1 signal 32 } 
	{ res_V_data_9_V_din sc_out sc_lv 16 signal 33 } 
	{ res_V_data_9_V_full_n sc_in sc_logic 1 signal 33 } 
	{ res_V_data_9_V_write sc_out sc_logic 1 signal 33 } 
	{ res_V_data_10_V_din sc_out sc_lv 16 signal 34 } 
	{ res_V_data_10_V_full_n sc_in sc_logic 1 signal 34 } 
	{ res_V_data_10_V_write sc_out sc_logic 1 signal 34 } 
	{ res_V_data_11_V_din sc_out sc_lv 16 signal 35 } 
	{ res_V_data_11_V_full_n sc_in sc_logic 1 signal 35 } 
	{ res_V_data_11_V_write sc_out sc_logic 1 signal 35 } 
	{ res_V_data_12_V_din sc_out sc_lv 16 signal 36 } 
	{ res_V_data_12_V_full_n sc_in sc_logic 1 signal 36 } 
	{ res_V_data_12_V_write sc_out sc_logic 1 signal 36 } 
	{ res_V_data_13_V_din sc_out sc_lv 16 signal 37 } 
	{ res_V_data_13_V_full_n sc_in sc_logic 1 signal 37 } 
	{ res_V_data_13_V_write sc_out sc_logic 1 signal 37 } 
	{ res_V_data_14_V_din sc_out sc_lv 16 signal 38 } 
	{ res_V_data_14_V_full_n sc_in sc_logic 1 signal 38 } 
	{ res_V_data_14_V_write sc_out sc_logic 1 signal 38 } 
	{ res_V_data_15_V_din sc_out sc_lv 16 signal 39 } 
	{ res_V_data_15_V_full_n sc_in sc_logic 1 signal 39 } 
	{ res_V_data_15_V_write sc_out sc_logic 1 signal 39 } 
	{ res_V_data_16_V_din sc_out sc_lv 16 signal 40 } 
	{ res_V_data_16_V_full_n sc_in sc_logic 1 signal 40 } 
	{ res_V_data_16_V_write sc_out sc_logic 1 signal 40 } 
	{ res_V_data_17_V_din sc_out sc_lv 16 signal 41 } 
	{ res_V_data_17_V_full_n sc_in sc_logic 1 signal 41 } 
	{ res_V_data_17_V_write sc_out sc_logic 1 signal 41 } 
	{ res_V_data_18_V_din sc_out sc_lv 16 signal 42 } 
	{ res_V_data_18_V_full_n sc_in sc_logic 1 signal 42 } 
	{ res_V_data_18_V_write sc_out sc_logic 1 signal 42 } 
	{ res_V_data_19_V_din sc_out sc_lv 16 signal 43 } 
	{ res_V_data_19_V_full_n sc_in sc_logic 1 signal 43 } 
	{ res_V_data_19_V_write sc_out sc_logic 1 signal 43 } 
	{ res_V_data_20_V_din sc_out sc_lv 16 signal 44 } 
	{ res_V_data_20_V_full_n sc_in sc_logic 1 signal 44 } 
	{ res_V_data_20_V_write sc_out sc_logic 1 signal 44 } 
	{ res_V_data_21_V_din sc_out sc_lv 16 signal 45 } 
	{ res_V_data_21_V_full_n sc_in sc_logic 1 signal 45 } 
	{ res_V_data_21_V_write sc_out sc_logic 1 signal 45 } 
	{ res_V_data_22_V_din sc_out sc_lv 16 signal 46 } 
	{ res_V_data_22_V_full_n sc_in sc_logic 1 signal 46 } 
	{ res_V_data_22_V_write sc_out sc_logic 1 signal 46 } 
	{ res_V_data_23_V_din sc_out sc_lv 16 signal 47 } 
	{ res_V_data_23_V_full_n sc_in sc_logic 1 signal 47 } 
	{ res_V_data_23_V_write sc_out sc_logic 1 signal 47 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "start_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_full_n", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "start_out", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_out", "role": "default" }} , 
 	{ "name": "start_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_write", "role": "default" }} , 
 	{ "name": "data_V_data_0_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_V_data_0_V", "role": "dout" }} , 
 	{ "name": "data_V_data_0_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_0_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_0_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_0_V", "role": "read" }} , 
 	{ "name": "data_V_data_1_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_V_data_1_V", "role": "dout" }} , 
 	{ "name": "data_V_data_1_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_1_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_1_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_1_V", "role": "read" }} , 
 	{ "name": "data_V_data_2_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_V_data_2_V", "role": "dout" }} , 
 	{ "name": "data_V_data_2_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_2_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_2_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_2_V", "role": "read" }} , 
 	{ "name": "data_V_data_3_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_V_data_3_V", "role": "dout" }} , 
 	{ "name": "data_V_data_3_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_3_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_3_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_3_V", "role": "read" }} , 
 	{ "name": "data_V_data_4_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_V_data_4_V", "role": "dout" }} , 
 	{ "name": "data_V_data_4_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_4_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_4_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_4_V", "role": "read" }} , 
 	{ "name": "data_V_data_5_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_V_data_5_V", "role": "dout" }} , 
 	{ "name": "data_V_data_5_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_5_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_5_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_5_V", "role": "read" }} , 
 	{ "name": "data_V_data_6_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_V_data_6_V", "role": "dout" }} , 
 	{ "name": "data_V_data_6_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_6_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_6_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_6_V", "role": "read" }} , 
 	{ "name": "data_V_data_7_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_V_data_7_V", "role": "dout" }} , 
 	{ "name": "data_V_data_7_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_7_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_7_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_7_V", "role": "read" }} , 
 	{ "name": "data_V_data_8_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_V_data_8_V", "role": "dout" }} , 
 	{ "name": "data_V_data_8_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_8_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_8_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_8_V", "role": "read" }} , 
 	{ "name": "data_V_data_9_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_V_data_9_V", "role": "dout" }} , 
 	{ "name": "data_V_data_9_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_9_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_9_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_9_V", "role": "read" }} , 
 	{ "name": "data_V_data_10_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_V_data_10_V", "role": "dout" }} , 
 	{ "name": "data_V_data_10_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_10_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_10_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_10_V", "role": "read" }} , 
 	{ "name": "data_V_data_11_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_V_data_11_V", "role": "dout" }} , 
 	{ "name": "data_V_data_11_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_11_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_11_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_11_V", "role": "read" }} , 
 	{ "name": "data_V_data_12_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_V_data_12_V", "role": "dout" }} , 
 	{ "name": "data_V_data_12_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_12_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_12_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_12_V", "role": "read" }} , 
 	{ "name": "data_V_data_13_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_V_data_13_V", "role": "dout" }} , 
 	{ "name": "data_V_data_13_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_13_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_13_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_13_V", "role": "read" }} , 
 	{ "name": "data_V_data_14_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_V_data_14_V", "role": "dout" }} , 
 	{ "name": "data_V_data_14_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_14_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_14_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_14_V", "role": "read" }} , 
 	{ "name": "data_V_data_15_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_V_data_15_V", "role": "dout" }} , 
 	{ "name": "data_V_data_15_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_15_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_15_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_15_V", "role": "read" }} , 
 	{ "name": "data_V_data_16_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_V_data_16_V", "role": "dout" }} , 
 	{ "name": "data_V_data_16_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_16_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_16_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_16_V", "role": "read" }} , 
 	{ "name": "data_V_data_17_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_V_data_17_V", "role": "dout" }} , 
 	{ "name": "data_V_data_17_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_17_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_17_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_17_V", "role": "read" }} , 
 	{ "name": "data_V_data_18_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_V_data_18_V", "role": "dout" }} , 
 	{ "name": "data_V_data_18_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_18_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_18_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_18_V", "role": "read" }} , 
 	{ "name": "data_V_data_19_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_V_data_19_V", "role": "dout" }} , 
 	{ "name": "data_V_data_19_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_19_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_19_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_19_V", "role": "read" }} , 
 	{ "name": "data_V_data_20_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_V_data_20_V", "role": "dout" }} , 
 	{ "name": "data_V_data_20_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_20_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_20_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_20_V", "role": "read" }} , 
 	{ "name": "data_V_data_21_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_V_data_21_V", "role": "dout" }} , 
 	{ "name": "data_V_data_21_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_21_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_21_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_21_V", "role": "read" }} , 
 	{ "name": "data_V_data_22_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_V_data_22_V", "role": "dout" }} , 
 	{ "name": "data_V_data_22_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_22_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_22_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_22_V", "role": "read" }} , 
 	{ "name": "data_V_data_23_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "data_V_data_23_V", "role": "dout" }} , 
 	{ "name": "data_V_data_23_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_23_V", "role": "empty_n" }} , 
 	{ "name": "data_V_data_23_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_V_data_23_V", "role": "read" }} , 
 	{ "name": "res_V_data_0_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_0_V", "role": "din" }} , 
 	{ "name": "res_V_data_0_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_0_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_0_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_0_V", "role": "write" }} , 
 	{ "name": "res_V_data_1_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_1_V", "role": "din" }} , 
 	{ "name": "res_V_data_1_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_1_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_1_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_1_V", "role": "write" }} , 
 	{ "name": "res_V_data_2_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_2_V", "role": "din" }} , 
 	{ "name": "res_V_data_2_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_2_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_2_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_2_V", "role": "write" }} , 
 	{ "name": "res_V_data_3_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_3_V", "role": "din" }} , 
 	{ "name": "res_V_data_3_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_3_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_3_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_3_V", "role": "write" }} , 
 	{ "name": "res_V_data_4_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_4_V", "role": "din" }} , 
 	{ "name": "res_V_data_4_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_4_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_4_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_4_V", "role": "write" }} , 
 	{ "name": "res_V_data_5_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_5_V", "role": "din" }} , 
 	{ "name": "res_V_data_5_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_5_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_5_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_5_V", "role": "write" }} , 
 	{ "name": "res_V_data_6_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_6_V", "role": "din" }} , 
 	{ "name": "res_V_data_6_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_6_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_6_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_6_V", "role": "write" }} , 
 	{ "name": "res_V_data_7_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_7_V", "role": "din" }} , 
 	{ "name": "res_V_data_7_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_7_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_7_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_7_V", "role": "write" }} , 
 	{ "name": "res_V_data_8_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_8_V", "role": "din" }} , 
 	{ "name": "res_V_data_8_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_8_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_8_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_8_V", "role": "write" }} , 
 	{ "name": "res_V_data_9_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_9_V", "role": "din" }} , 
 	{ "name": "res_V_data_9_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_9_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_9_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_9_V", "role": "write" }} , 
 	{ "name": "res_V_data_10_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_10_V", "role": "din" }} , 
 	{ "name": "res_V_data_10_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_10_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_10_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_10_V", "role": "write" }} , 
 	{ "name": "res_V_data_11_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_11_V", "role": "din" }} , 
 	{ "name": "res_V_data_11_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_11_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_11_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_11_V", "role": "write" }} , 
 	{ "name": "res_V_data_12_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_12_V", "role": "din" }} , 
 	{ "name": "res_V_data_12_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_12_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_12_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_12_V", "role": "write" }} , 
 	{ "name": "res_V_data_13_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_13_V", "role": "din" }} , 
 	{ "name": "res_V_data_13_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_13_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_13_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_13_V", "role": "write" }} , 
 	{ "name": "res_V_data_14_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_14_V", "role": "din" }} , 
 	{ "name": "res_V_data_14_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_14_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_14_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_14_V", "role": "write" }} , 
 	{ "name": "res_V_data_15_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_15_V", "role": "din" }} , 
 	{ "name": "res_V_data_15_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_15_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_15_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_15_V", "role": "write" }} , 
 	{ "name": "res_V_data_16_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_16_V", "role": "din" }} , 
 	{ "name": "res_V_data_16_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_16_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_16_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_16_V", "role": "write" }} , 
 	{ "name": "res_V_data_17_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_17_V", "role": "din" }} , 
 	{ "name": "res_V_data_17_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_17_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_17_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_17_V", "role": "write" }} , 
 	{ "name": "res_V_data_18_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_18_V", "role": "din" }} , 
 	{ "name": "res_V_data_18_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_18_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_18_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_18_V", "role": "write" }} , 
 	{ "name": "res_V_data_19_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_19_V", "role": "din" }} , 
 	{ "name": "res_V_data_19_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_19_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_19_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_19_V", "role": "write" }} , 
 	{ "name": "res_V_data_20_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_20_V", "role": "din" }} , 
 	{ "name": "res_V_data_20_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_20_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_20_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_20_V", "role": "write" }} , 
 	{ "name": "res_V_data_21_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_21_V", "role": "din" }} , 
 	{ "name": "res_V_data_21_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_21_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_21_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_21_V", "role": "write" }} , 
 	{ "name": "res_V_data_22_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_22_V", "role": "din" }} , 
 	{ "name": "res_V_data_22_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_22_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_22_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_22_V", "role": "write" }} , 
 	{ "name": "res_V_data_23_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_23_V", "role": "din" }} , 
 	{ "name": "res_V_data_23_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_23_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_23_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_23_V", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48"],
		"CDFG" : "pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_24u_config13_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "36", "EstimateLatencyMax" : "36",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_8_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_9_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_10_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_10_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_11_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_11_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_12_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_12_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_13_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_13_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_14_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_14_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_15_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_15_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_16_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_16_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_17_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_17_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_18_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_18_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_19_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_19_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_20_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_20_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_21_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_21_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_22_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_22_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_23_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "data_V_data_23_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_10_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_10_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_11_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_11_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_12_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_12_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_13_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_13_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_14_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_14_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_15_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_15_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_16_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_16_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_17_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_17_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_18_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_18_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_19_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_19_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_20_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_20_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_21_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_21_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_22_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_22_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_23_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_23_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "pX", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sX", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_24", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_25", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_26", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_27", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_28", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_29", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_30", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_31", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_32", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_33", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_34", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_35", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_36", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_37", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_38", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_39", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_40", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_41", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_42", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_43", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_44", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_45", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_46", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_47", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_72", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_73", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_74", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_75", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_76", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_77", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_78", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_79", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_80", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_81", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_82", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_83", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_84", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_85", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_86", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_87", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_88", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_89", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_90", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_91", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_92", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_93", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_94", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_95", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "line_buffer_Array_V_5_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_5", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_6", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_7", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_8", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_9", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_10", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_11", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_12", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_13", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_14", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_15", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_16", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_17", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_18", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_19", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_20", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_21", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_22", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_23", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_5_0_0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_5_0_1_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_5_0_2_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_5_0_3_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_5_0_4_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_5_0_5_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_5_0_6_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_5_0_7_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_5_0_8_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_5_0_9_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_5_0_10_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_5_0_11_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_5_0_12_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_5_0_13_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_5_0_14_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_5_0_15_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_5_0_16_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_5_0_17_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_5_0_18_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_5_0_19_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_5_0_20_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_5_0_21_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_5_0_22_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.line_buffer_Array_V_5_0_23_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mux_42_16_1_1_U1114", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mux_42_16_1_1_U1115", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mux_42_16_1_1_U1116", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mux_42_16_1_1_U1117", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mux_42_16_1_1_U1118", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mux_42_16_1_1_U1119", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mux_42_16_1_1_U1120", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mux_42_16_1_1_U1121", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mux_42_16_1_1_U1122", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mux_42_16_1_1_U1123", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mux_42_16_1_1_U1124", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mux_42_16_1_1_U1125", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mux_42_16_1_1_U1126", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mux_42_16_1_1_U1127", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mux_42_16_1_1_U1128", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mux_42_16_1_1_U1129", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mux_42_16_1_1_U1130", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mux_42_16_1_1_U1131", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mux_42_16_1_1_U1132", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mux_42_16_1_1_U1133", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mux_42_16_1_1_U1134", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mux_42_16_1_1_U1135", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mux_42_16_1_1_U1136", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_axi_mux_42_16_1_1_U1137", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	pooling2d_cl_array_array_ap_fixed_16_6_5_3_0_24u_config13_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_8_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_9_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_10_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_11_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_12_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_13_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_14_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_15_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_16_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_17_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_18_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_19_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_20_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_21_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_22_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_23_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_8_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_9_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_10_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_11_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_12_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_13_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_14_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_15_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_16_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_17_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_18_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_19_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_20_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_21_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_22_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_23_V {Type O LastRead -1 FirstWrite 5}
		pX {Type IO LastRead -1 FirstWrite -1}
		sX {Type IO LastRead -1 FirstWrite -1}
		pY {Type IO LastRead -1 FirstWrite -1}
		sY {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_26 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_27 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_35 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_36 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_37 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_38 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_39 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_40 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_41 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_42 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_43 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_44 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_45 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_46 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_47 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_72 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_73 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_74 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_75 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_76 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_77 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_78 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_79 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_80 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_81 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_82 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_83 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_84 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_85 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_86 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_87 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_88 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_89 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_90 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_91 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_92 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_93 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_94 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_95 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_7 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_8 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_9 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_10 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_11 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_12 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_13 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_14 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_15 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_16 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_17 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_18 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_19 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_20 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_21 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_22 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_23 {Type X LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "36", "Max" : "36"}
	, {"Name" : "Interval", "Min" : "36", "Max" : "36"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	data_V_data_0_V { ap_fifo {  { data_V_data_0_V_dout fifo_data 0 6 }  { data_V_data_0_V_empty_n fifo_status 0 1 }  { data_V_data_0_V_read fifo_update 1 1 } } }
	data_V_data_1_V { ap_fifo {  { data_V_data_1_V_dout fifo_data 0 6 }  { data_V_data_1_V_empty_n fifo_status 0 1 }  { data_V_data_1_V_read fifo_update 1 1 } } }
	data_V_data_2_V { ap_fifo {  { data_V_data_2_V_dout fifo_data 0 6 }  { data_V_data_2_V_empty_n fifo_status 0 1 }  { data_V_data_2_V_read fifo_update 1 1 } } }
	data_V_data_3_V { ap_fifo {  { data_V_data_3_V_dout fifo_data 0 6 }  { data_V_data_3_V_empty_n fifo_status 0 1 }  { data_V_data_3_V_read fifo_update 1 1 } } }
	data_V_data_4_V { ap_fifo {  { data_V_data_4_V_dout fifo_data 0 6 }  { data_V_data_4_V_empty_n fifo_status 0 1 }  { data_V_data_4_V_read fifo_update 1 1 } } }
	data_V_data_5_V { ap_fifo {  { data_V_data_5_V_dout fifo_data 0 6 }  { data_V_data_5_V_empty_n fifo_status 0 1 }  { data_V_data_5_V_read fifo_update 1 1 } } }
	data_V_data_6_V { ap_fifo {  { data_V_data_6_V_dout fifo_data 0 6 }  { data_V_data_6_V_empty_n fifo_status 0 1 }  { data_V_data_6_V_read fifo_update 1 1 } } }
	data_V_data_7_V { ap_fifo {  { data_V_data_7_V_dout fifo_data 0 6 }  { data_V_data_7_V_empty_n fifo_status 0 1 }  { data_V_data_7_V_read fifo_update 1 1 } } }
	data_V_data_8_V { ap_fifo {  { data_V_data_8_V_dout fifo_data 0 6 }  { data_V_data_8_V_empty_n fifo_status 0 1 }  { data_V_data_8_V_read fifo_update 1 1 } } }
	data_V_data_9_V { ap_fifo {  { data_V_data_9_V_dout fifo_data 0 6 }  { data_V_data_9_V_empty_n fifo_status 0 1 }  { data_V_data_9_V_read fifo_update 1 1 } } }
	data_V_data_10_V { ap_fifo {  { data_V_data_10_V_dout fifo_data 0 6 }  { data_V_data_10_V_empty_n fifo_status 0 1 }  { data_V_data_10_V_read fifo_update 1 1 } } }
	data_V_data_11_V { ap_fifo {  { data_V_data_11_V_dout fifo_data 0 6 }  { data_V_data_11_V_empty_n fifo_status 0 1 }  { data_V_data_11_V_read fifo_update 1 1 } } }
	data_V_data_12_V { ap_fifo {  { data_V_data_12_V_dout fifo_data 0 6 }  { data_V_data_12_V_empty_n fifo_status 0 1 }  { data_V_data_12_V_read fifo_update 1 1 } } }
	data_V_data_13_V { ap_fifo {  { data_V_data_13_V_dout fifo_data 0 6 }  { data_V_data_13_V_empty_n fifo_status 0 1 }  { data_V_data_13_V_read fifo_update 1 1 } } }
	data_V_data_14_V { ap_fifo {  { data_V_data_14_V_dout fifo_data 0 6 }  { data_V_data_14_V_empty_n fifo_status 0 1 }  { data_V_data_14_V_read fifo_update 1 1 } } }
	data_V_data_15_V { ap_fifo {  { data_V_data_15_V_dout fifo_data 0 6 }  { data_V_data_15_V_empty_n fifo_status 0 1 }  { data_V_data_15_V_read fifo_update 1 1 } } }
	data_V_data_16_V { ap_fifo {  { data_V_data_16_V_dout fifo_data 0 6 }  { data_V_data_16_V_empty_n fifo_status 0 1 }  { data_V_data_16_V_read fifo_update 1 1 } } }
	data_V_data_17_V { ap_fifo {  { data_V_data_17_V_dout fifo_data 0 6 }  { data_V_data_17_V_empty_n fifo_status 0 1 }  { data_V_data_17_V_read fifo_update 1 1 } } }
	data_V_data_18_V { ap_fifo {  { data_V_data_18_V_dout fifo_data 0 6 }  { data_V_data_18_V_empty_n fifo_status 0 1 }  { data_V_data_18_V_read fifo_update 1 1 } } }
	data_V_data_19_V { ap_fifo {  { data_V_data_19_V_dout fifo_data 0 6 }  { data_V_data_19_V_empty_n fifo_status 0 1 }  { data_V_data_19_V_read fifo_update 1 1 } } }
	data_V_data_20_V { ap_fifo {  { data_V_data_20_V_dout fifo_data 0 6 }  { data_V_data_20_V_empty_n fifo_status 0 1 }  { data_V_data_20_V_read fifo_update 1 1 } } }
	data_V_data_21_V { ap_fifo {  { data_V_data_21_V_dout fifo_data 0 6 }  { data_V_data_21_V_empty_n fifo_status 0 1 }  { data_V_data_21_V_read fifo_update 1 1 } } }
	data_V_data_22_V { ap_fifo {  { data_V_data_22_V_dout fifo_data 0 6 }  { data_V_data_22_V_empty_n fifo_status 0 1 }  { data_V_data_22_V_read fifo_update 1 1 } } }
	data_V_data_23_V { ap_fifo {  { data_V_data_23_V_dout fifo_data 0 6 }  { data_V_data_23_V_empty_n fifo_status 0 1 }  { data_V_data_23_V_read fifo_update 1 1 } } }
	res_V_data_0_V { ap_fifo {  { res_V_data_0_V_din fifo_data 1 16 }  { res_V_data_0_V_full_n fifo_status 0 1 }  { res_V_data_0_V_write fifo_update 1 1 } } }
	res_V_data_1_V { ap_fifo {  { res_V_data_1_V_din fifo_data 1 16 }  { res_V_data_1_V_full_n fifo_status 0 1 }  { res_V_data_1_V_write fifo_update 1 1 } } }
	res_V_data_2_V { ap_fifo {  { res_V_data_2_V_din fifo_data 1 16 }  { res_V_data_2_V_full_n fifo_status 0 1 }  { res_V_data_2_V_write fifo_update 1 1 } } }
	res_V_data_3_V { ap_fifo {  { res_V_data_3_V_din fifo_data 1 16 }  { res_V_data_3_V_full_n fifo_status 0 1 }  { res_V_data_3_V_write fifo_update 1 1 } } }
	res_V_data_4_V { ap_fifo {  { res_V_data_4_V_din fifo_data 1 16 }  { res_V_data_4_V_full_n fifo_status 0 1 }  { res_V_data_4_V_write fifo_update 1 1 } } }
	res_V_data_5_V { ap_fifo {  { res_V_data_5_V_din fifo_data 1 16 }  { res_V_data_5_V_full_n fifo_status 0 1 }  { res_V_data_5_V_write fifo_update 1 1 } } }
	res_V_data_6_V { ap_fifo {  { res_V_data_6_V_din fifo_data 1 16 }  { res_V_data_6_V_full_n fifo_status 0 1 }  { res_V_data_6_V_write fifo_update 1 1 } } }
	res_V_data_7_V { ap_fifo {  { res_V_data_7_V_din fifo_data 1 16 }  { res_V_data_7_V_full_n fifo_status 0 1 }  { res_V_data_7_V_write fifo_update 1 1 } } }
	res_V_data_8_V { ap_fifo {  { res_V_data_8_V_din fifo_data 1 16 }  { res_V_data_8_V_full_n fifo_status 0 1 }  { res_V_data_8_V_write fifo_update 1 1 } } }
	res_V_data_9_V { ap_fifo {  { res_V_data_9_V_din fifo_data 1 16 }  { res_V_data_9_V_full_n fifo_status 0 1 }  { res_V_data_9_V_write fifo_update 1 1 } } }
	res_V_data_10_V { ap_fifo {  { res_V_data_10_V_din fifo_data 1 16 }  { res_V_data_10_V_full_n fifo_status 0 1 }  { res_V_data_10_V_write fifo_update 1 1 } } }
	res_V_data_11_V { ap_fifo {  { res_V_data_11_V_din fifo_data 1 16 }  { res_V_data_11_V_full_n fifo_status 0 1 }  { res_V_data_11_V_write fifo_update 1 1 } } }
	res_V_data_12_V { ap_fifo {  { res_V_data_12_V_din fifo_data 1 16 }  { res_V_data_12_V_full_n fifo_status 0 1 }  { res_V_data_12_V_write fifo_update 1 1 } } }
	res_V_data_13_V { ap_fifo {  { res_V_data_13_V_din fifo_data 1 16 }  { res_V_data_13_V_full_n fifo_status 0 1 }  { res_V_data_13_V_write fifo_update 1 1 } } }
	res_V_data_14_V { ap_fifo {  { res_V_data_14_V_din fifo_data 1 16 }  { res_V_data_14_V_full_n fifo_status 0 1 }  { res_V_data_14_V_write fifo_update 1 1 } } }
	res_V_data_15_V { ap_fifo {  { res_V_data_15_V_din fifo_data 1 16 }  { res_V_data_15_V_full_n fifo_status 0 1 }  { res_V_data_15_V_write fifo_update 1 1 } } }
	res_V_data_16_V { ap_fifo {  { res_V_data_16_V_din fifo_data 1 16 }  { res_V_data_16_V_full_n fifo_status 0 1 }  { res_V_data_16_V_write fifo_update 1 1 } } }
	res_V_data_17_V { ap_fifo {  { res_V_data_17_V_din fifo_data 1 16 }  { res_V_data_17_V_full_n fifo_status 0 1 }  { res_V_data_17_V_write fifo_update 1 1 } } }
	res_V_data_18_V { ap_fifo {  { res_V_data_18_V_din fifo_data 1 16 }  { res_V_data_18_V_full_n fifo_status 0 1 }  { res_V_data_18_V_write fifo_update 1 1 } } }
	res_V_data_19_V { ap_fifo {  { res_V_data_19_V_din fifo_data 1 16 }  { res_V_data_19_V_full_n fifo_status 0 1 }  { res_V_data_19_V_write fifo_update 1 1 } } }
	res_V_data_20_V { ap_fifo {  { res_V_data_20_V_din fifo_data 1 16 }  { res_V_data_20_V_full_n fifo_status 0 1 }  { res_V_data_20_V_write fifo_update 1 1 } } }
	res_V_data_21_V { ap_fifo {  { res_V_data_21_V_din fifo_data 1 16 }  { res_V_data_21_V_full_n fifo_status 0 1 }  { res_V_data_21_V_write fifo_update 1 1 } } }
	res_V_data_22_V { ap_fifo {  { res_V_data_22_V_din fifo_data 1 16 }  { res_V_data_22_V_full_n fifo_status 0 1 }  { res_V_data_22_V_write fifo_update 1 1 } } }
	res_V_data_23_V { ap_fifo {  { res_V_data_23_V_din fifo_data 1 16 }  { res_V_data_23_V_full_n fifo_status 0 1 }  { res_V_data_23_V_write fifo_update 1 1 } } }
}
