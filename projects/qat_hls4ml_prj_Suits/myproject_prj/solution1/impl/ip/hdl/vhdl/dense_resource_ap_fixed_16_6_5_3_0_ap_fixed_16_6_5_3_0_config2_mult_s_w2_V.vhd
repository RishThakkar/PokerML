-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_mult_s_w2_V_rom is 
    generic(
             DWIDTH     : integer := 6; 
             AWIDTH     : integer := 7; 
             MEM_SIZE    : integer := 108
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_mult_s_w2_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "000000", 1 => "110101", 2 => "000010", 3 => "111010", 4 => "111001", 
    5 => "001010", 6 => "110111", 7 => "001000", 8 => "000101", 9 => "000011", 
    10 => "111011", 11 => "001000", 12 => "000110", 13 => "111111", 14 => "111010", 
    15 => "000010", 16 => "000101", 17 => "001100", 18 => "110000", 19 => "000111", 
    20 => "000110", 21 => "111011", 22 => "000001", 23 => "001101", 24 => "000110", 
    25 => "001101", 26 => "001110", 27 => "111100", 28 => "000011", 29 => "000111", 
    30 => "001100", 31 => "001000", 32 => "000110", 33 => "001011", 34 => "111101", 
    35 => "111110", 36 => "111101", 37 => "000000", 38 => "000010", 39 => "110110", 
    40 => "000010", 41 => "000111", 42 => "111010", 43 => "000100", 44 => "111010", 
    45 => "000000", 46 => "111100", 47 => "000010", 48 => "110100", 49 to 50=> "111101", 
    51 => "101101", 52 => "111101", 53 => "111011", 54 => "110111", 55 => "001110", 
    56 => "010000", 57 => "110110", 58 => "111101", 59 => "001100", 60 => "000010", 
    61 => "001011", 62 => "001000", 63 => "111111", 64 => "000110", 65 => "111111", 
    66 => "001010", 67 => "000001", 68 => "000110", 69 => "111010", 70 => "111100", 
    71 => "001000", 72 => "110001", 73 => "101110", 74 => "110011", 75 => "000101", 
    76 => "110100", 77 => "111010", 78 => "001001", 79 => "111000", 80 => "111110", 
    81 => "101111", 82 => "111011", 83 => "111010", 84 => "110110", 85 => "111111", 
    86 => "110110", 87 => "110011", 88 => "000001", 89 => "000101", 90 => "110010", 
    91 => "000001", 92 => "001000", 93 to 94=> "111000", 95 => "000010", 96 => "000001", 
    97 => "111011", 98 => "001000", 99 => "001100", 100 => "000011", 101 => "000111", 
    102 => "000110", 103 => "001001", 104 => "111111", 105 => "001000", 106 => "001010", 
    107 => "111100" );

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

entity dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_mult_s_w2_V is
    generic (
        DataWidth : INTEGER := 6;
        AddressRange : INTEGER := 108;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_mult_s_w2_V is
    component dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_mult_s_w2_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_mult_s_w2_V_rom_U :  component dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_mult_s_w2_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


