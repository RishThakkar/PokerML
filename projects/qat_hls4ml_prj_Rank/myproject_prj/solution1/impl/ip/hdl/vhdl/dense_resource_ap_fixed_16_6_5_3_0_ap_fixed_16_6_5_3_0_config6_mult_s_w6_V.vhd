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
    0 => "000101", 1 => "000100", 2 to 3=> "000101", 4 => "010000", 5 to 6=> "001100", 
    7 => "000001", 8 => "111110", 9 => "000100", 10 => "000000", 11 => "001111", 
    12 => "001110", 13 => "000011", 14 => "001000", 15 => "111010", 16 => "000110", 
    17 => "111100", 18 => "000101", 19 => "111011", 20 => "111111", 21 => "000000", 
    22 => "000100", 23 => "111100", 24 => "000010", 25 => "110011", 26 => "111110", 
    27 => "111001", 28 => "001000", 29 => "110100", 30 => "001001", 31 => "000001", 
    32 => "001000", 33 => "110101", 34 => "110111", 35 => "111010", 36 => "110110", 
    37 => "111110", 38 => "000101", 39 => "001001", 40 => "000101", 41 => "000111", 
    42 => "001001", 43 => "111100", 44 => "111010", 45 => "000101", 46 => "001000", 
    47 => "111011", 48 => "111111", 49 => "001010", 50 => "001110", 51 => "000111", 
    52 => "110110", 53 => "000111", 54 => "001100", 55 => "111011", 56 => "111111", 
    57 => "001011", 58 => "001000", 59 => "111000", 60 => "110111", 61 => "111001", 
    62 => "000010", 63 => "001000", 64 => "001001", 65 => "000011", 66 => "000010", 
    67 => "110110", 68 => "001011", 69 => "111100", 70 => "001100", 71 => "110100", 
    72 => "000001", 73 => "001001", 74 => "000110", 75 => "111010", 76 => "000100", 
    77 => "001110", 78 => "001011", 79 => "110011", 80 => "001011", 81 => "111100", 
    82 => "001011", 83 => "111011", 84 => "000011", 85 => "111010", 86 => "001000", 
    87 => "110110", 88 => "000101", 89 => "000000", 90 => "000001", 91 => "111010", 
    92 => "010001", 93 => "110100", 94 => "110110", 95 => "001000", 96 to 97=> "111111", 
    98 => "111110", 99 => "000100", 100 => "111110", 101 => "111001", 102 => "110111", 
    103 => "000111", 104 to 105=> "111101", 106 => "000000", 107 to 108=> "001101", 109 => "001010", 
    110 => "000110", 111 => "000100", 112 => "001011", 113 => "111011", 114 => "001000", 
    115 => "111001", 116 => "000101", 117 => "000100", 118 => "000101", 119 => "110111", 
    120 => "000011", 121 => "000110", 122 => "001011", 123 => "111110", 124 => "000110", 
    125 => "111001", 126 => "001010", 127 => "111101", 128 => "001000", 129 => "111011", 
    130 => "111110", 131 => "110111", 132 => "000111", 133 => "000001", 134 => "111111", 
    135 => "001100", 136 => "001111", 137 => "111110", 138 => "000100", 139 => "000010", 
    140 => "001001", 141 => "110101", 142 => "000001", 143 => "111110" );

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


