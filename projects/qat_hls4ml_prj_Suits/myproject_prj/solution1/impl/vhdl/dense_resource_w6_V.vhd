-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_resource_w6_V_rom is 
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


architecture rtl of dense_resource_w6_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "000101", 1 => "010101", 2 => "111110", 3 => "000001", 4 => "000011", 
    5 => "010011", 6 => "000100", 7 => "010010", 8 => "111000", 9 => "010001", 
    10 => "000010", 11 => "001011", 12 => "000000", 13 => "111110", 14 => "000011", 
    15 => "001010", 16 => "000000", 17 => "001111", 18 => "000100", 19 => "010100", 
    20 => "000000", 21 => "000101", 22 => "111001", 23 => "010001", 24 => "111111", 
    25 => "000100", 26 => "001001", 27 => "010011", 28 => "111000", 29 => "000101", 
    30 => "111110", 31 => "001011", 32 => "000010", 33 => "000011", 34 => "111100", 
    35 => "001100", 36 => "111010", 37 => "111011", 38 => "010001", 39 => "111100", 
    40 => "111110", 41 => "111010", 42 => "010010", 43 => "111001", 44 => "111100", 
    45 => "000011", 46 => "001010", 47 => "000000", 48 => "111010", 49 => "110101", 
    50 => "000000", 51 => "111011", 52 => "111100", 53 => "110001", 54 => "111110", 
    55 => "110101", 56 => "111110", 57 => "110100", 58 => "111111", 59 => "111110", 
    60 => "110110", 61 => "000000", 62 => "111010", 63 => "101100", 64 => "000010", 
    65 => "101100", 66 => "110111", 67 => "110011", 68 => "001111", 69 => "111011", 
    70 => "000001", 71 => "111011", 72 => "111110", 73 => "111101", 74 => "001011", 
    75 => "000110", 76 => "001000", 77 to 78=> "001111", 79 => "001001", 80 => "001110", 
    81 => "000110", 82 => "001100", 83 => "111101", 84 => "110001", 85 => "000111", 
    86 => "111100", 87 => "110100", 88 => "000011", 89 => "000000", 90 => "001110", 
    91 => "111100", 92 => "111110", 93 => "001010", 94 => "001011", 95 => "110010", 
    96 => "110111", 97 => "110101", 98 => "111101", 99 => "001101", 100 => "110100", 
    101 to 102=> "111010", 103 => "001010", 104 => "110100", 105 => "111010", 106 => "111100", 
    107 => "111000", 108 => "111011", 109 => "110110", 110 => "101100", 111 => "000000", 
    112 => "000111", 113 => "111000", 114 => "111100", 115 => "101111", 116 => "000101", 
    117 => "110110", 118 => "110100", 119 => "111110", 120 => "000011", 121 => "000010", 
    122 => "001000", 123 => "000000", 124 => "000100", 125 => "000001", 126 => "000111", 
    127 => "111010", 128 => "001010", 129 => "110101", 130 => "111111", 131 => "101110", 
    132 => "000011", 133 => "001111", 134 => "000111", 135 => "000110", 136 => "111101", 
    137 => "000111", 138 => "000011", 139 => "110100", 140 => "000101", 141 => "000111", 
    142 => "111011", 143 => "101011" );

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

entity dense_resource_w6_V is
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

architecture arch of dense_resource_w6_V is
    component dense_resource_w6_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_resource_w6_V_rom_U :  component dense_resource_w6_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


