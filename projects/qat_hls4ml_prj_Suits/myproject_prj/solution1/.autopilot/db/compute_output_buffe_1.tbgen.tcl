set moduleName compute_output_buffe_1
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
set C_modelName {compute_output_buffe.1}
set C_modelType { void 0 }
set C_modelArgList {
	{ in_elem_data_0_V_read int 16 regular  }
	{ in_elem_data_1_V_read int 16 regular  }
	{ in_elem_data_2_V_read int 16 regular  }
	{ res_stream_V_data_0_V int 16 regular {fifo 1 volatile }  }
	{ res_stream_V_data_1_V int 16 regular {fifo 1 volatile }  }
	{ res_stream_V_data_2_V int 16 regular {fifo 1 volatile }  }
	{ res_stream_V_data_3_V int 16 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in_elem_data_0_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "in_elem_data_1_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "in_elem_data_2_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "res_stream_V_data_0_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_1_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_2_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_3_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 21
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ in_elem_data_0_V_read sc_in sc_lv 16 signal 0 } 
	{ in_elem_data_1_V_read sc_in sc_lv 16 signal 1 } 
	{ in_elem_data_2_V_read sc_in sc_lv 16 signal 2 } 
	{ res_stream_V_data_0_V_din sc_out sc_lv 16 signal 3 } 
	{ res_stream_V_data_0_V_full_n sc_in sc_logic 1 signal 3 } 
	{ res_stream_V_data_0_V_write sc_out sc_logic 1 signal 3 } 
	{ res_stream_V_data_1_V_din sc_out sc_lv 16 signal 4 } 
	{ res_stream_V_data_1_V_full_n sc_in sc_logic 1 signal 4 } 
	{ res_stream_V_data_1_V_write sc_out sc_logic 1 signal 4 } 
	{ res_stream_V_data_2_V_din sc_out sc_lv 16 signal 5 } 
	{ res_stream_V_data_2_V_full_n sc_in sc_logic 1 signal 5 } 
	{ res_stream_V_data_2_V_write sc_out sc_logic 1 signal 5 } 
	{ res_stream_V_data_3_V_din sc_out sc_lv 16 signal 6 } 
	{ res_stream_V_data_3_V_full_n sc_in sc_logic 1 signal 6 } 
	{ res_stream_V_data_3_V_write sc_out sc_logic 1 signal 6 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "in_elem_data_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in_elem_data_0_V_read", "role": "default" }} , 
 	{ "name": "in_elem_data_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in_elem_data_1_V_read", "role": "default" }} , 
 	{ "name": "in_elem_data_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in_elem_data_2_V_read", "role": "default" }} , 
 	{ "name": "res_stream_V_data_0_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_0_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_0_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_1_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_1_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_1_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_2_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_2_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_2_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_3_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_3_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_3_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "6"],
		"CDFG" : "compute_output_buffe_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "111",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_resource_1_fu_212"}],
		"Port" : [
			{"Name" : "in_elem_data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "kernel_data_V_3239", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_3239"}]},
			{"Name" : "kernel_data_V_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_4"}]},
			{"Name" : "kernel_data_V_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_5"}]},
			{"Name" : "kernel_data_V_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_6"}]},
			{"Name" : "kernel_data_V_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_7"}]},
			{"Name" : "kernel_data_V_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_8"}]},
			{"Name" : "kernel_data_V_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_12"}]},
			{"Name" : "kernel_data_V_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_13"}]},
			{"Name" : "kernel_data_V_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_14"}]},
			{"Name" : "kernel_data_V_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_15"}]},
			{"Name" : "kernel_data_V_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_16"}]},
			{"Name" : "kernel_data_V_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_17"}]},
			{"Name" : "kernel_data_V_21", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_21"}]},
			{"Name" : "kernel_data_V_22", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_22"}]},
			{"Name" : "kernel_data_V_23", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_23"}]},
			{"Name" : "kernel_data_V_24", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_24"}]},
			{"Name" : "kernel_data_V_25", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_25"}]},
			{"Name" : "kernel_data_V_26", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_26"}]},
			{"Name" : "line_buffer_Array_V_21", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "call_ret2_shift_line_buffer_1_fu_274", "Port" : "line_buffer_Array_V_21"}]},
			{"Name" : "line_buffer_Array_V_10", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "call_ret2_shift_line_buffer_1_fu_274", "Port" : "line_buffer_Array_V_10"}]},
			{"Name" : "line_buffer_Array_V_20", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "call_ret2_shift_line_buffer_1_fu_274", "Port" : "line_buffer_Array_V_20"}]},
			{"Name" : "line_buffer_Array_V_9", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "call_ret2_shift_line_buffer_1_fu_274", "Port" : "line_buffer_Array_V_9"}]},
			{"Name" : "line_buffer_Array_V_19", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "call_ret2_shift_line_buffer_1_fu_274", "Port" : "line_buffer_Array_V_19"}]},
			{"Name" : "line_buffer_Array_V_8", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "call_ret2_shift_line_buffer_1_fu_274", "Port" : "line_buffer_Array_V_8"}]},
			{"Name" : "kernel_data_V_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_0"}]},
			{"Name" : "kernel_data_V_1237", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_1237"}]},
			{"Name" : "kernel_data_V_2238", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_2238"}]},
			{"Name" : "kernel_data_V_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_9"}]},
			{"Name" : "kernel_data_V_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_10"}]},
			{"Name" : "kernel_data_V_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_11"}]},
			{"Name" : "kernel_data_V_18", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_18"}]},
			{"Name" : "kernel_data_V_19", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_19"}]},
			{"Name" : "kernel_data_V_20", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "kernel_data_V_20"}]},
			{"Name" : "sX_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pX_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "outidx3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "outidx3"}]},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_1_fu_212", "Port" : "w2_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_1_fu_212", "Parent" : "0", "Child" : ["2", "3", "4", "5"],
		"CDFG" : "dense_resource_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "109", "EstimateLatencyMax" : "110",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "outidx3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "kernel_data_V_0", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_1237", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_2238", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_3239", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_4", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_5", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_6", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_7", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_8", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_9", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_10", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_11", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_12", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_13", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_14", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_15", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_16", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_17", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_18", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_19", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_20", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_21", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_22", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_23", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_24", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_25", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_26", "Type" : "None", "Direction" : "I"},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_1_fu_212.outidx3_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_1_fu_212.w2_V_U", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_1_fu_212.myproject_axi_muxkbM_U31", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_1_fu_212.myproject_axi_mullbW_U32", "Parent" : "1"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.call_ret2_shift_line_buffer_1_fu_274", "Parent" : "0", "Child" : ["7", "8", "9", "10", "11", "12"],
		"CDFG" : "shift_line_buffer_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_elem_data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_elem_data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "line_buffer_Array_V_21", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_10", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_20", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_9", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_19", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_8", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret2_shift_line_buffer_1_fu_274.line_buffer_Array_V_21_U", "Parent" : "6"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret2_shift_line_buffer_1_fu_274.line_buffer_Array_V_10_U", "Parent" : "6"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret2_shift_line_buffer_1_fu_274.line_buffer_Array_V_20_U", "Parent" : "6"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret2_shift_line_buffer_1_fu_274.line_buffer_Array_V_9_U", "Parent" : "6"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret2_shift_line_buffer_1_fu_274.line_buffer_Array_V_19_U", "Parent" : "6"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret2_shift_line_buffer_1_fu_274.line_buffer_Array_V_8_U", "Parent" : "6"}]}


set ArgLastReadFirstWriteLatency {
	compute_output_buffe_1 {
		in_elem_data_0_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_1_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_2_V_read {Type I LastRead 0 FirstWrite -1}
		res_stream_V_data_0_V {Type O LastRead -1 FirstWrite 1}
		res_stream_V_data_1_V {Type O LastRead -1 FirstWrite 1}
		res_stream_V_data_2_V {Type O LastRead -1 FirstWrite 1}
		res_stream_V_data_3_V {Type O LastRead -1 FirstWrite 1}
		kernel_data_V_3239 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_26 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_21 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_10 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_20 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_9 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_19 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_8 {Type X LastRead -1 FirstWrite -1}
		kernel_data_V_0 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1237 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2238 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_20 {Type IO LastRead -1 FirstWrite -1}
		sX_3 {Type IO LastRead -1 FirstWrite -1}
		sY_3 {Type IO LastRead -1 FirstWrite -1}
		pY_3 {Type IO LastRead -1 FirstWrite -1}
		pX_3 {Type IO LastRead -1 FirstWrite -1}
		outidx3 {Type I LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}}
	dense_resource_1 {
		outidx3 {Type I LastRead -1 FirstWrite -1}
		kernel_data_V_0 {Type I LastRead 1 FirstWrite -1}
		kernel_data_V_1237 {Type I LastRead 1 FirstWrite -1}
		kernel_data_V_2238 {Type I LastRead 1 FirstWrite -1}
		kernel_data_V_3239 {Type I LastRead 1 FirstWrite -1}
		kernel_data_V_4 {Type I LastRead 1 FirstWrite -1}
		kernel_data_V_5 {Type I LastRead 1 FirstWrite -1}
		kernel_data_V_6 {Type I LastRead 1 FirstWrite -1}
		kernel_data_V_7 {Type I LastRead 1 FirstWrite -1}
		kernel_data_V_8 {Type I LastRead 1 FirstWrite -1}
		kernel_data_V_9 {Type I LastRead 1 FirstWrite -1}
		kernel_data_V_10 {Type I LastRead 1 FirstWrite -1}
		kernel_data_V_11 {Type I LastRead 1 FirstWrite -1}
		kernel_data_V_12 {Type I LastRead 1 FirstWrite -1}
		kernel_data_V_13 {Type I LastRead 1 FirstWrite -1}
		kernel_data_V_14 {Type I LastRead 1 FirstWrite -1}
		kernel_data_V_15 {Type I LastRead 1 FirstWrite -1}
		kernel_data_V_16 {Type I LastRead 1 FirstWrite -1}
		kernel_data_V_17 {Type I LastRead 1 FirstWrite -1}
		kernel_data_V_18 {Type I LastRead 1 FirstWrite -1}
		kernel_data_V_19 {Type I LastRead 1 FirstWrite -1}
		kernel_data_V_20 {Type I LastRead 1 FirstWrite -1}
		kernel_data_V_21 {Type I LastRead 1 FirstWrite -1}
		kernel_data_V_22 {Type I LastRead 1 FirstWrite -1}
		kernel_data_V_23 {Type I LastRead 1 FirstWrite -1}
		kernel_data_V_24 {Type I LastRead 1 FirstWrite -1}
		kernel_data_V_25 {Type I LastRead 1 FirstWrite -1}
		kernel_data_V_26 {Type I LastRead 1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}}
	shift_line_buffer_1 {
		in_elem_data_0_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_1_V_read {Type I LastRead 0 FirstWrite -1}
		in_elem_data_2_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_3_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_4_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_5_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_6_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_7_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_8_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_12_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_13_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_14_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_15_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_16_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_17_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_21_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_22_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_23_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_24_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_25_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_26_V_read {Type I LastRead 0 FirstWrite -1}
		line_buffer_Array_V_21 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_10 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_20 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_9 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_19 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_8 {Type X LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1", "Max" : "111"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "111"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	in_elem_data_0_V_read { ap_none {  { in_elem_data_0_V_read in_data 0 16 } } }
	in_elem_data_1_V_read { ap_none {  { in_elem_data_1_V_read in_data 0 16 } } }
	in_elem_data_2_V_read { ap_none {  { in_elem_data_2_V_read in_data 0 16 } } }
	res_stream_V_data_0_V { ap_fifo {  { res_stream_V_data_0_V_din fifo_data 1 16 }  { res_stream_V_data_0_V_full_n fifo_status 0 1 }  { res_stream_V_data_0_V_write fifo_update 1 1 } } }
	res_stream_V_data_1_V { ap_fifo {  { res_stream_V_data_1_V_din fifo_data 1 16 }  { res_stream_V_data_1_V_full_n fifo_status 0 1 }  { res_stream_V_data_1_V_write fifo_update 1 1 } } }
	res_stream_V_data_2_V { ap_fifo {  { res_stream_V_data_2_V_din fifo_data 1 16 }  { res_stream_V_data_2_V_full_n fifo_status 0 1 }  { res_stream_V_data_2_V_write fifo_update 1 1 } } }
	res_stream_V_data_3_V { ap_fifo {  { res_stream_V_data_3_V_din fifo_data 1 16 }  { res_stream_V_data_3_V_full_n fifo_status 0 1 }  { res_stream_V_data_3_V_write fifo_update 1 1 } } }
}
