-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s_w11_V_rom is 
    generic(
             DWIDTH     : integer := 96; 
             AWIDTH     : integer := 8; 
             MEM_SIZE    : integer := 196
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s_w11_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "000011111110001110111010111001000011111110000001000011001000111001000010111111111000111100000000", 
    1 => "101101000111000101000000110011111111001100111110010100111010111010000000001001000000110100000011", 
    2 => "111001000110000011110111000000111101000100111111001000000110000010001011111111110101110101000000", 
    3 => "000100111110111100000000111110111110111111111110000000000011000101000011000000000000000001000001", 
    4 => "000001111000000100111101111011001001111001111111111111000100111100000011000100111110000101000011", 
    5 => "000001111110000100000000111111111010001011111011000110000000111010000010111100001010110110000001", 
    6 => "000010000001000011111010001000000000000010111111110111111100111101000111111100000001111011000000", 
    7 => "000101111111111110000000111111000000111110000000111101000000000101000000111110000001111111000000", 
    8 => "000100111100000110111100111101000010111000000001000001000110111100000010111110111111000101111111", 
    9 => "110111000001110111000110000011111110000011111111000100111111000011111000000000000010000000000011", 
    10 => "111111000000000001111011111111000001111110000000111111000010000010000111000010111101111101111111", 
    11 => "000000000100000011000001000000111111111110111110111011000000000001000000000000000000111011111110", 
    12 => "000010000011000110111011111100000001110111000111000001000000111000000001000000111100000011111111", 
    13 => "111000000001110011001010111000111110000010000000001101001001001001110111111100110110111010000001", 
    14 => "000000000001111001110100110111001010000100000101000111110111000100000001111111111110000000000010", 
    15 => "000101000010000010000010111111000000111111111110111110111110000010000010111101000000111110111111", 
    16 => "111111000101000101111110111111000000110110000110111011110001111000000000000110000010000110111101", 
    17 => "111001001011111111000101111010111101000011111010001111001000000010111010110111110000111011001000", 
    18 => "110101000000110100111100000000000000001000111111001000111111111010000110000100000011001001111110", 
    19 => "000010111111111111000001111110000110000000111011000000111101111111000011000001111110000000000000", 
    20 => "000101000110111111111101111011111001110110000101111010111010000001000010000011000110000111111101", 
    21 => "111111111101111000001000000011110101111111111011000010001000001000111000111101000111111111000110", 
    22 => "000000111000111110000001000101110111000010111111111100000010001000001000111111001100111001110110", 
    23 => "111110111101000000000001000001000100000000111100000000000010111111000010000000111101000000000000", 
    24 => "000010001001000010111010111001111001111000000100111100111100111111000000000101000011000100111110", 
    25 => "001000000000111101001010000001111100000000111110111101001001000001110100111011111011000000000101", 
    26 => "000001111001111010111111111101000101000001000000111100000011111100000010000100111111001000000000", 
    27 => "000000111100000000000000000000000100000000111110111111000001000010000011000010000010111110111111", 
    28 => "000110000100001000111000111011111110000100000101110101110101111001000001000101000011111100111111", 
    29 => "111001111010000000001011000101001111111110111101000100111110000000110001111100110100000011001001", 
    30 => "111111110001000010000010111111000110000010000000111111000000111111000100000000001000111010111001", 
    31 => "111110111101000000000010111111000011111111111101000101000010000000000011111100111101000000000000", 
    32 => "111111000110000111111011110101110110110100000110110010110101000011000001001110000011111110111101", 
    33 => "110011111011000010001010000011111111000000111011000101001010000010110101000100111001111011001000", 
    34 => "000000111111001100000000000001110100111011000011111100001000111110000100000011000010111100111000", 
    35 => "000000111011111111000000000000000110000001111100000010000001000010000011111111000001000010111110", 
    36 => "000000000000000000111110111101111000111001000100110111000000111011000000000101000111000110111011", 
    37 => "000001111101111111001001000000110100111101111010000000001000000110111011111111000111111110000011", 
    38 => "000001111110111111111011000010110101000101000000111011111111111100000110000010001001000001111101", 
    39 => "000010000000000000000001000000000101000010111101000000111100111111000101000001000000000001000000", 
    40 => "000110000110111010111011111011001001110101000111111011110101000011111111000000111101001101000000", 
    41 => "111010001000110111000001000000110011000000111001000110001011000000111101000000110111001001001010", 
    42 => "000110000110111101111000000110000001000010000011111111111101111011000011110110111011000100000000", 
    43 => "000001000011000110000011000000111110000000111101111111111110111110000010111111111111111011111111", 
    44 => "001011111110000100111110111101001011110110000100110011111011111111000000000001000000000100111100", 
    45 => "111000000101110010000011000011111101111011111110000110000110001100110111111110111001000011001000", 
    46 => "000100111001111001111101000111000100000110000010111101000010000010000001110110000010000010000000", 
    47 => "000010000011111111000010111110111101000000111111000011000000000001000001111111000000111111111111", 
    48 => "000111110110000011111100111110001010111000000011110101000010111110000010000100000000000100111111", 
    49 => "000000111101111011000100000011000001111110000000000001000001001010110101111011000000111101000111", 
    50 => "111011110110111011111110001100001000001000111001111010111111111111001010000000000100000001000000", 
    51 => "000010111110111111111110111011000001000000111110000011000000000010000000000010000010000000111111", 
    52 => "000000000011000110111100000000000011111010111111111111000111111101000100000001110010000001000000", 
    53 => "111100000000000000111111111110110100111010111111000011000000001000000001000100001010111110000001", 
    54 => "000010000010000001111110001000000000111110111100111011000000000111001001111100111111111100111110", 
    55 => "111100111111000011000010111110111111000000111111000010000000111111000010000010000000000000111101", 
    56 => "000001111110000111111100000010000001111100000001110111001010111010000011000101110110111111111110", 
    57 => "000101000110111010110111000011111101111000000000111110111010000101000011111000000011001001000100", 
    58 => "111101000100111111000000001010000000000111000100111010000000000011111110111111111010111100000000", 
    59 => "111011111111000001111111000011111101000000111110000010000011111110000000000000111111000000000010", 
    60 => "000100000000000010111100111001000110110110000000111011000100111000000000000010111000000110000100", 
    61 => "000001001000000101000000111110110111111000000100000111000000001101000000111000000000110101111110", 
    62 => "000011000100000000111001001000000001000100001011111110111110000000000000111010111111111110111110", 
    63 => "111110111110111111111111111011111111000010000000000110000000000001111110000010000000000000000011", 
    64 => "000110111010000010111100111011000110110101000011111011111111000000111110111111000100000101000011", 
    65 => "000010001110000000000101000010111111111100001111000011111001000110110101110111111000111110110101", 
    66 => "000010001110000000000000001001000101000011001011111000110011111010000000111110110110111110110100", 
    67 => "111111111101000101000000111100111101000001111111000101000010000000000000111110000010111101000011", 
    68 => "001010111110000000111110111100000010110110111110111000000000111110000010000000000000000110111111", 
    69 => "110001010001101110110011000011000101111000001111000100111010001101111011000110101111001001111111", 
    70 => "000101000111111000111001000110000001111101000101111100110110000110000011110111111110000011111100", 
    71 => "000001000001000010000100000000111110111111111100111111000000000001000000000001000000111100000010", 
    72 => "000100000000111101111111111110111110111101000100110011111001111100000010000101000111001001111110", 
    73 => "111011000000110110110010000000111001000110000110001001000011111101000011111010000001000110000011", 
    74 => "000011111111111000111010000111000100111111000011000000000110000000000101110110110111001000111101", 
    75 => "000100000010111011000011111111000001000001111100000000111110000000000000111100111100000010000010", 
    76 => "111111000011000010111110110110110101111000000011110100111011000011000000001011000110000000111100", 
    77 => "000001110111000000000011000100000000000000001010000000000100000010111010111010000010111101110110", 
    78 => "111101111010001100000101000000000011111101001011111001000110000000111110000111111110110110110100", 
    79 => "000000111100111110000010111111000100111111111101000001111101000010111111111101000010000011000011", 
    80 => "000011111111000011111101111000110101000000000001110111000100111110000010000110000011111111000001", 
    81 => "110001000001000101000101001000111101110101001010000100001010000100110001000000110111000000000000", 
    82 => "111111000101001011111101000001111010000010000010111001001010111111000001000110110101110011111101", 
    83 => "000000111111000010000111000010000010111100111110000010111110000000000000111111000001000000111010", 
    84 => "111111000000000011111001111110110011000100000001111100000010111111000010000101000100111001000010", 
    85 => "111101010000000111000000111111001000111110000000000001111010000001110110000011101110111010001001", 
    86 => "000010000000111111111011110111000000000000111001000010001000111110000111000000110100000011000011", 
    87 => "111111000000000000000110000010000011111111111101000100111111000001000001111110111101000000111010", 
    88 => "111110000010000010000000111100110011111100000001110111111001000000000000001010001001000000111101", 
    89 => "110110000011000110000100000001111001111010001011000000001001000000110001000110111011000000111111", 
    90 => "111000111001111111001000111100000001000011001011000101001011111110111110001000111011111111110010", 
    91 => "000000111111000000000010000001000011000001111010000001000001000000000010000000111111000001000000", 
    92 => "111110111101111111111110000010111110111011000000111101000000111110000011000010000001000101111101", 
    93 => "000100111011001011000011000101000001101101010000111001111111000100110111111111000101000010110101", 
    94 => "111111111111000011000000111111000000111111000111000001000001000000000010111110111111111101111000", 
    95 => "111100000000000001000101111111000010000010111100000010111100000010111111000011111111000000111111", 
    96 => "000110111110111100111111000000001010110111000000111101111000000110000000111101000001000011000010", 
    97 => "000101111111000010110001000110111101000000000111111001000000110011000010111101000011001010000010", 
    98 => "000010000110111110111011111111111111000011000001000101111000111110000110111011111111000001111110", 
    99 => "111111000010000010000100000000111111000001111100000011000001111110000000000000111111000000000000", 
    100 => "000100111011000100111101110011000111111011000011000010111010000010111101000010000100111101000100", 
    101 => "110101001001111101111000001001000000111000001001000000111011000000000101000001111101001011110110", 
    102 => "111110001000111100000001000001000100111110000101000101111101111111000011111100110110000011111011", 
    103 => "111101000000111101000010111111111011000100111101000010000001000000000001000001000011000001000000", 
    104 => "111101111101000101111100111110001001111101000000000000111111000000000001000111111111111111000001", 
    105 => "000000001000111010000011000010111101000001010001000010111010111101111000111100000000000111110010", 
    106 => "111110000101111101111011001010001010001010010001111110111001110110110110111001111001000011111100", 
    107 => "000000111111000001000010111101111110000001111110000000000000111111111110000010000000111111000011", 
    108 => "000001000010110110111101111111000000111111000100000011000111000000111110000000110100001000000000", 
    109 => "111001001011000010111011000010110011001001000101000110111000111000111111111110000111111111000000", 
    110 => "110110000111111011111011000100111010000111000111000010111110000001000001000011000000111101000000", 
    111 => "111111111101000001000000000001000000000010000000000000000010111010111111111111000000000001000000", 
    112 => "000010000000111010000000111101111011111110000000000011001001000010000011000011111100000111111110", 
    113 => "101011000001001001111000000010111101000110111100000101111110111101001101001101000101110100111111", 
    114 => "110111111010111100000000000100000000000000000000111110000001001001111010000101000110111010000011", 
    115 => "000011111111000001111110000000000001000001111110111111000001111100000001111110000000000011000001", 
    116 => "111111000000000000000000000011000101111110111101111111000000000000111010000001111101000010000101", 
    117 => "111111000010000011111000000001110010001010000000000100001100111100000011111100111110110111000101", 
    118 => "111001000001111101000011000101111100000101111111111101000010111101111001000001000010000010000011", 
    119 => "111110000001111110111111111110000000000001111110000011111111000000000010000010111111000001000001", 
    120 => "111101000011000001000000111111000110111100110111111100111011000101000100000100111100111101000001", 
    121 => "000000000000111010111010000010111010000110111110000100000001110101001011111001000100001011111101", 
    122 => "000010111101000010000010000001111100111110111000000111000000111110001000110100000110000000111110", 
    123 => "000000111111111111111100000000111110000011000001000000111101000000000000000001000100000001000100", 
    124 => "000111111101111111000001111100111110111101111101111111000011000101000000111110111111111111000001", 
    125 => "110111000011000010110111000110111111111010000000000001111001111010001110000001000101001001111001", 
    126 => "000000110111000001000011111111111101111101000111000100000010000101111001111011001000000000111011", 
    127 => "111101111110000100111111111110000010000001000000000010111101000000111110111111111111111100000100", 
    128 => "000110111111000001111111110111000000111011000010111101000111111110110100000100111110000100000011", 
    129 => "111100111001000001101110001010111100111011000111111010000011111100001010111111001000000111111001", 
    130 => "111010111000111100111110000011111001000000000000000010001000000010111100000000000101000100000101", 
    131 => "111010000010000010111100111111000000000001000001000101111111111111111111000010111111111101000100", 
    132 => "111001000110000111000011111001111101111101111001111100000110111111111110001100111000111100000011", 
    133 => "000101111011001100111001000011110110110001000001111100001000000010000101111100000110000000111111", 
    134 => "000001111100111100000001111110000010111100111110000000111101000001111011000000000100000101000101", 
    135 => "000000000111111110111111000000000011000001000000000101111101111111111100111101111010000000000010", 
    136 => "111111111111000100000110111011111101000101111100000000000101000001000010000111111101111000111011", 
    137 => "111010000111000000111100000001111100111011111110111111000000111110001001000101111101001001111100", 
    138 => "111110111111000011000110111011111101000001000100000001111111110111000000000101000101000010110101", 
    139 => "111101000100111110000100000010000010000001000011000001111100000000111011111111111110111111000001", 
    140 => "000101111011111110001000111110111001000010000000000001000110000001000010111111000100000000111000", 
    141 => "111100000110001000110010111011111000111100000100000011111110111101001000000101000100000000111101", 
    142 => "000110111110000100000100111100111100111111000101000001000000000001111100111100000011111010111100", 
    143 => "000010000010111111000101111110000010111111000100000101111111000011111010111010111011000001111101", 
    144 => "000000111111111100000111000000000001001100000010111111000010111110111110000010111100111110111101", 
    145 => "111111000000111110111011111010000001111010111000111111111011111101010000000110000100001100110110", 
    146 => "000000000001111011001011111111111111001010111101111111000001110111111110000011000000000101111011", 
    147 => "111111000100111111000001111111000010111111000101000000111111111111111011111110111101000000000010", 
    148 => "111010111111111011000001000101000010000111111011111111000111000000000000000011111010000010000110", 
    149 => "000010111101000101110110110101110110000101000000000001000101110110000101000100000111000000000100", 
    150 => "111100111101111011000001111111111101001111000100111111001001111000111001000011111111111111000000", 
    151 => "111110000101111110111001000000000010111110000000111111111100000000111101000010111100000011000101", 
    152 => "111111000010111110000001111101000011111110000011000101000011000011111101000000111001111111111110", 
    153 => "000101110111111010110100111110110101001001001011111111000101111100000010000000001100000000111100", 
    154 => "000001110111111100000011000001111000001100111111000000001010000000000000111011000101111001111100", 
    155 => "111101000000000001000000000011111111111111000010000000111111000000111100000001000011000010000011", 
    156 => "000000000000000110000001111111000101000010000010000100000000111011110110111010111110111101000000", 
    157 => "001001000001110100111011111100110110001001000100111111111101000110000111111101001100110110110101", 
    158 => "000100110111001001000010000001000000111101110111111101000000000011000111111100000111110110111111", 
    159 => "111100111110000001111101000011111111000010000011111111000000111111111111000011000100111111000001", 
    160 => "111101000100000011111110000010000011000000111011000100111110111011000001111011111100111110000101", 
    161 => "000001000011111010111111001000111000001001111111110100000110111101001000000011111110111111111011", 
    162 => "000001111101001110000001000001111110000001111101111110000101000001000000111101000001110010000010", 
    163 => "111110111101111101000000000001000011000000000001111111111111000001111111000010000000000111000011", 
    164 => "111010111111000100111101000010111101101110111101000001000100001100000010000010111111111110000011", 
    165 => "000100001000110111110011000111101101001010000100110100001010111011001000000001111111000010111110", 
    166 => "000001111001000100111111000001110101000101000100000000000110111100110111111110001001111000000111", 
    167 => "000000000000111111111100000010000000000000000000111111111111000000000000111111000010000010000010", 
    168 => "111110000101000101000100000001111011000000111010000001000000111100111010000001111111000001000010", 
    169 => "000110111111110101111111000110111110001010111110110100000010000001000101000000000000111001111110", 
    170 => "111111111011000011000000000001000000000001000101111111000011000010111101000000000100111101111101", 
    171 => "000010111111000000000001000010000000000010000000000000000010111100000000111111111110000000111111", 
    172 => "111011000011000100000000000101110110111111110100000000111010111000111100000000001000000100001000", 
    173 => "000101000000111110111111000110111000001101111101110111000100111100111111000000000010111000000100", 
    174 => "000001000100001010111001000011111111000000000011111011111001111110111010000001000100110011001010", 
    175 => "111110000000111110000000000000111111000011111110111110000000000000000000000000000001000000000000", 
    176 => "111111111101000110000101000010000001111000110011000011111101000100000000111101000101111100000101", 
    177 => "000110000000111111000000000001000001001110000000111001111110110011001000000000000001000001110110", 
    178 => "001000000001000100111101000000000000000101000111111111111111111101111110111101000001111000111111", 
    179 => "111110000000000000000001000011111101111111000000111100111110000001000000000011000101111110111110", 
    180 => "000011111111000011000011111101111010000101110111000010000011111001111100000000000100111110000100", 
    181 => "001001000000111111000101111100000000111110001000000000001011001001111011111011110011111001111000", 
    182 => "000100000000000100111100000000111000000001000100111111000111000010111111111110000000111000000001", 
    183 => "111100000011000001000010000100000010000000111111000000000000111101111110000000111110000011000000", 
    184 => "111010000101111101000011111111111011001010111000000000111110111010111010000011000010000001000110", 
    185 => "000000110111000100101111111000110110000100000010000100010000111111001001000010111000111001111111", 
    186 => "000000111110110101111001000010111101001101000011000001000011111111000011000001000100000000000010", 
    187 => "111011000010000010000010000000000000111101111100000001111100111110000011000011111111000011111100", 
    188 => "111011000010111101000111000100000100001100111000000010110111111101111000000011000010111110000100", 
    189 => "000101110100111111000000110111000000000111001000000000000110111111111110000010000001111101111010", 
    190 => "000001000111000000111001111110111111001110000100111111000000111110111101000000110110110111000101", 
    191 => "000000000011111111111111000001111110111101111101000000111111000000000100111111000000000001111111", 
    192 => "000001000100000000001101111110111111000010111110000000000000000011110111000000111100111001111011", 
    193 => "111110110100111111000100111111000110111011001000000000111101111000000000000100001000001111110010", 
    194 => "000010000011111011111110111110000000000001000001111110000011111110000110000000110111000111111100", 
    195 => "111110000100111110111001000001111111111111111101000001000000000000000011111110111101111111000010" );


begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s_w11_V is
    generic (
        DataWidth : INTEGER := 96;
        AddressRange : INTEGER := 196;
        AddressWidth : INTEGER := 8);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s_w11_V is
    component dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s_w11_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s_w11_V_rom_U :  component dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s_w11_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

