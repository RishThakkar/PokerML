-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_w6_V_rom is 
    generic(
             DWIDTH     : integer := 6; 
             AWIDTH     : integer := 8; 
             MEM_SIZE    : integer := 144
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_w6_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "111000", 1 => "111110", 2 => "110010", 3 => "000001", 4 => "111101", 
    5 => "111000", 6 => "101100", 7 => "001111", 8 => "110010", 9 => "000011", 
    10 => "111110", 11 => "010000", 12 => "001101", 13 => "111101", 14 => "110110", 
    15 => "000010", 16 => "001001", 17 => "000010", 18 => "110001", 19 => "001111", 
    20 => "001000", 21 => "111101", 22 => "101100", 23 => "010010", 24 => "000001", 
    25 => "000111", 26 => "110111", 27 => "000000", 28 => "111111", 29 => "001110", 
    30 => "111010", 31 => "111111", 32 => "111100", 33 => "000001", 34 => "110000", 
    35 => "000000", 36 => "110011", 37 => "000000", 38 => "001000", 39 => "001001", 
    40 => "111110", 41 => "111101", 42 => "000101", 43 => "000111", 44 => "000100", 
    45 => "111010", 46 => "001000", 47 => "000001", 48 => "000000", 49 => "000111", 
    50 => "000000", 51 => "001100", 52 => "111001", 53 => "000101", 54 to 55=> "001100", 
    56 => "000000", 57 => "001101", 58 => "111010", 59 => "001011", 60 => "000000", 
    61 => "001100", 62 => "111001", 63 => "010011", 64 => "111100", 65 => "001101", 
    66 => "110100", 67 => "001001", 68 => "001000", 69 => "001010", 70 => "110101", 
    71 => "001000", 72 => "110010", 73 => "000111", 74 => "001011", 75 => "001101", 
    76 => "001000", 77 => "000011", 78 => "010001", 79 to 80=> "000101", 81 => "000110", 
    82 => "000100", 83 => "000101", 84 => "110111", 85 => "111000", 86 => "111101", 
    87 => "010010", 88 => "000111", 89 => "000101", 90 => "000010", 91 => "001010", 
    92 => "000110", 93 => "001110", 94 => "000101", 95 => "111010", 96 => "000100", 
    97 => "111010", 98 => "000100", 99 => "001110", 100 => "111110", 101 => "001011", 
    102 => "001101", 103 => "000010", 104 => "110010", 105 => "111110", 106 => "010000", 
    107 => "111010", 108 to 109=> "001010", 110 => "000000", 111 => "000110", 112 => "001011", 
    113 => "001000", 114 => "001011", 115 => "000111", 116 => "000001", 117 => "001100", 
    118 => "001000", 119 => "001111", 120 => "000111", 121 => "000000", 122 => "001101", 
    123 to 124=> "000001", 125 => "000100", 126 => "000101", 127 => "110111", 128 => "111001", 
    129 => "001110", 130 => "010010", 131 => "111000", 132 => "110101", 133 => "000100", 
    134 => "001010", 135 => "000001", 136 => "110011", 137 => "000010", 138 => "010000", 
    139 to 140=> "110011", 141 => "001010", 142 => "000011", 143 => "111110" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

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

entity dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_w6_V is
    generic (
        DataWidth : INTEGER := 6;
        AddressRange : INTEGER := 144;
        AddressWidth : INTEGER := 8);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_w6_V is
    component dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_w6_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_w6_V_rom_U :  component dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_mult_s_w6_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


