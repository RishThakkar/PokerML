# This script segment is generated automatically by AutoPilot

set id 31
set name myproject_axi_mux_42_32_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 32
set din0_signed 0
set din1_width 32
set din1_signed 0
set din2_width 32
set din2_signed 0
set din3_width 32
set din3_signed 0
set din4_width 2
set din4_signed 0
set dout_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 33
set hasByteEnable 0
set MemName dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_mult_s_outidx3
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 2
set AddrRange 108
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 34
set hasByteEnable 0
set MemName dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_mult_s_w2_V
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 5
set AddrRange 108
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "11110" "00111" "11110" "11010" "11100" "10101" "00110" "11110" "10011" "01100" "01000" "11100" "11000" "11011" "11011" "01101" "00111" "10110" "00010" "11101" "00001" "00111" "00001" "10110" "00001" "01011" "11111" "00011" "01011" "00001" "00011" "01100" "01010" "11011" "00100" "00011" "10110" "01011" "01100" "01000" "00101" "00011" "11011" "11111" "00110" "11110" "00011" "11011" "00000" "10101" "10011" "11011" "10100" "11011" "11110" "01100" "00110" "01100" "11101" "00010" "11111" "11001" "00011" "11011" "00001" "00100" "01011" "11100" "00100" "10110" "11001" "11011" "00010" "00000" "01001" "00100" "11100" "01000" "10111" "10100" "10001" "11010" "11111" "00010" "10100" "00101" "00110" "11011" "00011" "01100" "11010" "11110" "00000" "11100" "01100" "01000" "01011" "01011" "01011" "11101" "00000" "00101" "10111" "01000" "11101" "01010" "01010" "00010" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 35 \
    name kernel_data_V_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_0 \
    op interface \
    ports { kernel_data_V_0 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 36 \
    name kernel_data_V_1285 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1285 \
    op interface \
    ports { kernel_data_V_1285 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 37 \
    name kernel_data_V_2286 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_2286 \
    op interface \
    ports { kernel_data_V_2286 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 38 \
    name kernel_data_V_3287 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_3287 \
    op interface \
    ports { kernel_data_V_3287 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 39 \
    name kernel_data_V_4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_4 \
    op interface \
    ports { kernel_data_V_4 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 40 \
    name kernel_data_V_5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_5 \
    op interface \
    ports { kernel_data_V_5 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 41 \
    name kernel_data_V_6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_6 \
    op interface \
    ports { kernel_data_V_6 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 42 \
    name kernel_data_V_7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_7 \
    op interface \
    ports { kernel_data_V_7 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 43 \
    name kernel_data_V_8 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_8 \
    op interface \
    ports { kernel_data_V_8 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 44 \
    name kernel_data_V_9 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_9 \
    op interface \
    ports { kernel_data_V_9 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 45 \
    name kernel_data_V_10 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_10 \
    op interface \
    ports { kernel_data_V_10 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 46 \
    name kernel_data_V_11 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_11 \
    op interface \
    ports { kernel_data_V_11 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 47 \
    name kernel_data_V_12 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_12 \
    op interface \
    ports { kernel_data_V_12 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 48 \
    name kernel_data_V_13 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_13 \
    op interface \
    ports { kernel_data_V_13 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 49 \
    name kernel_data_V_14 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_14 \
    op interface \
    ports { kernel_data_V_14 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 50 \
    name kernel_data_V_15 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_15 \
    op interface \
    ports { kernel_data_V_15 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 51 \
    name kernel_data_V_16 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_16 \
    op interface \
    ports { kernel_data_V_16 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 52 \
    name kernel_data_V_17 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_17 \
    op interface \
    ports { kernel_data_V_17 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 53 \
    name kernel_data_V_18 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_18 \
    op interface \
    ports { kernel_data_V_18 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 54 \
    name kernel_data_V_19 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_19 \
    op interface \
    ports { kernel_data_V_19 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 55 \
    name kernel_data_V_20 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_20 \
    op interface \
    ports { kernel_data_V_20 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 56 \
    name kernel_data_V_21 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_21 \
    op interface \
    ports { kernel_data_V_21 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 57 \
    name kernel_data_V_22 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_22 \
    op interface \
    ports { kernel_data_V_22 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 58 \
    name kernel_data_V_23 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_23 \
    op interface \
    ports { kernel_data_V_23 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 59 \
    name kernel_data_V_24 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_24 \
    op interface \
    ports { kernel_data_V_24 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 60 \
    name kernel_data_V_25 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_25 \
    op interface \
    ports { kernel_data_V_25 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 61 \
    name kernel_data_V_26 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_26 \
    op interface \
    ports { kernel_data_V_26 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -2 \
    name ap_return \
    type ap_return \
    reset_level 1 \
    sync_rst true \
    corename ap_return \
    op interface \
    ports { ap_return { O 1 vector } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -4 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


