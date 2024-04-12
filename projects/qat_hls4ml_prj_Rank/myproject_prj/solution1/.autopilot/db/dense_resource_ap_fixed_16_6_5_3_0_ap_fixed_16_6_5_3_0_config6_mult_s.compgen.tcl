# This script segment is generated automatically by AutoPilot

set id 127
set name myproject_axi_mul_mul_6s_16s_21_1_1
set corename simcore_mul
set op mul
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 6
set in0_signed 1
set in1_width 16
set in1_signed 1
set out_width 21
set exp i0*i1
set arg_lists {i0 {6 1 +} i1 {16 1 +} p {21 1 +} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 129
set hasByteEnable 0
set MemName dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_outidx
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 2
set AddrRange 144
set AddrWd 8
set TrueReset 0
set IsROM 1
set ROMData { "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "00" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "01" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "10" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" "11" }
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
set ID 130
set hasByteEnable 0
set MemName dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_w6_V
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 6
set AddrRange 144
set AddrWd 8
set TrueReset 0
set IsROM 1
set ROMData { "000101" "000100" "000101" "000101" "010000" "001100" "001100" "000001" "111110" "000100" "000000" "001111" "001110" "000011" "001000" "111010" "000110" "111100" "000101" "111011" "111111" "000000" "000100" "111100" "000010" "110011" "111110" "111001" "001000" "110100" "001001" "000001" "001000" "110101" "110111" "111010" "110110" "111110" "000101" "001001" "000101" "000111" "001001" "111100" "111010" "000101" "001000" "111011" "111111" "001010" "001110" "000111" "110110" "000111" "001100" "111011" "111111" "001011" "001000" "111000" "110111" "111001" "000010" "001000" "001001" "000011" "000010" "110110" "001011" "111100" "001100" "110100" "000001" "001001" "000110" "111010" "000100" "001110" "001011" "110011" "001011" "111100" "001011" "111011" "000011" "111010" "001000" "110110" "000101" "000000" "000001" "111010" "010001" "110100" "110110" "001000" "111111" "111111" "111110" "000100" "111110" "111001" "110111" "000111" "111101" "111101" "000000" "001101" "001101" "001010" "000110" "000100" "001011" "111011" "001000" "111001" "000101" "000100" "000101" "110111" "000011" "000110" "001011" "111110" "000110" "111001" "001010" "111101" "001000" "111011" "111110" "110111" "000111" "000001" "111111" "001100" "001111" "111110" "000100" "000010" "001001" "110101" "000001" "111110" }
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
    id 131 \
    name kernel_data_V_1_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_0 \
    op interface \
    ports { kernel_data_V_1_0 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 132 \
    name kernel_data_V_1_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_1 \
    op interface \
    ports { kernel_data_V_1_1 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 133 \
    name kernel_data_V_1_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_2 \
    op interface \
    ports { kernel_data_V_1_2 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 134 \
    name kernel_data_V_1_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_3 \
    op interface \
    ports { kernel_data_V_1_3 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 135 \
    name kernel_data_V_1_4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_4 \
    op interface \
    ports { kernel_data_V_1_4 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 136 \
    name kernel_data_V_1_5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_5 \
    op interface \
    ports { kernel_data_V_1_5 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 137 \
    name kernel_data_V_1_6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_6 \
    op interface \
    ports { kernel_data_V_1_6 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 138 \
    name kernel_data_V_1_7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_7 \
    op interface \
    ports { kernel_data_V_1_7 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 139 \
    name kernel_data_V_1_8 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_8 \
    op interface \
    ports { kernel_data_V_1_8 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 140 \
    name kernel_data_V_1_9 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_9 \
    op interface \
    ports { kernel_data_V_1_9 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 141 \
    name kernel_data_V_1_10 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_10 \
    op interface \
    ports { kernel_data_V_1_10 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 142 \
    name kernel_data_V_1_11 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_11 \
    op interface \
    ports { kernel_data_V_1_11 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 143 \
    name kernel_data_V_1_12 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_12 \
    op interface \
    ports { kernel_data_V_1_12 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 144 \
    name kernel_data_V_1_13 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_13 \
    op interface \
    ports { kernel_data_V_1_13 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 145 \
    name kernel_data_V_1_14 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_14 \
    op interface \
    ports { kernel_data_V_1_14 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 146 \
    name kernel_data_V_1_15 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_15 \
    op interface \
    ports { kernel_data_V_1_15 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 147 \
    name kernel_data_V_1_16 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_16 \
    op interface \
    ports { kernel_data_V_1_16 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 148 \
    name kernel_data_V_1_17 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_17 \
    op interface \
    ports { kernel_data_V_1_17 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 149 \
    name kernel_data_V_1_18 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_18 \
    op interface \
    ports { kernel_data_V_1_18 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 150 \
    name kernel_data_V_1_19 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_19 \
    op interface \
    ports { kernel_data_V_1_19 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 151 \
    name kernel_data_V_1_20 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_20 \
    op interface \
    ports { kernel_data_V_1_20 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 152 \
    name kernel_data_V_1_21 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_21 \
    op interface \
    ports { kernel_data_V_1_21 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 153 \
    name kernel_data_V_1_22 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_22 \
    op interface \
    ports { kernel_data_V_1_22 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 154 \
    name kernel_data_V_1_23 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_23 \
    op interface \
    ports { kernel_data_V_1_23 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 155 \
    name kernel_data_V_1_24 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_24 \
    op interface \
    ports { kernel_data_V_1_24 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 156 \
    name kernel_data_V_1_25 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_25 \
    op interface \
    ports { kernel_data_V_1_25 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 157 \
    name kernel_data_V_1_26 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_26 \
    op interface \
    ports { kernel_data_V_1_26 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 158 \
    name kernel_data_V_1_27 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_27 \
    op interface \
    ports { kernel_data_V_1_27 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 159 \
    name kernel_data_V_1_28 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_28 \
    op interface \
    ports { kernel_data_V_1_28 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 160 \
    name kernel_data_V_1_29 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_29 \
    op interface \
    ports { kernel_data_V_1_29 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 161 \
    name kernel_data_V_1_30 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_30 \
    op interface \
    ports { kernel_data_V_1_30 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 162 \
    name kernel_data_V_1_31 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_31 \
    op interface \
    ports { kernel_data_V_1_31 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 163 \
    name kernel_data_V_1_32 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_32 \
    op interface \
    ports { kernel_data_V_1_32 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 164 \
    name kernel_data_V_1_33 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_33 \
    op interface \
    ports { kernel_data_V_1_33 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 165 \
    name kernel_data_V_1_34 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_34 \
    op interface \
    ports { kernel_data_V_1_34 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 166 \
    name kernel_data_V_1_35 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1_35 \
    op interface \
    ports { kernel_data_V_1_35 { I 16 vector } } \
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


