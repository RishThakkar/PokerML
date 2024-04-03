-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity softmax_stable_array_array_ap_fixed_16_6_5_3_0_10u_softmax_config25_s_exp_tabcdu_rom is 
    generic(
             DWIDTH     : integer := 17; 
             AWIDTH     : integer := 10; 
             MEM_SIZE    : integer := 1024
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of softmax_stable_array_array_ap_fixed_16_6_5_3_0_10u_softmax_config25_s_exp_tabcdu_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00000010000000000", 1 => "00000010001000010", 
    2 => "00000010010001000", 3 => "00000010011010011", 
    4 => "00000010100100011", 5 => "00000010101111000", 
    6 => "00000010111010010", 7 => "00000011000110010", 
    8 => "00000011010011000", 9 => "00000011100000101", 
    10 => "00000011101111001", 11 => "00000011111110100", 
    12 => "00000100001111000", 13 => "00000100100000100", 
    14 => "00000100110011000", 15 => "00000101000110111", 
    16 => "00000101011100000", 17 => "00000101110010011", 
    18 => "00000110001010010", 19 => "00000110100011110", 
    20 => "00000110111110110", 21 => "00000111011011101", 
    22 => "00000111111010010", 23 => "00001000011010111", 
    24 => "00001000111101101", 25 => "00001001100010101", 
    26 => "00001010001010000", 27 => "00001010110100000", 
    28 => "00001011100000101", 29 => "00001100010000001", 
    30 => "00001101000010101", 31 => "00001101111000100", 
    32 => "00001110110001110", 33 => "00001111101110110", 
    34 => "00010000101111110", 35 => "00010001110100111", 
    36 => "00010010111110011", 37 => "00010100001100110", 
    38 => "00010101100000001", 39 => "00010110111000111", 
    40 => "00011000010111011", 41 => "00011001111011111", 
    42 => "00011011100111000", 43 => "00011101011001000", 
    44 => "00011111010010010", 45 => "00100001010011011", 
    46 => "00100011011100111", 47 => "00100101101111001", 
    48 => "00101000001011000", 49 => "00101010110000110", 
    50 => "00101101100001010", 51 => "00110000011101001", 
    52 => "00110011100101001", 53 => "00110110111010001", 
    54 => "00111010011100110", 55 => "00111110001110000", 
    56 => "01000010001110110", 57 => "01000110100000001", 
    58 => "01001011000011001", 59 => "01001111111001000", 
    60 => "01010101000010110", 61 => "01011010100001110", 
    62 => "01100000010111011", 63 => "01100110100101001", 
    64 => "01101101001100101", 65 => "01110100001111010", 
    66 => "01111011101111001", 67 => "10000011101101111", 
    68 => "10001100001101100", 69 => "10010101010000010", 
    70 => "10011110111000010", 71 => "10101001001000001", 
    72 => "10110100000010010", 73 => "10111111101001010", 
    74 => "11001100000000011", 75 => "11011001001010011", 
    76 => "11100111001010110", 77 => "11110110000101000", 
    78 to 511=> "11111111111111111", 512 to 902=> "00000000000000000", 
    903 to 919=> "00000000000000001", 920 to 927=> "00000000000000010", 
    928 to 933=> "00000000000000011", 934 to 937=> "00000000000000100", 
    938 to 940=> "00000000000000101", 941 to 943=> "00000000000000110", 
    944 to 945=> "00000000000000111", 946 to 947=> "00000000000001000", 
    948 to 949=> "00000000000001001", 950 => "00000000000001010", 
    951 to 952=> "00000000000001011", 953 => "00000000000001100", 
    954 => "00000000000001101", 955 => "00000000000001110", 
    956 => "00000000000001111", 957 => "00000000000010000", 
    958 => "00000000000010001", 959 => "00000000000010010", 
    960 => "00000000000010011", 961 => "00000000000010100", 
    962 => "00000000000010101", 963 => "00000000000010111", 
    964 => "00000000000011000", 965 => "00000000000011010", 
    966 => "00000000000011011", 967 => "00000000000011101", 
    968 => "00000000000011111", 969 => "00000000000100001", 
    970 => "00000000000100011", 971 => "00000000000100101", 
    972 => "00000000000101000", 973 => "00000000000101010", 
    974 => "00000000000101101", 975 => "00000000000110000", 
    976 => "00000000000110011", 977 => "00000000000110110", 
    978 => "00000000000111010", 979 => "00000000000111101", 
    980 => "00000000001000001", 981 => "00000000001000110", 
    982 => "00000000001001010", 983 => "00000000001001111", 
    984 => "00000000001010100", 985 => "00000000001011001", 
    986 => "00000000001011111", 987 => "00000000001100101", 
    988 => "00000000001101100", 989 => "00000000001110011", 
    990 => "00000000001111010", 991 => "00000000010000010", 
    992 => "00000000010001011", 993 => "00000000010010100", 
    994 => "00000000010011101", 995 => "00000000010100111", 
    996 => "00000000010110010", 997 => "00000000010111101", 
    998 => "00000000011001010", 999 => "00000000011010111", 
    1000 => "00000000011100100", 1001 => "00000000011110011", 
    1002 => "00000000100000011", 1003 => "00000000100010100", 
    1004 => "00000000100100101", 1005 => "00000000100111000", 
    1006 => "00000000101001100", 1007 => "00000000101100010", 
    1008 => "00000000101111001", 1009 => "00000000110010001", 
    1010 => "00000000110101011", 1011 => "00000000111000110", 
    1012 => "00000000111100100", 1013 => "00000001000000011", 
    1014 => "00000001000100100", 1015 => "00000001001000111", 
    1016 => "00000001001101101", 1017 => "00000001010010101", 
    1018 => "00000001011000000", 1019 => "00000001011101101", 
    1020 => "00000001100011101", 1021 => "00000001101010001", 
    1022 => "00000001110001000", 1023 => "00000001111000010" );


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

entity softmax_stable_array_array_ap_fixed_16_6_5_3_0_10u_softmax_config25_s_exp_tabcdu is
    generic (
        DataWidth : INTEGER := 17;
        AddressRange : INTEGER := 1024;
        AddressWidth : INTEGER := 10);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of softmax_stable_array_array_ap_fixed_16_6_5_3_0_10u_softmax_config25_s_exp_tabcdu is
    component softmax_stable_array_array_ap_fixed_16_6_5_3_0_10u_softmax_config25_s_exp_tabcdu_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    softmax_stable_array_array_ap_fixed_16_6_5_3_0_10u_softmax_config25_s_exp_tabcdu_rom_U :  component softmax_stable_array_array_ap_fixed_16_6_5_3_0_10u_softmax_config25_s_exp_tabcdu_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


