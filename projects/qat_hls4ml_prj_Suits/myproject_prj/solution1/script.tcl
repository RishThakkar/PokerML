############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project myproject_prj
set_top myproject_axi
add_files firmware/myproject.cpp -cflags "-std=c++0x"
add_files firmware/myproject_axi.cpp -cflags "-std=c++0x"
add_files -tb tb_data -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
add_files -tb firmware/weights -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
add_files -tb myproject_test.cpp -cflags "-std=c++0x -Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xczu5ev-sfvc784-2LV-e}
create_clock -period 5 -name default
config_sdx -target none
config_export -format ip_catalog -rtl verilog -vivado_optimization_level 2 -vivado_phys_opt place -vivado_report_level 0
config_compile -name_max_length 80 -no_signed_zeros=0 -unsafe_math_optimizations=0
config_array_partition -include_extern_globals=0 -include_ports=0 -maximum_size 4096 -scalarize_all=0 -throughput_driven=0
config_schedule -effort medium -enable_dsp_full_reg=0 -relax_ii_for_timing -verbose=0
set_clock_uncertainty 12.5%
#source "./myproject_prj/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -flow syn -rtl verilog -format ip_catalog
