-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    x_0_V : IN STD_LOGIC_VECTOR (16 downto 0);
    x_1_V : IN STD_LOGIC_VECTOR (16 downto 0);
    x_2_V : IN STD_LOGIC_VECTOR (16 downto 0);
    x_3_V : IN STD_LOGIC_VECTOR (16 downto 0);
    x_4_V : IN STD_LOGIC_VECTOR (16 downto 0);
    x_5_V : IN STD_LOGIC_VECTOR (16 downto 0);
    x_6_V : IN STD_LOGIC_VECTOR (16 downto 0);
    x_7_V : IN STD_LOGIC_VECTOR (16 downto 0);
    x_8_V : IN STD_LOGIC_VECTOR (16 downto 0);
    x_9_V : IN STD_LOGIC_VECTOR (16 downto 0);
    x_V_offset : IN STD_LOGIC_VECTOR (4 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (17 downto 0);
    ap_ce : IN STD_LOGIC );
end;


architecture behav of reduce_ap_fixed_18_8_0_0_0_4_Op_add_ap_fixed_18_8_0_0_0_s is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (1 downto 0) := "10";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv3_1 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_const_lv3_2 : STD_LOGIC_VECTOR (2 downto 0) := "010";
    constant ap_const_lv3_3 : STD_LOGIC_VECTOR (2 downto 0) := "011";
    constant ap_const_lv32_12 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010010";
    constant ap_const_lv32_11 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010001";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv18_1FFFF : STD_LOGIC_VECTOR (17 downto 0) := "011111111111111111";
    constant ap_const_lv18_20000 : STD_LOGIC_VECTOR (17 downto 0) := "100000000000000000";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (1 downto 0) := "01";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal trunc_ln36_fu_118_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal trunc_ln36_reg_562 : STD_LOGIC_VECTOR (3 downto 0);
    signal add_ln43_fu_122_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal add_ln43_reg_567 : STD_LOGIC_VECTOR (2 downto 0);
    signal add_ln45_fu_128_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal add_ln45_reg_572 : STD_LOGIC_VECTOR (2 downto 0);
    signal add_ln43_1_fu_134_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal add_ln43_1_reg_577 : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_port_reg_x_0_V : STD_LOGIC_VECTOR (16 downto 0);
    signal ap_port_reg_x_1_V : STD_LOGIC_VECTOR (16 downto 0);
    signal ap_port_reg_x_2_V : STD_LOGIC_VECTOR (16 downto 0);
    signal ap_port_reg_x_3_V : STD_LOGIC_VECTOR (16 downto 0);
    signal ap_port_reg_x_4_V : STD_LOGIC_VECTOR (16 downto 0);
    signal ap_port_reg_x_5_V : STD_LOGIC_VECTOR (16 downto 0);
    signal ap_port_reg_x_6_V : STD_LOGIC_VECTOR (16 downto 0);
    signal ap_port_reg_x_7_V : STD_LOGIC_VECTOR (16 downto 0);
    signal ap_port_reg_x_8_V : STD_LOGIC_VECTOR (16 downto 0);
    signal ap_port_reg_x_9_V : STD_LOGIC_VECTOR (16 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal empty_fu_114_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal zext_ln43_fu_140_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal zext_ln43_2_fu_144_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal zext_ln43_3_fu_148_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal zext_ln43_4_fu_152_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal zext_ln43_5_fu_156_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal zext_ln43_6_fu_160_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal zext_ln43_7_fu_164_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal zext_ln43_8_fu_168_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal zext_ln43_9_fu_172_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal zext_ln43_10_fu_176_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal p_Val2_32_fu_208_p11 : STD_LOGIC_VECTOR (3 downto 0);
    signal p_Val2_s_fu_180_p12 : STD_LOGIC_VECTOR (17 downto 0);
    signal p_Val2_32_fu_208_p12 : STD_LOGIC_VECTOR (17 downto 0);
    signal rhs_V_2_fu_238_p1 : STD_LOGIC_VECTOR (18 downto 0);
    signal lhs_V_2_fu_234_p1 : STD_LOGIC_VECTOR (18 downto 0);
    signal ret_V_fu_242_p2 : STD_LOGIC_VECTOR (18 downto 0);
    signal p_Val2_34_fu_256_p2 : STD_LOGIC_VECTOR (17 downto 0);
    signal p_Result_22_fu_262_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_Result_s_fu_248_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln786_12_fu_270_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln340_25_fu_288_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln340_24_fu_282_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal underflow_fu_276_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln340_12_fu_294_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln340_128_fu_300_p3 : STD_LOGIC_VECTOR (17 downto 0);
    signal select_ln388_12_fu_308_p3 : STD_LOGIC_VECTOR (17 downto 0);
    signal p_Val2_35_fu_327_p11 : STD_LOGIC_VECTOR (3 downto 0);
    signal p_Val2_2_fu_356_p11 : STD_LOGIC_VECTOR (3 downto 0);
    signal p_Val2_35_fu_327_p12 : STD_LOGIC_VECTOR (17 downto 0);
    signal p_Val2_2_fu_356_p12 : STD_LOGIC_VECTOR (17 downto 0);
    signal rhs_V_3_fu_386_p1 : STD_LOGIC_VECTOR (18 downto 0);
    signal lhs_V_3_fu_382_p1 : STD_LOGIC_VECTOR (18 downto 0);
    signal ret_V_2_fu_390_p2 : STD_LOGIC_VECTOR (18 downto 0);
    signal p_Val2_37_fu_404_p2 : STD_LOGIC_VECTOR (17 downto 0);
    signal p_Result_24_fu_410_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_Result_23_fu_396_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln786_13_fu_418_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln340_27_fu_436_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln340_26_fu_430_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal underflow_2_fu_424_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln340_13_fu_442_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln340_130_fu_448_p3 : STD_LOGIC_VECTOR (17 downto 0);
    signal select_ln388_13_fu_456_p3 : STD_LOGIC_VECTOR (17 downto 0);
    signal p_Val2_38_fu_316_p3 : STD_LOGIC_VECTOR (17 downto 0);
    signal p_Val2_39_fu_464_p3 : STD_LOGIC_VECTOR (17 downto 0);
    signal lhs_V_fu_472_p1 : STD_LOGIC_VECTOR (18 downto 0);
    signal rhs_V_fu_476_p1 : STD_LOGIC_VECTOR (18 downto 0);
    signal ret_V_3_fu_480_p2 : STD_LOGIC_VECTOR (18 downto 0);
    signal p_Val2_41_fu_494_p2 : STD_LOGIC_VECTOR (17 downto 0);
    signal p_Result_26_fu_500_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_Result_25_fu_486_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln786_fu_508_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln340_fu_526_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln340_28_fu_520_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal underflow_3_fu_514_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln340_fu_532_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln340_fu_538_p3 : STD_LOGIC_VECTOR (17 downto 0);
    signal select_ln388_fu_546_p3 : STD_LOGIC_VECTOR (17 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (1 downto 0);

    component myproject_axi_mux_104_18_1_1 IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        din2_WIDTH : INTEGER;
        din3_WIDTH : INTEGER;
        din4_WIDTH : INTEGER;
        din5_WIDTH : INTEGER;
        din6_WIDTH : INTEGER;
        din7_WIDTH : INTEGER;
        din8_WIDTH : INTEGER;
        din9_WIDTH : INTEGER;
        din10_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din0 : IN STD_LOGIC_VECTOR (17 downto 0);
        din1 : IN STD_LOGIC_VECTOR (17 downto 0);
        din2 : IN STD_LOGIC_VECTOR (17 downto 0);
        din3 : IN STD_LOGIC_VECTOR (17 downto 0);
        din4 : IN STD_LOGIC_VECTOR (17 downto 0);
        din5 : IN STD_LOGIC_VECTOR (17 downto 0);
        din6 : IN STD_LOGIC_VECTOR (17 downto 0);
        din7 : IN STD_LOGIC_VECTOR (17 downto 0);
        din8 : IN STD_LOGIC_VECTOR (17 downto 0);
        din9 : IN STD_LOGIC_VECTOR (17 downto 0);
        din10 : IN STD_LOGIC_VECTOR (3 downto 0);
        dout : OUT STD_LOGIC_VECTOR (17 downto 0) );
    end component;



begin
    myproject_axi_mux_104_18_1_1_U1910 : component myproject_axi_mux_104_18_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 18,
        din1_WIDTH => 18,
        din2_WIDTH => 18,
        din3_WIDTH => 18,
        din4_WIDTH => 18,
        din5_WIDTH => 18,
        din6_WIDTH => 18,
        din7_WIDTH => 18,
        din8_WIDTH => 18,
        din9_WIDTH => 18,
        din10_WIDTH => 4,
        dout_WIDTH => 18)
    port map (
        din0 => zext_ln43_fu_140_p1,
        din1 => zext_ln43_2_fu_144_p1,
        din2 => zext_ln43_3_fu_148_p1,
        din3 => zext_ln43_4_fu_152_p1,
        din4 => zext_ln43_5_fu_156_p1,
        din5 => zext_ln43_6_fu_160_p1,
        din6 => zext_ln43_7_fu_164_p1,
        din7 => zext_ln43_8_fu_168_p1,
        din8 => zext_ln43_9_fu_172_p1,
        din9 => zext_ln43_10_fu_176_p1,
        din10 => trunc_ln36_reg_562,
        dout => p_Val2_s_fu_180_p12);

    myproject_axi_mux_104_18_1_1_U1911 : component myproject_axi_mux_104_18_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 18,
        din1_WIDTH => 18,
        din2_WIDTH => 18,
        din3_WIDTH => 18,
        din4_WIDTH => 18,
        din5_WIDTH => 18,
        din6_WIDTH => 18,
        din7_WIDTH => 18,
        din8_WIDTH => 18,
        din9_WIDTH => 18,
        din10_WIDTH => 4,
        dout_WIDTH => 18)
    port map (
        din0 => zext_ln43_fu_140_p1,
        din1 => zext_ln43_2_fu_144_p1,
        din2 => zext_ln43_3_fu_148_p1,
        din3 => zext_ln43_4_fu_152_p1,
        din4 => zext_ln43_5_fu_156_p1,
        din5 => zext_ln43_6_fu_160_p1,
        din6 => zext_ln43_7_fu_164_p1,
        din7 => zext_ln43_8_fu_168_p1,
        din8 => zext_ln43_9_fu_172_p1,
        din9 => zext_ln43_10_fu_176_p1,
        din10 => p_Val2_32_fu_208_p11,
        dout => p_Val2_32_fu_208_p12);

    myproject_axi_mux_104_18_1_1_U1912 : component myproject_axi_mux_104_18_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 18,
        din1_WIDTH => 18,
        din2_WIDTH => 18,
        din3_WIDTH => 18,
        din4_WIDTH => 18,
        din5_WIDTH => 18,
        din6_WIDTH => 18,
        din7_WIDTH => 18,
        din8_WIDTH => 18,
        din9_WIDTH => 18,
        din10_WIDTH => 4,
        dout_WIDTH => 18)
    port map (
        din0 => zext_ln43_fu_140_p1,
        din1 => zext_ln43_2_fu_144_p1,
        din2 => zext_ln43_3_fu_148_p1,
        din3 => zext_ln43_4_fu_152_p1,
        din4 => zext_ln43_5_fu_156_p1,
        din5 => zext_ln43_6_fu_160_p1,
        din6 => zext_ln43_7_fu_164_p1,
        din7 => zext_ln43_8_fu_168_p1,
        din8 => zext_ln43_9_fu_172_p1,
        din9 => zext_ln43_10_fu_176_p1,
        din10 => p_Val2_35_fu_327_p11,
        dout => p_Val2_35_fu_327_p12);

    myproject_axi_mux_104_18_1_1_U1913 : component myproject_axi_mux_104_18_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 18,
        din1_WIDTH => 18,
        din2_WIDTH => 18,
        din3_WIDTH => 18,
        din4_WIDTH => 18,
        din5_WIDTH => 18,
        din6_WIDTH => 18,
        din7_WIDTH => 18,
        din8_WIDTH => 18,
        din9_WIDTH => 18,
        din10_WIDTH => 4,
        dout_WIDTH => 18)
    port map (
        din0 => zext_ln43_fu_140_p1,
        din1 => zext_ln43_2_fu_144_p1,
        din2 => zext_ln43_3_fu_148_p1,
        din3 => zext_ln43_4_fu_152_p1,
        din4 => zext_ln43_5_fu_156_p1,
        din5 => zext_ln43_6_fu_160_p1,
        din6 => zext_ln43_7_fu_164_p1,
        din7 => zext_ln43_8_fu_168_p1,
        din8 => zext_ln43_9_fu_172_p1,
        din9 => zext_ln43_10_fu_176_p1,
        din10 => p_Val2_2_fu_356_p11,
        dout => p_Val2_2_fu_356_p12);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;

    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_ce) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                add_ln43_1_reg_577 <= add_ln43_1_fu_134_p2;
                add_ln43_reg_567 <= add_ln43_fu_122_p2;
                add_ln45_reg_572 <= add_ln45_fu_128_p2;
                ap_port_reg_x_0_V <= x_0_V;
                ap_port_reg_x_1_V <= x_1_V;
                ap_port_reg_x_2_V <= x_2_V;
                ap_port_reg_x_3_V <= x_3_V;
                ap_port_reg_x_4_V <= x_4_V;
                ap_port_reg_x_5_V <= x_5_V;
                ap_port_reg_x_6_V <= x_6_V;
                ap_port_reg_x_7_V <= x_7_V;
                ap_port_reg_x_8_V <= x_8_V;
                ap_port_reg_x_9_V <= x_9_V;
                trunc_ln36_reg_562 <= trunc_ln36_fu_118_p1;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_ce, ap_CS_fsm_state2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_ce) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((ap_const_logic_1 = ap_ce) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state2;
                end if;
            when others =>  
                ap_NS_fsm <= "XX";
        end case;
    end process;
    add_ln43_1_fu_134_p2 <= std_logic_vector(unsigned(ap_const_lv3_3) + unsigned(empty_fu_114_p1));
    add_ln43_fu_122_p2 <= std_logic_vector(unsigned(ap_const_lv3_1) + unsigned(empty_fu_114_p1));
    add_ln45_fu_128_p2 <= std_logic_vector(unsigned(ap_const_lv3_2) + unsigned(empty_fu_114_p1));
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_ce, ap_CS_fsm_state2)
    begin
        if ((((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)) or ((ap_const_logic_1 = ap_ce) and (ap_const_logic_1 = ap_CS_fsm_state2)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_ce, ap_CS_fsm_state2)
    begin
        if (((ap_const_logic_1 = ap_ce) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    ap_return <= 
        select_ln340_fu_538_p3 when (or_ln340_fu_532_p2(0) = '1') else 
        select_ln388_fu_546_p3;
    empty_fu_114_p1 <= x_V_offset(3 - 1 downto 0);
        lhs_V_2_fu_234_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(p_Val2_s_fu_180_p12),19));

        lhs_V_3_fu_382_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(p_Val2_35_fu_327_p12),19));

        lhs_V_fu_472_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(p_Val2_38_fu_316_p3),19));

    or_ln340_12_fu_294_p2 <= (xor_ln340_25_fu_288_p2 or p_Result_22_fu_262_p3);
    or_ln340_13_fu_442_p2 <= (xor_ln340_27_fu_436_p2 or p_Result_24_fu_410_p3);
    or_ln340_fu_532_p2 <= (xor_ln340_fu_526_p2 or p_Result_26_fu_500_p3);
    p_Result_22_fu_262_p3 <= p_Val2_34_fu_256_p2(17 downto 17);
    p_Result_23_fu_396_p3 <= ret_V_2_fu_390_p2(18 downto 18);
    p_Result_24_fu_410_p3 <= p_Val2_37_fu_404_p2(17 downto 17);
    p_Result_25_fu_486_p3 <= ret_V_3_fu_480_p2(18 downto 18);
    p_Result_26_fu_500_p3 <= p_Val2_41_fu_494_p2(17 downto 17);
    p_Result_s_fu_248_p3 <= ret_V_fu_242_p2(18 downto 18);
    p_Val2_2_fu_356_p11 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln43_1_reg_577),4));
    p_Val2_32_fu_208_p11 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln43_reg_567),4));
    p_Val2_34_fu_256_p2 <= std_logic_vector(signed(p_Val2_s_fu_180_p12) + signed(p_Val2_32_fu_208_p12));
    p_Val2_35_fu_327_p11 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln45_reg_572),4));
    p_Val2_37_fu_404_p2 <= std_logic_vector(signed(p_Val2_35_fu_327_p12) + signed(p_Val2_2_fu_356_p12));
    p_Val2_38_fu_316_p3 <= 
        select_ln340_128_fu_300_p3 when (or_ln340_12_fu_294_p2(0) = '1') else 
        select_ln388_12_fu_308_p3;
    p_Val2_39_fu_464_p3 <= 
        select_ln340_130_fu_448_p3 when (or_ln340_13_fu_442_p2(0) = '1') else 
        select_ln388_13_fu_456_p3;
    p_Val2_41_fu_494_p2 <= std_logic_vector(signed(p_Val2_39_fu_464_p3) + signed(p_Val2_38_fu_316_p3));
    ret_V_2_fu_390_p2 <= std_logic_vector(signed(rhs_V_3_fu_386_p1) + signed(lhs_V_3_fu_382_p1));
    ret_V_3_fu_480_p2 <= std_logic_vector(signed(lhs_V_fu_472_p1) + signed(rhs_V_fu_476_p1));
    ret_V_fu_242_p2 <= std_logic_vector(signed(rhs_V_2_fu_238_p1) + signed(lhs_V_2_fu_234_p1));
        rhs_V_2_fu_238_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(p_Val2_32_fu_208_p12),19));

        rhs_V_3_fu_386_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(p_Val2_2_fu_356_p12),19));

        rhs_V_fu_476_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(p_Val2_39_fu_464_p3),19));

    select_ln340_128_fu_300_p3 <= 
        ap_const_lv18_1FFFF when (xor_ln340_24_fu_282_p2(0) = '1') else 
        p_Val2_34_fu_256_p2;
    select_ln340_130_fu_448_p3 <= 
        ap_const_lv18_1FFFF when (xor_ln340_26_fu_430_p2(0) = '1') else 
        p_Val2_37_fu_404_p2;
    select_ln340_fu_538_p3 <= 
        ap_const_lv18_1FFFF when (xor_ln340_28_fu_520_p2(0) = '1') else 
        p_Val2_41_fu_494_p2;
    select_ln388_12_fu_308_p3 <= 
        ap_const_lv18_20000 when (underflow_fu_276_p2(0) = '1') else 
        p_Val2_34_fu_256_p2;
    select_ln388_13_fu_456_p3 <= 
        ap_const_lv18_20000 when (underflow_2_fu_424_p2(0) = '1') else 
        p_Val2_37_fu_404_p2;
    select_ln388_fu_546_p3 <= 
        ap_const_lv18_20000 when (underflow_3_fu_514_p2(0) = '1') else 
        p_Val2_41_fu_494_p2;
    trunc_ln36_fu_118_p1 <= x_V_offset(4 - 1 downto 0);
    underflow_2_fu_424_p2 <= (xor_ln786_13_fu_418_p2 and p_Result_23_fu_396_p3);
    underflow_3_fu_514_p2 <= (xor_ln786_fu_508_p2 and p_Result_25_fu_486_p3);
    underflow_fu_276_p2 <= (xor_ln786_12_fu_270_p2 and p_Result_s_fu_248_p3);
    xor_ln340_24_fu_282_p2 <= (p_Result_s_fu_248_p3 xor p_Result_22_fu_262_p3);
    xor_ln340_25_fu_288_p2 <= (p_Result_s_fu_248_p3 xor ap_const_lv1_1);
    xor_ln340_26_fu_430_p2 <= (p_Result_24_fu_410_p3 xor p_Result_23_fu_396_p3);
    xor_ln340_27_fu_436_p2 <= (p_Result_23_fu_396_p3 xor ap_const_lv1_1);
    xor_ln340_28_fu_520_p2 <= (p_Result_26_fu_500_p3 xor p_Result_25_fu_486_p3);
    xor_ln340_fu_526_p2 <= (p_Result_25_fu_486_p3 xor ap_const_lv1_1);
    xor_ln786_12_fu_270_p2 <= (p_Result_22_fu_262_p3 xor ap_const_lv1_1);
    xor_ln786_13_fu_418_p2 <= (p_Result_24_fu_410_p3 xor ap_const_lv1_1);
    xor_ln786_fu_508_p2 <= (p_Result_26_fu_500_p3 xor ap_const_lv1_1);
    zext_ln43_10_fu_176_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(ap_port_reg_x_9_V),18));
    zext_ln43_2_fu_144_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(ap_port_reg_x_1_V),18));
    zext_ln43_3_fu_148_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(ap_port_reg_x_2_V),18));
    zext_ln43_4_fu_152_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(ap_port_reg_x_3_V),18));
    zext_ln43_5_fu_156_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(ap_port_reg_x_4_V),18));
    zext_ln43_6_fu_160_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(ap_port_reg_x_5_V),18));
    zext_ln43_7_fu_164_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(ap_port_reg_x_6_V),18));
    zext_ln43_8_fu_168_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(ap_port_reg_x_7_V),18));
    zext_ln43_9_fu_172_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(ap_port_reg_x_8_V),18));
    zext_ln43_fu_140_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(ap_port_reg_x_0_V),18));
end behav;
