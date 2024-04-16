vlib questa_lib/work
vlib questa_lib/msim

vlib questa_lib/msim/xilinx_vip
vlib questa_lib/msim/xpm
vlib questa_lib/msim/axi_infrastructure_v1_1_0
vlib questa_lib/msim/axi_vip_v1_1_15
vlib questa_lib/msim/zynq_ultra_ps_e_vip_v1_0_15
vlib questa_lib/msim/xil_defaultlib
vlib questa_lib/msim/lib_cdc_v1_0_2
vlib questa_lib/msim/proc_sys_reset_v5_0_14
vlib questa_lib/msim/xlconstant_v1_1_8
vlib questa_lib/msim/smartconnect_v1_0
vlib questa_lib/msim/axi_register_slice_v2_1_29
vlib questa_lib/msim/lib_pkg_v1_0_3
vlib questa_lib/msim/fifo_generator_v13_2_9
vlib questa_lib/msim/lib_fifo_v1_0_18
vlib questa_lib/msim/lib_srl_fifo_v1_0_3
vlib questa_lib/msim/axi_datamover_v5_1_31
vlib questa_lib/msim/axi_sg_v4_1_17
vlib questa_lib/msim/axi_dma_v7_1_30
vlib questa_lib/msim/xbip_utils_v3_0_11
vlib questa_lib/msim/axi_utils_v2_0_7
vlib questa_lib/msim/xbip_pipe_v3_0_7
vlib questa_lib/msim/xbip_dsp48_wrapper_v3_0_5
vlib questa_lib/msim/xbip_dsp48_addsub_v3_0_7
vlib questa_lib/msim/xbip_dsp48_multadd_v3_0_7
vlib questa_lib/msim/xbip_bram18k_v3_0_7
vlib questa_lib/msim/mult_gen_v12_0_19
vlib questa_lib/msim/floating_point_v7_1_16
vlib questa_lib/msim/generic_baseblocks_v2_1_1
vlib questa_lib/msim/axi_data_fifo_v2_1_28
vlib questa_lib/msim/axi_protocol_converter_v2_1_29
vlib questa_lib/msim/axi_clock_converter_v2_1_28
vlib questa_lib/msim/blk_mem_gen_v8_4_7
vlib questa_lib/msim/axi_dwidth_converter_v2_1_29

vmap xilinx_vip questa_lib/msim/xilinx_vip
vmap xpm questa_lib/msim/xpm
vmap axi_infrastructure_v1_1_0 questa_lib/msim/axi_infrastructure_v1_1_0
vmap axi_vip_v1_1_15 questa_lib/msim/axi_vip_v1_1_15
vmap zynq_ultra_ps_e_vip_v1_0_15 questa_lib/msim/zynq_ultra_ps_e_vip_v1_0_15
vmap xil_defaultlib questa_lib/msim/xil_defaultlib
vmap lib_cdc_v1_0_2 questa_lib/msim/lib_cdc_v1_0_2
vmap proc_sys_reset_v5_0_14 questa_lib/msim/proc_sys_reset_v5_0_14
vmap xlconstant_v1_1_8 questa_lib/msim/xlconstant_v1_1_8
vmap smartconnect_v1_0 questa_lib/msim/smartconnect_v1_0
vmap axi_register_slice_v2_1_29 questa_lib/msim/axi_register_slice_v2_1_29
vmap lib_pkg_v1_0_3 questa_lib/msim/lib_pkg_v1_0_3
vmap fifo_generator_v13_2_9 questa_lib/msim/fifo_generator_v13_2_9
vmap lib_fifo_v1_0_18 questa_lib/msim/lib_fifo_v1_0_18
vmap lib_srl_fifo_v1_0_3 questa_lib/msim/lib_srl_fifo_v1_0_3
vmap axi_datamover_v5_1_31 questa_lib/msim/axi_datamover_v5_1_31
vmap axi_sg_v4_1_17 questa_lib/msim/axi_sg_v4_1_17
vmap axi_dma_v7_1_30 questa_lib/msim/axi_dma_v7_1_30
vmap xbip_utils_v3_0_11 questa_lib/msim/xbip_utils_v3_0_11
vmap axi_utils_v2_0_7 questa_lib/msim/axi_utils_v2_0_7
vmap xbip_pipe_v3_0_7 questa_lib/msim/xbip_pipe_v3_0_7
vmap xbip_dsp48_wrapper_v3_0_5 questa_lib/msim/xbip_dsp48_wrapper_v3_0_5
vmap xbip_dsp48_addsub_v3_0_7 questa_lib/msim/xbip_dsp48_addsub_v3_0_7
vmap xbip_dsp48_multadd_v3_0_7 questa_lib/msim/xbip_dsp48_multadd_v3_0_7
vmap xbip_bram18k_v3_0_7 questa_lib/msim/xbip_bram18k_v3_0_7
vmap mult_gen_v12_0_19 questa_lib/msim/mult_gen_v12_0_19
vmap floating_point_v7_1_16 questa_lib/msim/floating_point_v7_1_16
vmap generic_baseblocks_v2_1_1 questa_lib/msim/generic_baseblocks_v2_1_1
vmap axi_data_fifo_v2_1_28 questa_lib/msim/axi_data_fifo_v2_1_28
vmap axi_protocol_converter_v2_1_29 questa_lib/msim/axi_protocol_converter_v2_1_29
vmap axi_clock_converter_v2_1_28 questa_lib/msim/axi_clock_converter_v2_1_28
vmap blk_mem_gen_v8_4_7 questa_lib/msim/blk_mem_gen_v8_4_7
vmap axi_dwidth_converter_v2_1_29 questa_lib/msim/axi_dwidth_converter_v2_1_29

vlog -work xilinx_vip -64 -incr -mfcu  -sv -L axi_vip_v1_1_15 -L smartconnect_v1_0 -L zynq_ultra_ps_e_vip_v1_0_15 -L xilinx_vip "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"/opt/xilinx/Vivado/2023.2/data/xilinx_vip/hdl/axi4stream_vip_axi4streampc.sv" \
"/opt/xilinx/Vivado/2023.2/data/xilinx_vip/hdl/axi_vip_axi4pc.sv" \
"/opt/xilinx/Vivado/2023.2/data/xilinx_vip/hdl/xil_common_vip_pkg.sv" \
"/opt/xilinx/Vivado/2023.2/data/xilinx_vip/hdl/axi4stream_vip_pkg.sv" \
"/opt/xilinx/Vivado/2023.2/data/xilinx_vip/hdl/axi_vip_pkg.sv" \
"/opt/xilinx/Vivado/2023.2/data/xilinx_vip/hdl/axi4stream_vip_if.sv" \
"/opt/xilinx/Vivado/2023.2/data/xilinx_vip/hdl/axi_vip_if.sv" \
"/opt/xilinx/Vivado/2023.2/data/xilinx_vip/hdl/clk_vip_if.sv" \
"/opt/xilinx/Vivado/2023.2/data/xilinx_vip/hdl/rst_vip_if.sv" \

vlog -work xpm -64 -incr -mfcu  -sv -L axi_vip_v1_1_15 -L smartconnect_v1_0 -L zynq_ultra_ps_e_vip_v1_0_15 -L xilinx_vip "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"/opt/xilinx/Vivado/2023.2/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"/opt/xilinx/Vivado/2023.2/data/ip/xpm/xpm_fifo/hdl/xpm_fifo.sv" \
"/opt/xilinx/Vivado/2023.2/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm -64 -93  \
"/opt/xilinx/Vivado/2023.2/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work axi_infrastructure_v1_1_0 -64 -incr -mfcu  "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl/axi_infrastructure_v1_1_vl_rfs.v" \

vlog -work axi_vip_v1_1_15 -64 -incr -mfcu  -sv -L axi_vip_v1_1_15 -L smartconnect_v1_0 -L zynq_ultra_ps_e_vip_v1_0_15 -L xilinx_vip "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5753/hdl/axi_vip_v1_1_vl_rfs.sv" \

vlog -work zynq_ultra_ps_e_vip_v1_0_15 -64 -incr -mfcu  -sv -L axi_vip_v1_1_15 -L smartconnect_v1_0 -L zynq_ultra_ps_e_vip_v1_0_15 -L xilinx_vip "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl/zynq_ultra_ps_e_vip_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib -64 -incr -mfcu  "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_zynq_ultra_ps_e_0_0/sim/design_1_zynq_ultra_ps_e_0_0_vip_wrapper.v" \

vcom -work lib_cdc_v1_0_2 -64 -93  \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/ef1e/hdl/lib_cdc_v1_0_rfs.vhd" \

vcom -work proc_sys_reset_v5_0_14 -64 -93  \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/408c/hdl/proc_sys_reset_v5_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -64 -93  \
"../../../bd/design_1/ip/design_1_rst_ps8_0_99M_0/sim/design_1_rst_ps8_0_99M_0.vhd" \

vlog -work xil_defaultlib -64 -incr -mfcu  "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/sim/bd_afc3.v" \

vlog -work xlconstant_v1_1_8 -64 -incr -mfcu  "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/d390/hdl/xlconstant_v1_1_vl_rfs.v" \

vlog -work xil_defaultlib -64 -incr -mfcu  "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_0/sim/bd_afc3_one_0.v" \

vcom -work xil_defaultlib -64 -93  \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_1/sim/bd_afc3_psr_aclk_0.vhd" \

vlog -work smartconnect_v1_0 -64 -incr -mfcu  -sv -L axi_vip_v1_1_15 -L smartconnect_v1_0 -L zynq_ultra_ps_e_vip_v1_0_15 -L xilinx_vip "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/sc_util_v1_0_vl_rfs.sv" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/bd53/hdl/sc_switchboard_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib -64 -incr -mfcu  -sv -L axi_vip_v1_1_15 -L smartconnect_v1_0 -L zynq_ultra_ps_e_vip_v1_0_15 -L xilinx_vip "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_2/sim/bd_afc3_arsw_0.sv" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_3/sim/bd_afc3_rsw_0.sv" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_4/sim/bd_afc3_awsw_0.sv" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_5/sim/bd_afc3_wsw_0.sv" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_6/sim/bd_afc3_bsw_0.sv" \

vlog -work smartconnect_v1_0 -64 -incr -mfcu  -sv -L axi_vip_v1_1_15 -L smartconnect_v1_0 -L zynq_ultra_ps_e_vip_v1_0_15 -L xilinx_vip "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/c6b2/hdl/sc_mmu_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib -64 -incr -mfcu  -sv -L axi_vip_v1_1_15 -L smartconnect_v1_0 -L zynq_ultra_ps_e_vip_v1_0_15 -L xilinx_vip "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_7/sim/bd_afc3_s00mmu_0.sv" \

vlog -work smartconnect_v1_0 -64 -incr -mfcu  -sv -L axi_vip_v1_1_15 -L smartconnect_v1_0 -L zynq_ultra_ps_e_vip_v1_0_15 -L xilinx_vip "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/abb8/hdl/sc_transaction_regulator_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib -64 -incr -mfcu  -sv -L axi_vip_v1_1_15 -L smartconnect_v1_0 -L zynq_ultra_ps_e_vip_v1_0_15 -L xilinx_vip "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_8/sim/bd_afc3_s00tr_0.sv" \

vlog -work smartconnect_v1_0 -64 -incr -mfcu  -sv -L axi_vip_v1_1_15 -L smartconnect_v1_0 -L zynq_ultra_ps_e_vip_v1_0_15 -L xilinx_vip "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/7827/hdl/sc_si_converter_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib -64 -incr -mfcu  -sv -L axi_vip_v1_1_15 -L smartconnect_v1_0 -L zynq_ultra_ps_e_vip_v1_0_15 -L xilinx_vip "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_9/sim/bd_afc3_s00sic_0.sv" \

vlog -work smartconnect_v1_0 -64 -incr -mfcu  -sv -L axi_vip_v1_1_15 -L smartconnect_v1_0 -L zynq_ultra_ps_e_vip_v1_0_15 -L xilinx_vip "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/79ce/hdl/sc_axi2sc_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib -64 -incr -mfcu  -sv -L axi_vip_v1_1_15 -L smartconnect_v1_0 -L zynq_ultra_ps_e_vip_v1_0_15 -L xilinx_vip "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_10/sim/bd_afc3_s00a2s_0.sv" \

vlog -work smartconnect_v1_0 -64 -incr -mfcu  -sv -L axi_vip_v1_1_15 -L smartconnect_v1_0 -L zynq_ultra_ps_e_vip_v1_0_15 -L xilinx_vip "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/sc_node_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib -64 -incr -mfcu  -sv -L axi_vip_v1_1_15 -L smartconnect_v1_0 -L zynq_ultra_ps_e_vip_v1_0_15 -L xilinx_vip "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_11/sim/bd_afc3_sarn_0.sv" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_12/sim/bd_afc3_srn_0.sv" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_13/sim/bd_afc3_s01mmu_0.sv" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_14/sim/bd_afc3_s01tr_0.sv" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_15/sim/bd_afc3_s01sic_0.sv" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_16/sim/bd_afc3_s01a2s_0.sv" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_17/sim/bd_afc3_sawn_0.sv" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_18/sim/bd_afc3_swn_0.sv" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_19/sim/bd_afc3_sbn_0.sv" \

vlog -work smartconnect_v1_0 -64 -incr -mfcu  -sv -L axi_vip_v1_1_15 -L smartconnect_v1_0 -L zynq_ultra_ps_e_vip_v1_0_15 -L xilinx_vip "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/ebf7/hdl/sc_sc2axi_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib -64 -incr -mfcu  -sv -L axi_vip_v1_1_15 -L smartconnect_v1_0 -L zynq_ultra_ps_e_vip_v1_0_15 -L xilinx_vip "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_20/sim/bd_afc3_m00s2a_0.sv" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_21/sim/bd_afc3_m00arn_0.sv" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_22/sim/bd_afc3_m00rn_0.sv" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_23/sim/bd_afc3_m00awn_0.sv" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_24/sim/bd_afc3_m00wn_0.sv" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_25/sim/bd_afc3_m00bn_0.sv" \

vlog -work smartconnect_v1_0 -64 -incr -mfcu  -sv -L axi_vip_v1_1_15 -L smartconnect_v1_0 -L zynq_ultra_ps_e_vip_v1_0_15 -L xilinx_vip "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/6eea/hdl/sc_exit_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib -64 -incr -mfcu  -sv -L axi_vip_v1_1_15 -L smartconnect_v1_0 -L zynq_ultra_ps_e_vip_v1_0_15 -L xilinx_vip "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_axi_smc_0/bd_0/ip/ip_26/sim/bd_afc3_m00e_0.sv" \

vlog -work axi_register_slice_v2_1_29 -64 -incr -mfcu  "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/ff9f/hdl/axi_register_slice_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib -64 -incr -mfcu  "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_axi_smc_0/sim/design_1_axi_smc_0.v" \

vcom -work lib_pkg_v1_0_3 -64 -93  \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/56d9/hdl/lib_pkg_v1_0_rfs.vhd" \

vlog -work fifo_generator_v13_2_9 -64 -incr -mfcu  "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/ac72/simulation/fifo_generator_vlog_beh.v" \

vcom -work fifo_generator_v13_2_9 -64 -93  \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/ac72/hdl/fifo_generator_v13_2_rfs.vhd" \

vlog -work fifo_generator_v13_2_9 -64 -incr -mfcu  "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/ac72/hdl/fifo_generator_v13_2_rfs.v" \

vcom -work lib_fifo_v1_0_18 -64 -93  \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/1531/hdl/lib_fifo_v1_0_rfs.vhd" \

vcom -work lib_srl_fifo_v1_0_3 -64 -93  \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/02c4/hdl/lib_srl_fifo_v1_0_rfs.vhd" \

vcom -work axi_datamover_v5_1_31 -64 -93  \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/d786/hdl/axi_datamover_v5_1_vh_rfs.vhd" \

vcom -work axi_sg_v4_1_17 -64 -93  \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/1b4d/hdl/axi_sg_v4_1_rfs.vhd" \

vcom -work axi_dma_v7_1_30 -64 -93  \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/ddec/hdl/axi_dma_v7_1_vh_rfs.vhd" \

vcom -work xil_defaultlib -64 -93  \
"../../../bd/design_1/ip/design_1_axi_dma_0_0/sim/design_1_axi_dma_0_0.vhd" \

vcom -work xbip_utils_v3_0_11 -64 -93  \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/9836/hdl/xbip_utils_v3_0_vh_rfs.vhd" \

vcom -work axi_utils_v2_0_7 -64 -93  \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/e392/hdl/axi_utils_v2_0_vh_rfs.vhd" \

vcom -work xbip_pipe_v3_0_7 -64 -93  \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/c4f2/hdl/xbip_pipe_v3_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_wrapper_v3_0_5 -64 -93  \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/e5f6/hdl/xbip_dsp48_wrapper_v3_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_addsub_v3_0_7 -64 -93  \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/9cc0/hdl/xbip_dsp48_addsub_v3_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_multadd_v3_0_7 -64 -93  \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/0fb3/hdl/xbip_dsp48_multadd_v3_0_vh_rfs.vhd" \

vcom -work xbip_bram18k_v3_0_7 -64 -93  \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/7a2e/hdl/xbip_bram18k_v3_0_vh_rfs.vhd" \

vcom -work mult_gen_v12_0_19 -64 -93  \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/e1b5/hdl/mult_gen_v12_0_vh_rfs.vhd" \

vcom -work floating_point_v7_1_16 -64 -93  \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/0994/hdl/floating_point_v7_1_rfs.vhd" \

vlog -work floating_point_v7_1_16 -64 -incr -mfcu  "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/0994/hdl/floating_point_v7_1_rfs.v" \

vlog -work xil_defaultlib -64 -incr -mfcu  "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/Block_myproject_axi_exit54_proc.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config2_s.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/compute_output_buffer_2d_array_array_ap_fixed_16_6_5_3_0_4u_config6_s.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/conv_2d_cl_array_ap_fixed_3u_array_ap_fixed_16_6_5_3_0_4u_config2_s.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config6_s.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/dense_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_13u_config11_s.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_mult_s.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_mult_s_outidx3.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_mult_s_w2_V.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_outidx.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_w6_V.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s_w11_V.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/fifo_w1_d2_A.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/fifo_w6_d841_A.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/fifo_w6_d3844_A.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/fifo_w16_d1_A.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/fifo_w16_d1_A_x.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/fifo_w16_d2_A.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/fifo_w16_d196_A.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/fifo_w16_d841_A.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/fifo_w16_d961_A.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/fifo_w16_d3844_A.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/fifo_w16_d4096_A.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/Loop_1_proc346.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/Loop_2_proc.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/myproject.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/myproject_axi_fpext_32ns_64_2_1.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/myproject_axi_mul_mul_6s_16s_21_1_1.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/myproject_axi_mul_mul_6s_16s_22_1_1.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/myproject_axi_mux_42_32_1_1.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/myproject_axi_mux_134_16_1_1.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/myproject_axi_mux_134_18_1_0.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/myproject_axi_mux_78410_16_1_1.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/pooling2d_cl_array_ap_ufixed_4u_array_ap_fixed_16_6_5_3_0_4u_config5_s.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/pooling2d_cl_array_ap_ufixed_4u_array_ap_fixed_16_6_5_3_0_4u_config5_s_line_bhbi.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/pooling2d_cl_array_ap_ufixed_4u_array_ap_fixed_16_6_5_3_0_4u_config9_s.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/pooling2d_cl_array_ap_ufixed_4u_array_ap_fixed_16_6_5_3_0_4u_config9_s_line_btde.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/reduce_ap_fixed_18_8_0_0_0_5_Op_add_ap_fixed_18_8_0_0_0_s.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/regslice_core.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/relu_array_ap_fixed_4u_array_ap_ufixed_6_0_4_0_0_4u_relu_config4_s.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/relu_array_ap_fixed_4u_array_ap_ufixed_6_0_4_0_0_4u_relu_config8_s.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/shift_line_buffer_array_ap_fixed_16_6_5_3_0_3u_config2_s.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/shift_line_buffer_array_ap_fixed_16_6_5_3_0_3u_config2_s_line_buffer_Array_V_bkb.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config6_s.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/shift_line_buffer_array_ap_fixed_16_6_5_3_0_4u_config6_s_line_buffer_Array_V_lbW.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/softmax_array_array_ap_fixed_16_6_5_3_0_13u_softmax_config12_s.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/softmax_stable_array_array_ap_fixed_16_6_5_3_0_13u_softmax_config12_s.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/softmax_stable_array_array_ap_fixed_16_6_5_3_0_13u_softmax_config12_s_exp_tabxdS.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/softmax_stable_array_array_ap_fixed_16_6_5_3_0_13u_softmax_config12_s_invert_yd2.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/start_for_Block_myproject_axi_exit54_proc_U0.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/start_for_conv_2d_cl_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_4u_config6_U0.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/start_for_dense_array_ap_fixed_4u_array_ap_fixed_16_6_5_3_0_13u_config11_U0.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/start_for_myproject_U0.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/start_for_pooling2d_cl_array_ap_ufixed_4u_array_ap_fixed_16_6_5_3_0_4u_configAem.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/start_for_pooling2d_cl_array_ap_ufixed_4u_array_ap_fixed_16_6_5_3_0_4u_configzec.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/start_for_relu_array_ap_fixed_4u_array_ap_ufixed_6_0_4_0_0_4u_relu_config4_U0.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/start_for_relu_array_ap_fixed_4u_array_ap_ufixed_6_0_4_0_0_4u_relu_config8_U0.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/start_for_softmax_array_array_ap_fixed_16_6_5_3_0_13u_softmax_config12_U0.v" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/verilog/myproject_axi.v" \

vcom -work xil_defaultlib -64 -93  \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/5485/hdl/ip/myproject_axi_ap_fpext_0_no_dsp_32.vhd" \
"../../../bd/design_1/ip/design_1_myproject_axi_0_0/sim/design_1_myproject_axi_0_0.vhd" \

vlog -work generic_baseblocks_v2_1_1 -64 -incr -mfcu  "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/10ab/hdl/generic_baseblocks_v2_1_vl_rfs.v" \

vlog -work axi_data_fifo_v2_1_28 -64 -incr -mfcu  "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/279e/hdl/axi_data_fifo_v2_1_vl_rfs.v" \

vlog -work axi_protocol_converter_v2_1_29 -64 -incr -mfcu  "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/a63f/hdl/axi_protocol_converter_v2_1_vl_rfs.v" \

vlog -work axi_clock_converter_v2_1_28 -64 -incr -mfcu  "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/769c/hdl/axi_clock_converter_v2_1_vl_rfs.v" \

vlog -work blk_mem_gen_v8_4_7 -64 -incr -mfcu  "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/3c0c/simulation/blk_mem_gen_v8_4.v" \

vlog -work axi_dwidth_converter_v2_1_29 -64 -incr -mfcu  "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../../project_1.gen/sources_1/bd/design_1/ipshared/670d/hdl/axi_dwidth_converter_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib -64 -incr -mfcu  "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/2fcd/hdl" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/f0b6/hdl/verilog" "+incdir+../../../../project_1.gen/sources_1/bd/design_1/ipshared/35de/hdl/verilog" "+incdir+/opt/xilinx/Vivado/2023.2/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_auto_ds_0/sim/design_1_auto_ds_0.v" \
"../../../bd/design_1/ip/design_1_auto_pc_0/sim/design_1_auto_pc_0.v" \
"../../../bd/design_1/sim/design_1.v" \

vlog -work xil_defaultlib \
"glbl.v"
