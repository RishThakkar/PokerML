-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_mult_s_w2_V_rom is 
    generic(
             DWIDTH     : integer := 5; 
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
    0 => "11110", 1 => "00111", 2 => "11110", 3 => "11010", 4 => "11100", 
    5 => "10101", 6 => "00110", 7 => "11110", 8 => "10011", 9 => "01100", 
    10 => "01000", 11 => "11100", 12 => "11000", 13 to 14=> "11011", 15 => "01101", 
    16 => "00111", 17 => "10110", 18 => "00010", 19 => "11101", 20 => "00001", 
    21 => "00111", 22 => "00001", 23 => "10110", 24 => "00001", 25 => "01011", 
    26 => "11111", 27 => "00011", 28 => "01011", 29 => "00001", 30 => "00011", 
    31 => "01100", 32 => "01010", 33 => "11011", 34 => "00100", 35 => "00011", 
    36 => "10110", 37 => "01011", 38 => "01100", 39 => "01000", 40 => "00101", 
    41 => "00011", 42 => "11011", 43 => "11111", 44 => "00110", 45 => "11110", 
    46 => "00011", 47 => "11011", 48 => "00000", 49 => "10101", 50 => "10011", 
    51 => "11011", 52 => "10100", 53 => "11011", 54 => "11110", 55 => "01100", 
    56 => "00110", 57 => "01100", 58 => "11101", 59 => "00010", 60 => "11111", 
    61 => "11001", 62 => "00011", 63 => "11011", 64 => "00001", 65 => "00100", 
    66 => "01011", 67 => "11100", 68 => "00100", 69 => "10110", 70 => "11001", 
    71 => "11011", 72 => "00010", 73 => "00000", 74 => "01001", 75 => "00100", 
    76 => "11100", 77 => "01000", 78 => "10111", 79 => "10100", 80 => "10001", 
    81 => "11010", 82 => "11111", 83 => "00010", 84 => "10100", 85 => "00101", 
    86 => "00110", 87 => "11011", 88 => "00011", 89 => "01100", 90 => "11010", 
    91 => "11110", 92 => "00000", 93 => "11100", 94 => "01100", 95 => "01000", 
    96 to 98=> "01011", 99 => "11101", 100 => "00000", 101 => "00101", 102 => "10111", 
    103 => "01000", 104 => "11101", 105 to 106=> "01010", 107 => "00010" );

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
        DataWidth : INTEGER := 5;
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


