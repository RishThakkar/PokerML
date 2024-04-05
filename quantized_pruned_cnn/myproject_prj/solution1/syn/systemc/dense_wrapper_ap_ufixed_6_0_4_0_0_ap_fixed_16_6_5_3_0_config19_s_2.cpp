#include "dense_wrapper_ap_ufixed_6_0_4_0_0_ap_fixed_16_6_5_3_0_config19_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_wrapper_ap_ufixed_6_0_4_0_0_ap_fixed_16_6_5_3_0_config19_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        add_ln703_1000_reg_24070 = add_ln703_1000_fu_10613_p2.read();
        add_ln703_1003_reg_24075 = add_ln703_1003_fu_10635_p2.read();
        add_ln703_1008_reg_24080 = add_ln703_1008_fu_10671_p2.read();
        add_ln703_1012_reg_24085 = add_ln703_1012_fu_10703_p2.read();
        add_ln703_1014_reg_24090 = add_ln703_1014_fu_10715_p2.read();
        add_ln703_1016_reg_24095 = add_ln703_1016_fu_10731_p2.read();
        add_ln703_1021_reg_24100 = add_ln703_1021_fu_10737_p2.read();
        add_ln703_1026_reg_24105 = add_ln703_1026_fu_10763_p2.read();
        add_ln703_1033_reg_24110 = add_ln703_1033_fu_10815_p2.read();
        add_ln703_1040_reg_24115 = add_ln703_1040_fu_10873_p2.read();
        add_ln703_1043_reg_24120 = add_ln703_1043_fu_10895_p2.read();
        add_ln703_1045_reg_24125 = add_ln703_1045_fu_10901_p2.read();
        add_ln703_1049_reg_24130 = add_ln703_1049_fu_10907_p2.read();
        add_ln703_1056_reg_24135 = add_ln703_1056_fu_10945_p2.read();
        add_ln703_1058_reg_24140 = add_ln703_1058_fu_10961_p2.read();
        add_ln703_1065_reg_24145 = add_ln703_1065_fu_10993_p2.read();
        add_ln703_1067_reg_24150 = add_ln703_1067_fu_11013_p2.read();
        add_ln703_1080_reg_24155 = add_ln703_1080_fu_11097_p2.read();
        add_ln703_1090_reg_24160 = add_ln703_1090_fu_11113_p2.read();
        add_ln703_1099_reg_24165 = add_ln703_1099_fu_11129_p2.read();
        add_ln703_1108_reg_24170 = add_ln703_1108_fu_11181_p2.read();
        add_ln703_1123_reg_24175 = add_ln703_1123_fu_11187_p2.read();
        add_ln703_1131_reg_24180 = add_ln703_1131_fu_11193_p2.read();
        add_ln703_1134_reg_24185 = add_ln703_1134_fu_11199_p2.read();
        add_ln703_1152_reg_24190 = add_ln703_1152_fu_11215_p2.read();
        add_ln703_1164_reg_24195 = add_ln703_1164_fu_11287_p2.read();
        add_ln703_1202_reg_24200 = add_ln703_1202_fu_11293_p2.read();
        add_ln703_1205_reg_24205 = add_ln703_1205_fu_11299_p2.read();
        add_ln703_1210_reg_24210 = add_ln703_1210_fu_11305_p2.read();
        add_ln703_1218_reg_24215 = add_ln703_1218_fu_11311_p2.read();
        add_ln703_1292_reg_24220 = add_ln703_1292_fu_11317_p2.read();
        add_ln703_1301_reg_24225 = add_ln703_1301_fu_11323_p2.read();
        add_ln703_1318_reg_24230 = add_ln703_1318_fu_11329_p2.read();
        add_ln703_1336_reg_24235 = add_ln703_1336_fu_11335_p2.read();
        add_ln703_1342_reg_24240 = add_ln703_1342_fu_11341_p2.read();
        add_ln703_1353_reg_24245 = add_ln703_1353_fu_11347_p2.read();
        add_ln703_1365_reg_24250 = add_ln703_1365_fu_11353_p2.read();
        add_ln703_1423_reg_24255 = add_ln703_1423_fu_11359_p2.read();
        add_ln703_1509_reg_24260 = add_ln703_1509_fu_11365_p2.read();
        add_ln703_1617_reg_24265 = add_ln703_1617_fu_11371_p2.read();
        add_ln703_672_reg_23850 = add_ln703_672_fu_7975_p2.read();
        add_ln703_727_reg_23855 = add_ln703_727_fu_8449_p2.read();
        add_ln703_751_reg_23860 = add_ln703_751_fu_8661_p2.read();
        add_ln703_768_reg_23865 = add_ln703_768_fu_8823_p2.read();
        add_ln703_773_reg_23870 = add_ln703_773_fu_8861_p2.read();
        add_ln703_807_reg_23875 = add_ln703_807_fu_9161_p2.read();
        add_ln703_817_reg_23880 = add_ln703_817_fu_9245_p2.read();
        add_ln703_820_reg_23885 = add_ln703_820_fu_9267_p2.read();
        add_ln703_822_reg_23890 = add_ln703_822_fu_9283_p2.read();
        add_ln703_825_reg_23895 = add_ln703_825_fu_9299_p2.read();
        add_ln703_831_reg_23900 = add_ln703_831_fu_9355_p2.read();
        add_ln703_836_reg_23905 = add_ln703_836_fu_9397_p2.read();
        add_ln703_844_reg_23910 = add_ln703_844_fu_9469_p2.read();
        add_ln703_845_reg_23915 = add_ln703_845_fu_9475_p2.read();
        add_ln703_851_reg_23920 = add_ln703_851_fu_9521_p2.read();
        add_ln703_865_reg_23925 = add_ln703_865_fu_9645_p2.read();
        add_ln703_867_reg_23930 = add_ln703_867_fu_9661_p2.read();
        add_ln703_875_reg_23935 = add_ln703_875_fu_9723_p2.read();
        add_ln703_877_reg_23940 = add_ln703_877_fu_9739_p2.read();
        add_ln703_891_reg_23945 = add_ln703_891_fu_9863_p2.read();
        add_ln703_899_reg_23950 = add_ln703_899_fu_9939_p2.read();
        add_ln703_906_reg_23955 = add_ln703_906_fu_9997_p2.read();
        add_ln703_911_reg_23960 = add_ln703_911_fu_10031_p2.read();
        add_ln703_912_reg_23965 = add_ln703_912_fu_10037_p2.read();
        add_ln703_917_reg_23970 = add_ln703_917_fu_10069_p2.read();
        add_ln703_921_reg_23975 = add_ln703_921_fu_10101_p2.read();
        add_ln703_926_reg_23980 = add_ln703_926_fu_10143_p2.read();
        add_ln703_929_reg_23985 = add_ln703_929_fu_10149_p2.read();
        add_ln703_931_reg_23990 = add_ln703_931_fu_10165_p2.read();
        add_ln703_936_reg_23995 = add_ln703_936_fu_10201_p2.read();
        add_ln703_940_reg_24000 = add_ln703_940_fu_10233_p2.read();
        add_ln703_947_reg_24005 = add_ln703_947_fu_10291_p2.read();
        add_ln703_949_reg_24010 = add_ln703_949_fu_10307_p2.read();
        add_ln703_950_reg_24015 = add_ln703_950_fu_10313_p2.read();
        add_ln703_964_reg_24020 = add_ln703_964_fu_10407_p2.read();
        add_ln703_965_reg_24025 = add_ln703_965_fu_10413_p2.read();
        add_ln703_967_reg_24030 = add_ln703_967_fu_10429_p2.read();
        add_ln703_969_reg_24035 = add_ln703_969_fu_10435_p2.read();
        add_ln703_970_reg_24040 = add_ln703_970_fu_10441_p2.read();
        add_ln703_973_reg_24045 = add_ln703_973_fu_10447_p2.read();
        add_ln703_977_reg_24050 = add_ln703_977_fu_10469_p2.read();
        add_ln703_978_reg_24055 = add_ln703_978_fu_10475_p2.read();
        add_ln703_981_reg_24060 = add_ln703_981_fu_10481_p2.read();
        add_ln703_994_reg_24065 = add_ln703_994_fu_10561_p2.read();
        ap_port_reg_data_25_V_read = data_25_V_read.read();
        ap_port_reg_data_27_V_read = data_27_V_read.read();
        ap_port_reg_data_28_V_read = data_28_V_read.read();
        ap_port_reg_data_31_V_read = data_31_V_read.read();
        ap_port_reg_data_32_V_read = data_32_V_read.read();
        ap_port_reg_data_36_V_read = data_36_V_read.read();
        ap_port_reg_data_37_V_read = data_37_V_read.read();
        ap_port_reg_data_38_V_read = data_38_V_read.read();
        ap_port_reg_data_39_V_read = data_39_V_read.read();
        ap_port_reg_data_41_V_read = data_41_V_read.read();
        data_17_V_read_2_reg_23254 = data_17_V_read.read();
        data_22_V_read_2_reg_23249 = data_22_V_read.read();
        data_23_V_read_2_reg_23242 = data_23_V_read.read();
        data_24_V_read_2_reg_23232 = data_24_V_read.read();
        data_26_V_read_2_reg_23224 = data_26_V_read.read();
        data_29_V_read_2_reg_23214 = data_29_V_read.read();
        data_30_V_read_2_reg_23206 = data_30_V_read.read();
        data_33_V_read_2_reg_23198 = data_33_V_read.read();
        data_34_V_read_2_reg_23189 = data_34_V_read.read();
        data_35_V_read_2_reg_23179 = data_35_V_read.read();
        data_40_V_read_2_reg_23169 = data_40_V_read.read();
        lshr_ln708_16_reg_23269 = add_ln708_17_fu_3597_p2.read().range(8, 1);
        lshr_ln708_20_reg_23274 = add_ln708_19_fu_4111_p2.read().range(9, 1);
        lshr_ln708_29_reg_23338 = data_17_V_read.read().range(5, 1);
        lshr_ln708_30_reg_23365 = add_ln708_24_fu_5803_p2.read().range(8, 1);
        lshr_ln708_31_reg_23385 = data_18_V_read.read().range(5, 1);
        lshr_ln708_32_reg_23448 = add_ln708_25_fu_6361_p2.read().range(8, 1);
        lshr_ln708_33_reg_23453 = data_19_V_read.read().range(5, 1);
        lshr_ln708_35_reg_23472 = data_20_V_read.read().range(5, 1);
        lshr_ln708_39_reg_23553 = add_ln708_29_fu_6925_p2.read().range(8, 1);
        lshr_ln708_40_reg_23571 = data_22_V_read.read().range(5, 1);
        lshr_ln708_41_reg_23583 = data_23_V_read.read().range(5, 1);
        lshr_ln708_43_reg_23610 = data_24_V_read.read().range(5, 1);
        lshr_ln708_47_reg_23650 = data_26_V_read.read().range(5, 1);
        lshr_ln708_53_reg_23688 = data_29_V_read.read().range(5, 1);
        lshr_ln708_55_reg_23706 = data_30_V_read.read().range(5, 1);
        lshr_ln708_62_reg_23746 = data_33_V_read.read().range(5, 1);
        lshr_ln708_65_reg_23800 = data_34_V_read.read().range(5, 1);
        lshr_ln708_67_reg_23822 = data_35_V_read.read().range(5, 1);
        lshr_ln708_76_reg_23827 = data_40_V_read.read().range(5, 1);
        sext_ln1118_50_reg_23301 = sext_ln1118_50_fu_5056_p1.read();
        sext_ln1118_56_reg_23322 = sext_ln1118_56_fu_5321_p1.read();
        sext_ln1118_66_reg_23375 = sext_ln1118_66_fu_5967_p1.read();
        sext_ln1118_70_reg_23390 = sext_ln1118_70_fu_6091_p1.read();
        sext_ln203_389_reg_23284 = sext_ln203_389_fu_4530_p1.read();
        sext_ln203_397_reg_23311 = sext_ln203_397_fu_5265_p1.read();
        sext_ln203_411_reg_23396 = sext_ln203_411_fu_6121_p1.read();
        sext_ln203_413_reg_23418 = sext_ln203_413_fu_6239_p1.read();
        sext_ln203_415_reg_23433 = sext_ln203_415_fu_6303_p1.read();
        sext_ln203_422_reg_23546 = sext_ln203_422_fu_6921_p1.read();
        sext_ln708_101_reg_23345 = sext_ln708_101_fu_5635_p1.read();
        sext_ln708_114_reg_23443 = sext_ln708_114_fu_6357_p1.read();
        sext_ln708_146_reg_23656 = sext_ln708_146_fu_7323_p1.read();
        sext_ln708_86_reg_23295 = sext_ln708_86_fu_4792_p1.read();
        shl_ln1118_103_reg_23627 = shl_ln1118_103_fu_7233_p3.read();
        shl_ln1118_114_reg_23757 = shl_ln1118_114_fu_7525_p3.read();
        shl_ln1118_99_reg_23540 = shl_ln1118_99_fu_6887_p3.read();
        shl_ln708_61_reg_23478 = shl_ln708_61_fu_6515_p3.read();
        shl_ln708_62_reg_23503 = shl_ln708_62_fu_6635_p3.read();
        shl_ln708_74_reg_23724 = shl_ln708_74_fu_7454_p3.read();
        shl_ln708_81_reg_23781 = shl_ln708_81_fu_7567_p3.read();
        shl_ln708_82_reg_23806 = shl_ln708_82_fu_7605_p3.read();
        shl_ln708_93_reg_23834 = shl_ln708_93_fu_7643_p3.read();
        sub_ln1118_195_reg_23667 = sub_ln1118_195_fu_7335_p2.read();
        sub_ln1118_209_reg_23683 = sub_ln1118_209_fu_7382_p2.read();
        sub_ln1118_217_reg_23731 = sub_ln1118_217_fu_7462_p2.read();
        sub_ln1118_243_reg_23817 = sub_ln1118_243_fu_7617_p2.read();
        sub_ln1118_269_reg_23845 = sub_ln1118_269_fu_7655_p2.read();
        tmp_274_reg_23530 = tmp_274_fu_6859_p3.read();
        trunc_ln708_558_reg_23264 = sub_ln1118_99_fu_2566_p2.read().range(7, 1);
        trunc_ln708_603_reg_23279 = sub_ln1118_299_fu_4222_p2.read().range(8, 1);
        trunc_ln708_617_reg_23289 = sub_ln1118_301_fu_4682_p2.read().range(9, 1);
        trunc_ln708_631_reg_23306 = sub_ln1118_141_fu_5249_p2.read().range(7, 1);
        trunc_ln708_633_reg_23317 = sub_ln1118_304_fu_5305_p2.read().range(8, 1);
        trunc_ln708_634_reg_23327 = sub_ln1118_143_fu_5325_p2.read().range(8, 1);
        trunc_ln708_637_reg_23333 = sub_ln1118_145_fu_5377_p2.read().range(9, 1);
        trunc_ln708_646_reg_23350 = sub_ln1118_150_fu_5671_p2.read().range(6, 1);
        trunc_ln708_650_reg_23360 = sub_ln1118_152_fu_5787_p2.read().range(9, 1);
        trunc_ln708_654_reg_23370 = sub_ln1118_153_fu_5951_p2.read().range(9, 1);
        trunc_ln708_655_reg_23380 = sub_ln1118_154_fu_5971_p2.read().range(7, 1);
        trunc_ln708_660_reg_23401 = sub_ln1118_159_fu_6125_p2.read().range(10, 1);
        trunc_ln708_661_reg_23406 = sub_ln1118_160_fu_6141_p2.read().range(6, 1);
        trunc_ln708_664_reg_23411 = sub_ln1118_162_fu_6223_p2.read().range(6, 1);
        trunc_ln708_665_reg_23423 = sub_ln708_57_fu_6255_p2.read().range(8, 1);
        trunc_ln708_666_reg_23428 = sub_ln1118_163_fu_6287_p2.read().range(7, 1);
        trunc_ln708_667_reg_23438 = sub_ln1118_165_fu_6317_p2.read().range(9, 1);
        trunc_ln708_672_reg_23488 = sub_ln1118_310_fu_6543_p2.read().range(9, 1);
        trunc_ln708_673_reg_23493 = sub_ln708_58_fu_6559_p2.read().range(8, 1);
        trunc_ln708_675_reg_23498 = sub_ln1118_311_fu_6607_p2.read().range(8, 1);
        trunc_ln708_679_reg_23513 = sub_ln1118_171_fu_6711_p2.read().range(6, 1);
        trunc_ln708_680_reg_23519 = sub_ln1118_312_fu_6731_p2.read().range(8, 1);
        trunc_ln708_683_reg_23535 = sub_ln1118_313_fu_6871_p2.read().range(8, 1);
        trunc_ln708_690_reg_23564 = sub_ln1118_176_fu_7051_p2.read().range(6, 1);
        trunc_ln708_693_reg_23600 = sub_ln708_64_fu_7149_p2.read().range(9, 1);
        trunc_ln708_695_reg_23605 = sub_ln1118_178_fu_7107_p2.read().range(8, 1);
        trunc_ln708_700_reg_23621 = sub_ln1118_182_fu_7213_p2.read().range(6, 1);
        trunc_ln708_703_reg_23633 = sub_ln1118_185_fu_7245_p2.read().range(7, 1);
        trunc_ln708_719_reg_23644 = sub_ln1118_317_fu_7281_p2.read().range(8, 1);
        trunc_ln708_723_reg_23672 = sub_ln1118_195_fu_7335_p2.read().range(8, 1);
        trunc_ln708_752_reg_23694 = sub_ln1118_209_fu_7382_p2.read().range(9, 1);
        trunc_ln708_754_reg_23711 = sub_ln1118_215_fu_7422_p2.read().range(6, 1);
        trunc_ln708_760_reg_23736 = sub_ln1118_219_fu_7472_p2.read().range(7, 1);
        trunc_ln708_764_reg_23741 = sub_ln1118_217_fu_7462_p2.read().range(9, 1);
        trunc_ln708_780_reg_23764 = sub_ln1118_229_fu_7537_p2.read().range(9, 1);
        trunc_ln708_784_reg_23769 = mul_ln1118_307_fu_414_p2.read().range(10, 1);
        trunc_ln708_793_reg_23794 = sub_ln1118_327_fu_7579_p2.read().range(8, 1);
        zext_ln1118_354_reg_23355 = zext_ln1118_354_fu_5783_p1.read();
        zext_ln1118_373_reg_23459 = zext_ln1118_373_fu_6441_p1.read();
        zext_ln1118_387_reg_23525 = zext_ln1118_387_fu_6855_p1.read();
        zext_ln1118_392_reg_23588 = zext_ln1118_392_fu_7103_p1.read();
        zext_ln1118_393_reg_23615 = zext_ln1118_393_fu_7209_p1.read();
        zext_ln1118_410_reg_23639 = zext_ln1118_410_fu_7261_p1.read();
        zext_ln1118_435_reg_23678 = zext_ln1118_435_fu_7378_p1.read();
        zext_ln1118_453_reg_23752 = zext_ln1118_453_fu_7521_p1.read();
        zext_ln203_136_reg_23483 = zext_ln203_136_fu_6527_p1.read();
        zext_ln203_140_reg_23508 = zext_ln203_140_fu_6703_p1.read();
        zext_ln203_171_reg_23661 = zext_ln203_171_fu_7327_p1.read();
        zext_ln708_176_reg_23259 = zext_ln708_176_fu_1841_p1.read();
        zext_ln708_254_reg_23465 = zext_ln708_254_fu_6497_p1.read();
        zext_ln708_268_reg_23559 = zext_ln708_268_fu_6977_p1.read();
        zext_ln708_275_reg_23578 = zext_ln708_275_fu_7077_p1.read();
        zext_ln708_278_reg_23594 = zext_ln708_278_fu_7145_p1.read();
        zext_ln708_317_reg_23699 = zext_ln708_317_fu_7408_p1.read();
        zext_ln708_321_reg_23716 = zext_ln708_321_fu_7450_p1.read();
        zext_ln708_347_reg_23774 = zext_ln708_347_fu_7563_p1.read();
        zext_ln708_349_reg_23787 = zext_ln708_349_fu_7575_p1.read();
        zext_ln708_354_reg_23811 = zext_ln708_354_fu_7613_p1.read();
        zext_ln708_389_reg_23839 = zext_ln708_389_fu_7651_p1.read();
    }
}

void dense_wrapper_ap_ufixed_6_0_4_0_0_ap_fixed_16_6_5_3_0_config19_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<2>) ("XX");
            break;
    }
}

}

