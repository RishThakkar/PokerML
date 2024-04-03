#include "relu_array_ap_fixed_42u_array_ap_ufixed_6_0_4_0_0_42u_relu_config18_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void relu_array_ap_fixed_42u_array_ap_ufixed_6_0_4_0_0_42u_relu_config18_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_pp0_stage0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter1 = real_start.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        start_once_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_0, internal_ap_ready.read()))) {
            start_once_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, internal_ap_ready.read())) {
            start_once_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln718_100_reg_7007 = icmp_ln718_100_fu_1802_p2.read();
        icmp_ln718_101_reg_7022 = icmp_ln718_101_fu_1834_p2.read();
        icmp_ln718_102_reg_7037 = icmp_ln718_102_fu_1866_p2.read();
        icmp_ln718_103_reg_7052 = icmp_ln718_103_fu_1898_p2.read();
        icmp_ln718_104_reg_7067 = icmp_ln718_104_fu_1930_p2.read();
        icmp_ln718_64_reg_6467 = icmp_ln718_64_fu_650_p2.read();
        icmp_ln718_65_reg_6482 = icmp_ln718_65_fu_682_p2.read();
        icmp_ln718_66_reg_6497 = icmp_ln718_66_fu_714_p2.read();
        icmp_ln718_67_reg_6512 = icmp_ln718_67_fu_746_p2.read();
        icmp_ln718_68_reg_6527 = icmp_ln718_68_fu_778_p2.read();
        icmp_ln718_69_reg_6542 = icmp_ln718_69_fu_810_p2.read();
        icmp_ln718_70_reg_6557 = icmp_ln718_70_fu_842_p2.read();
        icmp_ln718_71_reg_6572 = icmp_ln718_71_fu_874_p2.read();
        icmp_ln718_72_reg_6587 = icmp_ln718_72_fu_906_p2.read();
        icmp_ln718_73_reg_6602 = icmp_ln718_73_fu_938_p2.read();
        icmp_ln718_74_reg_6617 = icmp_ln718_74_fu_970_p2.read();
        icmp_ln718_75_reg_6632 = icmp_ln718_75_fu_1002_p2.read();
        icmp_ln718_76_reg_6647 = icmp_ln718_76_fu_1034_p2.read();
        icmp_ln718_77_reg_6662 = icmp_ln718_77_fu_1066_p2.read();
        icmp_ln718_78_reg_6677 = icmp_ln718_78_fu_1098_p2.read();
        icmp_ln718_79_reg_6692 = icmp_ln718_79_fu_1130_p2.read();
        icmp_ln718_80_reg_6707 = icmp_ln718_80_fu_1162_p2.read();
        icmp_ln718_81_reg_6722 = icmp_ln718_81_fu_1194_p2.read();
        icmp_ln718_82_reg_6737 = icmp_ln718_82_fu_1226_p2.read();
        icmp_ln718_83_reg_6752 = icmp_ln718_83_fu_1258_p2.read();
        icmp_ln718_84_reg_6767 = icmp_ln718_84_fu_1290_p2.read();
        icmp_ln718_85_reg_6782 = icmp_ln718_85_fu_1322_p2.read();
        icmp_ln718_86_reg_6797 = icmp_ln718_86_fu_1354_p2.read();
        icmp_ln718_87_reg_6812 = icmp_ln718_87_fu_1386_p2.read();
        icmp_ln718_88_reg_6827 = icmp_ln718_88_fu_1418_p2.read();
        icmp_ln718_89_reg_6842 = icmp_ln718_89_fu_1450_p2.read();
        icmp_ln718_90_reg_6857 = icmp_ln718_90_fu_1482_p2.read();
        icmp_ln718_91_reg_6872 = icmp_ln718_91_fu_1514_p2.read();
        icmp_ln718_92_reg_6887 = icmp_ln718_92_fu_1546_p2.read();
        icmp_ln718_93_reg_6902 = icmp_ln718_93_fu_1578_p2.read();
        icmp_ln718_94_reg_6917 = icmp_ln718_94_fu_1610_p2.read();
        icmp_ln718_95_reg_6932 = icmp_ln718_95_fu_1642_p2.read();
        icmp_ln718_96_reg_6947 = icmp_ln718_96_fu_1674_p2.read();
        icmp_ln718_97_reg_6962 = icmp_ln718_97_fu_1706_p2.read();
        icmp_ln718_98_reg_6977 = icmp_ln718_98_fu_1738_p2.read();
        icmp_ln718_99_reg_6992 = icmp_ln718_99_fu_1770_p2.read();
        icmp_ln718_reg_6452 = icmp_ln718_fu_618_p2.read();
        icmp_ln768_100_reg_7017 = icmp_ln768_100_fu_1824_p2.read();
        icmp_ln768_101_reg_7032 = icmp_ln768_101_fu_1856_p2.read();
        icmp_ln768_102_reg_7047 = icmp_ln768_102_fu_1888_p2.read();
        icmp_ln768_103_reg_7062 = icmp_ln768_103_fu_1920_p2.read();
        icmp_ln768_104_reg_7077 = icmp_ln768_104_fu_1952_p2.read();
        icmp_ln768_64_reg_6477 = icmp_ln768_64_fu_672_p2.read();
        icmp_ln768_65_reg_6492 = icmp_ln768_65_fu_704_p2.read();
        icmp_ln768_66_reg_6507 = icmp_ln768_66_fu_736_p2.read();
        icmp_ln768_67_reg_6522 = icmp_ln768_67_fu_768_p2.read();
        icmp_ln768_68_reg_6537 = icmp_ln768_68_fu_800_p2.read();
        icmp_ln768_69_reg_6552 = icmp_ln768_69_fu_832_p2.read();
        icmp_ln768_70_reg_6567 = icmp_ln768_70_fu_864_p2.read();
        icmp_ln768_71_reg_6582 = icmp_ln768_71_fu_896_p2.read();
        icmp_ln768_72_reg_6597 = icmp_ln768_72_fu_928_p2.read();
        icmp_ln768_73_reg_6612 = icmp_ln768_73_fu_960_p2.read();
        icmp_ln768_74_reg_6627 = icmp_ln768_74_fu_992_p2.read();
        icmp_ln768_75_reg_6642 = icmp_ln768_75_fu_1024_p2.read();
        icmp_ln768_76_reg_6657 = icmp_ln768_76_fu_1056_p2.read();
        icmp_ln768_77_reg_6672 = icmp_ln768_77_fu_1088_p2.read();
        icmp_ln768_78_reg_6687 = icmp_ln768_78_fu_1120_p2.read();
        icmp_ln768_79_reg_6702 = icmp_ln768_79_fu_1152_p2.read();
        icmp_ln768_80_reg_6717 = icmp_ln768_80_fu_1184_p2.read();
        icmp_ln768_81_reg_6732 = icmp_ln768_81_fu_1216_p2.read();
        icmp_ln768_82_reg_6747 = icmp_ln768_82_fu_1248_p2.read();
        icmp_ln768_83_reg_6762 = icmp_ln768_83_fu_1280_p2.read();
        icmp_ln768_84_reg_6777 = icmp_ln768_84_fu_1312_p2.read();
        icmp_ln768_85_reg_6792 = icmp_ln768_85_fu_1344_p2.read();
        icmp_ln768_86_reg_6807 = icmp_ln768_86_fu_1376_p2.read();
        icmp_ln768_87_reg_6822 = icmp_ln768_87_fu_1408_p2.read();
        icmp_ln768_88_reg_6837 = icmp_ln768_88_fu_1440_p2.read();
        icmp_ln768_89_reg_6852 = icmp_ln768_89_fu_1472_p2.read();
        icmp_ln768_90_reg_6867 = icmp_ln768_90_fu_1504_p2.read();
        icmp_ln768_91_reg_6882 = icmp_ln768_91_fu_1536_p2.read();
        icmp_ln768_92_reg_6897 = icmp_ln768_92_fu_1568_p2.read();
        icmp_ln768_93_reg_6912 = icmp_ln768_93_fu_1600_p2.read();
        icmp_ln768_94_reg_6927 = icmp_ln768_94_fu_1632_p2.read();
        icmp_ln768_95_reg_6942 = icmp_ln768_95_fu_1664_p2.read();
        icmp_ln768_96_reg_6957 = icmp_ln768_96_fu_1696_p2.read();
        icmp_ln768_97_reg_6972 = icmp_ln768_97_fu_1728_p2.read();
        icmp_ln768_98_reg_6987 = icmp_ln768_98_fu_1760_p2.read();
        icmp_ln768_99_reg_7002 = icmp_ln768_99_fu_1792_p2.read();
        icmp_ln768_reg_6462 = icmp_ln768_fu_640_p2.read();
        icmp_ln879_100_reg_7012 = icmp_ln879_100_fu_1818_p2.read();
        icmp_ln879_101_reg_7027 = icmp_ln879_101_fu_1850_p2.read();
        icmp_ln879_102_reg_7042 = icmp_ln879_102_fu_1882_p2.read();
        icmp_ln879_103_reg_7057 = icmp_ln879_103_fu_1914_p2.read();
        icmp_ln879_104_reg_7072 = icmp_ln879_104_fu_1946_p2.read();
        icmp_ln879_64_reg_6472 = icmp_ln879_64_fu_666_p2.read();
        icmp_ln879_65_reg_6487 = icmp_ln879_65_fu_698_p2.read();
        icmp_ln879_66_reg_6502 = icmp_ln879_66_fu_730_p2.read();
        icmp_ln879_67_reg_6517 = icmp_ln879_67_fu_762_p2.read();
        icmp_ln879_68_reg_6532 = icmp_ln879_68_fu_794_p2.read();
        icmp_ln879_69_reg_6547 = icmp_ln879_69_fu_826_p2.read();
        icmp_ln879_70_reg_6562 = icmp_ln879_70_fu_858_p2.read();
        icmp_ln879_71_reg_6577 = icmp_ln879_71_fu_890_p2.read();
        icmp_ln879_72_reg_6592 = icmp_ln879_72_fu_922_p2.read();
        icmp_ln879_73_reg_6607 = icmp_ln879_73_fu_954_p2.read();
        icmp_ln879_74_reg_6622 = icmp_ln879_74_fu_986_p2.read();
        icmp_ln879_75_reg_6637 = icmp_ln879_75_fu_1018_p2.read();
        icmp_ln879_76_reg_6652 = icmp_ln879_76_fu_1050_p2.read();
        icmp_ln879_77_reg_6667 = icmp_ln879_77_fu_1082_p2.read();
        icmp_ln879_78_reg_6682 = icmp_ln879_78_fu_1114_p2.read();
        icmp_ln879_79_reg_6697 = icmp_ln879_79_fu_1146_p2.read();
        icmp_ln879_80_reg_6712 = icmp_ln879_80_fu_1178_p2.read();
        icmp_ln879_81_reg_6727 = icmp_ln879_81_fu_1210_p2.read();
        icmp_ln879_82_reg_6742 = icmp_ln879_82_fu_1242_p2.read();
        icmp_ln879_83_reg_6757 = icmp_ln879_83_fu_1274_p2.read();
        icmp_ln879_84_reg_6772 = icmp_ln879_84_fu_1306_p2.read();
        icmp_ln879_85_reg_6787 = icmp_ln879_85_fu_1338_p2.read();
        icmp_ln879_86_reg_6802 = icmp_ln879_86_fu_1370_p2.read();
        icmp_ln879_87_reg_6817 = icmp_ln879_87_fu_1402_p2.read();
        icmp_ln879_88_reg_6832 = icmp_ln879_88_fu_1434_p2.read();
        icmp_ln879_89_reg_6847 = icmp_ln879_89_fu_1466_p2.read();
        icmp_ln879_90_reg_6862 = icmp_ln879_90_fu_1498_p2.read();
        icmp_ln879_91_reg_6877 = icmp_ln879_91_fu_1530_p2.read();
        icmp_ln879_92_reg_6892 = icmp_ln879_92_fu_1562_p2.read();
        icmp_ln879_93_reg_6907 = icmp_ln879_93_fu_1594_p2.read();
        icmp_ln879_94_reg_6922 = icmp_ln879_94_fu_1626_p2.read();
        icmp_ln879_95_reg_6937 = icmp_ln879_95_fu_1658_p2.read();
        icmp_ln879_96_reg_6952 = icmp_ln879_96_fu_1690_p2.read();
        icmp_ln879_97_reg_6967 = icmp_ln879_97_fu_1722_p2.read();
        icmp_ln879_98_reg_6982 = icmp_ln879_98_fu_1754_p2.read();
        icmp_ln879_99_reg_6997 = icmp_ln879_99_fu_1786_p2.read();
        icmp_ln879_reg_6457 = icmp_ln879_fu_634_p2.read();
        tmp_data_0_V_reg_7082 = tmp_data_0_V_fu_5410_p3.read();
        tmp_data_10_V_reg_7132 = tmp_data_10_V_fu_5570_p3.read();
        tmp_data_11_V_reg_7137 = tmp_data_11_V_fu_5586_p3.read();
        tmp_data_12_V_reg_7142 = tmp_data_12_V_fu_5602_p3.read();
        tmp_data_13_V_reg_7147 = tmp_data_13_V_fu_5618_p3.read();
        tmp_data_14_V_reg_7152 = tmp_data_14_V_fu_5634_p3.read();
        tmp_data_15_V_reg_7157 = tmp_data_15_V_fu_5650_p3.read();
        tmp_data_16_V_reg_7162 = tmp_data_16_V_fu_5666_p3.read();
        tmp_data_17_V_reg_7167 = tmp_data_17_V_fu_5682_p3.read();
        tmp_data_18_V_reg_7172 = tmp_data_18_V_fu_5698_p3.read();
        tmp_data_19_V_reg_7177 = tmp_data_19_V_fu_5714_p3.read();
        tmp_data_1_V_reg_7087 = tmp_data_1_V_fu_5426_p3.read();
        tmp_data_20_V_reg_7182 = tmp_data_20_V_fu_5730_p3.read();
        tmp_data_21_V_reg_7187 = tmp_data_21_V_fu_5746_p3.read();
        tmp_data_22_V_reg_7192 = tmp_data_22_V_fu_5762_p3.read();
        tmp_data_23_V_reg_7197 = tmp_data_23_V_fu_5778_p3.read();
        tmp_data_24_V_reg_7202 = tmp_data_24_V_fu_5794_p3.read();
        tmp_data_25_V_reg_7207 = tmp_data_25_V_fu_5810_p3.read();
        tmp_data_26_V_reg_7212 = tmp_data_26_V_fu_5826_p3.read();
        tmp_data_27_V_reg_7217 = tmp_data_27_V_fu_5842_p3.read();
        tmp_data_28_V_reg_7222 = tmp_data_28_V_fu_5858_p3.read();
        tmp_data_29_V_reg_7227 = tmp_data_29_V_fu_5874_p3.read();
        tmp_data_2_V_reg_7092 = tmp_data_2_V_fu_5442_p3.read();
        tmp_data_30_V_reg_7232 = tmp_data_30_V_fu_5890_p3.read();
        tmp_data_31_V_reg_7237 = tmp_data_31_V_fu_5906_p3.read();
        tmp_data_32_V_reg_7242 = tmp_data_32_V_fu_5922_p3.read();
        tmp_data_33_V_reg_7247 = tmp_data_33_V_fu_5938_p3.read();
        tmp_data_34_V_reg_7252 = tmp_data_34_V_fu_5954_p3.read();
        tmp_data_35_V_reg_7257 = tmp_data_35_V_fu_5970_p3.read();
        tmp_data_36_V_reg_7262 = tmp_data_36_V_fu_5986_p3.read();
        tmp_data_37_V_reg_7267 = tmp_data_37_V_fu_6002_p3.read();
        tmp_data_38_V_reg_7272 = tmp_data_38_V_fu_6018_p3.read();
        tmp_data_39_V_reg_7277 = tmp_data_39_V_fu_6034_p3.read();
        tmp_data_3_V_reg_7097 = tmp_data_3_V_fu_5458_p3.read();
        tmp_data_40_V_reg_7282 = tmp_data_40_V_fu_6050_p3.read();
        tmp_data_41_V_reg_7287 = tmp_data_41_V_fu_6066_p3.read();
        tmp_data_4_V_reg_7102 = tmp_data_4_V_fu_5474_p3.read();
        tmp_data_5_V_reg_7107 = tmp_data_5_V_fu_5490_p3.read();
        tmp_data_6_V_reg_7112 = tmp_data_6_V_fu_5506_p3.read();
        tmp_data_7_V_reg_7117 = tmp_data_7_V_fu_5522_p3.read();
        tmp_data_8_V_reg_7122 = tmp_data_8_V_fu_5538_p3.read();
        tmp_data_9_V_reg_7127 = tmp_data_9_V_fu_5554_p3.read();
        tmp_data_V_0_reg_6074 = data_V_data_0_V_dout.read();
        tmp_data_V_10_reg_6164 = data_V_data_10_V_dout.read();
        tmp_data_V_11_reg_6173 = data_V_data_11_V_dout.read();
        tmp_data_V_12_reg_6182 = data_V_data_12_V_dout.read();
        tmp_data_V_13_reg_6191 = data_V_data_13_V_dout.read();
        tmp_data_V_14_reg_6200 = data_V_data_14_V_dout.read();
        tmp_data_V_15_reg_6209 = data_V_data_15_V_dout.read();
        tmp_data_V_16_reg_6218 = data_V_data_16_V_dout.read();
        tmp_data_V_17_reg_6227 = data_V_data_17_V_dout.read();
        tmp_data_V_18_reg_6236 = data_V_data_18_V_dout.read();
        tmp_data_V_19_reg_6245 = data_V_data_19_V_dout.read();
        tmp_data_V_1_reg_6083 = data_V_data_1_V_dout.read();
        tmp_data_V_20_reg_6254 = data_V_data_20_V_dout.read();
        tmp_data_V_21_reg_6263 = data_V_data_21_V_dout.read();
        tmp_data_V_22_reg_6272 = data_V_data_22_V_dout.read();
        tmp_data_V_23_reg_6281 = data_V_data_23_V_dout.read();
        tmp_data_V_24_reg_6290 = data_V_data_24_V_dout.read();
        tmp_data_V_25_reg_6299 = data_V_data_25_V_dout.read();
        tmp_data_V_26_reg_6308 = data_V_data_26_V_dout.read();
        tmp_data_V_27_reg_6317 = data_V_data_27_V_dout.read();
        tmp_data_V_28_reg_6326 = data_V_data_28_V_dout.read();
        tmp_data_V_29_reg_6335 = data_V_data_29_V_dout.read();
        tmp_data_V_2_reg_6092 = data_V_data_2_V_dout.read();
        tmp_data_V_30_reg_6344 = data_V_data_30_V_dout.read();
        tmp_data_V_31_reg_6353 = data_V_data_31_V_dout.read();
        tmp_data_V_32_reg_6362 = data_V_data_32_V_dout.read();
        tmp_data_V_33_reg_6371 = data_V_data_33_V_dout.read();
        tmp_data_V_34_reg_6380 = data_V_data_34_V_dout.read();
        tmp_data_V_355_reg_6101 = data_V_data_3_V_dout.read();
        tmp_data_V_35_reg_6389 = data_V_data_35_V_dout.read();
        tmp_data_V_36_reg_6398 = data_V_data_36_V_dout.read();
        tmp_data_V_37_reg_6407 = data_V_data_37_V_dout.read();
        tmp_data_V_38_reg_6416 = data_V_data_38_V_dout.read();
        tmp_data_V_39_reg_6425 = data_V_data_39_V_dout.read();
        tmp_data_V_40_reg_6434 = data_V_data_40_V_dout.read();
        tmp_data_V_41_reg_6443 = data_V_data_41_V_dout.read();
        tmp_data_V_4_reg_6110 = data_V_data_4_V_dout.read();
        tmp_data_V_5_reg_6119 = data_V_data_5_V_dout.read();
        tmp_data_V_6_reg_6128 = data_V_data_6_V_dout.read();
        tmp_data_V_7_reg_6137 = data_V_data_7_V_dout.read();
        tmp_data_V_8_reg_6146 = data_V_data_8_V_dout.read();
        tmp_data_V_9_reg_6155 = data_V_data_9_V_dout.read();
    }
}

void relu_array_ap_fixed_42u_array_ap_ufixed_6_0_4_0_0_42u_relu_config18_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
break;
        default : 
            ap_NS_fsm = "X";
            break;
    }
}

}

