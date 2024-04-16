set tcldir [file dirname [info script]]
source [file join $tcldir project.tcl]

create_project project_1 ${project_name}_vivado_accelerator -part xck26-sfvc784-2LV-c -force
set_property board_part xilinx.com:kv260_som:part0:1.3 [current_project]

# Set path to HLS IP
set_property  ip_repo_paths  ${project_name}_prj [current_project]
update_ip_catalog

# Create block diagram
create_bd_design "design_1"

# Add ZynqMP PS IP
create_bd_cell -type ip -vlnv xilinx.com:ip:zynq_ultra_ps_e:3.5 zynq_ultra_ps_e_0
apply_bd_automation -rule xilinx.com:bd_rule:zynq_ultra_ps_e -config {apply_board_preset "1" }  [get_bd_cells zynq_ultra_ps_e_0]

# Add one master and one slave AXI ports to PS
set_property -dict [list CONFIG.PSU__USE__M_AXI_GP1 {0}] [get_bd_cells zynq_ultra_ps_e_0]
set_property -dict [list CONFIG.PSU__USE__S_AXI_GP0 {1}] [get_bd_cells zynq_ultra_ps_e_0]

# Add AXI DMA IP
create_bd_cell -type ip -vlnv xilinx.com:ip:axi_dma:7.1 axi_dma_0

# Disable scatter-getter interface on AXI DMA IP
set_property -dict [list CONFIG.c_include_sg {0} CONFIG.c_sg_include_stscntrl_strm {0}] [get_bd_cells axi_dma_0]

# Connect PS and AXI DMA IPs
apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config { \
    Clk_master {Auto} \
    Clk_slave {Auto} \
    Clk_xbar {Auto} \
    Master {/zynq_ultra_ps_e_0/M_AXI_HPM0_FPD} \
    Slave {/axi_dma_0/S_AXI_LITE} \
    ddr_seg {Auto} \
    intc_ip {New AXI Interconnect} \
    master_apm {0}}  [get_bd_intf_pins axi_dma_0/S_AXI_LITE]

apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config { \
    Clk_master {Auto} \
    Clk_slave {Auto} \
    Clk_xbar {Auto} \
    Master {/axi_dma_0/M_AXI_MM2S} \
    Slave {/zynq_ultra_ps_e_0/S_AXI_HPC0_FPD} \
    ddr_seg {Auto} \
    intc_ip {New AXI SmartConnect} \
    master_apm {0}}  [get_bd_intf_pins zynq_ultra_ps_e_0/S_AXI_HPC0_FPD]

apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config { \
    Clk_master {Auto} \
    Clk_slave {/zynq_ultra_ps_e_0/pl_clk0 (99 MHz)} \
    Clk_xbar {/zynq_ultra_ps_e_0/pl_clk0 (99 MHz)} \
    Master {/axi_dma_0/M_AXI_S2MM} \
    Slave {/zynq_ultra_ps_e_0/S_AXI_HPC0_FPD} \
    ddr_seg {Auto} \
    intc_ip {/axi_smc} \
    master_apm {0}}  [get_bd_intf_pins axi_dma_0/M_AXI_S2MM]

# Add HLS IP
create_bd_cell -type ip -vlnv xilinx.com:hls:myproject_axi:1.0 myproject_axi_0

# Connect HLS IP and AXI DMA IP via AXI-stream
connect_bd_intf_net [get_bd_intf_pins myproject_axi_0/out_r] [get_bd_intf_pins axi_dma_0/S_AXIS_S2MM]
connect_bd_intf_net [get_bd_intf_pins myproject_axi_0/in_r] [get_bd_intf_pins axi_dma_0/M_AXIS_MM2S]

# Connect HLS IP clock and reset
apply_bd_automation -rule xilinx.com:bd_rule:clkrst -config { \
    Clk {/zynq_ultra_ps_e_0/pl_clk0 (99 MHz)} \
    Freq {100} \
    Ref_Clk0 {} \
    Ref_Clk1 {} \
    Ref_Clk2 {}}  [get_bd_pins myproject_axi_0/ap_clk]

# Group AXI DMA and HLS IPs in a LCA hierarchy
group_bd_cells loosely_coupled_accelerator [get_bd_cells axi_dma_0] [get_bd_cells ${project_name}_axi_0]

# Top wrapper
make_wrapper -files [get_files ./${project_name}_vivado_accelerator/project_1.srcs/sources_1/bd/design_1/design_1.bd] -top
add_files -norecurse ./${project_name}_vivado_accelerator/project_1.srcs/sources_1/bd/design_1/hdl/design_1_wrapper.v

reset_run impl_1
reset_run synth_1
launch_runs impl_1 -to_step write_bitstream -jobs 6
wait_on_run -timeout 360 impl_1

open_run impl_1
report_utilization -file util.rpt -hierarchical -hierarchical_percentages
