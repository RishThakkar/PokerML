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
        tmp_data_0_V_reg_7416 = tmp_data_0_V_fu_6752_p3.read();
        tmp_data_10_V_reg_7466 = tmp_data_10_V_fu_6912_p3.read();
        tmp_data_11_V_reg_7471 = tmp_data_11_V_fu_6928_p3.read();
        tmp_data_12_V_reg_7476 = tmp_data_12_V_fu_6944_p3.read();
        tmp_data_13_V_reg_7481 = tmp_data_13_V_fu_6960_p3.read();
        tmp_data_14_V_reg_7486 = tmp_data_14_V_fu_6976_p3.read();
        tmp_data_15_V_reg_7491 = tmp_data_15_V_fu_6992_p3.read();
        tmp_data_16_V_reg_7496 = tmp_data_16_V_fu_7008_p3.read();
        tmp_data_17_V_reg_7501 = tmp_data_17_V_fu_7024_p3.read();
        tmp_data_18_V_reg_7506 = tmp_data_18_V_fu_7040_p3.read();
        tmp_data_19_V_reg_7511 = tmp_data_19_V_fu_7056_p3.read();
        tmp_data_1_V_reg_7421 = tmp_data_1_V_fu_6768_p3.read();
        tmp_data_20_V_reg_7516 = tmp_data_20_V_fu_7072_p3.read();
        tmp_data_21_V_reg_7521 = tmp_data_21_V_fu_7088_p3.read();
        tmp_data_22_V_reg_7526 = tmp_data_22_V_fu_7104_p3.read();
        tmp_data_23_V_reg_7531 = tmp_data_23_V_fu_7120_p3.read();
        tmp_data_24_V_reg_7536 = tmp_data_24_V_fu_7136_p3.read();
        tmp_data_25_V_reg_7541 = tmp_data_25_V_fu_7152_p3.read();
        tmp_data_26_V_reg_7546 = tmp_data_26_V_fu_7168_p3.read();
        tmp_data_27_V_reg_7551 = tmp_data_27_V_fu_7184_p3.read();
        tmp_data_28_V_reg_7556 = tmp_data_28_V_fu_7200_p3.read();
        tmp_data_29_V_reg_7561 = tmp_data_29_V_fu_7216_p3.read();
        tmp_data_2_V_reg_7426 = tmp_data_2_V_fu_6784_p3.read();
        tmp_data_30_V_reg_7566 = tmp_data_30_V_fu_7232_p3.read();
        tmp_data_31_V_reg_7571 = tmp_data_31_V_fu_7248_p3.read();
        tmp_data_32_V_reg_7576 = tmp_data_32_V_fu_7264_p3.read();
        tmp_data_33_V_reg_7581 = tmp_data_33_V_fu_7280_p3.read();
        tmp_data_34_V_reg_7586 = tmp_data_34_V_fu_7296_p3.read();
        tmp_data_35_V_reg_7591 = tmp_data_35_V_fu_7312_p3.read();
        tmp_data_36_V_reg_7596 = tmp_data_36_V_fu_7328_p3.read();
        tmp_data_37_V_reg_7601 = tmp_data_37_V_fu_7344_p3.read();
        tmp_data_38_V_reg_7606 = tmp_data_38_V_fu_7360_p3.read();
        tmp_data_39_V_reg_7611 = tmp_data_39_V_fu_7376_p3.read();
        tmp_data_3_V_reg_7431 = tmp_data_3_V_fu_6800_p3.read();
        tmp_data_40_V_reg_7616 = tmp_data_40_V_fu_7392_p3.read();
        tmp_data_41_V_reg_7621 = tmp_data_41_V_fu_7408_p3.read();
        tmp_data_4_V_reg_7436 = tmp_data_4_V_fu_6816_p3.read();
        tmp_data_5_V_reg_7441 = tmp_data_5_V_fu_6832_p3.read();
        tmp_data_6_V_reg_7446 = tmp_data_6_V_fu_6848_p3.read();
        tmp_data_7_V_reg_7451 = tmp_data_7_V_fu_6864_p3.read();
        tmp_data_8_V_reg_7456 = tmp_data_8_V_fu_6880_p3.read();
        tmp_data_9_V_reg_7461 = tmp_data_9_V_fu_6896_p3.read();
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

