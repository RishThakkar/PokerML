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
    0 => "000000", 1 => "111000", 2 => "111110", 3 => "000010", 4 => "000111", 
    5 => "111101", 6 => "111111", 7 => "111010", 8 => "111101", 9 => "000010", 
    10 => "111101", 11 => "000100", 12 => "110101", 13 => "000010", 14 => "111111", 
    15 => "110110", 16 => "001110", 17 => "001100", 18 => "000001", 19 => "000111", 
    20 => "001010", 21 => "111111", 22 => "001100", 23 => "001111", 24 => "000100", 
    25 => "001101", 26 => "010000", 27 => "111000", 28 => "110110", 29 to 30=> "111001", 
    31 => "000001", 32 => "000000", 33 => "111010", 34 => "000010", 35 => "001011", 
    36 => "111100", 37 => "000010", 38 => "001010", 39 => "001100", 40 => "000011", 
    41 => "001011", 42 => "001000", 43 => "111011", 44 => "000110", 45 => "111110", 
    46 to 47=> "000000", 48 => "000011", 49 => "110110", 50 => "110101", 51 => "001000", 
    52 to 53=> "111100", 54 => "000010", 55 => "111101", 56 => "000111", 57 => "000100", 
    58 => "111101", 59 => "111100", 60 => "111000", 61 => "000101", 62 => "001101", 
    63 => "000100", 64 => "000011", 65 => "000110", 66 => "111000", 67 => "110110", 
    68 => "000100", 69 => "000001", 70 to 71=> "000111", 72 => "110001", 73 => "110100", 
    74 => "000101", 75 => "111000", 76 => "000001", 77 => "000110", 78 => "000101", 
    79 => "110100", 80 => "111111", 81 => "111101", 82 => "110001", 83 => "110010", 
    84 => "000101", 85 => "110011", 86 => "110110", 87 => "111011", 88 => "111000", 
    89 to 90=> "111010", 91 => "110101", 92 => "110111", 93 => "111001", 94 => "111101", 
    95 => "111011", 96 to 97=> "111111", 98 => "000011", 99 => "001010", 100 => "001101", 
    101 => "001011", 102 => "001110", 103 to 104=> "001010", 105 => "000010", 106 => "001011", 
    107 => "001110" );

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


