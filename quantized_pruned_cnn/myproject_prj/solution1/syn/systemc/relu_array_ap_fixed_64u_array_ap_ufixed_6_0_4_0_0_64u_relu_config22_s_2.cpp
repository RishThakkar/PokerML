#include "relu_array_ap_fixed_64u_array_ap_ufixed_6_0_4_0_0_64u_relu_config22_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void relu_array_ap_fixed_64u_array_ap_ufixed_6_0_4_0_0_64u_relu_config22_s::thread_ap_clk_no_reset_() {
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
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
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
        tmp_data_0_V_reg_11266 = tmp_data_0_V_fu_10250_p3.read();
        tmp_data_10_V_reg_11316 = tmp_data_10_V_fu_10410_p3.read();
        tmp_data_11_V_reg_11321 = tmp_data_11_V_fu_10426_p3.read();
        tmp_data_12_V_reg_11326 = tmp_data_12_V_fu_10442_p3.read();
        tmp_data_13_V_reg_11331 = tmp_data_13_V_fu_10458_p3.read();
        tmp_data_14_V_reg_11336 = tmp_data_14_V_fu_10474_p3.read();
        tmp_data_15_V_reg_11341 = tmp_data_15_V_fu_10490_p3.read();
        tmp_data_16_V_reg_11346 = tmp_data_16_V_fu_10506_p3.read();
        tmp_data_17_V_reg_11351 = tmp_data_17_V_fu_10522_p3.read();
        tmp_data_18_V_reg_11356 = tmp_data_18_V_fu_10538_p3.read();
        tmp_data_19_V_reg_11361 = tmp_data_19_V_fu_10554_p3.read();
        tmp_data_1_V_reg_11271 = tmp_data_1_V_fu_10266_p3.read();
        tmp_data_20_V_reg_11366 = tmp_data_20_V_fu_10570_p3.read();
        tmp_data_21_V_reg_11371 = tmp_data_21_V_fu_10586_p3.read();
        tmp_data_22_V_reg_11376 = tmp_data_22_V_fu_10602_p3.read();
        tmp_data_23_V_reg_11381 = tmp_data_23_V_fu_10618_p3.read();
        tmp_data_24_V_reg_11386 = tmp_data_24_V_fu_10634_p3.read();
        tmp_data_25_V_reg_11391 = tmp_data_25_V_fu_10650_p3.read();
        tmp_data_26_V_reg_11396 = tmp_data_26_V_fu_10666_p3.read();
        tmp_data_27_V_reg_11401 = tmp_data_27_V_fu_10682_p3.read();
        tmp_data_28_V_reg_11406 = tmp_data_28_V_fu_10698_p3.read();
        tmp_data_29_V_reg_11411 = tmp_data_29_V_fu_10714_p3.read();
        tmp_data_2_V_reg_11276 = tmp_data_2_V_fu_10282_p3.read();
        tmp_data_30_V_reg_11416 = tmp_data_30_V_fu_10730_p3.read();
        tmp_data_31_V_reg_11421 = tmp_data_31_V_fu_10746_p3.read();
        tmp_data_32_V_reg_11426 = tmp_data_32_V_fu_10762_p3.read();
        tmp_data_33_V_reg_11431 = tmp_data_33_V_fu_10778_p3.read();
        tmp_data_34_V_reg_11436 = tmp_data_34_V_fu_10794_p3.read();
        tmp_data_35_V_reg_11441 = tmp_data_35_V_fu_10810_p3.read();
        tmp_data_36_V_reg_11446 = tmp_data_36_V_fu_10826_p3.read();
        tmp_data_37_V_reg_11451 = tmp_data_37_V_fu_10842_p3.read();
        tmp_data_38_V_reg_11456 = tmp_data_38_V_fu_10858_p3.read();
        tmp_data_39_V_reg_11461 = tmp_data_39_V_fu_10874_p3.read();
        tmp_data_3_V_reg_11281 = tmp_data_3_V_fu_10298_p3.read();
        tmp_data_40_V_reg_11466 = tmp_data_40_V_fu_10890_p3.read();
        tmp_data_41_V_reg_11471 = tmp_data_41_V_fu_10906_p3.read();
        tmp_data_42_V_reg_11476 = tmp_data_42_V_fu_10922_p3.read();
        tmp_data_43_V_reg_11481 = tmp_data_43_V_fu_10938_p3.read();
        tmp_data_44_V_reg_11486 = tmp_data_44_V_fu_10954_p3.read();
        tmp_data_45_V_reg_11491 = tmp_data_45_V_fu_10970_p3.read();
        tmp_data_46_V_reg_11496 = tmp_data_46_V_fu_10986_p3.read();
        tmp_data_47_V_reg_11501 = tmp_data_47_V_fu_11002_p3.read();
        tmp_data_48_V_reg_11506 = tmp_data_48_V_fu_11018_p3.read();
        tmp_data_49_V_reg_11511 = tmp_data_49_V_fu_11034_p3.read();
        tmp_data_4_V_reg_11286 = tmp_data_4_V_fu_10314_p3.read();
        tmp_data_50_V_reg_11516 = tmp_data_50_V_fu_11050_p3.read();
        tmp_data_51_V_reg_11521 = tmp_data_51_V_fu_11066_p3.read();
        tmp_data_52_V_reg_11526 = tmp_data_52_V_fu_11082_p3.read();
        tmp_data_53_V_reg_11531 = tmp_data_53_V_fu_11098_p3.read();
        tmp_data_54_V_reg_11536 = tmp_data_54_V_fu_11114_p3.read();
        tmp_data_55_V_reg_11541 = tmp_data_55_V_fu_11130_p3.read();
        tmp_data_56_V_reg_11546 = tmp_data_56_V_fu_11146_p3.read();
        tmp_data_57_V_reg_11551 = tmp_data_57_V_fu_11162_p3.read();
        tmp_data_58_V_reg_11556 = tmp_data_58_V_fu_11178_p3.read();
        tmp_data_59_V_reg_11561 = tmp_data_59_V_fu_11194_p3.read();
        tmp_data_5_V_reg_11291 = tmp_data_5_V_fu_10330_p3.read();
        tmp_data_60_V_reg_11566 = tmp_data_60_V_fu_11210_p3.read();
        tmp_data_61_V_reg_11571 = tmp_data_61_V_fu_11226_p3.read();
        tmp_data_62_V_reg_11576 = tmp_data_62_V_fu_11242_p3.read();
        tmp_data_63_V_reg_11581 = tmp_data_63_V_fu_11258_p3.read();
        tmp_data_6_V_reg_11296 = tmp_data_6_V_fu_10346_p3.read();
        tmp_data_7_V_reg_11301 = tmp_data_7_V_fu_10362_p3.read();
        tmp_data_8_V_reg_11306 = tmp_data_8_V_fu_10378_p3.read();
        tmp_data_9_V_reg_11311 = tmp_data_9_V_fu_10394_p3.read();
    }
}

void relu_array_ap_fixed_64u_array_ap_ufixed_6_0_4_0_0_64u_relu_config22_s::thread_ap_NS_fsm() {
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

