#include "dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_acc_0_V_fu_37463_p2() {
    acc_0_V_fu_37463_p2 = (!sext_ln703_12_fu_37459_p1.read().is_01() || !acc_V_0_05_reg_28027.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln703_12_fu_37459_p1.read()) + sc_biguint<32>(acc_V_0_05_reg_28027.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_acc_1_V_fu_37591_p2() {
    acc_1_V_fu_37591_p2 = (!sext_ln703_19_fu_37587_p1.read().is_01() || !acc_V_1_06_reg_28013.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln703_19_fu_37587_p1.read()) + sc_biguint<32>(acc_V_1_06_reg_28013.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_acc_2_V_fu_37719_p2() {
    acc_2_V_fu_37719_p2 = (!sext_ln703_26_fu_37715_p1.read().is_01() || !acc_V_2_07_reg_27999.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln703_26_fu_37715_p1.read()) + sc_biguint<32>(acc_V_2_07_reg_27999.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_acc_3_V_fu_37847_p2() {
    acc_3_V_fu_37847_p2 = (!sext_ln703_33_fu_37843_p1.read().is_01() || !acc_V_3_08_reg_27985.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln703_33_fu_37843_p1.read()) + sc_biguint<32>(acc_V_3_08_reg_27985.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_10_fu_37581_p2() {
    add_ln703_10_fu_37581_p2 = (!sext_ln703_17_fu_37567_p1.read().is_01() || !sext_ln703_18_fu_37577_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_17_fu_37567_p1.read()) + sc_bigint<25>(sext_ln703_18_fu_37577_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_12_fu_37597_p2() {
    add_ln703_12_fu_37597_p2 = (!trunc_ln703_1_fu_37509_p1.read().is_01() || !shl_ln703_4_fu_37504_p2.read().is_01())? sc_lv<22>(): (sc_biguint<22>(trunc_ln703_1_fu_37509_p1.read()) + sc_biguint<22>(shl_ln703_4_fu_37504_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_13_fu_37603_p2() {
    add_ln703_13_fu_37603_p2 = (!shl_ln703_7_fu_37556_p2.read().is_01() || !shl_ln703_6_fu_37540_p2.read().is_01())? sc_lv<22>(): (sc_biguint<22>(shl_ln703_7_fu_37556_p2.read()) + sc_biguint<22>(shl_ln703_6_fu_37540_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_14_fu_37609_p2() {
    add_ln703_14_fu_37609_p2 = (!shl_ln703_5_fu_37524_p2.read().is_01() || !add_ln703_13_fu_37603_p2.read().is_01())? sc_lv<22>(): (sc_biguint<22>(shl_ln703_5_fu_37524_p2.read()) + sc_biguint<22>(add_ln703_13_fu_37603_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_15_fu_37615_p2() {
    add_ln703_15_fu_37615_p2 = (!add_ln703_12_fu_37597_p2.read().is_01() || !add_ln703_14_fu_37609_p2.read().is_01())? sc_lv<22>(): (sc_biguint<22>(add_ln703_12_fu_37597_p2.read()) + sc_biguint<22>(add_ln703_14_fu_37609_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_16_fu_37689_p2() {
    add_ln703_16_fu_37689_p2 = (!sext_ln703_21_fu_37648_p1.read().is_01() || !sext_ln703_20_fu_37628_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln703_21_fu_37648_p1.read()) + sc_bigint<24>(sext_ln703_20_fu_37628_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_17_fu_37699_p2() {
    add_ln703_17_fu_37699_p2 = (!sext_ln703_23_fu_37680_p1.read().is_01() || !sext_ln703_22_fu_37664_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln703_23_fu_37680_p1.read()) + sc_bigint<24>(sext_ln703_22_fu_37664_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_18_fu_37709_p2() {
    add_ln703_18_fu_37709_p2 = (!sext_ln703_24_fu_37695_p1.read().is_01() || !sext_ln703_25_fu_37705_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_24_fu_37695_p1.read()) + sc_bigint<25>(sext_ln703_25_fu_37705_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_1_fu_37443_p2() {
    add_ln703_1_fu_37443_p2 = (!sext_ln703_9_fu_37424_p1.read().is_01() || !sext_ln703_8_fu_37408_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln703_9_fu_37424_p1.read()) + sc_bigint<24>(sext_ln703_8_fu_37408_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_20_fu_37725_p2() {
    add_ln703_20_fu_37725_p2 = (!trunc_ln703_2_fu_37637_p1.read().is_01() || !shl_ln703_8_fu_37632_p2.read().is_01())? sc_lv<22>(): (sc_biguint<22>(trunc_ln703_2_fu_37637_p1.read()) + sc_biguint<22>(shl_ln703_8_fu_37632_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_21_fu_37731_p2() {
    add_ln703_21_fu_37731_p2 = (!shl_ln703_11_fu_37684_p2.read().is_01() || !shl_ln703_10_fu_37668_p2.read().is_01())? sc_lv<22>(): (sc_biguint<22>(shl_ln703_11_fu_37684_p2.read()) + sc_biguint<22>(shl_ln703_10_fu_37668_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_22_fu_37737_p2() {
    add_ln703_22_fu_37737_p2 = (!shl_ln703_9_fu_37652_p2.read().is_01() || !add_ln703_21_fu_37731_p2.read().is_01())? sc_lv<22>(): (sc_biguint<22>(shl_ln703_9_fu_37652_p2.read()) + sc_biguint<22>(add_ln703_21_fu_37731_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_23_fu_37743_p2() {
    add_ln703_23_fu_37743_p2 = (!add_ln703_20_fu_37725_p2.read().is_01() || !add_ln703_22_fu_37737_p2.read().is_01())? sc_lv<22>(): (sc_biguint<22>(add_ln703_20_fu_37725_p2.read()) + sc_biguint<22>(add_ln703_22_fu_37737_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_24_fu_37817_p2() {
    add_ln703_24_fu_37817_p2 = (!sext_ln703_28_fu_37776_p1.read().is_01() || !sext_ln703_27_fu_37756_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln703_28_fu_37776_p1.read()) + sc_bigint<24>(sext_ln703_27_fu_37756_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_25_fu_37827_p2() {
    add_ln703_25_fu_37827_p2 = (!sext_ln703_30_fu_37808_p1.read().is_01() || !sext_ln703_29_fu_37792_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln703_30_fu_37808_p1.read()) + sc_bigint<24>(sext_ln703_29_fu_37792_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_26_fu_37837_p2() {
    add_ln703_26_fu_37837_p2 = (!sext_ln703_31_fu_37823_p1.read().is_01() || !sext_ln703_32_fu_37833_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_31_fu_37823_p1.read()) + sc_bigint<25>(sext_ln703_32_fu_37833_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_28_fu_37853_p2() {
    add_ln703_28_fu_37853_p2 = (!trunc_ln703_3_fu_37765_p1.read().is_01() || !shl_ln703_12_fu_37760_p2.read().is_01())? sc_lv<22>(): (sc_biguint<22>(trunc_ln703_3_fu_37765_p1.read()) + sc_biguint<22>(shl_ln703_12_fu_37760_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_29_fu_37859_p2() {
    add_ln703_29_fu_37859_p2 = (!shl_ln703_15_fu_37812_p2.read().is_01() || !shl_ln703_14_fu_37796_p2.read().is_01())? sc_lv<22>(): (sc_biguint<22>(shl_ln703_15_fu_37812_p2.read()) + sc_biguint<22>(shl_ln703_14_fu_37796_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_2_fu_37453_p2() {
    add_ln703_2_fu_37453_p2 = (!sext_ln703_10_fu_37439_p1.read().is_01() || !sext_ln703_11_fu_37449_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(sext_ln703_10_fu_37439_p1.read()) + sc_bigint<25>(sext_ln703_11_fu_37449_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_30_fu_37865_p2() {
    add_ln703_30_fu_37865_p2 = (!shl_ln703_13_fu_37780_p2.read().is_01() || !add_ln703_29_fu_37859_p2.read().is_01())? sc_lv<22>(): (sc_biguint<22>(shl_ln703_13_fu_37780_p2.read()) + sc_biguint<22>(add_ln703_29_fu_37859_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_31_fu_37871_p2() {
    add_ln703_31_fu_37871_p2 = (!add_ln703_28_fu_37853_p2.read().is_01() || !add_ln703_30_fu_37865_p2.read().is_01())? sc_lv<22>(): (sc_biguint<22>(add_ln703_28_fu_37853_p2.read()) + sc_biguint<22>(add_ln703_30_fu_37865_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_4_fu_37469_p2() {
    add_ln703_4_fu_37469_p2 = (!shl_ln703_fu_37380_p2.read().is_01() || !trunc_ln703_fu_37376_p1.read().is_01())? sc_lv<22>(): (sc_biguint<22>(shl_ln703_fu_37380_p2.read()) + sc_biguint<22>(trunc_ln703_fu_37376_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_5_fu_37475_p2() {
    add_ln703_5_fu_37475_p2 = (!shl_ln703_3_fu_37428_p2.read().is_01() || !shl_ln703_2_fu_37412_p2.read().is_01())? sc_lv<22>(): (sc_biguint<22>(shl_ln703_3_fu_37428_p2.read()) + sc_biguint<22>(shl_ln703_2_fu_37412_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_6_fu_37481_p2() {
    add_ln703_6_fu_37481_p2 = (!shl_ln703_1_fu_37396_p2.read().is_01() || !add_ln703_5_fu_37475_p2.read().is_01())? sc_lv<22>(): (sc_biguint<22>(shl_ln703_1_fu_37396_p2.read()) + sc_biguint<22>(add_ln703_5_fu_37475_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_7_fu_37487_p2() {
    add_ln703_7_fu_37487_p2 = (!add_ln703_4_fu_37469_p2.read().is_01() || !add_ln703_6_fu_37481_p2.read().is_01())? sc_lv<22>(): (sc_biguint<22>(add_ln703_4_fu_37469_p2.read()) + sc_biguint<22>(add_ln703_6_fu_37481_p2.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_8_fu_37561_p2() {
    add_ln703_8_fu_37561_p2 = (!sext_ln703_14_fu_37520_p1.read().is_01() || !sext_ln703_13_fu_37500_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln703_14_fu_37520_p1.read()) + sc_bigint<24>(sext_ln703_13_fu_37500_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_9_fu_37571_p2() {
    add_ln703_9_fu_37571_p2 = (!sext_ln703_16_fu_37552_p1.read().is_01() || !sext_ln703_15_fu_37536_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln703_16_fu_37552_p1.read()) + sc_bigint<24>(sext_ln703_15_fu_37536_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_add_ln703_fu_37433_p2() {
    add_ln703_fu_37433_p2 = (!sext_ln703_7_fu_37392_p1.read().is_01() || !sext_ln703_fu_37372_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln703_7_fu_37392_p1.read()) + sc_bigint<24>(sext_ln703_fu_37372_p1.read()));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_block_state4_pp0_stage0_iter2() {
    ap_block_state4_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_condition_40() {
    ap_condition_40 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_condition_4065() {
    ap_condition_4065 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0));
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln43_reg_38076_pp0_iter1_reg.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_enable_reg_pp0_iter0() {
    ap_enable_reg_pp0_iter0 = ap_start.read();
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_idle_pp0_0to1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0_0to1 = ap_const_logic_1;
    } else {
        ap_idle_pp0_0to1 = ap_const_logic_0;
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_0_V_read14_phi_phi_fu_17797_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_0_V_read14_phi_phi_fu_17797_p4 = ap_phi_mux_data_0_V_read14_rewind_phi_fu_6807_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_0_V_read14_phi_phi_fu_17797_p4 = data_0_V_read.read();
    } else {
        ap_phi_mux_data_0_V_read14_phi_phi_fu_17797_p4 = ap_phi_reg_pp0_iter0_data_0_V_read14_phi_reg_17793.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_0_V_read14_rewind_phi_fu_6807_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_0_V_read14_rewind_phi_fu_6807_p6 = data_0_V_read14_phi_reg_17793.read();
    } else {
        ap_phi_mux_data_0_V_read14_rewind_phi_fu_6807_p6 = data_0_V_read14_rewind_reg_6803.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_100_V_read114_phi_phi_fu_19097_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_100_V_read114_phi_phi_fu_19097_p4 = ap_phi_mux_data_100_V_read114_rewind_phi_fu_8207_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_100_V_read114_phi_phi_fu_19097_p4 = data_100_V_read.read();
    } else {
        ap_phi_mux_data_100_V_read114_phi_phi_fu_19097_p4 = ap_phi_reg_pp0_iter0_data_100_V_read114_phi_reg_19093.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_100_V_read114_rewind_phi_fu_8207_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_100_V_read114_rewind_phi_fu_8207_p6 = data_100_V_read114_phi_reg_19093.read();
    } else {
        ap_phi_mux_data_100_V_read114_rewind_phi_fu_8207_p6 = data_100_V_read114_rewind_reg_8203.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_101_V_read115_phi_phi_fu_19110_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_101_V_read115_phi_phi_fu_19110_p4 = ap_phi_mux_data_101_V_read115_rewind_phi_fu_8221_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_101_V_read115_phi_phi_fu_19110_p4 = data_101_V_read.read();
    } else {
        ap_phi_mux_data_101_V_read115_phi_phi_fu_19110_p4 = ap_phi_reg_pp0_iter0_data_101_V_read115_phi_reg_19106.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_101_V_read115_rewind_phi_fu_8221_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_101_V_read115_rewind_phi_fu_8221_p6 = data_101_V_read115_phi_reg_19106.read();
    } else {
        ap_phi_mux_data_101_V_read115_rewind_phi_fu_8221_p6 = data_101_V_read115_rewind_reg_8217.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_102_V_read116_phi_phi_fu_19123_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_102_V_read116_phi_phi_fu_19123_p4 = ap_phi_mux_data_102_V_read116_rewind_phi_fu_8235_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_102_V_read116_phi_phi_fu_19123_p4 = data_102_V_read.read();
    } else {
        ap_phi_mux_data_102_V_read116_phi_phi_fu_19123_p4 = ap_phi_reg_pp0_iter0_data_102_V_read116_phi_reg_19119.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_102_V_read116_rewind_phi_fu_8235_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_102_V_read116_rewind_phi_fu_8235_p6 = data_102_V_read116_phi_reg_19119.read();
    } else {
        ap_phi_mux_data_102_V_read116_rewind_phi_fu_8235_p6 = data_102_V_read116_rewind_reg_8231.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_103_V_read117_phi_phi_fu_19136_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_103_V_read117_phi_phi_fu_19136_p4 = ap_phi_mux_data_103_V_read117_rewind_phi_fu_8249_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_103_V_read117_phi_phi_fu_19136_p4 = data_103_V_read.read();
    } else {
        ap_phi_mux_data_103_V_read117_phi_phi_fu_19136_p4 = ap_phi_reg_pp0_iter0_data_103_V_read117_phi_reg_19132.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_103_V_read117_rewind_phi_fu_8249_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_103_V_read117_rewind_phi_fu_8249_p6 = data_103_V_read117_phi_reg_19132.read();
    } else {
        ap_phi_mux_data_103_V_read117_rewind_phi_fu_8249_p6 = data_103_V_read117_rewind_reg_8245.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_104_V_read118_phi_phi_fu_19149_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_104_V_read118_phi_phi_fu_19149_p4 = ap_phi_mux_data_104_V_read118_rewind_phi_fu_8263_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_104_V_read118_phi_phi_fu_19149_p4 = data_104_V_read.read();
    } else {
        ap_phi_mux_data_104_V_read118_phi_phi_fu_19149_p4 = ap_phi_reg_pp0_iter0_data_104_V_read118_phi_reg_19145.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_104_V_read118_rewind_phi_fu_8263_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_104_V_read118_rewind_phi_fu_8263_p6 = data_104_V_read118_phi_reg_19145.read();
    } else {
        ap_phi_mux_data_104_V_read118_rewind_phi_fu_8263_p6 = data_104_V_read118_rewind_reg_8259.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_105_V_read119_phi_phi_fu_19162_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_105_V_read119_phi_phi_fu_19162_p4 = ap_phi_mux_data_105_V_read119_rewind_phi_fu_8277_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_105_V_read119_phi_phi_fu_19162_p4 = data_105_V_read.read();
    } else {
        ap_phi_mux_data_105_V_read119_phi_phi_fu_19162_p4 = ap_phi_reg_pp0_iter0_data_105_V_read119_phi_reg_19158.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_105_V_read119_rewind_phi_fu_8277_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_105_V_read119_rewind_phi_fu_8277_p6 = data_105_V_read119_phi_reg_19158.read();
    } else {
        ap_phi_mux_data_105_V_read119_rewind_phi_fu_8277_p6 = data_105_V_read119_rewind_reg_8273.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_106_V_read120_phi_phi_fu_19175_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_106_V_read120_phi_phi_fu_19175_p4 = ap_phi_mux_data_106_V_read120_rewind_phi_fu_8291_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_106_V_read120_phi_phi_fu_19175_p4 = data_106_V_read.read();
    } else {
        ap_phi_mux_data_106_V_read120_phi_phi_fu_19175_p4 = ap_phi_reg_pp0_iter0_data_106_V_read120_phi_reg_19171.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_106_V_read120_rewind_phi_fu_8291_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_106_V_read120_rewind_phi_fu_8291_p6 = data_106_V_read120_phi_reg_19171.read();
    } else {
        ap_phi_mux_data_106_V_read120_rewind_phi_fu_8291_p6 = data_106_V_read120_rewind_reg_8287.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_107_V_read121_phi_phi_fu_19188_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_107_V_read121_phi_phi_fu_19188_p4 = ap_phi_mux_data_107_V_read121_rewind_phi_fu_8305_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_107_V_read121_phi_phi_fu_19188_p4 = data_107_V_read.read();
    } else {
        ap_phi_mux_data_107_V_read121_phi_phi_fu_19188_p4 = ap_phi_reg_pp0_iter0_data_107_V_read121_phi_reg_19184.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_107_V_read121_rewind_phi_fu_8305_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_107_V_read121_rewind_phi_fu_8305_p6 = data_107_V_read121_phi_reg_19184.read();
    } else {
        ap_phi_mux_data_107_V_read121_rewind_phi_fu_8305_p6 = data_107_V_read121_rewind_reg_8301.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_108_V_read122_phi_phi_fu_19201_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_108_V_read122_phi_phi_fu_19201_p4 = ap_phi_mux_data_108_V_read122_rewind_phi_fu_8319_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_108_V_read122_phi_phi_fu_19201_p4 = data_108_V_read.read();
    } else {
        ap_phi_mux_data_108_V_read122_phi_phi_fu_19201_p4 = ap_phi_reg_pp0_iter0_data_108_V_read122_phi_reg_19197.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_108_V_read122_rewind_phi_fu_8319_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_108_V_read122_rewind_phi_fu_8319_p6 = data_108_V_read122_phi_reg_19197.read();
    } else {
        ap_phi_mux_data_108_V_read122_rewind_phi_fu_8319_p6 = data_108_V_read122_rewind_reg_8315.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_109_V_read123_phi_phi_fu_19214_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_109_V_read123_phi_phi_fu_19214_p4 = ap_phi_mux_data_109_V_read123_rewind_phi_fu_8333_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_109_V_read123_phi_phi_fu_19214_p4 = data_109_V_read.read();
    } else {
        ap_phi_mux_data_109_V_read123_phi_phi_fu_19214_p4 = ap_phi_reg_pp0_iter0_data_109_V_read123_phi_reg_19210.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_109_V_read123_rewind_phi_fu_8333_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_109_V_read123_rewind_phi_fu_8333_p6 = data_109_V_read123_phi_reg_19210.read();
    } else {
        ap_phi_mux_data_109_V_read123_rewind_phi_fu_8333_p6 = data_109_V_read123_rewind_reg_8329.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_10_V_read24_phi_phi_fu_17927_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_10_V_read24_phi_phi_fu_17927_p4 = ap_phi_mux_data_10_V_read24_rewind_phi_fu_6947_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_10_V_read24_phi_phi_fu_17927_p4 = data_10_V_read.read();
    } else {
        ap_phi_mux_data_10_V_read24_phi_phi_fu_17927_p4 = ap_phi_reg_pp0_iter0_data_10_V_read24_phi_reg_17923.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_10_V_read24_rewind_phi_fu_6947_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_10_V_read24_rewind_phi_fu_6947_p6 = data_10_V_read24_phi_reg_17923.read();
    } else {
        ap_phi_mux_data_10_V_read24_rewind_phi_fu_6947_p6 = data_10_V_read24_rewind_reg_6943.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_110_V_read124_phi_phi_fu_19227_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_110_V_read124_phi_phi_fu_19227_p4 = ap_phi_mux_data_110_V_read124_rewind_phi_fu_8347_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_110_V_read124_phi_phi_fu_19227_p4 = data_110_V_read.read();
    } else {
        ap_phi_mux_data_110_V_read124_phi_phi_fu_19227_p4 = ap_phi_reg_pp0_iter0_data_110_V_read124_phi_reg_19223.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_110_V_read124_rewind_phi_fu_8347_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_110_V_read124_rewind_phi_fu_8347_p6 = data_110_V_read124_phi_reg_19223.read();
    } else {
        ap_phi_mux_data_110_V_read124_rewind_phi_fu_8347_p6 = data_110_V_read124_rewind_reg_8343.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_111_V_read125_phi_phi_fu_19240_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_111_V_read125_phi_phi_fu_19240_p4 = ap_phi_mux_data_111_V_read125_rewind_phi_fu_8361_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_111_V_read125_phi_phi_fu_19240_p4 = data_111_V_read.read();
    } else {
        ap_phi_mux_data_111_V_read125_phi_phi_fu_19240_p4 = ap_phi_reg_pp0_iter0_data_111_V_read125_phi_reg_19236.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_111_V_read125_rewind_phi_fu_8361_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_111_V_read125_rewind_phi_fu_8361_p6 = data_111_V_read125_phi_reg_19236.read();
    } else {
        ap_phi_mux_data_111_V_read125_rewind_phi_fu_8361_p6 = data_111_V_read125_rewind_reg_8357.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_112_V_read126_phi_phi_fu_19253_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_112_V_read126_phi_phi_fu_19253_p4 = ap_phi_mux_data_112_V_read126_rewind_phi_fu_8375_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_112_V_read126_phi_phi_fu_19253_p4 = data_112_V_read.read();
    } else {
        ap_phi_mux_data_112_V_read126_phi_phi_fu_19253_p4 = ap_phi_reg_pp0_iter0_data_112_V_read126_phi_reg_19249.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_112_V_read126_rewind_phi_fu_8375_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_112_V_read126_rewind_phi_fu_8375_p6 = data_112_V_read126_phi_reg_19249.read();
    } else {
        ap_phi_mux_data_112_V_read126_rewind_phi_fu_8375_p6 = data_112_V_read126_rewind_reg_8371.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_113_V_read127_phi_phi_fu_19266_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_113_V_read127_phi_phi_fu_19266_p4 = ap_phi_mux_data_113_V_read127_rewind_phi_fu_8389_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_113_V_read127_phi_phi_fu_19266_p4 = data_113_V_read.read();
    } else {
        ap_phi_mux_data_113_V_read127_phi_phi_fu_19266_p4 = ap_phi_reg_pp0_iter0_data_113_V_read127_phi_reg_19262.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_113_V_read127_rewind_phi_fu_8389_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_113_V_read127_rewind_phi_fu_8389_p6 = data_113_V_read127_phi_reg_19262.read();
    } else {
        ap_phi_mux_data_113_V_read127_rewind_phi_fu_8389_p6 = data_113_V_read127_rewind_reg_8385.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_114_V_read128_phi_phi_fu_19279_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_114_V_read128_phi_phi_fu_19279_p4 = ap_phi_mux_data_114_V_read128_rewind_phi_fu_8403_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_114_V_read128_phi_phi_fu_19279_p4 = data_114_V_read.read();
    } else {
        ap_phi_mux_data_114_V_read128_phi_phi_fu_19279_p4 = ap_phi_reg_pp0_iter0_data_114_V_read128_phi_reg_19275.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_114_V_read128_rewind_phi_fu_8403_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_114_V_read128_rewind_phi_fu_8403_p6 = data_114_V_read128_phi_reg_19275.read();
    } else {
        ap_phi_mux_data_114_V_read128_rewind_phi_fu_8403_p6 = data_114_V_read128_rewind_reg_8399.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_115_V_read129_phi_phi_fu_19292_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_115_V_read129_phi_phi_fu_19292_p4 = ap_phi_mux_data_115_V_read129_rewind_phi_fu_8417_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_115_V_read129_phi_phi_fu_19292_p4 = data_115_V_read.read();
    } else {
        ap_phi_mux_data_115_V_read129_phi_phi_fu_19292_p4 = ap_phi_reg_pp0_iter0_data_115_V_read129_phi_reg_19288.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_115_V_read129_rewind_phi_fu_8417_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_115_V_read129_rewind_phi_fu_8417_p6 = data_115_V_read129_phi_reg_19288.read();
    } else {
        ap_phi_mux_data_115_V_read129_rewind_phi_fu_8417_p6 = data_115_V_read129_rewind_reg_8413.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_116_V_read130_phi_phi_fu_19305_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_116_V_read130_phi_phi_fu_19305_p4 = ap_phi_mux_data_116_V_read130_rewind_phi_fu_8431_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_116_V_read130_phi_phi_fu_19305_p4 = data_116_V_read.read();
    } else {
        ap_phi_mux_data_116_V_read130_phi_phi_fu_19305_p4 = ap_phi_reg_pp0_iter0_data_116_V_read130_phi_reg_19301.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_116_V_read130_rewind_phi_fu_8431_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_116_V_read130_rewind_phi_fu_8431_p6 = data_116_V_read130_phi_reg_19301.read();
    } else {
        ap_phi_mux_data_116_V_read130_rewind_phi_fu_8431_p6 = data_116_V_read130_rewind_reg_8427.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_117_V_read131_phi_phi_fu_19318_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_117_V_read131_phi_phi_fu_19318_p4 = ap_phi_mux_data_117_V_read131_rewind_phi_fu_8445_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_117_V_read131_phi_phi_fu_19318_p4 = data_117_V_read.read();
    } else {
        ap_phi_mux_data_117_V_read131_phi_phi_fu_19318_p4 = ap_phi_reg_pp0_iter0_data_117_V_read131_phi_reg_19314.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_117_V_read131_rewind_phi_fu_8445_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_117_V_read131_rewind_phi_fu_8445_p6 = data_117_V_read131_phi_reg_19314.read();
    } else {
        ap_phi_mux_data_117_V_read131_rewind_phi_fu_8445_p6 = data_117_V_read131_rewind_reg_8441.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_118_V_read132_phi_phi_fu_19331_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_118_V_read132_phi_phi_fu_19331_p4 = ap_phi_mux_data_118_V_read132_rewind_phi_fu_8459_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_118_V_read132_phi_phi_fu_19331_p4 = data_118_V_read.read();
    } else {
        ap_phi_mux_data_118_V_read132_phi_phi_fu_19331_p4 = ap_phi_reg_pp0_iter0_data_118_V_read132_phi_reg_19327.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_118_V_read132_rewind_phi_fu_8459_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_118_V_read132_rewind_phi_fu_8459_p6 = data_118_V_read132_phi_reg_19327.read();
    } else {
        ap_phi_mux_data_118_V_read132_rewind_phi_fu_8459_p6 = data_118_V_read132_rewind_reg_8455.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_119_V_read133_phi_phi_fu_19344_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_119_V_read133_phi_phi_fu_19344_p4 = ap_phi_mux_data_119_V_read133_rewind_phi_fu_8473_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_119_V_read133_phi_phi_fu_19344_p4 = data_119_V_read.read();
    } else {
        ap_phi_mux_data_119_V_read133_phi_phi_fu_19344_p4 = ap_phi_reg_pp0_iter0_data_119_V_read133_phi_reg_19340.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_119_V_read133_rewind_phi_fu_8473_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_119_V_read133_rewind_phi_fu_8473_p6 = data_119_V_read133_phi_reg_19340.read();
    } else {
        ap_phi_mux_data_119_V_read133_rewind_phi_fu_8473_p6 = data_119_V_read133_rewind_reg_8469.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_11_V_read25_phi_phi_fu_17940_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_11_V_read25_phi_phi_fu_17940_p4 = ap_phi_mux_data_11_V_read25_rewind_phi_fu_6961_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_11_V_read25_phi_phi_fu_17940_p4 = data_11_V_read.read();
    } else {
        ap_phi_mux_data_11_V_read25_phi_phi_fu_17940_p4 = ap_phi_reg_pp0_iter0_data_11_V_read25_phi_reg_17936.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_11_V_read25_rewind_phi_fu_6961_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_11_V_read25_rewind_phi_fu_6961_p6 = data_11_V_read25_phi_reg_17936.read();
    } else {
        ap_phi_mux_data_11_V_read25_rewind_phi_fu_6961_p6 = data_11_V_read25_rewind_reg_6957.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_120_V_read134_phi_phi_fu_19357_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_120_V_read134_phi_phi_fu_19357_p4 = ap_phi_mux_data_120_V_read134_rewind_phi_fu_8487_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_120_V_read134_phi_phi_fu_19357_p4 = data_120_V_read.read();
    } else {
        ap_phi_mux_data_120_V_read134_phi_phi_fu_19357_p4 = ap_phi_reg_pp0_iter0_data_120_V_read134_phi_reg_19353.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_120_V_read134_rewind_phi_fu_8487_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_120_V_read134_rewind_phi_fu_8487_p6 = data_120_V_read134_phi_reg_19353.read();
    } else {
        ap_phi_mux_data_120_V_read134_rewind_phi_fu_8487_p6 = data_120_V_read134_rewind_reg_8483.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_121_V_read135_phi_phi_fu_19370_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_121_V_read135_phi_phi_fu_19370_p4 = ap_phi_mux_data_121_V_read135_rewind_phi_fu_8501_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_121_V_read135_phi_phi_fu_19370_p4 = data_121_V_read.read();
    } else {
        ap_phi_mux_data_121_V_read135_phi_phi_fu_19370_p4 = ap_phi_reg_pp0_iter0_data_121_V_read135_phi_reg_19366.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_121_V_read135_rewind_phi_fu_8501_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_121_V_read135_rewind_phi_fu_8501_p6 = data_121_V_read135_phi_reg_19366.read();
    } else {
        ap_phi_mux_data_121_V_read135_rewind_phi_fu_8501_p6 = data_121_V_read135_rewind_reg_8497.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_122_V_read136_phi_phi_fu_19383_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_122_V_read136_phi_phi_fu_19383_p4 = ap_phi_mux_data_122_V_read136_rewind_phi_fu_8515_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_122_V_read136_phi_phi_fu_19383_p4 = data_122_V_read.read();
    } else {
        ap_phi_mux_data_122_V_read136_phi_phi_fu_19383_p4 = ap_phi_reg_pp0_iter0_data_122_V_read136_phi_reg_19379.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_122_V_read136_rewind_phi_fu_8515_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_122_V_read136_rewind_phi_fu_8515_p6 = data_122_V_read136_phi_reg_19379.read();
    } else {
        ap_phi_mux_data_122_V_read136_rewind_phi_fu_8515_p6 = data_122_V_read136_rewind_reg_8511.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_123_V_read137_phi_phi_fu_19396_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_123_V_read137_phi_phi_fu_19396_p4 = ap_phi_mux_data_123_V_read137_rewind_phi_fu_8529_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_123_V_read137_phi_phi_fu_19396_p4 = data_123_V_read.read();
    } else {
        ap_phi_mux_data_123_V_read137_phi_phi_fu_19396_p4 = ap_phi_reg_pp0_iter0_data_123_V_read137_phi_reg_19392.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_123_V_read137_rewind_phi_fu_8529_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_123_V_read137_rewind_phi_fu_8529_p6 = data_123_V_read137_phi_reg_19392.read();
    } else {
        ap_phi_mux_data_123_V_read137_rewind_phi_fu_8529_p6 = data_123_V_read137_rewind_reg_8525.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_124_V_read138_phi_phi_fu_19409_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_124_V_read138_phi_phi_fu_19409_p4 = ap_phi_mux_data_124_V_read138_rewind_phi_fu_8543_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_124_V_read138_phi_phi_fu_19409_p4 = data_124_V_read.read();
    } else {
        ap_phi_mux_data_124_V_read138_phi_phi_fu_19409_p4 = ap_phi_reg_pp0_iter0_data_124_V_read138_phi_reg_19405.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_124_V_read138_rewind_phi_fu_8543_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_124_V_read138_rewind_phi_fu_8543_p6 = data_124_V_read138_phi_reg_19405.read();
    } else {
        ap_phi_mux_data_124_V_read138_rewind_phi_fu_8543_p6 = data_124_V_read138_rewind_reg_8539.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_125_V_read139_phi_phi_fu_19422_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_125_V_read139_phi_phi_fu_19422_p4 = ap_phi_mux_data_125_V_read139_rewind_phi_fu_8557_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_125_V_read139_phi_phi_fu_19422_p4 = data_125_V_read.read();
    } else {
        ap_phi_mux_data_125_V_read139_phi_phi_fu_19422_p4 = ap_phi_reg_pp0_iter0_data_125_V_read139_phi_reg_19418.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_125_V_read139_rewind_phi_fu_8557_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_125_V_read139_rewind_phi_fu_8557_p6 = data_125_V_read139_phi_reg_19418.read();
    } else {
        ap_phi_mux_data_125_V_read139_rewind_phi_fu_8557_p6 = data_125_V_read139_rewind_reg_8553.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_126_V_read140_phi_phi_fu_19435_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_126_V_read140_phi_phi_fu_19435_p4 = ap_phi_mux_data_126_V_read140_rewind_phi_fu_8571_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_126_V_read140_phi_phi_fu_19435_p4 = data_126_V_read.read();
    } else {
        ap_phi_mux_data_126_V_read140_phi_phi_fu_19435_p4 = ap_phi_reg_pp0_iter0_data_126_V_read140_phi_reg_19431.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_126_V_read140_rewind_phi_fu_8571_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_126_V_read140_rewind_phi_fu_8571_p6 = data_126_V_read140_phi_reg_19431.read();
    } else {
        ap_phi_mux_data_126_V_read140_rewind_phi_fu_8571_p6 = data_126_V_read140_rewind_reg_8567.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_127_V_read141_phi_phi_fu_19448_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_127_V_read141_phi_phi_fu_19448_p4 = ap_phi_mux_data_127_V_read141_rewind_phi_fu_8585_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_127_V_read141_phi_phi_fu_19448_p4 = data_127_V_read.read();
    } else {
        ap_phi_mux_data_127_V_read141_phi_phi_fu_19448_p4 = ap_phi_reg_pp0_iter0_data_127_V_read141_phi_reg_19444.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_127_V_read141_rewind_phi_fu_8585_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_127_V_read141_rewind_phi_fu_8585_p6 = data_127_V_read141_phi_reg_19444.read();
    } else {
        ap_phi_mux_data_127_V_read141_rewind_phi_fu_8585_p6 = data_127_V_read141_rewind_reg_8581.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_128_V_read142_phi_phi_fu_19461_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_128_V_read142_phi_phi_fu_19461_p4 = ap_phi_mux_data_128_V_read142_rewind_phi_fu_8599_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_128_V_read142_phi_phi_fu_19461_p4 = data_128_V_read.read();
    } else {
        ap_phi_mux_data_128_V_read142_phi_phi_fu_19461_p4 = ap_phi_reg_pp0_iter0_data_128_V_read142_phi_reg_19457.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_128_V_read142_rewind_phi_fu_8599_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_128_V_read142_rewind_phi_fu_8599_p6 = data_128_V_read142_phi_reg_19457.read();
    } else {
        ap_phi_mux_data_128_V_read142_rewind_phi_fu_8599_p6 = data_128_V_read142_rewind_reg_8595.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_129_V_read143_phi_phi_fu_19474_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_129_V_read143_phi_phi_fu_19474_p4 = ap_phi_mux_data_129_V_read143_rewind_phi_fu_8613_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_129_V_read143_phi_phi_fu_19474_p4 = data_129_V_read.read();
    } else {
        ap_phi_mux_data_129_V_read143_phi_phi_fu_19474_p4 = ap_phi_reg_pp0_iter0_data_129_V_read143_phi_reg_19470.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_129_V_read143_rewind_phi_fu_8613_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_129_V_read143_rewind_phi_fu_8613_p6 = data_129_V_read143_phi_reg_19470.read();
    } else {
        ap_phi_mux_data_129_V_read143_rewind_phi_fu_8613_p6 = data_129_V_read143_rewind_reg_8609.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_12_V_read26_phi_phi_fu_17953_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_12_V_read26_phi_phi_fu_17953_p4 = ap_phi_mux_data_12_V_read26_rewind_phi_fu_6975_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_12_V_read26_phi_phi_fu_17953_p4 = data_12_V_read.read();
    } else {
        ap_phi_mux_data_12_V_read26_phi_phi_fu_17953_p4 = ap_phi_reg_pp0_iter0_data_12_V_read26_phi_reg_17949.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_12_V_read26_rewind_phi_fu_6975_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_12_V_read26_rewind_phi_fu_6975_p6 = data_12_V_read26_phi_reg_17949.read();
    } else {
        ap_phi_mux_data_12_V_read26_rewind_phi_fu_6975_p6 = data_12_V_read26_rewind_reg_6971.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_130_V_read144_phi_phi_fu_19487_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_130_V_read144_phi_phi_fu_19487_p4 = ap_phi_mux_data_130_V_read144_rewind_phi_fu_8627_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_130_V_read144_phi_phi_fu_19487_p4 = data_130_V_read.read();
    } else {
        ap_phi_mux_data_130_V_read144_phi_phi_fu_19487_p4 = ap_phi_reg_pp0_iter0_data_130_V_read144_phi_reg_19483.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_130_V_read144_rewind_phi_fu_8627_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_130_V_read144_rewind_phi_fu_8627_p6 = data_130_V_read144_phi_reg_19483.read();
    } else {
        ap_phi_mux_data_130_V_read144_rewind_phi_fu_8627_p6 = data_130_V_read144_rewind_reg_8623.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_131_V_read145_phi_phi_fu_19500_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_131_V_read145_phi_phi_fu_19500_p4 = ap_phi_mux_data_131_V_read145_rewind_phi_fu_8641_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_131_V_read145_phi_phi_fu_19500_p4 = data_131_V_read.read();
    } else {
        ap_phi_mux_data_131_V_read145_phi_phi_fu_19500_p4 = ap_phi_reg_pp0_iter0_data_131_V_read145_phi_reg_19496.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_131_V_read145_rewind_phi_fu_8641_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_131_V_read145_rewind_phi_fu_8641_p6 = data_131_V_read145_phi_reg_19496.read();
    } else {
        ap_phi_mux_data_131_V_read145_rewind_phi_fu_8641_p6 = data_131_V_read145_rewind_reg_8637.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_132_V_read146_phi_phi_fu_19513_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_132_V_read146_phi_phi_fu_19513_p4 = ap_phi_mux_data_132_V_read146_rewind_phi_fu_8655_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_132_V_read146_phi_phi_fu_19513_p4 = data_132_V_read.read();
    } else {
        ap_phi_mux_data_132_V_read146_phi_phi_fu_19513_p4 = ap_phi_reg_pp0_iter0_data_132_V_read146_phi_reg_19509.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_132_V_read146_rewind_phi_fu_8655_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_132_V_read146_rewind_phi_fu_8655_p6 = data_132_V_read146_phi_reg_19509.read();
    } else {
        ap_phi_mux_data_132_V_read146_rewind_phi_fu_8655_p6 = data_132_V_read146_rewind_reg_8651.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_133_V_read147_phi_phi_fu_19526_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_133_V_read147_phi_phi_fu_19526_p4 = ap_phi_mux_data_133_V_read147_rewind_phi_fu_8669_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_133_V_read147_phi_phi_fu_19526_p4 = data_133_V_read.read();
    } else {
        ap_phi_mux_data_133_V_read147_phi_phi_fu_19526_p4 = ap_phi_reg_pp0_iter0_data_133_V_read147_phi_reg_19522.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_133_V_read147_rewind_phi_fu_8669_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_133_V_read147_rewind_phi_fu_8669_p6 = data_133_V_read147_phi_reg_19522.read();
    } else {
        ap_phi_mux_data_133_V_read147_rewind_phi_fu_8669_p6 = data_133_V_read147_rewind_reg_8665.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_134_V_read148_phi_phi_fu_19539_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_134_V_read148_phi_phi_fu_19539_p4 = ap_phi_mux_data_134_V_read148_rewind_phi_fu_8683_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_134_V_read148_phi_phi_fu_19539_p4 = data_134_V_read.read();
    } else {
        ap_phi_mux_data_134_V_read148_phi_phi_fu_19539_p4 = ap_phi_reg_pp0_iter0_data_134_V_read148_phi_reg_19535.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_134_V_read148_rewind_phi_fu_8683_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_134_V_read148_rewind_phi_fu_8683_p6 = data_134_V_read148_phi_reg_19535.read();
    } else {
        ap_phi_mux_data_134_V_read148_rewind_phi_fu_8683_p6 = data_134_V_read148_rewind_reg_8679.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_135_V_read149_phi_phi_fu_19552_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_135_V_read149_phi_phi_fu_19552_p4 = ap_phi_mux_data_135_V_read149_rewind_phi_fu_8697_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_135_V_read149_phi_phi_fu_19552_p4 = data_135_V_read.read();
    } else {
        ap_phi_mux_data_135_V_read149_phi_phi_fu_19552_p4 = ap_phi_reg_pp0_iter0_data_135_V_read149_phi_reg_19548.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_135_V_read149_rewind_phi_fu_8697_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_135_V_read149_rewind_phi_fu_8697_p6 = data_135_V_read149_phi_reg_19548.read();
    } else {
        ap_phi_mux_data_135_V_read149_rewind_phi_fu_8697_p6 = data_135_V_read149_rewind_reg_8693.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_136_V_read150_phi_phi_fu_19565_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_136_V_read150_phi_phi_fu_19565_p4 = ap_phi_mux_data_136_V_read150_rewind_phi_fu_8711_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_136_V_read150_phi_phi_fu_19565_p4 = data_136_V_read.read();
    } else {
        ap_phi_mux_data_136_V_read150_phi_phi_fu_19565_p4 = ap_phi_reg_pp0_iter0_data_136_V_read150_phi_reg_19561.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_136_V_read150_rewind_phi_fu_8711_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_136_V_read150_rewind_phi_fu_8711_p6 = data_136_V_read150_phi_reg_19561.read();
    } else {
        ap_phi_mux_data_136_V_read150_rewind_phi_fu_8711_p6 = data_136_V_read150_rewind_reg_8707.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_137_V_read151_phi_phi_fu_19578_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_137_V_read151_phi_phi_fu_19578_p4 = ap_phi_mux_data_137_V_read151_rewind_phi_fu_8725_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_137_V_read151_phi_phi_fu_19578_p4 = data_137_V_read.read();
    } else {
        ap_phi_mux_data_137_V_read151_phi_phi_fu_19578_p4 = ap_phi_reg_pp0_iter0_data_137_V_read151_phi_reg_19574.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_137_V_read151_rewind_phi_fu_8725_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_137_V_read151_rewind_phi_fu_8725_p6 = data_137_V_read151_phi_reg_19574.read();
    } else {
        ap_phi_mux_data_137_V_read151_rewind_phi_fu_8725_p6 = data_137_V_read151_rewind_reg_8721.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_138_V_read152_phi_phi_fu_19591_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_138_V_read152_phi_phi_fu_19591_p4 = ap_phi_mux_data_138_V_read152_rewind_phi_fu_8739_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_138_V_read152_phi_phi_fu_19591_p4 = data_138_V_read.read();
    } else {
        ap_phi_mux_data_138_V_read152_phi_phi_fu_19591_p4 = ap_phi_reg_pp0_iter0_data_138_V_read152_phi_reg_19587.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_138_V_read152_rewind_phi_fu_8739_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_138_V_read152_rewind_phi_fu_8739_p6 = data_138_V_read152_phi_reg_19587.read();
    } else {
        ap_phi_mux_data_138_V_read152_rewind_phi_fu_8739_p6 = data_138_V_read152_rewind_reg_8735.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_139_V_read153_phi_phi_fu_19604_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_139_V_read153_phi_phi_fu_19604_p4 = ap_phi_mux_data_139_V_read153_rewind_phi_fu_8753_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_139_V_read153_phi_phi_fu_19604_p4 = data_139_V_read.read();
    } else {
        ap_phi_mux_data_139_V_read153_phi_phi_fu_19604_p4 = ap_phi_reg_pp0_iter0_data_139_V_read153_phi_reg_19600.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_139_V_read153_rewind_phi_fu_8753_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_139_V_read153_rewind_phi_fu_8753_p6 = data_139_V_read153_phi_reg_19600.read();
    } else {
        ap_phi_mux_data_139_V_read153_rewind_phi_fu_8753_p6 = data_139_V_read153_rewind_reg_8749.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_13_V_read27_phi_phi_fu_17966_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_13_V_read27_phi_phi_fu_17966_p4 = ap_phi_mux_data_13_V_read27_rewind_phi_fu_6989_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_13_V_read27_phi_phi_fu_17966_p4 = data_13_V_read.read();
    } else {
        ap_phi_mux_data_13_V_read27_phi_phi_fu_17966_p4 = ap_phi_reg_pp0_iter0_data_13_V_read27_phi_reg_17962.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_13_V_read27_rewind_phi_fu_6989_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_13_V_read27_rewind_phi_fu_6989_p6 = data_13_V_read27_phi_reg_17962.read();
    } else {
        ap_phi_mux_data_13_V_read27_rewind_phi_fu_6989_p6 = data_13_V_read27_rewind_reg_6985.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_140_V_read154_phi_phi_fu_19617_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_140_V_read154_phi_phi_fu_19617_p4 = ap_phi_mux_data_140_V_read154_rewind_phi_fu_8767_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_140_V_read154_phi_phi_fu_19617_p4 = data_140_V_read.read();
    } else {
        ap_phi_mux_data_140_V_read154_phi_phi_fu_19617_p4 = ap_phi_reg_pp0_iter0_data_140_V_read154_phi_reg_19613.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_140_V_read154_rewind_phi_fu_8767_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_140_V_read154_rewind_phi_fu_8767_p6 = data_140_V_read154_phi_reg_19613.read();
    } else {
        ap_phi_mux_data_140_V_read154_rewind_phi_fu_8767_p6 = data_140_V_read154_rewind_reg_8763.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_141_V_read155_phi_phi_fu_19630_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_141_V_read155_phi_phi_fu_19630_p4 = ap_phi_mux_data_141_V_read155_rewind_phi_fu_8781_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_141_V_read155_phi_phi_fu_19630_p4 = data_141_V_read.read();
    } else {
        ap_phi_mux_data_141_V_read155_phi_phi_fu_19630_p4 = ap_phi_reg_pp0_iter0_data_141_V_read155_phi_reg_19626.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_141_V_read155_rewind_phi_fu_8781_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_141_V_read155_rewind_phi_fu_8781_p6 = data_141_V_read155_phi_reg_19626.read();
    } else {
        ap_phi_mux_data_141_V_read155_rewind_phi_fu_8781_p6 = data_141_V_read155_rewind_reg_8777.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_142_V_read156_phi_phi_fu_19643_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_142_V_read156_phi_phi_fu_19643_p4 = ap_phi_mux_data_142_V_read156_rewind_phi_fu_8795_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_142_V_read156_phi_phi_fu_19643_p4 = data_142_V_read.read();
    } else {
        ap_phi_mux_data_142_V_read156_phi_phi_fu_19643_p4 = ap_phi_reg_pp0_iter0_data_142_V_read156_phi_reg_19639.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_142_V_read156_rewind_phi_fu_8795_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_142_V_read156_rewind_phi_fu_8795_p6 = data_142_V_read156_phi_reg_19639.read();
    } else {
        ap_phi_mux_data_142_V_read156_rewind_phi_fu_8795_p6 = data_142_V_read156_rewind_reg_8791.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_143_V_read157_phi_phi_fu_19656_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_143_V_read157_phi_phi_fu_19656_p4 = ap_phi_mux_data_143_V_read157_rewind_phi_fu_8809_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_143_V_read157_phi_phi_fu_19656_p4 = data_143_V_read.read();
    } else {
        ap_phi_mux_data_143_V_read157_phi_phi_fu_19656_p4 = ap_phi_reg_pp0_iter0_data_143_V_read157_phi_reg_19652.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_143_V_read157_rewind_phi_fu_8809_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_143_V_read157_rewind_phi_fu_8809_p6 = data_143_V_read157_phi_reg_19652.read();
    } else {
        ap_phi_mux_data_143_V_read157_rewind_phi_fu_8809_p6 = data_143_V_read157_rewind_reg_8805.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_144_V_read158_phi_phi_fu_19669_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_144_V_read158_phi_phi_fu_19669_p4 = ap_phi_mux_data_144_V_read158_rewind_phi_fu_8823_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_144_V_read158_phi_phi_fu_19669_p4 = data_144_V_read.read();
    } else {
        ap_phi_mux_data_144_V_read158_phi_phi_fu_19669_p4 = ap_phi_reg_pp0_iter0_data_144_V_read158_phi_reg_19665.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_144_V_read158_rewind_phi_fu_8823_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_144_V_read158_rewind_phi_fu_8823_p6 = data_144_V_read158_phi_reg_19665.read();
    } else {
        ap_phi_mux_data_144_V_read158_rewind_phi_fu_8823_p6 = data_144_V_read158_rewind_reg_8819.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_145_V_read159_phi_phi_fu_19682_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_145_V_read159_phi_phi_fu_19682_p4 = ap_phi_mux_data_145_V_read159_rewind_phi_fu_8837_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_145_V_read159_phi_phi_fu_19682_p4 = data_145_V_read.read();
    } else {
        ap_phi_mux_data_145_V_read159_phi_phi_fu_19682_p4 = ap_phi_reg_pp0_iter0_data_145_V_read159_phi_reg_19678.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_145_V_read159_rewind_phi_fu_8837_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_145_V_read159_rewind_phi_fu_8837_p6 = data_145_V_read159_phi_reg_19678.read();
    } else {
        ap_phi_mux_data_145_V_read159_rewind_phi_fu_8837_p6 = data_145_V_read159_rewind_reg_8833.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_146_V_read160_phi_phi_fu_19695_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_146_V_read160_phi_phi_fu_19695_p4 = ap_phi_mux_data_146_V_read160_rewind_phi_fu_8851_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_146_V_read160_phi_phi_fu_19695_p4 = data_146_V_read.read();
    } else {
        ap_phi_mux_data_146_V_read160_phi_phi_fu_19695_p4 = ap_phi_reg_pp0_iter0_data_146_V_read160_phi_reg_19691.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_146_V_read160_rewind_phi_fu_8851_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_146_V_read160_rewind_phi_fu_8851_p6 = data_146_V_read160_phi_reg_19691.read();
    } else {
        ap_phi_mux_data_146_V_read160_rewind_phi_fu_8851_p6 = data_146_V_read160_rewind_reg_8847.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_147_V_read161_phi_phi_fu_19708_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_147_V_read161_phi_phi_fu_19708_p4 = ap_phi_mux_data_147_V_read161_rewind_phi_fu_8865_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_147_V_read161_phi_phi_fu_19708_p4 = data_147_V_read.read();
    } else {
        ap_phi_mux_data_147_V_read161_phi_phi_fu_19708_p4 = ap_phi_reg_pp0_iter0_data_147_V_read161_phi_reg_19704.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_147_V_read161_rewind_phi_fu_8865_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_147_V_read161_rewind_phi_fu_8865_p6 = data_147_V_read161_phi_reg_19704.read();
    } else {
        ap_phi_mux_data_147_V_read161_rewind_phi_fu_8865_p6 = data_147_V_read161_rewind_reg_8861.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_148_V_read162_phi_phi_fu_19721_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_148_V_read162_phi_phi_fu_19721_p4 = ap_phi_mux_data_148_V_read162_rewind_phi_fu_8879_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_148_V_read162_phi_phi_fu_19721_p4 = data_148_V_read.read();
    } else {
        ap_phi_mux_data_148_V_read162_phi_phi_fu_19721_p4 = ap_phi_reg_pp0_iter0_data_148_V_read162_phi_reg_19717.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_148_V_read162_rewind_phi_fu_8879_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_148_V_read162_rewind_phi_fu_8879_p6 = data_148_V_read162_phi_reg_19717.read();
    } else {
        ap_phi_mux_data_148_V_read162_rewind_phi_fu_8879_p6 = data_148_V_read162_rewind_reg_8875.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_149_V_read163_phi_phi_fu_19734_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_149_V_read163_phi_phi_fu_19734_p4 = ap_phi_mux_data_149_V_read163_rewind_phi_fu_8893_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_149_V_read163_phi_phi_fu_19734_p4 = data_149_V_read.read();
    } else {
        ap_phi_mux_data_149_V_read163_phi_phi_fu_19734_p4 = ap_phi_reg_pp0_iter0_data_149_V_read163_phi_reg_19730.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_149_V_read163_rewind_phi_fu_8893_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_149_V_read163_rewind_phi_fu_8893_p6 = data_149_V_read163_phi_reg_19730.read();
    } else {
        ap_phi_mux_data_149_V_read163_rewind_phi_fu_8893_p6 = data_149_V_read163_rewind_reg_8889.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_14_V_read28_phi_phi_fu_17979_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_14_V_read28_phi_phi_fu_17979_p4 = ap_phi_mux_data_14_V_read28_rewind_phi_fu_7003_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_14_V_read28_phi_phi_fu_17979_p4 = data_14_V_read.read();
    } else {
        ap_phi_mux_data_14_V_read28_phi_phi_fu_17979_p4 = ap_phi_reg_pp0_iter0_data_14_V_read28_phi_reg_17975.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_14_V_read28_rewind_phi_fu_7003_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_14_V_read28_rewind_phi_fu_7003_p6 = data_14_V_read28_phi_reg_17975.read();
    } else {
        ap_phi_mux_data_14_V_read28_rewind_phi_fu_7003_p6 = data_14_V_read28_rewind_reg_6999.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_150_V_read164_phi_phi_fu_19747_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_150_V_read164_phi_phi_fu_19747_p4 = ap_phi_mux_data_150_V_read164_rewind_phi_fu_8907_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_150_V_read164_phi_phi_fu_19747_p4 = data_150_V_read.read();
    } else {
        ap_phi_mux_data_150_V_read164_phi_phi_fu_19747_p4 = ap_phi_reg_pp0_iter0_data_150_V_read164_phi_reg_19743.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_150_V_read164_rewind_phi_fu_8907_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_150_V_read164_rewind_phi_fu_8907_p6 = data_150_V_read164_phi_reg_19743.read();
    } else {
        ap_phi_mux_data_150_V_read164_rewind_phi_fu_8907_p6 = data_150_V_read164_rewind_reg_8903.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_151_V_read165_phi_phi_fu_19760_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_151_V_read165_phi_phi_fu_19760_p4 = ap_phi_mux_data_151_V_read165_rewind_phi_fu_8921_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_151_V_read165_phi_phi_fu_19760_p4 = data_151_V_read.read();
    } else {
        ap_phi_mux_data_151_V_read165_phi_phi_fu_19760_p4 = ap_phi_reg_pp0_iter0_data_151_V_read165_phi_reg_19756.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_151_V_read165_rewind_phi_fu_8921_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_151_V_read165_rewind_phi_fu_8921_p6 = data_151_V_read165_phi_reg_19756.read();
    } else {
        ap_phi_mux_data_151_V_read165_rewind_phi_fu_8921_p6 = data_151_V_read165_rewind_reg_8917.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_152_V_read166_phi_phi_fu_19773_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_152_V_read166_phi_phi_fu_19773_p4 = ap_phi_mux_data_152_V_read166_rewind_phi_fu_8935_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_152_V_read166_phi_phi_fu_19773_p4 = data_152_V_read.read();
    } else {
        ap_phi_mux_data_152_V_read166_phi_phi_fu_19773_p4 = ap_phi_reg_pp0_iter0_data_152_V_read166_phi_reg_19769.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_152_V_read166_rewind_phi_fu_8935_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_152_V_read166_rewind_phi_fu_8935_p6 = data_152_V_read166_phi_reg_19769.read();
    } else {
        ap_phi_mux_data_152_V_read166_rewind_phi_fu_8935_p6 = data_152_V_read166_rewind_reg_8931.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_153_V_read167_phi_phi_fu_19786_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_153_V_read167_phi_phi_fu_19786_p4 = ap_phi_mux_data_153_V_read167_rewind_phi_fu_8949_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_153_V_read167_phi_phi_fu_19786_p4 = data_153_V_read.read();
    } else {
        ap_phi_mux_data_153_V_read167_phi_phi_fu_19786_p4 = ap_phi_reg_pp0_iter0_data_153_V_read167_phi_reg_19782.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_153_V_read167_rewind_phi_fu_8949_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_153_V_read167_rewind_phi_fu_8949_p6 = data_153_V_read167_phi_reg_19782.read();
    } else {
        ap_phi_mux_data_153_V_read167_rewind_phi_fu_8949_p6 = data_153_V_read167_rewind_reg_8945.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_154_V_read168_phi_phi_fu_19799_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_154_V_read168_phi_phi_fu_19799_p4 = ap_phi_mux_data_154_V_read168_rewind_phi_fu_8963_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_154_V_read168_phi_phi_fu_19799_p4 = data_154_V_read.read();
    } else {
        ap_phi_mux_data_154_V_read168_phi_phi_fu_19799_p4 = ap_phi_reg_pp0_iter0_data_154_V_read168_phi_reg_19795.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_154_V_read168_rewind_phi_fu_8963_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_154_V_read168_rewind_phi_fu_8963_p6 = data_154_V_read168_phi_reg_19795.read();
    } else {
        ap_phi_mux_data_154_V_read168_rewind_phi_fu_8963_p6 = data_154_V_read168_rewind_reg_8959.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_155_V_read169_phi_phi_fu_19812_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_155_V_read169_phi_phi_fu_19812_p4 = ap_phi_mux_data_155_V_read169_rewind_phi_fu_8977_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_155_V_read169_phi_phi_fu_19812_p4 = data_155_V_read.read();
    } else {
        ap_phi_mux_data_155_V_read169_phi_phi_fu_19812_p4 = ap_phi_reg_pp0_iter0_data_155_V_read169_phi_reg_19808.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_155_V_read169_rewind_phi_fu_8977_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_155_V_read169_rewind_phi_fu_8977_p6 = data_155_V_read169_phi_reg_19808.read();
    } else {
        ap_phi_mux_data_155_V_read169_rewind_phi_fu_8977_p6 = data_155_V_read169_rewind_reg_8973.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_156_V_read170_phi_phi_fu_19825_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_156_V_read170_phi_phi_fu_19825_p4 = ap_phi_mux_data_156_V_read170_rewind_phi_fu_8991_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_156_V_read170_phi_phi_fu_19825_p4 = data_156_V_read.read();
    } else {
        ap_phi_mux_data_156_V_read170_phi_phi_fu_19825_p4 = ap_phi_reg_pp0_iter0_data_156_V_read170_phi_reg_19821.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_156_V_read170_rewind_phi_fu_8991_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_156_V_read170_rewind_phi_fu_8991_p6 = data_156_V_read170_phi_reg_19821.read();
    } else {
        ap_phi_mux_data_156_V_read170_rewind_phi_fu_8991_p6 = data_156_V_read170_rewind_reg_8987.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_157_V_read171_phi_phi_fu_19838_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_157_V_read171_phi_phi_fu_19838_p4 = ap_phi_mux_data_157_V_read171_rewind_phi_fu_9005_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_157_V_read171_phi_phi_fu_19838_p4 = data_157_V_read.read();
    } else {
        ap_phi_mux_data_157_V_read171_phi_phi_fu_19838_p4 = ap_phi_reg_pp0_iter0_data_157_V_read171_phi_reg_19834.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_157_V_read171_rewind_phi_fu_9005_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_157_V_read171_rewind_phi_fu_9005_p6 = data_157_V_read171_phi_reg_19834.read();
    } else {
        ap_phi_mux_data_157_V_read171_rewind_phi_fu_9005_p6 = data_157_V_read171_rewind_reg_9001.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_158_V_read172_phi_phi_fu_19851_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_158_V_read172_phi_phi_fu_19851_p4 = ap_phi_mux_data_158_V_read172_rewind_phi_fu_9019_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_158_V_read172_phi_phi_fu_19851_p4 = data_158_V_read.read();
    } else {
        ap_phi_mux_data_158_V_read172_phi_phi_fu_19851_p4 = ap_phi_reg_pp0_iter0_data_158_V_read172_phi_reg_19847.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_158_V_read172_rewind_phi_fu_9019_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_158_V_read172_rewind_phi_fu_9019_p6 = data_158_V_read172_phi_reg_19847.read();
    } else {
        ap_phi_mux_data_158_V_read172_rewind_phi_fu_9019_p6 = data_158_V_read172_rewind_reg_9015.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_159_V_read173_phi_phi_fu_19864_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_159_V_read173_phi_phi_fu_19864_p4 = ap_phi_mux_data_159_V_read173_rewind_phi_fu_9033_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_159_V_read173_phi_phi_fu_19864_p4 = data_159_V_read.read();
    } else {
        ap_phi_mux_data_159_V_read173_phi_phi_fu_19864_p4 = ap_phi_reg_pp0_iter0_data_159_V_read173_phi_reg_19860.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_159_V_read173_rewind_phi_fu_9033_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_159_V_read173_rewind_phi_fu_9033_p6 = data_159_V_read173_phi_reg_19860.read();
    } else {
        ap_phi_mux_data_159_V_read173_rewind_phi_fu_9033_p6 = data_159_V_read173_rewind_reg_9029.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_15_V_read29_phi_phi_fu_17992_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_15_V_read29_phi_phi_fu_17992_p4 = ap_phi_mux_data_15_V_read29_rewind_phi_fu_7017_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_15_V_read29_phi_phi_fu_17992_p4 = data_15_V_read.read();
    } else {
        ap_phi_mux_data_15_V_read29_phi_phi_fu_17992_p4 = ap_phi_reg_pp0_iter0_data_15_V_read29_phi_reg_17988.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_15_V_read29_rewind_phi_fu_7017_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_15_V_read29_rewind_phi_fu_7017_p6 = data_15_V_read29_phi_reg_17988.read();
    } else {
        ap_phi_mux_data_15_V_read29_rewind_phi_fu_7017_p6 = data_15_V_read29_rewind_reg_7013.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_160_V_read174_phi_phi_fu_19877_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_160_V_read174_phi_phi_fu_19877_p4 = ap_phi_mux_data_160_V_read174_rewind_phi_fu_9047_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_160_V_read174_phi_phi_fu_19877_p4 = data_160_V_read.read();
    } else {
        ap_phi_mux_data_160_V_read174_phi_phi_fu_19877_p4 = ap_phi_reg_pp0_iter0_data_160_V_read174_phi_reg_19873.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_160_V_read174_rewind_phi_fu_9047_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_160_V_read174_rewind_phi_fu_9047_p6 = data_160_V_read174_phi_reg_19873.read();
    } else {
        ap_phi_mux_data_160_V_read174_rewind_phi_fu_9047_p6 = data_160_V_read174_rewind_reg_9043.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_161_V_read175_phi_phi_fu_19890_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_161_V_read175_phi_phi_fu_19890_p4 = ap_phi_mux_data_161_V_read175_rewind_phi_fu_9061_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_161_V_read175_phi_phi_fu_19890_p4 = data_161_V_read.read();
    } else {
        ap_phi_mux_data_161_V_read175_phi_phi_fu_19890_p4 = ap_phi_reg_pp0_iter0_data_161_V_read175_phi_reg_19886.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_161_V_read175_rewind_phi_fu_9061_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_161_V_read175_rewind_phi_fu_9061_p6 = data_161_V_read175_phi_reg_19886.read();
    } else {
        ap_phi_mux_data_161_V_read175_rewind_phi_fu_9061_p6 = data_161_V_read175_rewind_reg_9057.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_162_V_read176_phi_phi_fu_19903_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_162_V_read176_phi_phi_fu_19903_p4 = ap_phi_mux_data_162_V_read176_rewind_phi_fu_9075_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_162_V_read176_phi_phi_fu_19903_p4 = data_162_V_read.read();
    } else {
        ap_phi_mux_data_162_V_read176_phi_phi_fu_19903_p4 = ap_phi_reg_pp0_iter0_data_162_V_read176_phi_reg_19899.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_162_V_read176_rewind_phi_fu_9075_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_162_V_read176_rewind_phi_fu_9075_p6 = data_162_V_read176_phi_reg_19899.read();
    } else {
        ap_phi_mux_data_162_V_read176_rewind_phi_fu_9075_p6 = data_162_V_read176_rewind_reg_9071.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_163_V_read177_phi_phi_fu_19916_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_163_V_read177_phi_phi_fu_19916_p4 = ap_phi_mux_data_163_V_read177_rewind_phi_fu_9089_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_163_V_read177_phi_phi_fu_19916_p4 = data_163_V_read.read();
    } else {
        ap_phi_mux_data_163_V_read177_phi_phi_fu_19916_p4 = ap_phi_reg_pp0_iter0_data_163_V_read177_phi_reg_19912.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_163_V_read177_rewind_phi_fu_9089_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_163_V_read177_rewind_phi_fu_9089_p6 = data_163_V_read177_phi_reg_19912.read();
    } else {
        ap_phi_mux_data_163_V_read177_rewind_phi_fu_9089_p6 = data_163_V_read177_rewind_reg_9085.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_164_V_read178_phi_phi_fu_19929_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_164_V_read178_phi_phi_fu_19929_p4 = ap_phi_mux_data_164_V_read178_rewind_phi_fu_9103_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_164_V_read178_phi_phi_fu_19929_p4 = data_164_V_read.read();
    } else {
        ap_phi_mux_data_164_V_read178_phi_phi_fu_19929_p4 = ap_phi_reg_pp0_iter0_data_164_V_read178_phi_reg_19925.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_164_V_read178_rewind_phi_fu_9103_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_164_V_read178_rewind_phi_fu_9103_p6 = data_164_V_read178_phi_reg_19925.read();
    } else {
        ap_phi_mux_data_164_V_read178_rewind_phi_fu_9103_p6 = data_164_V_read178_rewind_reg_9099.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_165_V_read179_phi_phi_fu_19942_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_165_V_read179_phi_phi_fu_19942_p4 = ap_phi_mux_data_165_V_read179_rewind_phi_fu_9117_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_165_V_read179_phi_phi_fu_19942_p4 = data_165_V_read.read();
    } else {
        ap_phi_mux_data_165_V_read179_phi_phi_fu_19942_p4 = ap_phi_reg_pp0_iter0_data_165_V_read179_phi_reg_19938.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_165_V_read179_rewind_phi_fu_9117_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_165_V_read179_rewind_phi_fu_9117_p6 = data_165_V_read179_phi_reg_19938.read();
    } else {
        ap_phi_mux_data_165_V_read179_rewind_phi_fu_9117_p6 = data_165_V_read179_rewind_reg_9113.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_166_V_read180_phi_phi_fu_19955_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_166_V_read180_phi_phi_fu_19955_p4 = ap_phi_mux_data_166_V_read180_rewind_phi_fu_9131_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_166_V_read180_phi_phi_fu_19955_p4 = data_166_V_read.read();
    } else {
        ap_phi_mux_data_166_V_read180_phi_phi_fu_19955_p4 = ap_phi_reg_pp0_iter0_data_166_V_read180_phi_reg_19951.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_166_V_read180_rewind_phi_fu_9131_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_166_V_read180_rewind_phi_fu_9131_p6 = data_166_V_read180_phi_reg_19951.read();
    } else {
        ap_phi_mux_data_166_V_read180_rewind_phi_fu_9131_p6 = data_166_V_read180_rewind_reg_9127.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_167_V_read181_phi_phi_fu_19968_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_167_V_read181_phi_phi_fu_19968_p4 = ap_phi_mux_data_167_V_read181_rewind_phi_fu_9145_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_167_V_read181_phi_phi_fu_19968_p4 = data_167_V_read.read();
    } else {
        ap_phi_mux_data_167_V_read181_phi_phi_fu_19968_p4 = ap_phi_reg_pp0_iter0_data_167_V_read181_phi_reg_19964.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_167_V_read181_rewind_phi_fu_9145_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_167_V_read181_rewind_phi_fu_9145_p6 = data_167_V_read181_phi_reg_19964.read();
    } else {
        ap_phi_mux_data_167_V_read181_rewind_phi_fu_9145_p6 = data_167_V_read181_rewind_reg_9141.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_168_V_read182_phi_phi_fu_19981_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_168_V_read182_phi_phi_fu_19981_p4 = ap_phi_mux_data_168_V_read182_rewind_phi_fu_9159_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_168_V_read182_phi_phi_fu_19981_p4 = data_168_V_read.read();
    } else {
        ap_phi_mux_data_168_V_read182_phi_phi_fu_19981_p4 = ap_phi_reg_pp0_iter0_data_168_V_read182_phi_reg_19977.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_168_V_read182_rewind_phi_fu_9159_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_168_V_read182_rewind_phi_fu_9159_p6 = data_168_V_read182_phi_reg_19977.read();
    } else {
        ap_phi_mux_data_168_V_read182_rewind_phi_fu_9159_p6 = data_168_V_read182_rewind_reg_9155.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_169_V_read183_phi_phi_fu_19994_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_169_V_read183_phi_phi_fu_19994_p4 = ap_phi_mux_data_169_V_read183_rewind_phi_fu_9173_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_169_V_read183_phi_phi_fu_19994_p4 = data_169_V_read.read();
    } else {
        ap_phi_mux_data_169_V_read183_phi_phi_fu_19994_p4 = ap_phi_reg_pp0_iter0_data_169_V_read183_phi_reg_19990.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_169_V_read183_rewind_phi_fu_9173_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_169_V_read183_rewind_phi_fu_9173_p6 = data_169_V_read183_phi_reg_19990.read();
    } else {
        ap_phi_mux_data_169_V_read183_rewind_phi_fu_9173_p6 = data_169_V_read183_rewind_reg_9169.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_16_V_read30_phi_phi_fu_18005_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_16_V_read30_phi_phi_fu_18005_p4 = ap_phi_mux_data_16_V_read30_rewind_phi_fu_7031_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_16_V_read30_phi_phi_fu_18005_p4 = data_16_V_read.read();
    } else {
        ap_phi_mux_data_16_V_read30_phi_phi_fu_18005_p4 = ap_phi_reg_pp0_iter0_data_16_V_read30_phi_reg_18001.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_16_V_read30_rewind_phi_fu_7031_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_16_V_read30_rewind_phi_fu_7031_p6 = data_16_V_read30_phi_reg_18001.read();
    } else {
        ap_phi_mux_data_16_V_read30_rewind_phi_fu_7031_p6 = data_16_V_read30_rewind_reg_7027.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_170_V_read184_phi_phi_fu_20007_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_170_V_read184_phi_phi_fu_20007_p4 = ap_phi_mux_data_170_V_read184_rewind_phi_fu_9187_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_170_V_read184_phi_phi_fu_20007_p4 = data_170_V_read.read();
    } else {
        ap_phi_mux_data_170_V_read184_phi_phi_fu_20007_p4 = ap_phi_reg_pp0_iter0_data_170_V_read184_phi_reg_20003.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_170_V_read184_rewind_phi_fu_9187_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_170_V_read184_rewind_phi_fu_9187_p6 = data_170_V_read184_phi_reg_20003.read();
    } else {
        ap_phi_mux_data_170_V_read184_rewind_phi_fu_9187_p6 = data_170_V_read184_rewind_reg_9183.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_171_V_read185_phi_phi_fu_20020_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_171_V_read185_phi_phi_fu_20020_p4 = ap_phi_mux_data_171_V_read185_rewind_phi_fu_9201_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_171_V_read185_phi_phi_fu_20020_p4 = data_171_V_read.read();
    } else {
        ap_phi_mux_data_171_V_read185_phi_phi_fu_20020_p4 = ap_phi_reg_pp0_iter0_data_171_V_read185_phi_reg_20016.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_171_V_read185_rewind_phi_fu_9201_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_171_V_read185_rewind_phi_fu_9201_p6 = data_171_V_read185_phi_reg_20016.read();
    } else {
        ap_phi_mux_data_171_V_read185_rewind_phi_fu_9201_p6 = data_171_V_read185_rewind_reg_9197.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_172_V_read186_phi_phi_fu_20033_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_172_V_read186_phi_phi_fu_20033_p4 = ap_phi_mux_data_172_V_read186_rewind_phi_fu_9215_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_172_V_read186_phi_phi_fu_20033_p4 = data_172_V_read.read();
    } else {
        ap_phi_mux_data_172_V_read186_phi_phi_fu_20033_p4 = ap_phi_reg_pp0_iter0_data_172_V_read186_phi_reg_20029.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_172_V_read186_rewind_phi_fu_9215_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_172_V_read186_rewind_phi_fu_9215_p6 = data_172_V_read186_phi_reg_20029.read();
    } else {
        ap_phi_mux_data_172_V_read186_rewind_phi_fu_9215_p6 = data_172_V_read186_rewind_reg_9211.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_173_V_read187_phi_phi_fu_20046_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_173_V_read187_phi_phi_fu_20046_p4 = ap_phi_mux_data_173_V_read187_rewind_phi_fu_9229_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_173_V_read187_phi_phi_fu_20046_p4 = data_173_V_read.read();
    } else {
        ap_phi_mux_data_173_V_read187_phi_phi_fu_20046_p4 = ap_phi_reg_pp0_iter0_data_173_V_read187_phi_reg_20042.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_173_V_read187_rewind_phi_fu_9229_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_173_V_read187_rewind_phi_fu_9229_p6 = data_173_V_read187_phi_reg_20042.read();
    } else {
        ap_phi_mux_data_173_V_read187_rewind_phi_fu_9229_p6 = data_173_V_read187_rewind_reg_9225.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_174_V_read188_phi_phi_fu_20059_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_174_V_read188_phi_phi_fu_20059_p4 = ap_phi_mux_data_174_V_read188_rewind_phi_fu_9243_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_174_V_read188_phi_phi_fu_20059_p4 = data_174_V_read.read();
    } else {
        ap_phi_mux_data_174_V_read188_phi_phi_fu_20059_p4 = ap_phi_reg_pp0_iter0_data_174_V_read188_phi_reg_20055.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_174_V_read188_rewind_phi_fu_9243_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_174_V_read188_rewind_phi_fu_9243_p6 = data_174_V_read188_phi_reg_20055.read();
    } else {
        ap_phi_mux_data_174_V_read188_rewind_phi_fu_9243_p6 = data_174_V_read188_rewind_reg_9239.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_175_V_read189_phi_phi_fu_20072_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_175_V_read189_phi_phi_fu_20072_p4 = ap_phi_mux_data_175_V_read189_rewind_phi_fu_9257_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_175_V_read189_phi_phi_fu_20072_p4 = data_175_V_read.read();
    } else {
        ap_phi_mux_data_175_V_read189_phi_phi_fu_20072_p4 = ap_phi_reg_pp0_iter0_data_175_V_read189_phi_reg_20068.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_175_V_read189_rewind_phi_fu_9257_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_175_V_read189_rewind_phi_fu_9257_p6 = data_175_V_read189_phi_reg_20068.read();
    } else {
        ap_phi_mux_data_175_V_read189_rewind_phi_fu_9257_p6 = data_175_V_read189_rewind_reg_9253.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_176_V_read190_phi_phi_fu_20085_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_176_V_read190_phi_phi_fu_20085_p4 = ap_phi_mux_data_176_V_read190_rewind_phi_fu_9271_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_176_V_read190_phi_phi_fu_20085_p4 = data_176_V_read.read();
    } else {
        ap_phi_mux_data_176_V_read190_phi_phi_fu_20085_p4 = ap_phi_reg_pp0_iter0_data_176_V_read190_phi_reg_20081.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_176_V_read190_rewind_phi_fu_9271_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_176_V_read190_rewind_phi_fu_9271_p6 = data_176_V_read190_phi_reg_20081.read();
    } else {
        ap_phi_mux_data_176_V_read190_rewind_phi_fu_9271_p6 = data_176_V_read190_rewind_reg_9267.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_177_V_read191_phi_phi_fu_20098_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_177_V_read191_phi_phi_fu_20098_p4 = ap_phi_mux_data_177_V_read191_rewind_phi_fu_9285_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_177_V_read191_phi_phi_fu_20098_p4 = data_177_V_read.read();
    } else {
        ap_phi_mux_data_177_V_read191_phi_phi_fu_20098_p4 = ap_phi_reg_pp0_iter0_data_177_V_read191_phi_reg_20094.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_177_V_read191_rewind_phi_fu_9285_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_177_V_read191_rewind_phi_fu_9285_p6 = data_177_V_read191_phi_reg_20094.read();
    } else {
        ap_phi_mux_data_177_V_read191_rewind_phi_fu_9285_p6 = data_177_V_read191_rewind_reg_9281.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_178_V_read192_phi_phi_fu_20111_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_178_V_read192_phi_phi_fu_20111_p4 = ap_phi_mux_data_178_V_read192_rewind_phi_fu_9299_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_178_V_read192_phi_phi_fu_20111_p4 = data_178_V_read.read();
    } else {
        ap_phi_mux_data_178_V_read192_phi_phi_fu_20111_p4 = ap_phi_reg_pp0_iter0_data_178_V_read192_phi_reg_20107.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_178_V_read192_rewind_phi_fu_9299_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_178_V_read192_rewind_phi_fu_9299_p6 = data_178_V_read192_phi_reg_20107.read();
    } else {
        ap_phi_mux_data_178_V_read192_rewind_phi_fu_9299_p6 = data_178_V_read192_rewind_reg_9295.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_179_V_read193_phi_phi_fu_20124_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_179_V_read193_phi_phi_fu_20124_p4 = ap_phi_mux_data_179_V_read193_rewind_phi_fu_9313_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_179_V_read193_phi_phi_fu_20124_p4 = data_179_V_read.read();
    } else {
        ap_phi_mux_data_179_V_read193_phi_phi_fu_20124_p4 = ap_phi_reg_pp0_iter0_data_179_V_read193_phi_reg_20120.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_179_V_read193_rewind_phi_fu_9313_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_179_V_read193_rewind_phi_fu_9313_p6 = data_179_V_read193_phi_reg_20120.read();
    } else {
        ap_phi_mux_data_179_V_read193_rewind_phi_fu_9313_p6 = data_179_V_read193_rewind_reg_9309.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_17_V_read31_phi_phi_fu_18018_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_17_V_read31_phi_phi_fu_18018_p4 = ap_phi_mux_data_17_V_read31_rewind_phi_fu_7045_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_17_V_read31_phi_phi_fu_18018_p4 = data_17_V_read.read();
    } else {
        ap_phi_mux_data_17_V_read31_phi_phi_fu_18018_p4 = ap_phi_reg_pp0_iter0_data_17_V_read31_phi_reg_18014.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_17_V_read31_rewind_phi_fu_7045_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_17_V_read31_rewind_phi_fu_7045_p6 = data_17_V_read31_phi_reg_18014.read();
    } else {
        ap_phi_mux_data_17_V_read31_rewind_phi_fu_7045_p6 = data_17_V_read31_rewind_reg_7041.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_180_V_read194_phi_phi_fu_20137_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_180_V_read194_phi_phi_fu_20137_p4 = ap_phi_mux_data_180_V_read194_rewind_phi_fu_9327_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_180_V_read194_phi_phi_fu_20137_p4 = data_180_V_read.read();
    } else {
        ap_phi_mux_data_180_V_read194_phi_phi_fu_20137_p4 = ap_phi_reg_pp0_iter0_data_180_V_read194_phi_reg_20133.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_180_V_read194_rewind_phi_fu_9327_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_180_V_read194_rewind_phi_fu_9327_p6 = data_180_V_read194_phi_reg_20133.read();
    } else {
        ap_phi_mux_data_180_V_read194_rewind_phi_fu_9327_p6 = data_180_V_read194_rewind_reg_9323.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_181_V_read195_phi_phi_fu_20150_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_181_V_read195_phi_phi_fu_20150_p4 = ap_phi_mux_data_181_V_read195_rewind_phi_fu_9341_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_181_V_read195_phi_phi_fu_20150_p4 = data_181_V_read.read();
    } else {
        ap_phi_mux_data_181_V_read195_phi_phi_fu_20150_p4 = ap_phi_reg_pp0_iter0_data_181_V_read195_phi_reg_20146.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_181_V_read195_rewind_phi_fu_9341_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_181_V_read195_rewind_phi_fu_9341_p6 = data_181_V_read195_phi_reg_20146.read();
    } else {
        ap_phi_mux_data_181_V_read195_rewind_phi_fu_9341_p6 = data_181_V_read195_rewind_reg_9337.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_182_V_read196_phi_phi_fu_20163_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_182_V_read196_phi_phi_fu_20163_p4 = ap_phi_mux_data_182_V_read196_rewind_phi_fu_9355_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_182_V_read196_phi_phi_fu_20163_p4 = data_182_V_read.read();
    } else {
        ap_phi_mux_data_182_V_read196_phi_phi_fu_20163_p4 = ap_phi_reg_pp0_iter0_data_182_V_read196_phi_reg_20159.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_182_V_read196_rewind_phi_fu_9355_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_182_V_read196_rewind_phi_fu_9355_p6 = data_182_V_read196_phi_reg_20159.read();
    } else {
        ap_phi_mux_data_182_V_read196_rewind_phi_fu_9355_p6 = data_182_V_read196_rewind_reg_9351.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_183_V_read197_phi_phi_fu_20176_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_183_V_read197_phi_phi_fu_20176_p4 = ap_phi_mux_data_183_V_read197_rewind_phi_fu_9369_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_183_V_read197_phi_phi_fu_20176_p4 = data_183_V_read.read();
    } else {
        ap_phi_mux_data_183_V_read197_phi_phi_fu_20176_p4 = ap_phi_reg_pp0_iter0_data_183_V_read197_phi_reg_20172.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_183_V_read197_rewind_phi_fu_9369_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_183_V_read197_rewind_phi_fu_9369_p6 = data_183_V_read197_phi_reg_20172.read();
    } else {
        ap_phi_mux_data_183_V_read197_rewind_phi_fu_9369_p6 = data_183_V_read197_rewind_reg_9365.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_184_V_read198_phi_phi_fu_20189_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_184_V_read198_phi_phi_fu_20189_p4 = ap_phi_mux_data_184_V_read198_rewind_phi_fu_9383_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_184_V_read198_phi_phi_fu_20189_p4 = data_184_V_read.read();
    } else {
        ap_phi_mux_data_184_V_read198_phi_phi_fu_20189_p4 = ap_phi_reg_pp0_iter0_data_184_V_read198_phi_reg_20185.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_184_V_read198_rewind_phi_fu_9383_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_184_V_read198_rewind_phi_fu_9383_p6 = data_184_V_read198_phi_reg_20185.read();
    } else {
        ap_phi_mux_data_184_V_read198_rewind_phi_fu_9383_p6 = data_184_V_read198_rewind_reg_9379.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_185_V_read199_phi_phi_fu_20202_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_185_V_read199_phi_phi_fu_20202_p4 = ap_phi_mux_data_185_V_read199_rewind_phi_fu_9397_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_185_V_read199_phi_phi_fu_20202_p4 = data_185_V_read.read();
    } else {
        ap_phi_mux_data_185_V_read199_phi_phi_fu_20202_p4 = ap_phi_reg_pp0_iter0_data_185_V_read199_phi_reg_20198.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_185_V_read199_rewind_phi_fu_9397_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_185_V_read199_rewind_phi_fu_9397_p6 = data_185_V_read199_phi_reg_20198.read();
    } else {
        ap_phi_mux_data_185_V_read199_rewind_phi_fu_9397_p6 = data_185_V_read199_rewind_reg_9393.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_186_V_read200_phi_phi_fu_20215_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_186_V_read200_phi_phi_fu_20215_p4 = ap_phi_mux_data_186_V_read200_rewind_phi_fu_9411_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_186_V_read200_phi_phi_fu_20215_p4 = data_186_V_read.read();
    } else {
        ap_phi_mux_data_186_V_read200_phi_phi_fu_20215_p4 = ap_phi_reg_pp0_iter0_data_186_V_read200_phi_reg_20211.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_186_V_read200_rewind_phi_fu_9411_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_186_V_read200_rewind_phi_fu_9411_p6 = data_186_V_read200_phi_reg_20211.read();
    } else {
        ap_phi_mux_data_186_V_read200_rewind_phi_fu_9411_p6 = data_186_V_read200_rewind_reg_9407.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_187_V_read201_phi_phi_fu_20228_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_187_V_read201_phi_phi_fu_20228_p4 = ap_phi_mux_data_187_V_read201_rewind_phi_fu_9425_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_187_V_read201_phi_phi_fu_20228_p4 = data_187_V_read.read();
    } else {
        ap_phi_mux_data_187_V_read201_phi_phi_fu_20228_p4 = ap_phi_reg_pp0_iter0_data_187_V_read201_phi_reg_20224.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_187_V_read201_rewind_phi_fu_9425_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_187_V_read201_rewind_phi_fu_9425_p6 = data_187_V_read201_phi_reg_20224.read();
    } else {
        ap_phi_mux_data_187_V_read201_rewind_phi_fu_9425_p6 = data_187_V_read201_rewind_reg_9421.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_188_V_read202_phi_phi_fu_20241_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_188_V_read202_phi_phi_fu_20241_p4 = ap_phi_mux_data_188_V_read202_rewind_phi_fu_9439_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_188_V_read202_phi_phi_fu_20241_p4 = data_188_V_read.read();
    } else {
        ap_phi_mux_data_188_V_read202_phi_phi_fu_20241_p4 = ap_phi_reg_pp0_iter0_data_188_V_read202_phi_reg_20237.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_188_V_read202_rewind_phi_fu_9439_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_188_V_read202_rewind_phi_fu_9439_p6 = data_188_V_read202_phi_reg_20237.read();
    } else {
        ap_phi_mux_data_188_V_read202_rewind_phi_fu_9439_p6 = data_188_V_read202_rewind_reg_9435.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_189_V_read203_phi_phi_fu_20254_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_189_V_read203_phi_phi_fu_20254_p4 = ap_phi_mux_data_189_V_read203_rewind_phi_fu_9453_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_189_V_read203_phi_phi_fu_20254_p4 = data_189_V_read.read();
    } else {
        ap_phi_mux_data_189_V_read203_phi_phi_fu_20254_p4 = ap_phi_reg_pp0_iter0_data_189_V_read203_phi_reg_20250.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_189_V_read203_rewind_phi_fu_9453_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_189_V_read203_rewind_phi_fu_9453_p6 = data_189_V_read203_phi_reg_20250.read();
    } else {
        ap_phi_mux_data_189_V_read203_rewind_phi_fu_9453_p6 = data_189_V_read203_rewind_reg_9449.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_18_V_read32_phi_phi_fu_18031_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_18_V_read32_phi_phi_fu_18031_p4 = ap_phi_mux_data_18_V_read32_rewind_phi_fu_7059_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_18_V_read32_phi_phi_fu_18031_p4 = data_18_V_read.read();
    } else {
        ap_phi_mux_data_18_V_read32_phi_phi_fu_18031_p4 = ap_phi_reg_pp0_iter0_data_18_V_read32_phi_reg_18027.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_18_V_read32_rewind_phi_fu_7059_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_18_V_read32_rewind_phi_fu_7059_p6 = data_18_V_read32_phi_reg_18027.read();
    } else {
        ap_phi_mux_data_18_V_read32_rewind_phi_fu_7059_p6 = data_18_V_read32_rewind_reg_7055.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_190_V_read204_phi_phi_fu_20267_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_190_V_read204_phi_phi_fu_20267_p4 = ap_phi_mux_data_190_V_read204_rewind_phi_fu_9467_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_190_V_read204_phi_phi_fu_20267_p4 = data_190_V_read.read();
    } else {
        ap_phi_mux_data_190_V_read204_phi_phi_fu_20267_p4 = ap_phi_reg_pp0_iter0_data_190_V_read204_phi_reg_20263.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_190_V_read204_rewind_phi_fu_9467_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_190_V_read204_rewind_phi_fu_9467_p6 = data_190_V_read204_phi_reg_20263.read();
    } else {
        ap_phi_mux_data_190_V_read204_rewind_phi_fu_9467_p6 = data_190_V_read204_rewind_reg_9463.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_191_V_read205_phi_phi_fu_20280_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_191_V_read205_phi_phi_fu_20280_p4 = ap_phi_mux_data_191_V_read205_rewind_phi_fu_9481_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_191_V_read205_phi_phi_fu_20280_p4 = data_191_V_read.read();
    } else {
        ap_phi_mux_data_191_V_read205_phi_phi_fu_20280_p4 = ap_phi_reg_pp0_iter0_data_191_V_read205_phi_reg_20276.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_191_V_read205_rewind_phi_fu_9481_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_191_V_read205_rewind_phi_fu_9481_p6 = data_191_V_read205_phi_reg_20276.read();
    } else {
        ap_phi_mux_data_191_V_read205_rewind_phi_fu_9481_p6 = data_191_V_read205_rewind_reg_9477.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_192_V_read206_phi_phi_fu_20293_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_192_V_read206_phi_phi_fu_20293_p4 = ap_phi_mux_data_192_V_read206_rewind_phi_fu_9495_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_192_V_read206_phi_phi_fu_20293_p4 = data_192_V_read.read();
    } else {
        ap_phi_mux_data_192_V_read206_phi_phi_fu_20293_p4 = ap_phi_reg_pp0_iter0_data_192_V_read206_phi_reg_20289.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_192_V_read206_rewind_phi_fu_9495_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_192_V_read206_rewind_phi_fu_9495_p6 = data_192_V_read206_phi_reg_20289.read();
    } else {
        ap_phi_mux_data_192_V_read206_rewind_phi_fu_9495_p6 = data_192_V_read206_rewind_reg_9491.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_193_V_read207_phi_phi_fu_20306_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_193_V_read207_phi_phi_fu_20306_p4 = ap_phi_mux_data_193_V_read207_rewind_phi_fu_9509_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_193_V_read207_phi_phi_fu_20306_p4 = data_193_V_read.read();
    } else {
        ap_phi_mux_data_193_V_read207_phi_phi_fu_20306_p4 = ap_phi_reg_pp0_iter0_data_193_V_read207_phi_reg_20302.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_193_V_read207_rewind_phi_fu_9509_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_193_V_read207_rewind_phi_fu_9509_p6 = data_193_V_read207_phi_reg_20302.read();
    } else {
        ap_phi_mux_data_193_V_read207_rewind_phi_fu_9509_p6 = data_193_V_read207_rewind_reg_9505.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_194_V_read208_phi_phi_fu_20319_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_194_V_read208_phi_phi_fu_20319_p4 = ap_phi_mux_data_194_V_read208_rewind_phi_fu_9523_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_194_V_read208_phi_phi_fu_20319_p4 = data_194_V_read.read();
    } else {
        ap_phi_mux_data_194_V_read208_phi_phi_fu_20319_p4 = ap_phi_reg_pp0_iter0_data_194_V_read208_phi_reg_20315.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_194_V_read208_rewind_phi_fu_9523_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_194_V_read208_rewind_phi_fu_9523_p6 = data_194_V_read208_phi_reg_20315.read();
    } else {
        ap_phi_mux_data_194_V_read208_rewind_phi_fu_9523_p6 = data_194_V_read208_rewind_reg_9519.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_195_V_read209_phi_phi_fu_20332_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_195_V_read209_phi_phi_fu_20332_p4 = ap_phi_mux_data_195_V_read209_rewind_phi_fu_9537_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_195_V_read209_phi_phi_fu_20332_p4 = data_195_V_read.read();
    } else {
        ap_phi_mux_data_195_V_read209_phi_phi_fu_20332_p4 = ap_phi_reg_pp0_iter0_data_195_V_read209_phi_reg_20328.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_195_V_read209_rewind_phi_fu_9537_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_195_V_read209_rewind_phi_fu_9537_p6 = data_195_V_read209_phi_reg_20328.read();
    } else {
        ap_phi_mux_data_195_V_read209_rewind_phi_fu_9537_p6 = data_195_V_read209_rewind_reg_9533.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_196_V_read210_phi_phi_fu_20345_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_196_V_read210_phi_phi_fu_20345_p4 = ap_phi_mux_data_196_V_read210_rewind_phi_fu_9551_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_196_V_read210_phi_phi_fu_20345_p4 = data_196_V_read.read();
    } else {
        ap_phi_mux_data_196_V_read210_phi_phi_fu_20345_p4 = ap_phi_reg_pp0_iter0_data_196_V_read210_phi_reg_20341.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_196_V_read210_rewind_phi_fu_9551_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_196_V_read210_rewind_phi_fu_9551_p6 = data_196_V_read210_phi_reg_20341.read();
    } else {
        ap_phi_mux_data_196_V_read210_rewind_phi_fu_9551_p6 = data_196_V_read210_rewind_reg_9547.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_197_V_read211_phi_phi_fu_20358_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_197_V_read211_phi_phi_fu_20358_p4 = ap_phi_mux_data_197_V_read211_rewind_phi_fu_9565_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_197_V_read211_phi_phi_fu_20358_p4 = data_197_V_read.read();
    } else {
        ap_phi_mux_data_197_V_read211_phi_phi_fu_20358_p4 = ap_phi_reg_pp0_iter0_data_197_V_read211_phi_reg_20354.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_197_V_read211_rewind_phi_fu_9565_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_197_V_read211_rewind_phi_fu_9565_p6 = data_197_V_read211_phi_reg_20354.read();
    } else {
        ap_phi_mux_data_197_V_read211_rewind_phi_fu_9565_p6 = data_197_V_read211_rewind_reg_9561.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_198_V_read212_phi_phi_fu_20371_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_198_V_read212_phi_phi_fu_20371_p4 = ap_phi_mux_data_198_V_read212_rewind_phi_fu_9579_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_198_V_read212_phi_phi_fu_20371_p4 = data_198_V_read.read();
    } else {
        ap_phi_mux_data_198_V_read212_phi_phi_fu_20371_p4 = ap_phi_reg_pp0_iter0_data_198_V_read212_phi_reg_20367.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_198_V_read212_rewind_phi_fu_9579_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_198_V_read212_rewind_phi_fu_9579_p6 = data_198_V_read212_phi_reg_20367.read();
    } else {
        ap_phi_mux_data_198_V_read212_rewind_phi_fu_9579_p6 = data_198_V_read212_rewind_reg_9575.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_199_V_read213_phi_phi_fu_20384_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_199_V_read213_phi_phi_fu_20384_p4 = ap_phi_mux_data_199_V_read213_rewind_phi_fu_9593_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_199_V_read213_phi_phi_fu_20384_p4 = data_199_V_read.read();
    } else {
        ap_phi_mux_data_199_V_read213_phi_phi_fu_20384_p4 = ap_phi_reg_pp0_iter0_data_199_V_read213_phi_reg_20380.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_199_V_read213_rewind_phi_fu_9593_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_199_V_read213_rewind_phi_fu_9593_p6 = data_199_V_read213_phi_reg_20380.read();
    } else {
        ap_phi_mux_data_199_V_read213_rewind_phi_fu_9593_p6 = data_199_V_read213_rewind_reg_9589.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_19_V_read33_phi_phi_fu_18044_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_19_V_read33_phi_phi_fu_18044_p4 = ap_phi_mux_data_19_V_read33_rewind_phi_fu_7073_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_19_V_read33_phi_phi_fu_18044_p4 = data_19_V_read.read();
    } else {
        ap_phi_mux_data_19_V_read33_phi_phi_fu_18044_p4 = ap_phi_reg_pp0_iter0_data_19_V_read33_phi_reg_18040.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_19_V_read33_rewind_phi_fu_7073_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_19_V_read33_rewind_phi_fu_7073_p6 = data_19_V_read33_phi_reg_18040.read();
    } else {
        ap_phi_mux_data_19_V_read33_rewind_phi_fu_7073_p6 = data_19_V_read33_rewind_reg_7069.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_1_V_read15_phi_phi_fu_17810_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_1_V_read15_phi_phi_fu_17810_p4 = ap_phi_mux_data_1_V_read15_rewind_phi_fu_6821_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_1_V_read15_phi_phi_fu_17810_p4 = data_1_V_read.read();
    } else {
        ap_phi_mux_data_1_V_read15_phi_phi_fu_17810_p4 = ap_phi_reg_pp0_iter0_data_1_V_read15_phi_reg_17806.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_1_V_read15_rewind_phi_fu_6821_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1_V_read15_rewind_phi_fu_6821_p6 = data_1_V_read15_phi_reg_17806.read();
    } else {
        ap_phi_mux_data_1_V_read15_rewind_phi_fu_6821_p6 = data_1_V_read15_rewind_reg_6817.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_200_V_read214_phi_phi_fu_20397_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_200_V_read214_phi_phi_fu_20397_p4 = ap_phi_mux_data_200_V_read214_rewind_phi_fu_9607_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_200_V_read214_phi_phi_fu_20397_p4 = data_200_V_read.read();
    } else {
        ap_phi_mux_data_200_V_read214_phi_phi_fu_20397_p4 = ap_phi_reg_pp0_iter0_data_200_V_read214_phi_reg_20393.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_200_V_read214_rewind_phi_fu_9607_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_200_V_read214_rewind_phi_fu_9607_p6 = data_200_V_read214_phi_reg_20393.read();
    } else {
        ap_phi_mux_data_200_V_read214_rewind_phi_fu_9607_p6 = data_200_V_read214_rewind_reg_9603.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_201_V_read215_phi_phi_fu_20410_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_201_V_read215_phi_phi_fu_20410_p4 = ap_phi_mux_data_201_V_read215_rewind_phi_fu_9621_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_201_V_read215_phi_phi_fu_20410_p4 = data_201_V_read.read();
    } else {
        ap_phi_mux_data_201_V_read215_phi_phi_fu_20410_p4 = ap_phi_reg_pp0_iter0_data_201_V_read215_phi_reg_20406.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_201_V_read215_rewind_phi_fu_9621_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_201_V_read215_rewind_phi_fu_9621_p6 = data_201_V_read215_phi_reg_20406.read();
    } else {
        ap_phi_mux_data_201_V_read215_rewind_phi_fu_9621_p6 = data_201_V_read215_rewind_reg_9617.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_202_V_read216_phi_phi_fu_20423_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_202_V_read216_phi_phi_fu_20423_p4 = ap_phi_mux_data_202_V_read216_rewind_phi_fu_9635_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_202_V_read216_phi_phi_fu_20423_p4 = data_202_V_read.read();
    } else {
        ap_phi_mux_data_202_V_read216_phi_phi_fu_20423_p4 = ap_phi_reg_pp0_iter0_data_202_V_read216_phi_reg_20419.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_202_V_read216_rewind_phi_fu_9635_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_202_V_read216_rewind_phi_fu_9635_p6 = data_202_V_read216_phi_reg_20419.read();
    } else {
        ap_phi_mux_data_202_V_read216_rewind_phi_fu_9635_p6 = data_202_V_read216_rewind_reg_9631.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_203_V_read217_phi_phi_fu_20436_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_203_V_read217_phi_phi_fu_20436_p4 = ap_phi_mux_data_203_V_read217_rewind_phi_fu_9649_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_203_V_read217_phi_phi_fu_20436_p4 = data_203_V_read.read();
    } else {
        ap_phi_mux_data_203_V_read217_phi_phi_fu_20436_p4 = ap_phi_reg_pp0_iter0_data_203_V_read217_phi_reg_20432.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_203_V_read217_rewind_phi_fu_9649_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_203_V_read217_rewind_phi_fu_9649_p6 = data_203_V_read217_phi_reg_20432.read();
    } else {
        ap_phi_mux_data_203_V_read217_rewind_phi_fu_9649_p6 = data_203_V_read217_rewind_reg_9645.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_204_V_read218_phi_phi_fu_20449_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_204_V_read218_phi_phi_fu_20449_p4 = ap_phi_mux_data_204_V_read218_rewind_phi_fu_9663_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_204_V_read218_phi_phi_fu_20449_p4 = data_204_V_read.read();
    } else {
        ap_phi_mux_data_204_V_read218_phi_phi_fu_20449_p4 = ap_phi_reg_pp0_iter0_data_204_V_read218_phi_reg_20445.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_204_V_read218_rewind_phi_fu_9663_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_204_V_read218_rewind_phi_fu_9663_p6 = data_204_V_read218_phi_reg_20445.read();
    } else {
        ap_phi_mux_data_204_V_read218_rewind_phi_fu_9663_p6 = data_204_V_read218_rewind_reg_9659.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_205_V_read219_phi_phi_fu_20462_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_205_V_read219_phi_phi_fu_20462_p4 = ap_phi_mux_data_205_V_read219_rewind_phi_fu_9677_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_205_V_read219_phi_phi_fu_20462_p4 = data_205_V_read.read();
    } else {
        ap_phi_mux_data_205_V_read219_phi_phi_fu_20462_p4 = ap_phi_reg_pp0_iter0_data_205_V_read219_phi_reg_20458.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_205_V_read219_rewind_phi_fu_9677_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_205_V_read219_rewind_phi_fu_9677_p6 = data_205_V_read219_phi_reg_20458.read();
    } else {
        ap_phi_mux_data_205_V_read219_rewind_phi_fu_9677_p6 = data_205_V_read219_rewind_reg_9673.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_206_V_read220_phi_phi_fu_20475_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_206_V_read220_phi_phi_fu_20475_p4 = ap_phi_mux_data_206_V_read220_rewind_phi_fu_9691_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_206_V_read220_phi_phi_fu_20475_p4 = data_206_V_read.read();
    } else {
        ap_phi_mux_data_206_V_read220_phi_phi_fu_20475_p4 = ap_phi_reg_pp0_iter0_data_206_V_read220_phi_reg_20471.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_206_V_read220_rewind_phi_fu_9691_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_206_V_read220_rewind_phi_fu_9691_p6 = data_206_V_read220_phi_reg_20471.read();
    } else {
        ap_phi_mux_data_206_V_read220_rewind_phi_fu_9691_p6 = data_206_V_read220_rewind_reg_9687.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_207_V_read221_phi_phi_fu_20488_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_207_V_read221_phi_phi_fu_20488_p4 = ap_phi_mux_data_207_V_read221_rewind_phi_fu_9705_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_207_V_read221_phi_phi_fu_20488_p4 = data_207_V_read.read();
    } else {
        ap_phi_mux_data_207_V_read221_phi_phi_fu_20488_p4 = ap_phi_reg_pp0_iter0_data_207_V_read221_phi_reg_20484.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_207_V_read221_rewind_phi_fu_9705_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_207_V_read221_rewind_phi_fu_9705_p6 = data_207_V_read221_phi_reg_20484.read();
    } else {
        ap_phi_mux_data_207_V_read221_rewind_phi_fu_9705_p6 = data_207_V_read221_rewind_reg_9701.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_208_V_read222_phi_phi_fu_20501_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_208_V_read222_phi_phi_fu_20501_p4 = ap_phi_mux_data_208_V_read222_rewind_phi_fu_9719_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_208_V_read222_phi_phi_fu_20501_p4 = data_208_V_read.read();
    } else {
        ap_phi_mux_data_208_V_read222_phi_phi_fu_20501_p4 = ap_phi_reg_pp0_iter0_data_208_V_read222_phi_reg_20497.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_208_V_read222_rewind_phi_fu_9719_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_208_V_read222_rewind_phi_fu_9719_p6 = data_208_V_read222_phi_reg_20497.read();
    } else {
        ap_phi_mux_data_208_V_read222_rewind_phi_fu_9719_p6 = data_208_V_read222_rewind_reg_9715.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_209_V_read223_phi_phi_fu_20514_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_209_V_read223_phi_phi_fu_20514_p4 = ap_phi_mux_data_209_V_read223_rewind_phi_fu_9733_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_209_V_read223_phi_phi_fu_20514_p4 = data_209_V_read.read();
    } else {
        ap_phi_mux_data_209_V_read223_phi_phi_fu_20514_p4 = ap_phi_reg_pp0_iter0_data_209_V_read223_phi_reg_20510.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_209_V_read223_rewind_phi_fu_9733_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_209_V_read223_rewind_phi_fu_9733_p6 = data_209_V_read223_phi_reg_20510.read();
    } else {
        ap_phi_mux_data_209_V_read223_rewind_phi_fu_9733_p6 = data_209_V_read223_rewind_reg_9729.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_20_V_read34_phi_phi_fu_18057_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_20_V_read34_phi_phi_fu_18057_p4 = ap_phi_mux_data_20_V_read34_rewind_phi_fu_7087_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_20_V_read34_phi_phi_fu_18057_p4 = data_20_V_read.read();
    } else {
        ap_phi_mux_data_20_V_read34_phi_phi_fu_18057_p4 = ap_phi_reg_pp0_iter0_data_20_V_read34_phi_reg_18053.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_20_V_read34_rewind_phi_fu_7087_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_20_V_read34_rewind_phi_fu_7087_p6 = data_20_V_read34_phi_reg_18053.read();
    } else {
        ap_phi_mux_data_20_V_read34_rewind_phi_fu_7087_p6 = data_20_V_read34_rewind_reg_7083.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_210_V_read224_phi_phi_fu_20527_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_210_V_read224_phi_phi_fu_20527_p4 = ap_phi_mux_data_210_V_read224_rewind_phi_fu_9747_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_210_V_read224_phi_phi_fu_20527_p4 = data_210_V_read.read();
    } else {
        ap_phi_mux_data_210_V_read224_phi_phi_fu_20527_p4 = ap_phi_reg_pp0_iter0_data_210_V_read224_phi_reg_20523.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_210_V_read224_rewind_phi_fu_9747_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_210_V_read224_rewind_phi_fu_9747_p6 = data_210_V_read224_phi_reg_20523.read();
    } else {
        ap_phi_mux_data_210_V_read224_rewind_phi_fu_9747_p6 = data_210_V_read224_rewind_reg_9743.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_211_V_read225_phi_phi_fu_20540_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_211_V_read225_phi_phi_fu_20540_p4 = ap_phi_mux_data_211_V_read225_rewind_phi_fu_9761_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_211_V_read225_phi_phi_fu_20540_p4 = data_211_V_read.read();
    } else {
        ap_phi_mux_data_211_V_read225_phi_phi_fu_20540_p4 = ap_phi_reg_pp0_iter0_data_211_V_read225_phi_reg_20536.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_211_V_read225_rewind_phi_fu_9761_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_211_V_read225_rewind_phi_fu_9761_p6 = data_211_V_read225_phi_reg_20536.read();
    } else {
        ap_phi_mux_data_211_V_read225_rewind_phi_fu_9761_p6 = data_211_V_read225_rewind_reg_9757.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_212_V_read226_phi_phi_fu_20553_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_212_V_read226_phi_phi_fu_20553_p4 = ap_phi_mux_data_212_V_read226_rewind_phi_fu_9775_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_212_V_read226_phi_phi_fu_20553_p4 = data_212_V_read.read();
    } else {
        ap_phi_mux_data_212_V_read226_phi_phi_fu_20553_p4 = ap_phi_reg_pp0_iter0_data_212_V_read226_phi_reg_20549.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_212_V_read226_rewind_phi_fu_9775_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_212_V_read226_rewind_phi_fu_9775_p6 = data_212_V_read226_phi_reg_20549.read();
    } else {
        ap_phi_mux_data_212_V_read226_rewind_phi_fu_9775_p6 = data_212_V_read226_rewind_reg_9771.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_213_V_read227_phi_phi_fu_20566_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_213_V_read227_phi_phi_fu_20566_p4 = ap_phi_mux_data_213_V_read227_rewind_phi_fu_9789_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_213_V_read227_phi_phi_fu_20566_p4 = data_213_V_read.read();
    } else {
        ap_phi_mux_data_213_V_read227_phi_phi_fu_20566_p4 = ap_phi_reg_pp0_iter0_data_213_V_read227_phi_reg_20562.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_213_V_read227_rewind_phi_fu_9789_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_213_V_read227_rewind_phi_fu_9789_p6 = data_213_V_read227_phi_reg_20562.read();
    } else {
        ap_phi_mux_data_213_V_read227_rewind_phi_fu_9789_p6 = data_213_V_read227_rewind_reg_9785.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_214_V_read228_phi_phi_fu_20579_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_214_V_read228_phi_phi_fu_20579_p4 = ap_phi_mux_data_214_V_read228_rewind_phi_fu_9803_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_214_V_read228_phi_phi_fu_20579_p4 = data_214_V_read.read();
    } else {
        ap_phi_mux_data_214_V_read228_phi_phi_fu_20579_p4 = ap_phi_reg_pp0_iter0_data_214_V_read228_phi_reg_20575.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_214_V_read228_rewind_phi_fu_9803_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_214_V_read228_rewind_phi_fu_9803_p6 = data_214_V_read228_phi_reg_20575.read();
    } else {
        ap_phi_mux_data_214_V_read228_rewind_phi_fu_9803_p6 = data_214_V_read228_rewind_reg_9799.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_215_V_read229_phi_phi_fu_20592_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_215_V_read229_phi_phi_fu_20592_p4 = ap_phi_mux_data_215_V_read229_rewind_phi_fu_9817_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_215_V_read229_phi_phi_fu_20592_p4 = data_215_V_read.read();
    } else {
        ap_phi_mux_data_215_V_read229_phi_phi_fu_20592_p4 = ap_phi_reg_pp0_iter0_data_215_V_read229_phi_reg_20588.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_215_V_read229_rewind_phi_fu_9817_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_215_V_read229_rewind_phi_fu_9817_p6 = data_215_V_read229_phi_reg_20588.read();
    } else {
        ap_phi_mux_data_215_V_read229_rewind_phi_fu_9817_p6 = data_215_V_read229_rewind_reg_9813.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_216_V_read230_phi_phi_fu_20605_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_216_V_read230_phi_phi_fu_20605_p4 = ap_phi_mux_data_216_V_read230_rewind_phi_fu_9831_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_216_V_read230_phi_phi_fu_20605_p4 = data_216_V_read.read();
    } else {
        ap_phi_mux_data_216_V_read230_phi_phi_fu_20605_p4 = ap_phi_reg_pp0_iter0_data_216_V_read230_phi_reg_20601.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_216_V_read230_rewind_phi_fu_9831_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_216_V_read230_rewind_phi_fu_9831_p6 = data_216_V_read230_phi_reg_20601.read();
    } else {
        ap_phi_mux_data_216_V_read230_rewind_phi_fu_9831_p6 = data_216_V_read230_rewind_reg_9827.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_217_V_read231_phi_phi_fu_20618_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_217_V_read231_phi_phi_fu_20618_p4 = ap_phi_mux_data_217_V_read231_rewind_phi_fu_9845_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_217_V_read231_phi_phi_fu_20618_p4 = data_217_V_read.read();
    } else {
        ap_phi_mux_data_217_V_read231_phi_phi_fu_20618_p4 = ap_phi_reg_pp0_iter0_data_217_V_read231_phi_reg_20614.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_217_V_read231_rewind_phi_fu_9845_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_217_V_read231_rewind_phi_fu_9845_p6 = data_217_V_read231_phi_reg_20614.read();
    } else {
        ap_phi_mux_data_217_V_read231_rewind_phi_fu_9845_p6 = data_217_V_read231_rewind_reg_9841.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_218_V_read232_phi_phi_fu_20631_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_218_V_read232_phi_phi_fu_20631_p4 = ap_phi_mux_data_218_V_read232_rewind_phi_fu_9859_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_218_V_read232_phi_phi_fu_20631_p4 = data_218_V_read.read();
    } else {
        ap_phi_mux_data_218_V_read232_phi_phi_fu_20631_p4 = ap_phi_reg_pp0_iter0_data_218_V_read232_phi_reg_20627.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_218_V_read232_rewind_phi_fu_9859_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_218_V_read232_rewind_phi_fu_9859_p6 = data_218_V_read232_phi_reg_20627.read();
    } else {
        ap_phi_mux_data_218_V_read232_rewind_phi_fu_9859_p6 = data_218_V_read232_rewind_reg_9855.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_219_V_read233_phi_phi_fu_20644_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_219_V_read233_phi_phi_fu_20644_p4 = ap_phi_mux_data_219_V_read233_rewind_phi_fu_9873_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_219_V_read233_phi_phi_fu_20644_p4 = data_219_V_read.read();
    } else {
        ap_phi_mux_data_219_V_read233_phi_phi_fu_20644_p4 = ap_phi_reg_pp0_iter0_data_219_V_read233_phi_reg_20640.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_219_V_read233_rewind_phi_fu_9873_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_219_V_read233_rewind_phi_fu_9873_p6 = data_219_V_read233_phi_reg_20640.read();
    } else {
        ap_phi_mux_data_219_V_read233_rewind_phi_fu_9873_p6 = data_219_V_read233_rewind_reg_9869.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_21_V_read35_phi_phi_fu_18070_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_21_V_read35_phi_phi_fu_18070_p4 = ap_phi_mux_data_21_V_read35_rewind_phi_fu_7101_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_21_V_read35_phi_phi_fu_18070_p4 = data_21_V_read.read();
    } else {
        ap_phi_mux_data_21_V_read35_phi_phi_fu_18070_p4 = ap_phi_reg_pp0_iter0_data_21_V_read35_phi_reg_18066.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_21_V_read35_rewind_phi_fu_7101_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_21_V_read35_rewind_phi_fu_7101_p6 = data_21_V_read35_phi_reg_18066.read();
    } else {
        ap_phi_mux_data_21_V_read35_rewind_phi_fu_7101_p6 = data_21_V_read35_rewind_reg_7097.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_220_V_read234_phi_phi_fu_20657_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_220_V_read234_phi_phi_fu_20657_p4 = ap_phi_mux_data_220_V_read234_rewind_phi_fu_9887_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_220_V_read234_phi_phi_fu_20657_p4 = data_220_V_read.read();
    } else {
        ap_phi_mux_data_220_V_read234_phi_phi_fu_20657_p4 = ap_phi_reg_pp0_iter0_data_220_V_read234_phi_reg_20653.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_220_V_read234_rewind_phi_fu_9887_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_220_V_read234_rewind_phi_fu_9887_p6 = data_220_V_read234_phi_reg_20653.read();
    } else {
        ap_phi_mux_data_220_V_read234_rewind_phi_fu_9887_p6 = data_220_V_read234_rewind_reg_9883.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_221_V_read235_phi_phi_fu_20670_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_221_V_read235_phi_phi_fu_20670_p4 = ap_phi_mux_data_221_V_read235_rewind_phi_fu_9901_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_221_V_read235_phi_phi_fu_20670_p4 = data_221_V_read.read();
    } else {
        ap_phi_mux_data_221_V_read235_phi_phi_fu_20670_p4 = ap_phi_reg_pp0_iter0_data_221_V_read235_phi_reg_20666.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_221_V_read235_rewind_phi_fu_9901_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_221_V_read235_rewind_phi_fu_9901_p6 = data_221_V_read235_phi_reg_20666.read();
    } else {
        ap_phi_mux_data_221_V_read235_rewind_phi_fu_9901_p6 = data_221_V_read235_rewind_reg_9897.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_222_V_read236_phi_phi_fu_20683_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_222_V_read236_phi_phi_fu_20683_p4 = ap_phi_mux_data_222_V_read236_rewind_phi_fu_9915_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_222_V_read236_phi_phi_fu_20683_p4 = data_222_V_read.read();
    } else {
        ap_phi_mux_data_222_V_read236_phi_phi_fu_20683_p4 = ap_phi_reg_pp0_iter0_data_222_V_read236_phi_reg_20679.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_222_V_read236_rewind_phi_fu_9915_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_222_V_read236_rewind_phi_fu_9915_p6 = data_222_V_read236_phi_reg_20679.read();
    } else {
        ap_phi_mux_data_222_V_read236_rewind_phi_fu_9915_p6 = data_222_V_read236_rewind_reg_9911.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_223_V_read237_phi_phi_fu_20696_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_223_V_read237_phi_phi_fu_20696_p4 = ap_phi_mux_data_223_V_read237_rewind_phi_fu_9929_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_223_V_read237_phi_phi_fu_20696_p4 = data_223_V_read.read();
    } else {
        ap_phi_mux_data_223_V_read237_phi_phi_fu_20696_p4 = ap_phi_reg_pp0_iter0_data_223_V_read237_phi_reg_20692.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_223_V_read237_rewind_phi_fu_9929_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_223_V_read237_rewind_phi_fu_9929_p6 = data_223_V_read237_phi_reg_20692.read();
    } else {
        ap_phi_mux_data_223_V_read237_rewind_phi_fu_9929_p6 = data_223_V_read237_rewind_reg_9925.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_224_V_read238_phi_phi_fu_20709_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_224_V_read238_phi_phi_fu_20709_p4 = ap_phi_mux_data_224_V_read238_rewind_phi_fu_9943_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_224_V_read238_phi_phi_fu_20709_p4 = data_224_V_read.read();
    } else {
        ap_phi_mux_data_224_V_read238_phi_phi_fu_20709_p4 = ap_phi_reg_pp0_iter0_data_224_V_read238_phi_reg_20705.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_224_V_read238_rewind_phi_fu_9943_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_224_V_read238_rewind_phi_fu_9943_p6 = data_224_V_read238_phi_reg_20705.read();
    } else {
        ap_phi_mux_data_224_V_read238_rewind_phi_fu_9943_p6 = data_224_V_read238_rewind_reg_9939.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_225_V_read239_phi_phi_fu_20722_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_225_V_read239_phi_phi_fu_20722_p4 = ap_phi_mux_data_225_V_read239_rewind_phi_fu_9957_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_225_V_read239_phi_phi_fu_20722_p4 = data_225_V_read.read();
    } else {
        ap_phi_mux_data_225_V_read239_phi_phi_fu_20722_p4 = ap_phi_reg_pp0_iter0_data_225_V_read239_phi_reg_20718.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_225_V_read239_rewind_phi_fu_9957_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_225_V_read239_rewind_phi_fu_9957_p6 = data_225_V_read239_phi_reg_20718.read();
    } else {
        ap_phi_mux_data_225_V_read239_rewind_phi_fu_9957_p6 = data_225_V_read239_rewind_reg_9953.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_226_V_read240_phi_phi_fu_20735_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_226_V_read240_phi_phi_fu_20735_p4 = ap_phi_mux_data_226_V_read240_rewind_phi_fu_9971_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_226_V_read240_phi_phi_fu_20735_p4 = data_226_V_read.read();
    } else {
        ap_phi_mux_data_226_V_read240_phi_phi_fu_20735_p4 = ap_phi_reg_pp0_iter0_data_226_V_read240_phi_reg_20731.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_226_V_read240_rewind_phi_fu_9971_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_226_V_read240_rewind_phi_fu_9971_p6 = data_226_V_read240_phi_reg_20731.read();
    } else {
        ap_phi_mux_data_226_V_read240_rewind_phi_fu_9971_p6 = data_226_V_read240_rewind_reg_9967.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_227_V_read241_phi_phi_fu_20748_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_227_V_read241_phi_phi_fu_20748_p4 = ap_phi_mux_data_227_V_read241_rewind_phi_fu_9985_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_227_V_read241_phi_phi_fu_20748_p4 = data_227_V_read.read();
    } else {
        ap_phi_mux_data_227_V_read241_phi_phi_fu_20748_p4 = ap_phi_reg_pp0_iter0_data_227_V_read241_phi_reg_20744.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_227_V_read241_rewind_phi_fu_9985_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_227_V_read241_rewind_phi_fu_9985_p6 = data_227_V_read241_phi_reg_20744.read();
    } else {
        ap_phi_mux_data_227_V_read241_rewind_phi_fu_9985_p6 = data_227_V_read241_rewind_reg_9981.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_228_V_read242_phi_phi_fu_20761_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_228_V_read242_phi_phi_fu_20761_p4 = ap_phi_mux_data_228_V_read242_rewind_phi_fu_9999_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_228_V_read242_phi_phi_fu_20761_p4 = data_228_V_read.read();
    } else {
        ap_phi_mux_data_228_V_read242_phi_phi_fu_20761_p4 = ap_phi_reg_pp0_iter0_data_228_V_read242_phi_reg_20757.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_228_V_read242_rewind_phi_fu_9999_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_228_V_read242_rewind_phi_fu_9999_p6 = data_228_V_read242_phi_reg_20757.read();
    } else {
        ap_phi_mux_data_228_V_read242_rewind_phi_fu_9999_p6 = data_228_V_read242_rewind_reg_9995.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_229_V_read243_phi_phi_fu_20774_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_229_V_read243_phi_phi_fu_20774_p4 = ap_phi_mux_data_229_V_read243_rewind_phi_fu_10013_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_229_V_read243_phi_phi_fu_20774_p4 = data_229_V_read.read();
    } else {
        ap_phi_mux_data_229_V_read243_phi_phi_fu_20774_p4 = ap_phi_reg_pp0_iter0_data_229_V_read243_phi_reg_20770.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_229_V_read243_rewind_phi_fu_10013_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_229_V_read243_rewind_phi_fu_10013_p6 = data_229_V_read243_phi_reg_20770.read();
    } else {
        ap_phi_mux_data_229_V_read243_rewind_phi_fu_10013_p6 = data_229_V_read243_rewind_reg_10009.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_22_V_read36_phi_phi_fu_18083_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_22_V_read36_phi_phi_fu_18083_p4 = ap_phi_mux_data_22_V_read36_rewind_phi_fu_7115_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_22_V_read36_phi_phi_fu_18083_p4 = data_22_V_read.read();
    } else {
        ap_phi_mux_data_22_V_read36_phi_phi_fu_18083_p4 = ap_phi_reg_pp0_iter0_data_22_V_read36_phi_reg_18079.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_22_V_read36_rewind_phi_fu_7115_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_22_V_read36_rewind_phi_fu_7115_p6 = data_22_V_read36_phi_reg_18079.read();
    } else {
        ap_phi_mux_data_22_V_read36_rewind_phi_fu_7115_p6 = data_22_V_read36_rewind_reg_7111.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_230_V_read244_phi_phi_fu_20787_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_230_V_read244_phi_phi_fu_20787_p4 = ap_phi_mux_data_230_V_read244_rewind_phi_fu_10027_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_230_V_read244_phi_phi_fu_20787_p4 = data_230_V_read.read();
    } else {
        ap_phi_mux_data_230_V_read244_phi_phi_fu_20787_p4 = ap_phi_reg_pp0_iter0_data_230_V_read244_phi_reg_20783.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_230_V_read244_rewind_phi_fu_10027_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_230_V_read244_rewind_phi_fu_10027_p6 = data_230_V_read244_phi_reg_20783.read();
    } else {
        ap_phi_mux_data_230_V_read244_rewind_phi_fu_10027_p6 = data_230_V_read244_rewind_reg_10023.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_231_V_read245_phi_phi_fu_20800_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_231_V_read245_phi_phi_fu_20800_p4 = ap_phi_mux_data_231_V_read245_rewind_phi_fu_10041_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_231_V_read245_phi_phi_fu_20800_p4 = data_231_V_read.read();
    } else {
        ap_phi_mux_data_231_V_read245_phi_phi_fu_20800_p4 = ap_phi_reg_pp0_iter0_data_231_V_read245_phi_reg_20796.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_231_V_read245_rewind_phi_fu_10041_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_231_V_read245_rewind_phi_fu_10041_p6 = data_231_V_read245_phi_reg_20796.read();
    } else {
        ap_phi_mux_data_231_V_read245_rewind_phi_fu_10041_p6 = data_231_V_read245_rewind_reg_10037.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_232_V_read246_phi_phi_fu_20813_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_232_V_read246_phi_phi_fu_20813_p4 = ap_phi_mux_data_232_V_read246_rewind_phi_fu_10055_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_232_V_read246_phi_phi_fu_20813_p4 = data_232_V_read.read();
    } else {
        ap_phi_mux_data_232_V_read246_phi_phi_fu_20813_p4 = ap_phi_reg_pp0_iter0_data_232_V_read246_phi_reg_20809.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_232_V_read246_rewind_phi_fu_10055_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_232_V_read246_rewind_phi_fu_10055_p6 = data_232_V_read246_phi_reg_20809.read();
    } else {
        ap_phi_mux_data_232_V_read246_rewind_phi_fu_10055_p6 = data_232_V_read246_rewind_reg_10051.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_233_V_read247_phi_phi_fu_20826_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_233_V_read247_phi_phi_fu_20826_p4 = ap_phi_mux_data_233_V_read247_rewind_phi_fu_10069_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_233_V_read247_phi_phi_fu_20826_p4 = data_233_V_read.read();
    } else {
        ap_phi_mux_data_233_V_read247_phi_phi_fu_20826_p4 = ap_phi_reg_pp0_iter0_data_233_V_read247_phi_reg_20822.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_233_V_read247_rewind_phi_fu_10069_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_233_V_read247_rewind_phi_fu_10069_p6 = data_233_V_read247_phi_reg_20822.read();
    } else {
        ap_phi_mux_data_233_V_read247_rewind_phi_fu_10069_p6 = data_233_V_read247_rewind_reg_10065.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_234_V_read248_phi_phi_fu_20839_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_234_V_read248_phi_phi_fu_20839_p4 = ap_phi_mux_data_234_V_read248_rewind_phi_fu_10083_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_234_V_read248_phi_phi_fu_20839_p4 = data_234_V_read.read();
    } else {
        ap_phi_mux_data_234_V_read248_phi_phi_fu_20839_p4 = ap_phi_reg_pp0_iter0_data_234_V_read248_phi_reg_20835.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_234_V_read248_rewind_phi_fu_10083_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_234_V_read248_rewind_phi_fu_10083_p6 = data_234_V_read248_phi_reg_20835.read();
    } else {
        ap_phi_mux_data_234_V_read248_rewind_phi_fu_10083_p6 = data_234_V_read248_rewind_reg_10079.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_235_V_read249_phi_phi_fu_20852_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_235_V_read249_phi_phi_fu_20852_p4 = ap_phi_mux_data_235_V_read249_rewind_phi_fu_10097_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_235_V_read249_phi_phi_fu_20852_p4 = data_235_V_read.read();
    } else {
        ap_phi_mux_data_235_V_read249_phi_phi_fu_20852_p4 = ap_phi_reg_pp0_iter0_data_235_V_read249_phi_reg_20848.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_235_V_read249_rewind_phi_fu_10097_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_235_V_read249_rewind_phi_fu_10097_p6 = data_235_V_read249_phi_reg_20848.read();
    } else {
        ap_phi_mux_data_235_V_read249_rewind_phi_fu_10097_p6 = data_235_V_read249_rewind_reg_10093.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_236_V_read250_phi_phi_fu_20865_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_236_V_read250_phi_phi_fu_20865_p4 = ap_phi_mux_data_236_V_read250_rewind_phi_fu_10111_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_236_V_read250_phi_phi_fu_20865_p4 = data_236_V_read.read();
    } else {
        ap_phi_mux_data_236_V_read250_phi_phi_fu_20865_p4 = ap_phi_reg_pp0_iter0_data_236_V_read250_phi_reg_20861.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_236_V_read250_rewind_phi_fu_10111_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_236_V_read250_rewind_phi_fu_10111_p6 = data_236_V_read250_phi_reg_20861.read();
    } else {
        ap_phi_mux_data_236_V_read250_rewind_phi_fu_10111_p6 = data_236_V_read250_rewind_reg_10107.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_237_V_read251_phi_phi_fu_20878_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_237_V_read251_phi_phi_fu_20878_p4 = ap_phi_mux_data_237_V_read251_rewind_phi_fu_10125_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_237_V_read251_phi_phi_fu_20878_p4 = data_237_V_read.read();
    } else {
        ap_phi_mux_data_237_V_read251_phi_phi_fu_20878_p4 = ap_phi_reg_pp0_iter0_data_237_V_read251_phi_reg_20874.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_237_V_read251_rewind_phi_fu_10125_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_237_V_read251_rewind_phi_fu_10125_p6 = data_237_V_read251_phi_reg_20874.read();
    } else {
        ap_phi_mux_data_237_V_read251_rewind_phi_fu_10125_p6 = data_237_V_read251_rewind_reg_10121.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_238_V_read252_phi_phi_fu_20891_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_238_V_read252_phi_phi_fu_20891_p4 = ap_phi_mux_data_238_V_read252_rewind_phi_fu_10139_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_238_V_read252_phi_phi_fu_20891_p4 = data_238_V_read.read();
    } else {
        ap_phi_mux_data_238_V_read252_phi_phi_fu_20891_p4 = ap_phi_reg_pp0_iter0_data_238_V_read252_phi_reg_20887.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_238_V_read252_rewind_phi_fu_10139_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_238_V_read252_rewind_phi_fu_10139_p6 = data_238_V_read252_phi_reg_20887.read();
    } else {
        ap_phi_mux_data_238_V_read252_rewind_phi_fu_10139_p6 = data_238_V_read252_rewind_reg_10135.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_239_V_read253_phi_phi_fu_20904_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_239_V_read253_phi_phi_fu_20904_p4 = ap_phi_mux_data_239_V_read253_rewind_phi_fu_10153_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_239_V_read253_phi_phi_fu_20904_p4 = data_239_V_read.read();
    } else {
        ap_phi_mux_data_239_V_read253_phi_phi_fu_20904_p4 = ap_phi_reg_pp0_iter0_data_239_V_read253_phi_reg_20900.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_239_V_read253_rewind_phi_fu_10153_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_239_V_read253_rewind_phi_fu_10153_p6 = data_239_V_read253_phi_reg_20900.read();
    } else {
        ap_phi_mux_data_239_V_read253_rewind_phi_fu_10153_p6 = data_239_V_read253_rewind_reg_10149.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_23_V_read37_phi_phi_fu_18096_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_23_V_read37_phi_phi_fu_18096_p4 = ap_phi_mux_data_23_V_read37_rewind_phi_fu_7129_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_23_V_read37_phi_phi_fu_18096_p4 = data_23_V_read.read();
    } else {
        ap_phi_mux_data_23_V_read37_phi_phi_fu_18096_p4 = ap_phi_reg_pp0_iter0_data_23_V_read37_phi_reg_18092.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_23_V_read37_rewind_phi_fu_7129_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_23_V_read37_rewind_phi_fu_7129_p6 = data_23_V_read37_phi_reg_18092.read();
    } else {
        ap_phi_mux_data_23_V_read37_rewind_phi_fu_7129_p6 = data_23_V_read37_rewind_reg_7125.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_240_V_read254_phi_phi_fu_20917_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_240_V_read254_phi_phi_fu_20917_p4 = ap_phi_mux_data_240_V_read254_rewind_phi_fu_10167_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_240_V_read254_phi_phi_fu_20917_p4 = data_240_V_read.read();
    } else {
        ap_phi_mux_data_240_V_read254_phi_phi_fu_20917_p4 = ap_phi_reg_pp0_iter0_data_240_V_read254_phi_reg_20913.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_240_V_read254_rewind_phi_fu_10167_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_240_V_read254_rewind_phi_fu_10167_p6 = data_240_V_read254_phi_reg_20913.read();
    } else {
        ap_phi_mux_data_240_V_read254_rewind_phi_fu_10167_p6 = data_240_V_read254_rewind_reg_10163.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_241_V_read255_phi_phi_fu_20930_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_241_V_read255_phi_phi_fu_20930_p4 = ap_phi_mux_data_241_V_read255_rewind_phi_fu_10181_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_241_V_read255_phi_phi_fu_20930_p4 = data_241_V_read.read();
    } else {
        ap_phi_mux_data_241_V_read255_phi_phi_fu_20930_p4 = ap_phi_reg_pp0_iter0_data_241_V_read255_phi_reg_20926.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_241_V_read255_rewind_phi_fu_10181_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_241_V_read255_rewind_phi_fu_10181_p6 = data_241_V_read255_phi_reg_20926.read();
    } else {
        ap_phi_mux_data_241_V_read255_rewind_phi_fu_10181_p6 = data_241_V_read255_rewind_reg_10177.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_242_V_read256_phi_phi_fu_20943_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_242_V_read256_phi_phi_fu_20943_p4 = ap_phi_mux_data_242_V_read256_rewind_phi_fu_10195_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_242_V_read256_phi_phi_fu_20943_p4 = data_242_V_read.read();
    } else {
        ap_phi_mux_data_242_V_read256_phi_phi_fu_20943_p4 = ap_phi_reg_pp0_iter0_data_242_V_read256_phi_reg_20939.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_242_V_read256_rewind_phi_fu_10195_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_242_V_read256_rewind_phi_fu_10195_p6 = data_242_V_read256_phi_reg_20939.read();
    } else {
        ap_phi_mux_data_242_V_read256_rewind_phi_fu_10195_p6 = data_242_V_read256_rewind_reg_10191.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_243_V_read257_phi_phi_fu_20956_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_243_V_read257_phi_phi_fu_20956_p4 = ap_phi_mux_data_243_V_read257_rewind_phi_fu_10209_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_243_V_read257_phi_phi_fu_20956_p4 = data_243_V_read.read();
    } else {
        ap_phi_mux_data_243_V_read257_phi_phi_fu_20956_p4 = ap_phi_reg_pp0_iter0_data_243_V_read257_phi_reg_20952.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_243_V_read257_rewind_phi_fu_10209_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_243_V_read257_rewind_phi_fu_10209_p6 = data_243_V_read257_phi_reg_20952.read();
    } else {
        ap_phi_mux_data_243_V_read257_rewind_phi_fu_10209_p6 = data_243_V_read257_rewind_reg_10205.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_244_V_read258_phi_phi_fu_20969_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_244_V_read258_phi_phi_fu_20969_p4 = ap_phi_mux_data_244_V_read258_rewind_phi_fu_10223_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_244_V_read258_phi_phi_fu_20969_p4 = data_244_V_read.read();
    } else {
        ap_phi_mux_data_244_V_read258_phi_phi_fu_20969_p4 = ap_phi_reg_pp0_iter0_data_244_V_read258_phi_reg_20965.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_244_V_read258_rewind_phi_fu_10223_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_244_V_read258_rewind_phi_fu_10223_p6 = data_244_V_read258_phi_reg_20965.read();
    } else {
        ap_phi_mux_data_244_V_read258_rewind_phi_fu_10223_p6 = data_244_V_read258_rewind_reg_10219.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_245_V_read259_phi_phi_fu_20982_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_245_V_read259_phi_phi_fu_20982_p4 = ap_phi_mux_data_245_V_read259_rewind_phi_fu_10237_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_245_V_read259_phi_phi_fu_20982_p4 = data_245_V_read.read();
    } else {
        ap_phi_mux_data_245_V_read259_phi_phi_fu_20982_p4 = ap_phi_reg_pp0_iter0_data_245_V_read259_phi_reg_20978.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_245_V_read259_rewind_phi_fu_10237_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_245_V_read259_rewind_phi_fu_10237_p6 = data_245_V_read259_phi_reg_20978.read();
    } else {
        ap_phi_mux_data_245_V_read259_rewind_phi_fu_10237_p6 = data_245_V_read259_rewind_reg_10233.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_246_V_read260_phi_phi_fu_20995_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_246_V_read260_phi_phi_fu_20995_p4 = ap_phi_mux_data_246_V_read260_rewind_phi_fu_10251_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_246_V_read260_phi_phi_fu_20995_p4 = data_246_V_read.read();
    } else {
        ap_phi_mux_data_246_V_read260_phi_phi_fu_20995_p4 = ap_phi_reg_pp0_iter0_data_246_V_read260_phi_reg_20991.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_246_V_read260_rewind_phi_fu_10251_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_246_V_read260_rewind_phi_fu_10251_p6 = data_246_V_read260_phi_reg_20991.read();
    } else {
        ap_phi_mux_data_246_V_read260_rewind_phi_fu_10251_p6 = data_246_V_read260_rewind_reg_10247.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_247_V_read261_phi_phi_fu_21008_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_247_V_read261_phi_phi_fu_21008_p4 = ap_phi_mux_data_247_V_read261_rewind_phi_fu_10265_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_247_V_read261_phi_phi_fu_21008_p4 = data_247_V_read.read();
    } else {
        ap_phi_mux_data_247_V_read261_phi_phi_fu_21008_p4 = ap_phi_reg_pp0_iter0_data_247_V_read261_phi_reg_21004.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_247_V_read261_rewind_phi_fu_10265_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_247_V_read261_rewind_phi_fu_10265_p6 = data_247_V_read261_phi_reg_21004.read();
    } else {
        ap_phi_mux_data_247_V_read261_rewind_phi_fu_10265_p6 = data_247_V_read261_rewind_reg_10261.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_248_V_read262_phi_phi_fu_21021_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_248_V_read262_phi_phi_fu_21021_p4 = ap_phi_mux_data_248_V_read262_rewind_phi_fu_10279_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_248_V_read262_phi_phi_fu_21021_p4 = data_248_V_read.read();
    } else {
        ap_phi_mux_data_248_V_read262_phi_phi_fu_21021_p4 = ap_phi_reg_pp0_iter0_data_248_V_read262_phi_reg_21017.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_248_V_read262_rewind_phi_fu_10279_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_248_V_read262_rewind_phi_fu_10279_p6 = data_248_V_read262_phi_reg_21017.read();
    } else {
        ap_phi_mux_data_248_V_read262_rewind_phi_fu_10279_p6 = data_248_V_read262_rewind_reg_10275.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_249_V_read263_phi_phi_fu_21034_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_249_V_read263_phi_phi_fu_21034_p4 = ap_phi_mux_data_249_V_read263_rewind_phi_fu_10293_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_249_V_read263_phi_phi_fu_21034_p4 = data_249_V_read.read();
    } else {
        ap_phi_mux_data_249_V_read263_phi_phi_fu_21034_p4 = ap_phi_reg_pp0_iter0_data_249_V_read263_phi_reg_21030.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_249_V_read263_rewind_phi_fu_10293_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_249_V_read263_rewind_phi_fu_10293_p6 = data_249_V_read263_phi_reg_21030.read();
    } else {
        ap_phi_mux_data_249_V_read263_rewind_phi_fu_10293_p6 = data_249_V_read263_rewind_reg_10289.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_24_V_read38_phi_phi_fu_18109_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_24_V_read38_phi_phi_fu_18109_p4 = ap_phi_mux_data_24_V_read38_rewind_phi_fu_7143_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_24_V_read38_phi_phi_fu_18109_p4 = data_24_V_read.read();
    } else {
        ap_phi_mux_data_24_V_read38_phi_phi_fu_18109_p4 = ap_phi_reg_pp0_iter0_data_24_V_read38_phi_reg_18105.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_24_V_read38_rewind_phi_fu_7143_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_24_V_read38_rewind_phi_fu_7143_p6 = data_24_V_read38_phi_reg_18105.read();
    } else {
        ap_phi_mux_data_24_V_read38_rewind_phi_fu_7143_p6 = data_24_V_read38_rewind_reg_7139.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_250_V_read264_phi_phi_fu_21047_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_250_V_read264_phi_phi_fu_21047_p4 = ap_phi_mux_data_250_V_read264_rewind_phi_fu_10307_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_250_V_read264_phi_phi_fu_21047_p4 = data_250_V_read.read();
    } else {
        ap_phi_mux_data_250_V_read264_phi_phi_fu_21047_p4 = ap_phi_reg_pp0_iter0_data_250_V_read264_phi_reg_21043.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_250_V_read264_rewind_phi_fu_10307_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_250_V_read264_rewind_phi_fu_10307_p6 = data_250_V_read264_phi_reg_21043.read();
    } else {
        ap_phi_mux_data_250_V_read264_rewind_phi_fu_10307_p6 = data_250_V_read264_rewind_reg_10303.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_251_V_read265_phi_phi_fu_21060_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_251_V_read265_phi_phi_fu_21060_p4 = ap_phi_mux_data_251_V_read265_rewind_phi_fu_10321_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_251_V_read265_phi_phi_fu_21060_p4 = data_251_V_read.read();
    } else {
        ap_phi_mux_data_251_V_read265_phi_phi_fu_21060_p4 = ap_phi_reg_pp0_iter0_data_251_V_read265_phi_reg_21056.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_251_V_read265_rewind_phi_fu_10321_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_251_V_read265_rewind_phi_fu_10321_p6 = data_251_V_read265_phi_reg_21056.read();
    } else {
        ap_phi_mux_data_251_V_read265_rewind_phi_fu_10321_p6 = data_251_V_read265_rewind_reg_10317.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_252_V_read266_phi_phi_fu_21073_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_252_V_read266_phi_phi_fu_21073_p4 = ap_phi_mux_data_252_V_read266_rewind_phi_fu_10335_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_252_V_read266_phi_phi_fu_21073_p4 = data_252_V_read.read();
    } else {
        ap_phi_mux_data_252_V_read266_phi_phi_fu_21073_p4 = ap_phi_reg_pp0_iter0_data_252_V_read266_phi_reg_21069.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_252_V_read266_rewind_phi_fu_10335_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_252_V_read266_rewind_phi_fu_10335_p6 = data_252_V_read266_phi_reg_21069.read();
    } else {
        ap_phi_mux_data_252_V_read266_rewind_phi_fu_10335_p6 = data_252_V_read266_rewind_reg_10331.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_253_V_read267_phi_phi_fu_21086_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_253_V_read267_phi_phi_fu_21086_p4 = ap_phi_mux_data_253_V_read267_rewind_phi_fu_10349_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_253_V_read267_phi_phi_fu_21086_p4 = data_253_V_read.read();
    } else {
        ap_phi_mux_data_253_V_read267_phi_phi_fu_21086_p4 = ap_phi_reg_pp0_iter0_data_253_V_read267_phi_reg_21082.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_253_V_read267_rewind_phi_fu_10349_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_253_V_read267_rewind_phi_fu_10349_p6 = data_253_V_read267_phi_reg_21082.read();
    } else {
        ap_phi_mux_data_253_V_read267_rewind_phi_fu_10349_p6 = data_253_V_read267_rewind_reg_10345.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_254_V_read268_phi_phi_fu_21099_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_254_V_read268_phi_phi_fu_21099_p4 = ap_phi_mux_data_254_V_read268_rewind_phi_fu_10363_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_254_V_read268_phi_phi_fu_21099_p4 = data_254_V_read.read();
    } else {
        ap_phi_mux_data_254_V_read268_phi_phi_fu_21099_p4 = ap_phi_reg_pp0_iter0_data_254_V_read268_phi_reg_21095.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_254_V_read268_rewind_phi_fu_10363_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_254_V_read268_rewind_phi_fu_10363_p6 = data_254_V_read268_phi_reg_21095.read();
    } else {
        ap_phi_mux_data_254_V_read268_rewind_phi_fu_10363_p6 = data_254_V_read268_rewind_reg_10359.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_255_V_read269_phi_phi_fu_21112_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_255_V_read269_phi_phi_fu_21112_p4 = ap_phi_mux_data_255_V_read269_rewind_phi_fu_10377_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_255_V_read269_phi_phi_fu_21112_p4 = data_255_V_read.read();
    } else {
        ap_phi_mux_data_255_V_read269_phi_phi_fu_21112_p4 = ap_phi_reg_pp0_iter0_data_255_V_read269_phi_reg_21108.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_255_V_read269_rewind_phi_fu_10377_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_255_V_read269_rewind_phi_fu_10377_p6 = data_255_V_read269_phi_reg_21108.read();
    } else {
        ap_phi_mux_data_255_V_read269_rewind_phi_fu_10377_p6 = data_255_V_read269_rewind_reg_10373.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_256_V_read270_phi_phi_fu_21125_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_256_V_read270_phi_phi_fu_21125_p4 = ap_phi_mux_data_256_V_read270_rewind_phi_fu_10391_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_256_V_read270_phi_phi_fu_21125_p4 = data_256_V_read.read();
    } else {
        ap_phi_mux_data_256_V_read270_phi_phi_fu_21125_p4 = ap_phi_reg_pp0_iter0_data_256_V_read270_phi_reg_21121.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_256_V_read270_rewind_phi_fu_10391_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_256_V_read270_rewind_phi_fu_10391_p6 = data_256_V_read270_phi_reg_21121.read();
    } else {
        ap_phi_mux_data_256_V_read270_rewind_phi_fu_10391_p6 = data_256_V_read270_rewind_reg_10387.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_257_V_read271_phi_phi_fu_21138_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_257_V_read271_phi_phi_fu_21138_p4 = ap_phi_mux_data_257_V_read271_rewind_phi_fu_10405_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_257_V_read271_phi_phi_fu_21138_p4 = data_257_V_read.read();
    } else {
        ap_phi_mux_data_257_V_read271_phi_phi_fu_21138_p4 = ap_phi_reg_pp0_iter0_data_257_V_read271_phi_reg_21134.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_257_V_read271_rewind_phi_fu_10405_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_257_V_read271_rewind_phi_fu_10405_p6 = data_257_V_read271_phi_reg_21134.read();
    } else {
        ap_phi_mux_data_257_V_read271_rewind_phi_fu_10405_p6 = data_257_V_read271_rewind_reg_10401.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_258_V_read272_phi_phi_fu_21151_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_258_V_read272_phi_phi_fu_21151_p4 = ap_phi_mux_data_258_V_read272_rewind_phi_fu_10419_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_258_V_read272_phi_phi_fu_21151_p4 = data_258_V_read.read();
    } else {
        ap_phi_mux_data_258_V_read272_phi_phi_fu_21151_p4 = ap_phi_reg_pp0_iter0_data_258_V_read272_phi_reg_21147.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_258_V_read272_rewind_phi_fu_10419_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_258_V_read272_rewind_phi_fu_10419_p6 = data_258_V_read272_phi_reg_21147.read();
    } else {
        ap_phi_mux_data_258_V_read272_rewind_phi_fu_10419_p6 = data_258_V_read272_rewind_reg_10415.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_259_V_read273_phi_phi_fu_21164_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_259_V_read273_phi_phi_fu_21164_p4 = ap_phi_mux_data_259_V_read273_rewind_phi_fu_10433_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_259_V_read273_phi_phi_fu_21164_p4 = data_259_V_read.read();
    } else {
        ap_phi_mux_data_259_V_read273_phi_phi_fu_21164_p4 = ap_phi_reg_pp0_iter0_data_259_V_read273_phi_reg_21160.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_259_V_read273_rewind_phi_fu_10433_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_259_V_read273_rewind_phi_fu_10433_p6 = data_259_V_read273_phi_reg_21160.read();
    } else {
        ap_phi_mux_data_259_V_read273_rewind_phi_fu_10433_p6 = data_259_V_read273_rewind_reg_10429.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_25_V_read39_phi_phi_fu_18122_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_25_V_read39_phi_phi_fu_18122_p4 = ap_phi_mux_data_25_V_read39_rewind_phi_fu_7157_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_25_V_read39_phi_phi_fu_18122_p4 = data_25_V_read.read();
    } else {
        ap_phi_mux_data_25_V_read39_phi_phi_fu_18122_p4 = ap_phi_reg_pp0_iter0_data_25_V_read39_phi_reg_18118.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_25_V_read39_rewind_phi_fu_7157_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_25_V_read39_rewind_phi_fu_7157_p6 = data_25_V_read39_phi_reg_18118.read();
    } else {
        ap_phi_mux_data_25_V_read39_rewind_phi_fu_7157_p6 = data_25_V_read39_rewind_reg_7153.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_260_V_read274_phi_phi_fu_21177_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_260_V_read274_phi_phi_fu_21177_p4 = ap_phi_mux_data_260_V_read274_rewind_phi_fu_10447_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_260_V_read274_phi_phi_fu_21177_p4 = data_260_V_read.read();
    } else {
        ap_phi_mux_data_260_V_read274_phi_phi_fu_21177_p4 = ap_phi_reg_pp0_iter0_data_260_V_read274_phi_reg_21173.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_260_V_read274_rewind_phi_fu_10447_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_260_V_read274_rewind_phi_fu_10447_p6 = data_260_V_read274_phi_reg_21173.read();
    } else {
        ap_phi_mux_data_260_V_read274_rewind_phi_fu_10447_p6 = data_260_V_read274_rewind_reg_10443.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_261_V_read275_phi_phi_fu_21190_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_261_V_read275_phi_phi_fu_21190_p4 = ap_phi_mux_data_261_V_read275_rewind_phi_fu_10461_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_261_V_read275_phi_phi_fu_21190_p4 = data_261_V_read.read();
    } else {
        ap_phi_mux_data_261_V_read275_phi_phi_fu_21190_p4 = ap_phi_reg_pp0_iter0_data_261_V_read275_phi_reg_21186.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_261_V_read275_rewind_phi_fu_10461_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_261_V_read275_rewind_phi_fu_10461_p6 = data_261_V_read275_phi_reg_21186.read();
    } else {
        ap_phi_mux_data_261_V_read275_rewind_phi_fu_10461_p6 = data_261_V_read275_rewind_reg_10457.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_262_V_read276_phi_phi_fu_21203_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_262_V_read276_phi_phi_fu_21203_p4 = ap_phi_mux_data_262_V_read276_rewind_phi_fu_10475_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_262_V_read276_phi_phi_fu_21203_p4 = data_262_V_read.read();
    } else {
        ap_phi_mux_data_262_V_read276_phi_phi_fu_21203_p4 = ap_phi_reg_pp0_iter0_data_262_V_read276_phi_reg_21199.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_262_V_read276_rewind_phi_fu_10475_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_262_V_read276_rewind_phi_fu_10475_p6 = data_262_V_read276_phi_reg_21199.read();
    } else {
        ap_phi_mux_data_262_V_read276_rewind_phi_fu_10475_p6 = data_262_V_read276_rewind_reg_10471.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_263_V_read277_phi_phi_fu_21216_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_263_V_read277_phi_phi_fu_21216_p4 = ap_phi_mux_data_263_V_read277_rewind_phi_fu_10489_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_263_V_read277_phi_phi_fu_21216_p4 = data_263_V_read.read();
    } else {
        ap_phi_mux_data_263_V_read277_phi_phi_fu_21216_p4 = ap_phi_reg_pp0_iter0_data_263_V_read277_phi_reg_21212.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_263_V_read277_rewind_phi_fu_10489_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_263_V_read277_rewind_phi_fu_10489_p6 = data_263_V_read277_phi_reg_21212.read();
    } else {
        ap_phi_mux_data_263_V_read277_rewind_phi_fu_10489_p6 = data_263_V_read277_rewind_reg_10485.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_264_V_read278_phi_phi_fu_21229_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_264_V_read278_phi_phi_fu_21229_p4 = ap_phi_mux_data_264_V_read278_rewind_phi_fu_10503_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_264_V_read278_phi_phi_fu_21229_p4 = data_264_V_read.read();
    } else {
        ap_phi_mux_data_264_V_read278_phi_phi_fu_21229_p4 = ap_phi_reg_pp0_iter0_data_264_V_read278_phi_reg_21225.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_264_V_read278_rewind_phi_fu_10503_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_264_V_read278_rewind_phi_fu_10503_p6 = data_264_V_read278_phi_reg_21225.read();
    } else {
        ap_phi_mux_data_264_V_read278_rewind_phi_fu_10503_p6 = data_264_V_read278_rewind_reg_10499.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_265_V_read279_phi_phi_fu_21242_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_265_V_read279_phi_phi_fu_21242_p4 = ap_phi_mux_data_265_V_read279_rewind_phi_fu_10517_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_265_V_read279_phi_phi_fu_21242_p4 = data_265_V_read.read();
    } else {
        ap_phi_mux_data_265_V_read279_phi_phi_fu_21242_p4 = ap_phi_reg_pp0_iter0_data_265_V_read279_phi_reg_21238.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_265_V_read279_rewind_phi_fu_10517_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_265_V_read279_rewind_phi_fu_10517_p6 = data_265_V_read279_phi_reg_21238.read();
    } else {
        ap_phi_mux_data_265_V_read279_rewind_phi_fu_10517_p6 = data_265_V_read279_rewind_reg_10513.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_266_V_read280_phi_phi_fu_21255_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_266_V_read280_phi_phi_fu_21255_p4 = ap_phi_mux_data_266_V_read280_rewind_phi_fu_10531_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_266_V_read280_phi_phi_fu_21255_p4 = data_266_V_read.read();
    } else {
        ap_phi_mux_data_266_V_read280_phi_phi_fu_21255_p4 = ap_phi_reg_pp0_iter0_data_266_V_read280_phi_reg_21251.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_266_V_read280_rewind_phi_fu_10531_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_266_V_read280_rewind_phi_fu_10531_p6 = data_266_V_read280_phi_reg_21251.read();
    } else {
        ap_phi_mux_data_266_V_read280_rewind_phi_fu_10531_p6 = data_266_V_read280_rewind_reg_10527.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_267_V_read281_phi_phi_fu_21268_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_267_V_read281_phi_phi_fu_21268_p4 = ap_phi_mux_data_267_V_read281_rewind_phi_fu_10545_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_267_V_read281_phi_phi_fu_21268_p4 = data_267_V_read.read();
    } else {
        ap_phi_mux_data_267_V_read281_phi_phi_fu_21268_p4 = ap_phi_reg_pp0_iter0_data_267_V_read281_phi_reg_21264.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_267_V_read281_rewind_phi_fu_10545_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_267_V_read281_rewind_phi_fu_10545_p6 = data_267_V_read281_phi_reg_21264.read();
    } else {
        ap_phi_mux_data_267_V_read281_rewind_phi_fu_10545_p6 = data_267_V_read281_rewind_reg_10541.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_268_V_read282_phi_phi_fu_21281_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_268_V_read282_phi_phi_fu_21281_p4 = ap_phi_mux_data_268_V_read282_rewind_phi_fu_10559_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_268_V_read282_phi_phi_fu_21281_p4 = data_268_V_read.read();
    } else {
        ap_phi_mux_data_268_V_read282_phi_phi_fu_21281_p4 = ap_phi_reg_pp0_iter0_data_268_V_read282_phi_reg_21277.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_268_V_read282_rewind_phi_fu_10559_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_268_V_read282_rewind_phi_fu_10559_p6 = data_268_V_read282_phi_reg_21277.read();
    } else {
        ap_phi_mux_data_268_V_read282_rewind_phi_fu_10559_p6 = data_268_V_read282_rewind_reg_10555.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_269_V_read283_phi_phi_fu_21294_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_269_V_read283_phi_phi_fu_21294_p4 = ap_phi_mux_data_269_V_read283_rewind_phi_fu_10573_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_269_V_read283_phi_phi_fu_21294_p4 = data_269_V_read.read();
    } else {
        ap_phi_mux_data_269_V_read283_phi_phi_fu_21294_p4 = ap_phi_reg_pp0_iter0_data_269_V_read283_phi_reg_21290.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_269_V_read283_rewind_phi_fu_10573_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_269_V_read283_rewind_phi_fu_10573_p6 = data_269_V_read283_phi_reg_21290.read();
    } else {
        ap_phi_mux_data_269_V_read283_rewind_phi_fu_10573_p6 = data_269_V_read283_rewind_reg_10569.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_26_V_read40_phi_phi_fu_18135_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_26_V_read40_phi_phi_fu_18135_p4 = ap_phi_mux_data_26_V_read40_rewind_phi_fu_7171_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_26_V_read40_phi_phi_fu_18135_p4 = data_26_V_read.read();
    } else {
        ap_phi_mux_data_26_V_read40_phi_phi_fu_18135_p4 = ap_phi_reg_pp0_iter0_data_26_V_read40_phi_reg_18131.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_26_V_read40_rewind_phi_fu_7171_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_26_V_read40_rewind_phi_fu_7171_p6 = data_26_V_read40_phi_reg_18131.read();
    } else {
        ap_phi_mux_data_26_V_read40_rewind_phi_fu_7171_p6 = data_26_V_read40_rewind_reg_7167.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_270_V_read284_phi_phi_fu_21307_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_270_V_read284_phi_phi_fu_21307_p4 = ap_phi_mux_data_270_V_read284_rewind_phi_fu_10587_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_270_V_read284_phi_phi_fu_21307_p4 = data_270_V_read.read();
    } else {
        ap_phi_mux_data_270_V_read284_phi_phi_fu_21307_p4 = ap_phi_reg_pp0_iter0_data_270_V_read284_phi_reg_21303.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_270_V_read284_rewind_phi_fu_10587_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_270_V_read284_rewind_phi_fu_10587_p6 = data_270_V_read284_phi_reg_21303.read();
    } else {
        ap_phi_mux_data_270_V_read284_rewind_phi_fu_10587_p6 = data_270_V_read284_rewind_reg_10583.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_271_V_read285_phi_phi_fu_21320_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_271_V_read285_phi_phi_fu_21320_p4 = ap_phi_mux_data_271_V_read285_rewind_phi_fu_10601_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_271_V_read285_phi_phi_fu_21320_p4 = data_271_V_read.read();
    } else {
        ap_phi_mux_data_271_V_read285_phi_phi_fu_21320_p4 = ap_phi_reg_pp0_iter0_data_271_V_read285_phi_reg_21316.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_271_V_read285_rewind_phi_fu_10601_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_271_V_read285_rewind_phi_fu_10601_p6 = data_271_V_read285_phi_reg_21316.read();
    } else {
        ap_phi_mux_data_271_V_read285_rewind_phi_fu_10601_p6 = data_271_V_read285_rewind_reg_10597.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_272_V_read286_phi_phi_fu_21333_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_272_V_read286_phi_phi_fu_21333_p4 = ap_phi_mux_data_272_V_read286_rewind_phi_fu_10615_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_272_V_read286_phi_phi_fu_21333_p4 = data_272_V_read.read();
    } else {
        ap_phi_mux_data_272_V_read286_phi_phi_fu_21333_p4 = ap_phi_reg_pp0_iter0_data_272_V_read286_phi_reg_21329.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_272_V_read286_rewind_phi_fu_10615_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_272_V_read286_rewind_phi_fu_10615_p6 = data_272_V_read286_phi_reg_21329.read();
    } else {
        ap_phi_mux_data_272_V_read286_rewind_phi_fu_10615_p6 = data_272_V_read286_rewind_reg_10611.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_273_V_read287_phi_phi_fu_21346_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_273_V_read287_phi_phi_fu_21346_p4 = ap_phi_mux_data_273_V_read287_rewind_phi_fu_10629_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_273_V_read287_phi_phi_fu_21346_p4 = data_273_V_read.read();
    } else {
        ap_phi_mux_data_273_V_read287_phi_phi_fu_21346_p4 = ap_phi_reg_pp0_iter0_data_273_V_read287_phi_reg_21342.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_273_V_read287_rewind_phi_fu_10629_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_273_V_read287_rewind_phi_fu_10629_p6 = data_273_V_read287_phi_reg_21342.read();
    } else {
        ap_phi_mux_data_273_V_read287_rewind_phi_fu_10629_p6 = data_273_V_read287_rewind_reg_10625.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_274_V_read288_phi_phi_fu_21359_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_274_V_read288_phi_phi_fu_21359_p4 = ap_phi_mux_data_274_V_read288_rewind_phi_fu_10643_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_274_V_read288_phi_phi_fu_21359_p4 = data_274_V_read.read();
    } else {
        ap_phi_mux_data_274_V_read288_phi_phi_fu_21359_p4 = ap_phi_reg_pp0_iter0_data_274_V_read288_phi_reg_21355.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_274_V_read288_rewind_phi_fu_10643_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_274_V_read288_rewind_phi_fu_10643_p6 = data_274_V_read288_phi_reg_21355.read();
    } else {
        ap_phi_mux_data_274_V_read288_rewind_phi_fu_10643_p6 = data_274_V_read288_rewind_reg_10639.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_275_V_read289_phi_phi_fu_21372_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_275_V_read289_phi_phi_fu_21372_p4 = ap_phi_mux_data_275_V_read289_rewind_phi_fu_10657_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_275_V_read289_phi_phi_fu_21372_p4 = data_275_V_read.read();
    } else {
        ap_phi_mux_data_275_V_read289_phi_phi_fu_21372_p4 = ap_phi_reg_pp0_iter0_data_275_V_read289_phi_reg_21368.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_275_V_read289_rewind_phi_fu_10657_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_275_V_read289_rewind_phi_fu_10657_p6 = data_275_V_read289_phi_reg_21368.read();
    } else {
        ap_phi_mux_data_275_V_read289_rewind_phi_fu_10657_p6 = data_275_V_read289_rewind_reg_10653.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_276_V_read290_phi_phi_fu_21385_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_276_V_read290_phi_phi_fu_21385_p4 = ap_phi_mux_data_276_V_read290_rewind_phi_fu_10671_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_276_V_read290_phi_phi_fu_21385_p4 = data_276_V_read.read();
    } else {
        ap_phi_mux_data_276_V_read290_phi_phi_fu_21385_p4 = ap_phi_reg_pp0_iter0_data_276_V_read290_phi_reg_21381.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_276_V_read290_rewind_phi_fu_10671_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_276_V_read290_rewind_phi_fu_10671_p6 = data_276_V_read290_phi_reg_21381.read();
    } else {
        ap_phi_mux_data_276_V_read290_rewind_phi_fu_10671_p6 = data_276_V_read290_rewind_reg_10667.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_277_V_read291_phi_phi_fu_21398_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_277_V_read291_phi_phi_fu_21398_p4 = ap_phi_mux_data_277_V_read291_rewind_phi_fu_10685_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_277_V_read291_phi_phi_fu_21398_p4 = data_277_V_read.read();
    } else {
        ap_phi_mux_data_277_V_read291_phi_phi_fu_21398_p4 = ap_phi_reg_pp0_iter0_data_277_V_read291_phi_reg_21394.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_277_V_read291_rewind_phi_fu_10685_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_277_V_read291_rewind_phi_fu_10685_p6 = data_277_V_read291_phi_reg_21394.read();
    } else {
        ap_phi_mux_data_277_V_read291_rewind_phi_fu_10685_p6 = data_277_V_read291_rewind_reg_10681.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_278_V_read292_phi_phi_fu_21411_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_278_V_read292_phi_phi_fu_21411_p4 = ap_phi_mux_data_278_V_read292_rewind_phi_fu_10699_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_278_V_read292_phi_phi_fu_21411_p4 = data_278_V_read.read();
    } else {
        ap_phi_mux_data_278_V_read292_phi_phi_fu_21411_p4 = ap_phi_reg_pp0_iter0_data_278_V_read292_phi_reg_21407.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_278_V_read292_rewind_phi_fu_10699_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_278_V_read292_rewind_phi_fu_10699_p6 = data_278_V_read292_phi_reg_21407.read();
    } else {
        ap_phi_mux_data_278_V_read292_rewind_phi_fu_10699_p6 = data_278_V_read292_rewind_reg_10695.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_279_V_read293_phi_phi_fu_21424_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_279_V_read293_phi_phi_fu_21424_p4 = ap_phi_mux_data_279_V_read293_rewind_phi_fu_10713_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_279_V_read293_phi_phi_fu_21424_p4 = data_279_V_read.read();
    } else {
        ap_phi_mux_data_279_V_read293_phi_phi_fu_21424_p4 = ap_phi_reg_pp0_iter0_data_279_V_read293_phi_reg_21420.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_279_V_read293_rewind_phi_fu_10713_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_279_V_read293_rewind_phi_fu_10713_p6 = data_279_V_read293_phi_reg_21420.read();
    } else {
        ap_phi_mux_data_279_V_read293_rewind_phi_fu_10713_p6 = data_279_V_read293_rewind_reg_10709.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_27_V_read41_phi_phi_fu_18148_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_27_V_read41_phi_phi_fu_18148_p4 = ap_phi_mux_data_27_V_read41_rewind_phi_fu_7185_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_27_V_read41_phi_phi_fu_18148_p4 = data_27_V_read.read();
    } else {
        ap_phi_mux_data_27_V_read41_phi_phi_fu_18148_p4 = ap_phi_reg_pp0_iter0_data_27_V_read41_phi_reg_18144.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_27_V_read41_rewind_phi_fu_7185_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_27_V_read41_rewind_phi_fu_7185_p6 = data_27_V_read41_phi_reg_18144.read();
    } else {
        ap_phi_mux_data_27_V_read41_rewind_phi_fu_7185_p6 = data_27_V_read41_rewind_reg_7181.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_280_V_read294_phi_phi_fu_21437_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_280_V_read294_phi_phi_fu_21437_p4 = ap_phi_mux_data_280_V_read294_rewind_phi_fu_10727_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_280_V_read294_phi_phi_fu_21437_p4 = data_280_V_read.read();
    } else {
        ap_phi_mux_data_280_V_read294_phi_phi_fu_21437_p4 = ap_phi_reg_pp0_iter0_data_280_V_read294_phi_reg_21433.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_280_V_read294_rewind_phi_fu_10727_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_280_V_read294_rewind_phi_fu_10727_p6 = data_280_V_read294_phi_reg_21433.read();
    } else {
        ap_phi_mux_data_280_V_read294_rewind_phi_fu_10727_p6 = data_280_V_read294_rewind_reg_10723.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_281_V_read295_phi_phi_fu_21450_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_281_V_read295_phi_phi_fu_21450_p4 = ap_phi_mux_data_281_V_read295_rewind_phi_fu_10741_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_281_V_read295_phi_phi_fu_21450_p4 = data_281_V_read.read();
    } else {
        ap_phi_mux_data_281_V_read295_phi_phi_fu_21450_p4 = ap_phi_reg_pp0_iter0_data_281_V_read295_phi_reg_21446.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_281_V_read295_rewind_phi_fu_10741_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_281_V_read295_rewind_phi_fu_10741_p6 = data_281_V_read295_phi_reg_21446.read();
    } else {
        ap_phi_mux_data_281_V_read295_rewind_phi_fu_10741_p6 = data_281_V_read295_rewind_reg_10737.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_282_V_read296_phi_phi_fu_21463_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_282_V_read296_phi_phi_fu_21463_p4 = ap_phi_mux_data_282_V_read296_rewind_phi_fu_10755_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_282_V_read296_phi_phi_fu_21463_p4 = data_282_V_read.read();
    } else {
        ap_phi_mux_data_282_V_read296_phi_phi_fu_21463_p4 = ap_phi_reg_pp0_iter0_data_282_V_read296_phi_reg_21459.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_282_V_read296_rewind_phi_fu_10755_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_282_V_read296_rewind_phi_fu_10755_p6 = data_282_V_read296_phi_reg_21459.read();
    } else {
        ap_phi_mux_data_282_V_read296_rewind_phi_fu_10755_p6 = data_282_V_read296_rewind_reg_10751.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_283_V_read297_phi_phi_fu_21476_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_283_V_read297_phi_phi_fu_21476_p4 = ap_phi_mux_data_283_V_read297_rewind_phi_fu_10769_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_283_V_read297_phi_phi_fu_21476_p4 = data_283_V_read.read();
    } else {
        ap_phi_mux_data_283_V_read297_phi_phi_fu_21476_p4 = ap_phi_reg_pp0_iter0_data_283_V_read297_phi_reg_21472.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_283_V_read297_rewind_phi_fu_10769_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_283_V_read297_rewind_phi_fu_10769_p6 = data_283_V_read297_phi_reg_21472.read();
    } else {
        ap_phi_mux_data_283_V_read297_rewind_phi_fu_10769_p6 = data_283_V_read297_rewind_reg_10765.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_284_V_read298_phi_phi_fu_21489_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_284_V_read298_phi_phi_fu_21489_p4 = ap_phi_mux_data_284_V_read298_rewind_phi_fu_10783_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_284_V_read298_phi_phi_fu_21489_p4 = data_284_V_read.read();
    } else {
        ap_phi_mux_data_284_V_read298_phi_phi_fu_21489_p4 = ap_phi_reg_pp0_iter0_data_284_V_read298_phi_reg_21485.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_284_V_read298_rewind_phi_fu_10783_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_284_V_read298_rewind_phi_fu_10783_p6 = data_284_V_read298_phi_reg_21485.read();
    } else {
        ap_phi_mux_data_284_V_read298_rewind_phi_fu_10783_p6 = data_284_V_read298_rewind_reg_10779.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_285_V_read299_phi_phi_fu_21502_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_285_V_read299_phi_phi_fu_21502_p4 = ap_phi_mux_data_285_V_read299_rewind_phi_fu_10797_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_285_V_read299_phi_phi_fu_21502_p4 = data_285_V_read.read();
    } else {
        ap_phi_mux_data_285_V_read299_phi_phi_fu_21502_p4 = ap_phi_reg_pp0_iter0_data_285_V_read299_phi_reg_21498.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_285_V_read299_rewind_phi_fu_10797_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_285_V_read299_rewind_phi_fu_10797_p6 = data_285_V_read299_phi_reg_21498.read();
    } else {
        ap_phi_mux_data_285_V_read299_rewind_phi_fu_10797_p6 = data_285_V_read299_rewind_reg_10793.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_286_V_read300_phi_phi_fu_21515_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_286_V_read300_phi_phi_fu_21515_p4 = ap_phi_mux_data_286_V_read300_rewind_phi_fu_10811_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_286_V_read300_phi_phi_fu_21515_p4 = data_286_V_read.read();
    } else {
        ap_phi_mux_data_286_V_read300_phi_phi_fu_21515_p4 = ap_phi_reg_pp0_iter0_data_286_V_read300_phi_reg_21511.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_286_V_read300_rewind_phi_fu_10811_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_286_V_read300_rewind_phi_fu_10811_p6 = data_286_V_read300_phi_reg_21511.read();
    } else {
        ap_phi_mux_data_286_V_read300_rewind_phi_fu_10811_p6 = data_286_V_read300_rewind_reg_10807.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_287_V_read301_phi_phi_fu_21528_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_287_V_read301_phi_phi_fu_21528_p4 = ap_phi_mux_data_287_V_read301_rewind_phi_fu_10825_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_287_V_read301_phi_phi_fu_21528_p4 = data_287_V_read.read();
    } else {
        ap_phi_mux_data_287_V_read301_phi_phi_fu_21528_p4 = ap_phi_reg_pp0_iter0_data_287_V_read301_phi_reg_21524.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_287_V_read301_rewind_phi_fu_10825_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_287_V_read301_rewind_phi_fu_10825_p6 = data_287_V_read301_phi_reg_21524.read();
    } else {
        ap_phi_mux_data_287_V_read301_rewind_phi_fu_10825_p6 = data_287_V_read301_rewind_reg_10821.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_288_V_read302_phi_phi_fu_21541_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_288_V_read302_phi_phi_fu_21541_p4 = ap_phi_mux_data_288_V_read302_rewind_phi_fu_10839_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_288_V_read302_phi_phi_fu_21541_p4 = data_288_V_read.read();
    } else {
        ap_phi_mux_data_288_V_read302_phi_phi_fu_21541_p4 = ap_phi_reg_pp0_iter0_data_288_V_read302_phi_reg_21537.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_288_V_read302_rewind_phi_fu_10839_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_288_V_read302_rewind_phi_fu_10839_p6 = data_288_V_read302_phi_reg_21537.read();
    } else {
        ap_phi_mux_data_288_V_read302_rewind_phi_fu_10839_p6 = data_288_V_read302_rewind_reg_10835.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_289_V_read303_phi_phi_fu_21554_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_289_V_read303_phi_phi_fu_21554_p4 = ap_phi_mux_data_289_V_read303_rewind_phi_fu_10853_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_289_V_read303_phi_phi_fu_21554_p4 = data_289_V_read.read();
    } else {
        ap_phi_mux_data_289_V_read303_phi_phi_fu_21554_p4 = ap_phi_reg_pp0_iter0_data_289_V_read303_phi_reg_21550.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_289_V_read303_rewind_phi_fu_10853_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_289_V_read303_rewind_phi_fu_10853_p6 = data_289_V_read303_phi_reg_21550.read();
    } else {
        ap_phi_mux_data_289_V_read303_rewind_phi_fu_10853_p6 = data_289_V_read303_rewind_reg_10849.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_28_V_read42_phi_phi_fu_18161_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_28_V_read42_phi_phi_fu_18161_p4 = ap_phi_mux_data_28_V_read42_rewind_phi_fu_7199_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_28_V_read42_phi_phi_fu_18161_p4 = data_28_V_read.read();
    } else {
        ap_phi_mux_data_28_V_read42_phi_phi_fu_18161_p4 = ap_phi_reg_pp0_iter0_data_28_V_read42_phi_reg_18157.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_28_V_read42_rewind_phi_fu_7199_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_28_V_read42_rewind_phi_fu_7199_p6 = data_28_V_read42_phi_reg_18157.read();
    } else {
        ap_phi_mux_data_28_V_read42_rewind_phi_fu_7199_p6 = data_28_V_read42_rewind_reg_7195.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_290_V_read304_phi_phi_fu_21567_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_290_V_read304_phi_phi_fu_21567_p4 = ap_phi_mux_data_290_V_read304_rewind_phi_fu_10867_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_290_V_read304_phi_phi_fu_21567_p4 = data_290_V_read.read();
    } else {
        ap_phi_mux_data_290_V_read304_phi_phi_fu_21567_p4 = ap_phi_reg_pp0_iter0_data_290_V_read304_phi_reg_21563.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_290_V_read304_rewind_phi_fu_10867_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_290_V_read304_rewind_phi_fu_10867_p6 = data_290_V_read304_phi_reg_21563.read();
    } else {
        ap_phi_mux_data_290_V_read304_rewind_phi_fu_10867_p6 = data_290_V_read304_rewind_reg_10863.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_291_V_read305_phi_phi_fu_21580_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_291_V_read305_phi_phi_fu_21580_p4 = ap_phi_mux_data_291_V_read305_rewind_phi_fu_10881_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_291_V_read305_phi_phi_fu_21580_p4 = data_291_V_read.read();
    } else {
        ap_phi_mux_data_291_V_read305_phi_phi_fu_21580_p4 = ap_phi_reg_pp0_iter0_data_291_V_read305_phi_reg_21576.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_291_V_read305_rewind_phi_fu_10881_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_291_V_read305_rewind_phi_fu_10881_p6 = data_291_V_read305_phi_reg_21576.read();
    } else {
        ap_phi_mux_data_291_V_read305_rewind_phi_fu_10881_p6 = data_291_V_read305_rewind_reg_10877.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_292_V_read306_phi_phi_fu_21593_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_292_V_read306_phi_phi_fu_21593_p4 = ap_phi_mux_data_292_V_read306_rewind_phi_fu_10895_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_292_V_read306_phi_phi_fu_21593_p4 = data_292_V_read.read();
    } else {
        ap_phi_mux_data_292_V_read306_phi_phi_fu_21593_p4 = ap_phi_reg_pp0_iter0_data_292_V_read306_phi_reg_21589.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_292_V_read306_rewind_phi_fu_10895_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_292_V_read306_rewind_phi_fu_10895_p6 = data_292_V_read306_phi_reg_21589.read();
    } else {
        ap_phi_mux_data_292_V_read306_rewind_phi_fu_10895_p6 = data_292_V_read306_rewind_reg_10891.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_293_V_read307_phi_phi_fu_21606_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_293_V_read307_phi_phi_fu_21606_p4 = ap_phi_mux_data_293_V_read307_rewind_phi_fu_10909_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_293_V_read307_phi_phi_fu_21606_p4 = data_293_V_read.read();
    } else {
        ap_phi_mux_data_293_V_read307_phi_phi_fu_21606_p4 = ap_phi_reg_pp0_iter0_data_293_V_read307_phi_reg_21602.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_293_V_read307_rewind_phi_fu_10909_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_293_V_read307_rewind_phi_fu_10909_p6 = data_293_V_read307_phi_reg_21602.read();
    } else {
        ap_phi_mux_data_293_V_read307_rewind_phi_fu_10909_p6 = data_293_V_read307_rewind_reg_10905.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_294_V_read308_phi_phi_fu_21619_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_294_V_read308_phi_phi_fu_21619_p4 = ap_phi_mux_data_294_V_read308_rewind_phi_fu_10923_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_294_V_read308_phi_phi_fu_21619_p4 = data_294_V_read.read();
    } else {
        ap_phi_mux_data_294_V_read308_phi_phi_fu_21619_p4 = ap_phi_reg_pp0_iter0_data_294_V_read308_phi_reg_21615.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_294_V_read308_rewind_phi_fu_10923_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_294_V_read308_rewind_phi_fu_10923_p6 = data_294_V_read308_phi_reg_21615.read();
    } else {
        ap_phi_mux_data_294_V_read308_rewind_phi_fu_10923_p6 = data_294_V_read308_rewind_reg_10919.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_295_V_read309_phi_phi_fu_21632_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_295_V_read309_phi_phi_fu_21632_p4 = ap_phi_mux_data_295_V_read309_rewind_phi_fu_10937_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_295_V_read309_phi_phi_fu_21632_p4 = data_295_V_read.read();
    } else {
        ap_phi_mux_data_295_V_read309_phi_phi_fu_21632_p4 = ap_phi_reg_pp0_iter0_data_295_V_read309_phi_reg_21628.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_295_V_read309_rewind_phi_fu_10937_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_295_V_read309_rewind_phi_fu_10937_p6 = data_295_V_read309_phi_reg_21628.read();
    } else {
        ap_phi_mux_data_295_V_read309_rewind_phi_fu_10937_p6 = data_295_V_read309_rewind_reg_10933.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_296_V_read310_phi_phi_fu_21645_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_296_V_read310_phi_phi_fu_21645_p4 = ap_phi_mux_data_296_V_read310_rewind_phi_fu_10951_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_296_V_read310_phi_phi_fu_21645_p4 = data_296_V_read.read();
    } else {
        ap_phi_mux_data_296_V_read310_phi_phi_fu_21645_p4 = ap_phi_reg_pp0_iter0_data_296_V_read310_phi_reg_21641.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_296_V_read310_rewind_phi_fu_10951_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_296_V_read310_rewind_phi_fu_10951_p6 = data_296_V_read310_phi_reg_21641.read();
    } else {
        ap_phi_mux_data_296_V_read310_rewind_phi_fu_10951_p6 = data_296_V_read310_rewind_reg_10947.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_297_V_read311_phi_phi_fu_21658_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_297_V_read311_phi_phi_fu_21658_p4 = ap_phi_mux_data_297_V_read311_rewind_phi_fu_10965_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_297_V_read311_phi_phi_fu_21658_p4 = data_297_V_read.read();
    } else {
        ap_phi_mux_data_297_V_read311_phi_phi_fu_21658_p4 = ap_phi_reg_pp0_iter0_data_297_V_read311_phi_reg_21654.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_297_V_read311_rewind_phi_fu_10965_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_297_V_read311_rewind_phi_fu_10965_p6 = data_297_V_read311_phi_reg_21654.read();
    } else {
        ap_phi_mux_data_297_V_read311_rewind_phi_fu_10965_p6 = data_297_V_read311_rewind_reg_10961.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_298_V_read312_phi_phi_fu_21671_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_298_V_read312_phi_phi_fu_21671_p4 = ap_phi_mux_data_298_V_read312_rewind_phi_fu_10979_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_298_V_read312_phi_phi_fu_21671_p4 = data_298_V_read.read();
    } else {
        ap_phi_mux_data_298_V_read312_phi_phi_fu_21671_p4 = ap_phi_reg_pp0_iter0_data_298_V_read312_phi_reg_21667.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_298_V_read312_rewind_phi_fu_10979_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_298_V_read312_rewind_phi_fu_10979_p6 = data_298_V_read312_phi_reg_21667.read();
    } else {
        ap_phi_mux_data_298_V_read312_rewind_phi_fu_10979_p6 = data_298_V_read312_rewind_reg_10975.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_299_V_read313_phi_phi_fu_21684_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_299_V_read313_phi_phi_fu_21684_p4 = ap_phi_mux_data_299_V_read313_rewind_phi_fu_10993_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_299_V_read313_phi_phi_fu_21684_p4 = data_299_V_read.read();
    } else {
        ap_phi_mux_data_299_V_read313_phi_phi_fu_21684_p4 = ap_phi_reg_pp0_iter0_data_299_V_read313_phi_reg_21680.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_299_V_read313_rewind_phi_fu_10993_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_299_V_read313_rewind_phi_fu_10993_p6 = data_299_V_read313_phi_reg_21680.read();
    } else {
        ap_phi_mux_data_299_V_read313_rewind_phi_fu_10993_p6 = data_299_V_read313_rewind_reg_10989.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_29_V_read43_phi_phi_fu_18174_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_29_V_read43_phi_phi_fu_18174_p4 = ap_phi_mux_data_29_V_read43_rewind_phi_fu_7213_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_29_V_read43_phi_phi_fu_18174_p4 = data_29_V_read.read();
    } else {
        ap_phi_mux_data_29_V_read43_phi_phi_fu_18174_p4 = ap_phi_reg_pp0_iter0_data_29_V_read43_phi_reg_18170.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_29_V_read43_rewind_phi_fu_7213_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_29_V_read43_rewind_phi_fu_7213_p6 = data_29_V_read43_phi_reg_18170.read();
    } else {
        ap_phi_mux_data_29_V_read43_rewind_phi_fu_7213_p6 = data_29_V_read43_rewind_reg_7209.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_2_V_read16_phi_phi_fu_17823_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_2_V_read16_phi_phi_fu_17823_p4 = ap_phi_mux_data_2_V_read16_rewind_phi_fu_6835_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_2_V_read16_phi_phi_fu_17823_p4 = data_2_V_read.read();
    } else {
        ap_phi_mux_data_2_V_read16_phi_phi_fu_17823_p4 = ap_phi_reg_pp0_iter0_data_2_V_read16_phi_reg_17819.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_2_V_read16_rewind_phi_fu_6835_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2_V_read16_rewind_phi_fu_6835_p6 = data_2_V_read16_phi_reg_17819.read();
    } else {
        ap_phi_mux_data_2_V_read16_rewind_phi_fu_6835_p6 = data_2_V_read16_rewind_reg_6831.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_300_V_read314_phi_phi_fu_21697_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_300_V_read314_phi_phi_fu_21697_p4 = ap_phi_mux_data_300_V_read314_rewind_phi_fu_11007_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_300_V_read314_phi_phi_fu_21697_p4 = data_300_V_read.read();
    } else {
        ap_phi_mux_data_300_V_read314_phi_phi_fu_21697_p4 = ap_phi_reg_pp0_iter0_data_300_V_read314_phi_reg_21693.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_300_V_read314_rewind_phi_fu_11007_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_300_V_read314_rewind_phi_fu_11007_p6 = data_300_V_read314_phi_reg_21693.read();
    } else {
        ap_phi_mux_data_300_V_read314_rewind_phi_fu_11007_p6 = data_300_V_read314_rewind_reg_11003.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_301_V_read315_phi_phi_fu_21710_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_301_V_read315_phi_phi_fu_21710_p4 = ap_phi_mux_data_301_V_read315_rewind_phi_fu_11021_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_301_V_read315_phi_phi_fu_21710_p4 = data_301_V_read.read();
    } else {
        ap_phi_mux_data_301_V_read315_phi_phi_fu_21710_p4 = ap_phi_reg_pp0_iter0_data_301_V_read315_phi_reg_21706.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_301_V_read315_rewind_phi_fu_11021_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_301_V_read315_rewind_phi_fu_11021_p6 = data_301_V_read315_phi_reg_21706.read();
    } else {
        ap_phi_mux_data_301_V_read315_rewind_phi_fu_11021_p6 = data_301_V_read315_rewind_reg_11017.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_302_V_read316_phi_phi_fu_21723_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_302_V_read316_phi_phi_fu_21723_p4 = ap_phi_mux_data_302_V_read316_rewind_phi_fu_11035_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_302_V_read316_phi_phi_fu_21723_p4 = data_302_V_read.read();
    } else {
        ap_phi_mux_data_302_V_read316_phi_phi_fu_21723_p4 = ap_phi_reg_pp0_iter0_data_302_V_read316_phi_reg_21719.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_302_V_read316_rewind_phi_fu_11035_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_302_V_read316_rewind_phi_fu_11035_p6 = data_302_V_read316_phi_reg_21719.read();
    } else {
        ap_phi_mux_data_302_V_read316_rewind_phi_fu_11035_p6 = data_302_V_read316_rewind_reg_11031.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_303_V_read317_phi_phi_fu_21736_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_303_V_read317_phi_phi_fu_21736_p4 = ap_phi_mux_data_303_V_read317_rewind_phi_fu_11049_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_303_V_read317_phi_phi_fu_21736_p4 = data_303_V_read.read();
    } else {
        ap_phi_mux_data_303_V_read317_phi_phi_fu_21736_p4 = ap_phi_reg_pp0_iter0_data_303_V_read317_phi_reg_21732.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_303_V_read317_rewind_phi_fu_11049_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_303_V_read317_rewind_phi_fu_11049_p6 = data_303_V_read317_phi_reg_21732.read();
    } else {
        ap_phi_mux_data_303_V_read317_rewind_phi_fu_11049_p6 = data_303_V_read317_rewind_reg_11045.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_304_V_read318_phi_phi_fu_21749_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_304_V_read318_phi_phi_fu_21749_p4 = ap_phi_mux_data_304_V_read318_rewind_phi_fu_11063_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_304_V_read318_phi_phi_fu_21749_p4 = data_304_V_read.read();
    } else {
        ap_phi_mux_data_304_V_read318_phi_phi_fu_21749_p4 = ap_phi_reg_pp0_iter0_data_304_V_read318_phi_reg_21745.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_304_V_read318_rewind_phi_fu_11063_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_304_V_read318_rewind_phi_fu_11063_p6 = data_304_V_read318_phi_reg_21745.read();
    } else {
        ap_phi_mux_data_304_V_read318_rewind_phi_fu_11063_p6 = data_304_V_read318_rewind_reg_11059.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_305_V_read319_phi_phi_fu_21762_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_305_V_read319_phi_phi_fu_21762_p4 = ap_phi_mux_data_305_V_read319_rewind_phi_fu_11077_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_305_V_read319_phi_phi_fu_21762_p4 = data_305_V_read.read();
    } else {
        ap_phi_mux_data_305_V_read319_phi_phi_fu_21762_p4 = ap_phi_reg_pp0_iter0_data_305_V_read319_phi_reg_21758.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_305_V_read319_rewind_phi_fu_11077_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_305_V_read319_rewind_phi_fu_11077_p6 = data_305_V_read319_phi_reg_21758.read();
    } else {
        ap_phi_mux_data_305_V_read319_rewind_phi_fu_11077_p6 = data_305_V_read319_rewind_reg_11073.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_306_V_read320_phi_phi_fu_21775_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_306_V_read320_phi_phi_fu_21775_p4 = ap_phi_mux_data_306_V_read320_rewind_phi_fu_11091_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_306_V_read320_phi_phi_fu_21775_p4 = data_306_V_read.read();
    } else {
        ap_phi_mux_data_306_V_read320_phi_phi_fu_21775_p4 = ap_phi_reg_pp0_iter0_data_306_V_read320_phi_reg_21771.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_306_V_read320_rewind_phi_fu_11091_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_306_V_read320_rewind_phi_fu_11091_p6 = data_306_V_read320_phi_reg_21771.read();
    } else {
        ap_phi_mux_data_306_V_read320_rewind_phi_fu_11091_p6 = data_306_V_read320_rewind_reg_11087.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_307_V_read321_phi_phi_fu_21788_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_307_V_read321_phi_phi_fu_21788_p4 = ap_phi_mux_data_307_V_read321_rewind_phi_fu_11105_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_307_V_read321_phi_phi_fu_21788_p4 = data_307_V_read.read();
    } else {
        ap_phi_mux_data_307_V_read321_phi_phi_fu_21788_p4 = ap_phi_reg_pp0_iter0_data_307_V_read321_phi_reg_21784.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_307_V_read321_rewind_phi_fu_11105_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_307_V_read321_rewind_phi_fu_11105_p6 = data_307_V_read321_phi_reg_21784.read();
    } else {
        ap_phi_mux_data_307_V_read321_rewind_phi_fu_11105_p6 = data_307_V_read321_rewind_reg_11101.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_308_V_read322_phi_phi_fu_21801_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_308_V_read322_phi_phi_fu_21801_p4 = ap_phi_mux_data_308_V_read322_rewind_phi_fu_11119_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_308_V_read322_phi_phi_fu_21801_p4 = data_308_V_read.read();
    } else {
        ap_phi_mux_data_308_V_read322_phi_phi_fu_21801_p4 = ap_phi_reg_pp0_iter0_data_308_V_read322_phi_reg_21797.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_308_V_read322_rewind_phi_fu_11119_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_308_V_read322_rewind_phi_fu_11119_p6 = data_308_V_read322_phi_reg_21797.read();
    } else {
        ap_phi_mux_data_308_V_read322_rewind_phi_fu_11119_p6 = data_308_V_read322_rewind_reg_11115.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_309_V_read323_phi_phi_fu_21814_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_309_V_read323_phi_phi_fu_21814_p4 = ap_phi_mux_data_309_V_read323_rewind_phi_fu_11133_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_309_V_read323_phi_phi_fu_21814_p4 = data_309_V_read.read();
    } else {
        ap_phi_mux_data_309_V_read323_phi_phi_fu_21814_p4 = ap_phi_reg_pp0_iter0_data_309_V_read323_phi_reg_21810.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_309_V_read323_rewind_phi_fu_11133_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_309_V_read323_rewind_phi_fu_11133_p6 = data_309_V_read323_phi_reg_21810.read();
    } else {
        ap_phi_mux_data_309_V_read323_rewind_phi_fu_11133_p6 = data_309_V_read323_rewind_reg_11129.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_30_V_read44_phi_phi_fu_18187_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_30_V_read44_phi_phi_fu_18187_p4 = ap_phi_mux_data_30_V_read44_rewind_phi_fu_7227_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_30_V_read44_phi_phi_fu_18187_p4 = data_30_V_read.read();
    } else {
        ap_phi_mux_data_30_V_read44_phi_phi_fu_18187_p4 = ap_phi_reg_pp0_iter0_data_30_V_read44_phi_reg_18183.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_30_V_read44_rewind_phi_fu_7227_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_30_V_read44_rewind_phi_fu_7227_p6 = data_30_V_read44_phi_reg_18183.read();
    } else {
        ap_phi_mux_data_30_V_read44_rewind_phi_fu_7227_p6 = data_30_V_read44_rewind_reg_7223.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_310_V_read324_phi_phi_fu_21827_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_310_V_read324_phi_phi_fu_21827_p4 = ap_phi_mux_data_310_V_read324_rewind_phi_fu_11147_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_310_V_read324_phi_phi_fu_21827_p4 = data_310_V_read.read();
    } else {
        ap_phi_mux_data_310_V_read324_phi_phi_fu_21827_p4 = ap_phi_reg_pp0_iter0_data_310_V_read324_phi_reg_21823.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_310_V_read324_rewind_phi_fu_11147_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_310_V_read324_rewind_phi_fu_11147_p6 = data_310_V_read324_phi_reg_21823.read();
    } else {
        ap_phi_mux_data_310_V_read324_rewind_phi_fu_11147_p6 = data_310_V_read324_rewind_reg_11143.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_311_V_read325_phi_phi_fu_21840_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_311_V_read325_phi_phi_fu_21840_p4 = ap_phi_mux_data_311_V_read325_rewind_phi_fu_11161_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_311_V_read325_phi_phi_fu_21840_p4 = data_311_V_read.read();
    } else {
        ap_phi_mux_data_311_V_read325_phi_phi_fu_21840_p4 = ap_phi_reg_pp0_iter0_data_311_V_read325_phi_reg_21836.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_311_V_read325_rewind_phi_fu_11161_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_311_V_read325_rewind_phi_fu_11161_p6 = data_311_V_read325_phi_reg_21836.read();
    } else {
        ap_phi_mux_data_311_V_read325_rewind_phi_fu_11161_p6 = data_311_V_read325_rewind_reg_11157.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_312_V_read326_phi_phi_fu_21853_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_312_V_read326_phi_phi_fu_21853_p4 = ap_phi_mux_data_312_V_read326_rewind_phi_fu_11175_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_312_V_read326_phi_phi_fu_21853_p4 = data_312_V_read.read();
    } else {
        ap_phi_mux_data_312_V_read326_phi_phi_fu_21853_p4 = ap_phi_reg_pp0_iter0_data_312_V_read326_phi_reg_21849.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_312_V_read326_rewind_phi_fu_11175_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_312_V_read326_rewind_phi_fu_11175_p6 = data_312_V_read326_phi_reg_21849.read();
    } else {
        ap_phi_mux_data_312_V_read326_rewind_phi_fu_11175_p6 = data_312_V_read326_rewind_reg_11171.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_313_V_read327_phi_phi_fu_21866_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_313_V_read327_phi_phi_fu_21866_p4 = ap_phi_mux_data_313_V_read327_rewind_phi_fu_11189_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_313_V_read327_phi_phi_fu_21866_p4 = data_313_V_read.read();
    } else {
        ap_phi_mux_data_313_V_read327_phi_phi_fu_21866_p4 = ap_phi_reg_pp0_iter0_data_313_V_read327_phi_reg_21862.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_313_V_read327_rewind_phi_fu_11189_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_313_V_read327_rewind_phi_fu_11189_p6 = data_313_V_read327_phi_reg_21862.read();
    } else {
        ap_phi_mux_data_313_V_read327_rewind_phi_fu_11189_p6 = data_313_V_read327_rewind_reg_11185.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_314_V_read328_phi_phi_fu_21879_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_314_V_read328_phi_phi_fu_21879_p4 = ap_phi_mux_data_314_V_read328_rewind_phi_fu_11203_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_314_V_read328_phi_phi_fu_21879_p4 = data_314_V_read.read();
    } else {
        ap_phi_mux_data_314_V_read328_phi_phi_fu_21879_p4 = ap_phi_reg_pp0_iter0_data_314_V_read328_phi_reg_21875.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_314_V_read328_rewind_phi_fu_11203_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_314_V_read328_rewind_phi_fu_11203_p6 = data_314_V_read328_phi_reg_21875.read();
    } else {
        ap_phi_mux_data_314_V_read328_rewind_phi_fu_11203_p6 = data_314_V_read328_rewind_reg_11199.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_315_V_read329_phi_phi_fu_21892_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_315_V_read329_phi_phi_fu_21892_p4 = ap_phi_mux_data_315_V_read329_rewind_phi_fu_11217_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_315_V_read329_phi_phi_fu_21892_p4 = data_315_V_read.read();
    } else {
        ap_phi_mux_data_315_V_read329_phi_phi_fu_21892_p4 = ap_phi_reg_pp0_iter0_data_315_V_read329_phi_reg_21888.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_315_V_read329_rewind_phi_fu_11217_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_315_V_read329_rewind_phi_fu_11217_p6 = data_315_V_read329_phi_reg_21888.read();
    } else {
        ap_phi_mux_data_315_V_read329_rewind_phi_fu_11217_p6 = data_315_V_read329_rewind_reg_11213.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_316_V_read330_phi_phi_fu_21905_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_316_V_read330_phi_phi_fu_21905_p4 = ap_phi_mux_data_316_V_read330_rewind_phi_fu_11231_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_316_V_read330_phi_phi_fu_21905_p4 = data_316_V_read.read();
    } else {
        ap_phi_mux_data_316_V_read330_phi_phi_fu_21905_p4 = ap_phi_reg_pp0_iter0_data_316_V_read330_phi_reg_21901.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_316_V_read330_rewind_phi_fu_11231_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_316_V_read330_rewind_phi_fu_11231_p6 = data_316_V_read330_phi_reg_21901.read();
    } else {
        ap_phi_mux_data_316_V_read330_rewind_phi_fu_11231_p6 = data_316_V_read330_rewind_reg_11227.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_317_V_read331_phi_phi_fu_21918_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_317_V_read331_phi_phi_fu_21918_p4 = ap_phi_mux_data_317_V_read331_rewind_phi_fu_11245_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_317_V_read331_phi_phi_fu_21918_p4 = data_317_V_read.read();
    } else {
        ap_phi_mux_data_317_V_read331_phi_phi_fu_21918_p4 = ap_phi_reg_pp0_iter0_data_317_V_read331_phi_reg_21914.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_317_V_read331_rewind_phi_fu_11245_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_317_V_read331_rewind_phi_fu_11245_p6 = data_317_V_read331_phi_reg_21914.read();
    } else {
        ap_phi_mux_data_317_V_read331_rewind_phi_fu_11245_p6 = data_317_V_read331_rewind_reg_11241.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_318_V_read332_phi_phi_fu_21931_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_318_V_read332_phi_phi_fu_21931_p4 = ap_phi_mux_data_318_V_read332_rewind_phi_fu_11259_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_318_V_read332_phi_phi_fu_21931_p4 = data_318_V_read.read();
    } else {
        ap_phi_mux_data_318_V_read332_phi_phi_fu_21931_p4 = ap_phi_reg_pp0_iter0_data_318_V_read332_phi_reg_21927.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_318_V_read332_rewind_phi_fu_11259_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_318_V_read332_rewind_phi_fu_11259_p6 = data_318_V_read332_phi_reg_21927.read();
    } else {
        ap_phi_mux_data_318_V_read332_rewind_phi_fu_11259_p6 = data_318_V_read332_rewind_reg_11255.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_319_V_read333_phi_phi_fu_21944_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_319_V_read333_phi_phi_fu_21944_p4 = ap_phi_mux_data_319_V_read333_rewind_phi_fu_11273_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_319_V_read333_phi_phi_fu_21944_p4 = data_319_V_read.read();
    } else {
        ap_phi_mux_data_319_V_read333_phi_phi_fu_21944_p4 = ap_phi_reg_pp0_iter0_data_319_V_read333_phi_reg_21940.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_319_V_read333_rewind_phi_fu_11273_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_319_V_read333_rewind_phi_fu_11273_p6 = data_319_V_read333_phi_reg_21940.read();
    } else {
        ap_phi_mux_data_319_V_read333_rewind_phi_fu_11273_p6 = data_319_V_read333_rewind_reg_11269.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_31_V_read45_phi_phi_fu_18200_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_31_V_read45_phi_phi_fu_18200_p4 = ap_phi_mux_data_31_V_read45_rewind_phi_fu_7241_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_31_V_read45_phi_phi_fu_18200_p4 = data_31_V_read.read();
    } else {
        ap_phi_mux_data_31_V_read45_phi_phi_fu_18200_p4 = ap_phi_reg_pp0_iter0_data_31_V_read45_phi_reg_18196.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_31_V_read45_rewind_phi_fu_7241_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_31_V_read45_rewind_phi_fu_7241_p6 = data_31_V_read45_phi_reg_18196.read();
    } else {
        ap_phi_mux_data_31_V_read45_rewind_phi_fu_7241_p6 = data_31_V_read45_rewind_reg_7237.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_320_V_read334_phi_phi_fu_21957_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_320_V_read334_phi_phi_fu_21957_p4 = ap_phi_mux_data_320_V_read334_rewind_phi_fu_11287_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_320_V_read334_phi_phi_fu_21957_p4 = data_320_V_read.read();
    } else {
        ap_phi_mux_data_320_V_read334_phi_phi_fu_21957_p4 = ap_phi_reg_pp0_iter0_data_320_V_read334_phi_reg_21953.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_320_V_read334_rewind_phi_fu_11287_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_320_V_read334_rewind_phi_fu_11287_p6 = data_320_V_read334_phi_reg_21953.read();
    } else {
        ap_phi_mux_data_320_V_read334_rewind_phi_fu_11287_p6 = data_320_V_read334_rewind_reg_11283.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_321_V_read335_phi_phi_fu_21970_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_321_V_read335_phi_phi_fu_21970_p4 = ap_phi_mux_data_321_V_read335_rewind_phi_fu_11301_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_321_V_read335_phi_phi_fu_21970_p4 = data_321_V_read.read();
    } else {
        ap_phi_mux_data_321_V_read335_phi_phi_fu_21970_p4 = ap_phi_reg_pp0_iter0_data_321_V_read335_phi_reg_21966.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_321_V_read335_rewind_phi_fu_11301_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_321_V_read335_rewind_phi_fu_11301_p6 = data_321_V_read335_phi_reg_21966.read();
    } else {
        ap_phi_mux_data_321_V_read335_rewind_phi_fu_11301_p6 = data_321_V_read335_rewind_reg_11297.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_322_V_read336_phi_phi_fu_21983_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_322_V_read336_phi_phi_fu_21983_p4 = ap_phi_mux_data_322_V_read336_rewind_phi_fu_11315_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_322_V_read336_phi_phi_fu_21983_p4 = data_322_V_read.read();
    } else {
        ap_phi_mux_data_322_V_read336_phi_phi_fu_21983_p4 = ap_phi_reg_pp0_iter0_data_322_V_read336_phi_reg_21979.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_322_V_read336_rewind_phi_fu_11315_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_322_V_read336_rewind_phi_fu_11315_p6 = data_322_V_read336_phi_reg_21979.read();
    } else {
        ap_phi_mux_data_322_V_read336_rewind_phi_fu_11315_p6 = data_322_V_read336_rewind_reg_11311.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_323_V_read337_phi_phi_fu_21996_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_323_V_read337_phi_phi_fu_21996_p4 = ap_phi_mux_data_323_V_read337_rewind_phi_fu_11329_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_323_V_read337_phi_phi_fu_21996_p4 = data_323_V_read.read();
    } else {
        ap_phi_mux_data_323_V_read337_phi_phi_fu_21996_p4 = ap_phi_reg_pp0_iter0_data_323_V_read337_phi_reg_21992.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_323_V_read337_rewind_phi_fu_11329_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_323_V_read337_rewind_phi_fu_11329_p6 = data_323_V_read337_phi_reg_21992.read();
    } else {
        ap_phi_mux_data_323_V_read337_rewind_phi_fu_11329_p6 = data_323_V_read337_rewind_reg_11325.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_324_V_read338_phi_phi_fu_22009_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_324_V_read338_phi_phi_fu_22009_p4 = ap_phi_mux_data_324_V_read338_rewind_phi_fu_11343_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_324_V_read338_phi_phi_fu_22009_p4 = data_324_V_read.read();
    } else {
        ap_phi_mux_data_324_V_read338_phi_phi_fu_22009_p4 = ap_phi_reg_pp0_iter0_data_324_V_read338_phi_reg_22005.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_324_V_read338_rewind_phi_fu_11343_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_324_V_read338_rewind_phi_fu_11343_p6 = data_324_V_read338_phi_reg_22005.read();
    } else {
        ap_phi_mux_data_324_V_read338_rewind_phi_fu_11343_p6 = data_324_V_read338_rewind_reg_11339.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_325_V_read339_phi_phi_fu_22022_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_325_V_read339_phi_phi_fu_22022_p4 = ap_phi_mux_data_325_V_read339_rewind_phi_fu_11357_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_325_V_read339_phi_phi_fu_22022_p4 = data_325_V_read.read();
    } else {
        ap_phi_mux_data_325_V_read339_phi_phi_fu_22022_p4 = ap_phi_reg_pp0_iter0_data_325_V_read339_phi_reg_22018.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_325_V_read339_rewind_phi_fu_11357_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_325_V_read339_rewind_phi_fu_11357_p6 = data_325_V_read339_phi_reg_22018.read();
    } else {
        ap_phi_mux_data_325_V_read339_rewind_phi_fu_11357_p6 = data_325_V_read339_rewind_reg_11353.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_326_V_read340_phi_phi_fu_22035_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_326_V_read340_phi_phi_fu_22035_p4 = ap_phi_mux_data_326_V_read340_rewind_phi_fu_11371_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_326_V_read340_phi_phi_fu_22035_p4 = data_326_V_read.read();
    } else {
        ap_phi_mux_data_326_V_read340_phi_phi_fu_22035_p4 = ap_phi_reg_pp0_iter0_data_326_V_read340_phi_reg_22031.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_326_V_read340_rewind_phi_fu_11371_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_326_V_read340_rewind_phi_fu_11371_p6 = data_326_V_read340_phi_reg_22031.read();
    } else {
        ap_phi_mux_data_326_V_read340_rewind_phi_fu_11371_p6 = data_326_V_read340_rewind_reg_11367.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_327_V_read341_phi_phi_fu_22048_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_327_V_read341_phi_phi_fu_22048_p4 = ap_phi_mux_data_327_V_read341_rewind_phi_fu_11385_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_327_V_read341_phi_phi_fu_22048_p4 = data_327_V_read.read();
    } else {
        ap_phi_mux_data_327_V_read341_phi_phi_fu_22048_p4 = ap_phi_reg_pp0_iter0_data_327_V_read341_phi_reg_22044.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_327_V_read341_rewind_phi_fu_11385_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_327_V_read341_rewind_phi_fu_11385_p6 = data_327_V_read341_phi_reg_22044.read();
    } else {
        ap_phi_mux_data_327_V_read341_rewind_phi_fu_11385_p6 = data_327_V_read341_rewind_reg_11381.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_328_V_read342_phi_phi_fu_22061_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_328_V_read342_phi_phi_fu_22061_p4 = ap_phi_mux_data_328_V_read342_rewind_phi_fu_11399_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_328_V_read342_phi_phi_fu_22061_p4 = data_328_V_read.read();
    } else {
        ap_phi_mux_data_328_V_read342_phi_phi_fu_22061_p4 = ap_phi_reg_pp0_iter0_data_328_V_read342_phi_reg_22057.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_328_V_read342_rewind_phi_fu_11399_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_328_V_read342_rewind_phi_fu_11399_p6 = data_328_V_read342_phi_reg_22057.read();
    } else {
        ap_phi_mux_data_328_V_read342_rewind_phi_fu_11399_p6 = data_328_V_read342_rewind_reg_11395.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_329_V_read343_phi_phi_fu_22074_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_329_V_read343_phi_phi_fu_22074_p4 = ap_phi_mux_data_329_V_read343_rewind_phi_fu_11413_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_329_V_read343_phi_phi_fu_22074_p4 = data_329_V_read.read();
    } else {
        ap_phi_mux_data_329_V_read343_phi_phi_fu_22074_p4 = ap_phi_reg_pp0_iter0_data_329_V_read343_phi_reg_22070.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_329_V_read343_rewind_phi_fu_11413_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_329_V_read343_rewind_phi_fu_11413_p6 = data_329_V_read343_phi_reg_22070.read();
    } else {
        ap_phi_mux_data_329_V_read343_rewind_phi_fu_11413_p6 = data_329_V_read343_rewind_reg_11409.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_32_V_read46_phi_phi_fu_18213_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_32_V_read46_phi_phi_fu_18213_p4 = ap_phi_mux_data_32_V_read46_rewind_phi_fu_7255_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_32_V_read46_phi_phi_fu_18213_p4 = data_32_V_read.read();
    } else {
        ap_phi_mux_data_32_V_read46_phi_phi_fu_18213_p4 = ap_phi_reg_pp0_iter0_data_32_V_read46_phi_reg_18209.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_32_V_read46_rewind_phi_fu_7255_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_32_V_read46_rewind_phi_fu_7255_p6 = data_32_V_read46_phi_reg_18209.read();
    } else {
        ap_phi_mux_data_32_V_read46_rewind_phi_fu_7255_p6 = data_32_V_read46_rewind_reg_7251.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_330_V_read344_phi_phi_fu_22087_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_330_V_read344_phi_phi_fu_22087_p4 = ap_phi_mux_data_330_V_read344_rewind_phi_fu_11427_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_330_V_read344_phi_phi_fu_22087_p4 = data_330_V_read.read();
    } else {
        ap_phi_mux_data_330_V_read344_phi_phi_fu_22087_p4 = ap_phi_reg_pp0_iter0_data_330_V_read344_phi_reg_22083.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_330_V_read344_rewind_phi_fu_11427_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_330_V_read344_rewind_phi_fu_11427_p6 = data_330_V_read344_phi_reg_22083.read();
    } else {
        ap_phi_mux_data_330_V_read344_rewind_phi_fu_11427_p6 = data_330_V_read344_rewind_reg_11423.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_331_V_read345_phi_phi_fu_22100_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_331_V_read345_phi_phi_fu_22100_p4 = ap_phi_mux_data_331_V_read345_rewind_phi_fu_11441_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_331_V_read345_phi_phi_fu_22100_p4 = data_331_V_read.read();
    } else {
        ap_phi_mux_data_331_V_read345_phi_phi_fu_22100_p4 = ap_phi_reg_pp0_iter0_data_331_V_read345_phi_reg_22096.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_331_V_read345_rewind_phi_fu_11441_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_331_V_read345_rewind_phi_fu_11441_p6 = data_331_V_read345_phi_reg_22096.read();
    } else {
        ap_phi_mux_data_331_V_read345_rewind_phi_fu_11441_p6 = data_331_V_read345_rewind_reg_11437.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_332_V_read346_phi_phi_fu_22113_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_332_V_read346_phi_phi_fu_22113_p4 = ap_phi_mux_data_332_V_read346_rewind_phi_fu_11455_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_332_V_read346_phi_phi_fu_22113_p4 = data_332_V_read.read();
    } else {
        ap_phi_mux_data_332_V_read346_phi_phi_fu_22113_p4 = ap_phi_reg_pp0_iter0_data_332_V_read346_phi_reg_22109.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_332_V_read346_rewind_phi_fu_11455_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_332_V_read346_rewind_phi_fu_11455_p6 = data_332_V_read346_phi_reg_22109.read();
    } else {
        ap_phi_mux_data_332_V_read346_rewind_phi_fu_11455_p6 = data_332_V_read346_rewind_reg_11451.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_333_V_read347_phi_phi_fu_22126_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_333_V_read347_phi_phi_fu_22126_p4 = ap_phi_mux_data_333_V_read347_rewind_phi_fu_11469_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_333_V_read347_phi_phi_fu_22126_p4 = data_333_V_read.read();
    } else {
        ap_phi_mux_data_333_V_read347_phi_phi_fu_22126_p4 = ap_phi_reg_pp0_iter0_data_333_V_read347_phi_reg_22122.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_333_V_read347_rewind_phi_fu_11469_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_333_V_read347_rewind_phi_fu_11469_p6 = data_333_V_read347_phi_reg_22122.read();
    } else {
        ap_phi_mux_data_333_V_read347_rewind_phi_fu_11469_p6 = data_333_V_read347_rewind_reg_11465.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_334_V_read348_phi_phi_fu_22139_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_334_V_read348_phi_phi_fu_22139_p4 = ap_phi_mux_data_334_V_read348_rewind_phi_fu_11483_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_334_V_read348_phi_phi_fu_22139_p4 = data_334_V_read.read();
    } else {
        ap_phi_mux_data_334_V_read348_phi_phi_fu_22139_p4 = ap_phi_reg_pp0_iter0_data_334_V_read348_phi_reg_22135.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_334_V_read348_rewind_phi_fu_11483_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_334_V_read348_rewind_phi_fu_11483_p6 = data_334_V_read348_phi_reg_22135.read();
    } else {
        ap_phi_mux_data_334_V_read348_rewind_phi_fu_11483_p6 = data_334_V_read348_rewind_reg_11479.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_335_V_read349_phi_phi_fu_22152_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_335_V_read349_phi_phi_fu_22152_p4 = ap_phi_mux_data_335_V_read349_rewind_phi_fu_11497_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_335_V_read349_phi_phi_fu_22152_p4 = data_335_V_read.read();
    } else {
        ap_phi_mux_data_335_V_read349_phi_phi_fu_22152_p4 = ap_phi_reg_pp0_iter0_data_335_V_read349_phi_reg_22148.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_335_V_read349_rewind_phi_fu_11497_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_335_V_read349_rewind_phi_fu_11497_p6 = data_335_V_read349_phi_reg_22148.read();
    } else {
        ap_phi_mux_data_335_V_read349_rewind_phi_fu_11497_p6 = data_335_V_read349_rewind_reg_11493.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_336_V_read350_phi_phi_fu_22165_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_336_V_read350_phi_phi_fu_22165_p4 = ap_phi_mux_data_336_V_read350_rewind_phi_fu_11511_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_336_V_read350_phi_phi_fu_22165_p4 = data_336_V_read.read();
    } else {
        ap_phi_mux_data_336_V_read350_phi_phi_fu_22165_p4 = ap_phi_reg_pp0_iter0_data_336_V_read350_phi_reg_22161.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_336_V_read350_rewind_phi_fu_11511_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_336_V_read350_rewind_phi_fu_11511_p6 = data_336_V_read350_phi_reg_22161.read();
    } else {
        ap_phi_mux_data_336_V_read350_rewind_phi_fu_11511_p6 = data_336_V_read350_rewind_reg_11507.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_337_V_read351_phi_phi_fu_22178_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_337_V_read351_phi_phi_fu_22178_p4 = ap_phi_mux_data_337_V_read351_rewind_phi_fu_11525_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_337_V_read351_phi_phi_fu_22178_p4 = data_337_V_read.read();
    } else {
        ap_phi_mux_data_337_V_read351_phi_phi_fu_22178_p4 = ap_phi_reg_pp0_iter0_data_337_V_read351_phi_reg_22174.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_337_V_read351_rewind_phi_fu_11525_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_337_V_read351_rewind_phi_fu_11525_p6 = data_337_V_read351_phi_reg_22174.read();
    } else {
        ap_phi_mux_data_337_V_read351_rewind_phi_fu_11525_p6 = data_337_V_read351_rewind_reg_11521.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_338_V_read352_phi_phi_fu_22191_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_338_V_read352_phi_phi_fu_22191_p4 = ap_phi_mux_data_338_V_read352_rewind_phi_fu_11539_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_338_V_read352_phi_phi_fu_22191_p4 = data_338_V_read.read();
    } else {
        ap_phi_mux_data_338_V_read352_phi_phi_fu_22191_p4 = ap_phi_reg_pp0_iter0_data_338_V_read352_phi_reg_22187.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_338_V_read352_rewind_phi_fu_11539_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_338_V_read352_rewind_phi_fu_11539_p6 = data_338_V_read352_phi_reg_22187.read();
    } else {
        ap_phi_mux_data_338_V_read352_rewind_phi_fu_11539_p6 = data_338_V_read352_rewind_reg_11535.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_339_V_read353_phi_phi_fu_22204_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_339_V_read353_phi_phi_fu_22204_p4 = ap_phi_mux_data_339_V_read353_rewind_phi_fu_11553_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_339_V_read353_phi_phi_fu_22204_p4 = data_339_V_read.read();
    } else {
        ap_phi_mux_data_339_V_read353_phi_phi_fu_22204_p4 = ap_phi_reg_pp0_iter0_data_339_V_read353_phi_reg_22200.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_339_V_read353_rewind_phi_fu_11553_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_339_V_read353_rewind_phi_fu_11553_p6 = data_339_V_read353_phi_reg_22200.read();
    } else {
        ap_phi_mux_data_339_V_read353_rewind_phi_fu_11553_p6 = data_339_V_read353_rewind_reg_11549.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_33_V_read47_phi_phi_fu_18226_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_33_V_read47_phi_phi_fu_18226_p4 = ap_phi_mux_data_33_V_read47_rewind_phi_fu_7269_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_33_V_read47_phi_phi_fu_18226_p4 = data_33_V_read.read();
    } else {
        ap_phi_mux_data_33_V_read47_phi_phi_fu_18226_p4 = ap_phi_reg_pp0_iter0_data_33_V_read47_phi_reg_18222.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_33_V_read47_rewind_phi_fu_7269_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_33_V_read47_rewind_phi_fu_7269_p6 = data_33_V_read47_phi_reg_18222.read();
    } else {
        ap_phi_mux_data_33_V_read47_rewind_phi_fu_7269_p6 = data_33_V_read47_rewind_reg_7265.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_340_V_read354_phi_phi_fu_22217_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_340_V_read354_phi_phi_fu_22217_p4 = ap_phi_mux_data_340_V_read354_rewind_phi_fu_11567_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_340_V_read354_phi_phi_fu_22217_p4 = data_340_V_read.read();
    } else {
        ap_phi_mux_data_340_V_read354_phi_phi_fu_22217_p4 = ap_phi_reg_pp0_iter0_data_340_V_read354_phi_reg_22213.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_340_V_read354_rewind_phi_fu_11567_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_340_V_read354_rewind_phi_fu_11567_p6 = data_340_V_read354_phi_reg_22213.read();
    } else {
        ap_phi_mux_data_340_V_read354_rewind_phi_fu_11567_p6 = data_340_V_read354_rewind_reg_11563.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_341_V_read355_phi_phi_fu_22230_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_341_V_read355_phi_phi_fu_22230_p4 = ap_phi_mux_data_341_V_read355_rewind_phi_fu_11581_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_341_V_read355_phi_phi_fu_22230_p4 = data_341_V_read.read();
    } else {
        ap_phi_mux_data_341_V_read355_phi_phi_fu_22230_p4 = ap_phi_reg_pp0_iter0_data_341_V_read355_phi_reg_22226.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_341_V_read355_rewind_phi_fu_11581_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_341_V_read355_rewind_phi_fu_11581_p6 = data_341_V_read355_phi_reg_22226.read();
    } else {
        ap_phi_mux_data_341_V_read355_rewind_phi_fu_11581_p6 = data_341_V_read355_rewind_reg_11577.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_342_V_read356_phi_phi_fu_22243_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_342_V_read356_phi_phi_fu_22243_p4 = ap_phi_mux_data_342_V_read356_rewind_phi_fu_11595_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_342_V_read356_phi_phi_fu_22243_p4 = data_342_V_read.read();
    } else {
        ap_phi_mux_data_342_V_read356_phi_phi_fu_22243_p4 = ap_phi_reg_pp0_iter0_data_342_V_read356_phi_reg_22239.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_342_V_read356_rewind_phi_fu_11595_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_342_V_read356_rewind_phi_fu_11595_p6 = data_342_V_read356_phi_reg_22239.read();
    } else {
        ap_phi_mux_data_342_V_read356_rewind_phi_fu_11595_p6 = data_342_V_read356_rewind_reg_11591.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_343_V_read357_phi_phi_fu_22256_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_343_V_read357_phi_phi_fu_22256_p4 = ap_phi_mux_data_343_V_read357_rewind_phi_fu_11609_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_343_V_read357_phi_phi_fu_22256_p4 = data_343_V_read.read();
    } else {
        ap_phi_mux_data_343_V_read357_phi_phi_fu_22256_p4 = ap_phi_reg_pp0_iter0_data_343_V_read357_phi_reg_22252.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_343_V_read357_rewind_phi_fu_11609_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_343_V_read357_rewind_phi_fu_11609_p6 = data_343_V_read357_phi_reg_22252.read();
    } else {
        ap_phi_mux_data_343_V_read357_rewind_phi_fu_11609_p6 = data_343_V_read357_rewind_reg_11605.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_344_V_read358_phi_phi_fu_22269_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_344_V_read358_phi_phi_fu_22269_p4 = ap_phi_mux_data_344_V_read358_rewind_phi_fu_11623_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_344_V_read358_phi_phi_fu_22269_p4 = data_344_V_read.read();
    } else {
        ap_phi_mux_data_344_V_read358_phi_phi_fu_22269_p4 = ap_phi_reg_pp0_iter0_data_344_V_read358_phi_reg_22265.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_344_V_read358_rewind_phi_fu_11623_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_344_V_read358_rewind_phi_fu_11623_p6 = data_344_V_read358_phi_reg_22265.read();
    } else {
        ap_phi_mux_data_344_V_read358_rewind_phi_fu_11623_p6 = data_344_V_read358_rewind_reg_11619.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_345_V_read359_phi_phi_fu_22282_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_345_V_read359_phi_phi_fu_22282_p4 = ap_phi_mux_data_345_V_read359_rewind_phi_fu_11637_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_345_V_read359_phi_phi_fu_22282_p4 = data_345_V_read.read();
    } else {
        ap_phi_mux_data_345_V_read359_phi_phi_fu_22282_p4 = ap_phi_reg_pp0_iter0_data_345_V_read359_phi_reg_22278.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_345_V_read359_rewind_phi_fu_11637_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_345_V_read359_rewind_phi_fu_11637_p6 = data_345_V_read359_phi_reg_22278.read();
    } else {
        ap_phi_mux_data_345_V_read359_rewind_phi_fu_11637_p6 = data_345_V_read359_rewind_reg_11633.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_346_V_read360_phi_phi_fu_22295_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_346_V_read360_phi_phi_fu_22295_p4 = ap_phi_mux_data_346_V_read360_rewind_phi_fu_11651_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_346_V_read360_phi_phi_fu_22295_p4 = data_346_V_read.read();
    } else {
        ap_phi_mux_data_346_V_read360_phi_phi_fu_22295_p4 = ap_phi_reg_pp0_iter0_data_346_V_read360_phi_reg_22291.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_346_V_read360_rewind_phi_fu_11651_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_346_V_read360_rewind_phi_fu_11651_p6 = data_346_V_read360_phi_reg_22291.read();
    } else {
        ap_phi_mux_data_346_V_read360_rewind_phi_fu_11651_p6 = data_346_V_read360_rewind_reg_11647.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_347_V_read361_phi_phi_fu_22308_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_347_V_read361_phi_phi_fu_22308_p4 = ap_phi_mux_data_347_V_read361_rewind_phi_fu_11665_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_347_V_read361_phi_phi_fu_22308_p4 = data_347_V_read.read();
    } else {
        ap_phi_mux_data_347_V_read361_phi_phi_fu_22308_p4 = ap_phi_reg_pp0_iter0_data_347_V_read361_phi_reg_22304.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_347_V_read361_rewind_phi_fu_11665_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_347_V_read361_rewind_phi_fu_11665_p6 = data_347_V_read361_phi_reg_22304.read();
    } else {
        ap_phi_mux_data_347_V_read361_rewind_phi_fu_11665_p6 = data_347_V_read361_rewind_reg_11661.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_348_V_read362_phi_phi_fu_22321_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_348_V_read362_phi_phi_fu_22321_p4 = ap_phi_mux_data_348_V_read362_rewind_phi_fu_11679_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_348_V_read362_phi_phi_fu_22321_p4 = data_348_V_read.read();
    } else {
        ap_phi_mux_data_348_V_read362_phi_phi_fu_22321_p4 = ap_phi_reg_pp0_iter0_data_348_V_read362_phi_reg_22317.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_348_V_read362_rewind_phi_fu_11679_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_348_V_read362_rewind_phi_fu_11679_p6 = data_348_V_read362_phi_reg_22317.read();
    } else {
        ap_phi_mux_data_348_V_read362_rewind_phi_fu_11679_p6 = data_348_V_read362_rewind_reg_11675.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_349_V_read363_phi_phi_fu_22334_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_349_V_read363_phi_phi_fu_22334_p4 = ap_phi_mux_data_349_V_read363_rewind_phi_fu_11693_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_349_V_read363_phi_phi_fu_22334_p4 = data_349_V_read.read();
    } else {
        ap_phi_mux_data_349_V_read363_phi_phi_fu_22334_p4 = ap_phi_reg_pp0_iter0_data_349_V_read363_phi_reg_22330.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_349_V_read363_rewind_phi_fu_11693_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_349_V_read363_rewind_phi_fu_11693_p6 = data_349_V_read363_phi_reg_22330.read();
    } else {
        ap_phi_mux_data_349_V_read363_rewind_phi_fu_11693_p6 = data_349_V_read363_rewind_reg_11689.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_34_V_read48_phi_phi_fu_18239_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_34_V_read48_phi_phi_fu_18239_p4 = ap_phi_mux_data_34_V_read48_rewind_phi_fu_7283_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_34_V_read48_phi_phi_fu_18239_p4 = data_34_V_read.read();
    } else {
        ap_phi_mux_data_34_V_read48_phi_phi_fu_18239_p4 = ap_phi_reg_pp0_iter0_data_34_V_read48_phi_reg_18235.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_34_V_read48_rewind_phi_fu_7283_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_34_V_read48_rewind_phi_fu_7283_p6 = data_34_V_read48_phi_reg_18235.read();
    } else {
        ap_phi_mux_data_34_V_read48_rewind_phi_fu_7283_p6 = data_34_V_read48_rewind_reg_7279.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_350_V_read364_phi_phi_fu_22347_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_350_V_read364_phi_phi_fu_22347_p4 = ap_phi_mux_data_350_V_read364_rewind_phi_fu_11707_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_350_V_read364_phi_phi_fu_22347_p4 = data_350_V_read.read();
    } else {
        ap_phi_mux_data_350_V_read364_phi_phi_fu_22347_p4 = ap_phi_reg_pp0_iter0_data_350_V_read364_phi_reg_22343.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_350_V_read364_rewind_phi_fu_11707_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_350_V_read364_rewind_phi_fu_11707_p6 = data_350_V_read364_phi_reg_22343.read();
    } else {
        ap_phi_mux_data_350_V_read364_rewind_phi_fu_11707_p6 = data_350_V_read364_rewind_reg_11703.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_351_V_read365_phi_phi_fu_22360_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_351_V_read365_phi_phi_fu_22360_p4 = ap_phi_mux_data_351_V_read365_rewind_phi_fu_11721_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_351_V_read365_phi_phi_fu_22360_p4 = data_351_V_read.read();
    } else {
        ap_phi_mux_data_351_V_read365_phi_phi_fu_22360_p4 = ap_phi_reg_pp0_iter0_data_351_V_read365_phi_reg_22356.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_351_V_read365_rewind_phi_fu_11721_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_351_V_read365_rewind_phi_fu_11721_p6 = data_351_V_read365_phi_reg_22356.read();
    } else {
        ap_phi_mux_data_351_V_read365_rewind_phi_fu_11721_p6 = data_351_V_read365_rewind_reg_11717.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_352_V_read366_phi_phi_fu_22373_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_352_V_read366_phi_phi_fu_22373_p4 = ap_phi_mux_data_352_V_read366_rewind_phi_fu_11735_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_352_V_read366_phi_phi_fu_22373_p4 = data_352_V_read.read();
    } else {
        ap_phi_mux_data_352_V_read366_phi_phi_fu_22373_p4 = ap_phi_reg_pp0_iter0_data_352_V_read366_phi_reg_22369.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_352_V_read366_rewind_phi_fu_11735_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_352_V_read366_rewind_phi_fu_11735_p6 = data_352_V_read366_phi_reg_22369.read();
    } else {
        ap_phi_mux_data_352_V_read366_rewind_phi_fu_11735_p6 = data_352_V_read366_rewind_reg_11731.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_353_V_read367_phi_phi_fu_22386_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_353_V_read367_phi_phi_fu_22386_p4 = ap_phi_mux_data_353_V_read367_rewind_phi_fu_11749_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_353_V_read367_phi_phi_fu_22386_p4 = data_353_V_read.read();
    } else {
        ap_phi_mux_data_353_V_read367_phi_phi_fu_22386_p4 = ap_phi_reg_pp0_iter0_data_353_V_read367_phi_reg_22382.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_353_V_read367_rewind_phi_fu_11749_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_353_V_read367_rewind_phi_fu_11749_p6 = data_353_V_read367_phi_reg_22382.read();
    } else {
        ap_phi_mux_data_353_V_read367_rewind_phi_fu_11749_p6 = data_353_V_read367_rewind_reg_11745.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_354_V_read368_phi_phi_fu_22399_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_354_V_read368_phi_phi_fu_22399_p4 = ap_phi_mux_data_354_V_read368_rewind_phi_fu_11763_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_354_V_read368_phi_phi_fu_22399_p4 = data_354_V_read.read();
    } else {
        ap_phi_mux_data_354_V_read368_phi_phi_fu_22399_p4 = ap_phi_reg_pp0_iter0_data_354_V_read368_phi_reg_22395.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_354_V_read368_rewind_phi_fu_11763_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_354_V_read368_rewind_phi_fu_11763_p6 = data_354_V_read368_phi_reg_22395.read();
    } else {
        ap_phi_mux_data_354_V_read368_rewind_phi_fu_11763_p6 = data_354_V_read368_rewind_reg_11759.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_355_V_read369_phi_phi_fu_22412_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_355_V_read369_phi_phi_fu_22412_p4 = ap_phi_mux_data_355_V_read369_rewind_phi_fu_11777_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_355_V_read369_phi_phi_fu_22412_p4 = data_355_V_read.read();
    } else {
        ap_phi_mux_data_355_V_read369_phi_phi_fu_22412_p4 = ap_phi_reg_pp0_iter0_data_355_V_read369_phi_reg_22408.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_355_V_read369_rewind_phi_fu_11777_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_355_V_read369_rewind_phi_fu_11777_p6 = data_355_V_read369_phi_reg_22408.read();
    } else {
        ap_phi_mux_data_355_V_read369_rewind_phi_fu_11777_p6 = data_355_V_read369_rewind_reg_11773.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_356_V_read370_phi_phi_fu_22425_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_356_V_read370_phi_phi_fu_22425_p4 = ap_phi_mux_data_356_V_read370_rewind_phi_fu_11791_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_356_V_read370_phi_phi_fu_22425_p4 = data_356_V_read.read();
    } else {
        ap_phi_mux_data_356_V_read370_phi_phi_fu_22425_p4 = ap_phi_reg_pp0_iter0_data_356_V_read370_phi_reg_22421.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_356_V_read370_rewind_phi_fu_11791_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_356_V_read370_rewind_phi_fu_11791_p6 = data_356_V_read370_phi_reg_22421.read();
    } else {
        ap_phi_mux_data_356_V_read370_rewind_phi_fu_11791_p6 = data_356_V_read370_rewind_reg_11787.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_357_V_read371_phi_phi_fu_22438_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_357_V_read371_phi_phi_fu_22438_p4 = ap_phi_mux_data_357_V_read371_rewind_phi_fu_11805_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_357_V_read371_phi_phi_fu_22438_p4 = data_357_V_read.read();
    } else {
        ap_phi_mux_data_357_V_read371_phi_phi_fu_22438_p4 = ap_phi_reg_pp0_iter0_data_357_V_read371_phi_reg_22434.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_357_V_read371_rewind_phi_fu_11805_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_357_V_read371_rewind_phi_fu_11805_p6 = data_357_V_read371_phi_reg_22434.read();
    } else {
        ap_phi_mux_data_357_V_read371_rewind_phi_fu_11805_p6 = data_357_V_read371_rewind_reg_11801.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_358_V_read372_phi_phi_fu_22451_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_358_V_read372_phi_phi_fu_22451_p4 = ap_phi_mux_data_358_V_read372_rewind_phi_fu_11819_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_358_V_read372_phi_phi_fu_22451_p4 = data_358_V_read.read();
    } else {
        ap_phi_mux_data_358_V_read372_phi_phi_fu_22451_p4 = ap_phi_reg_pp0_iter0_data_358_V_read372_phi_reg_22447.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_358_V_read372_rewind_phi_fu_11819_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_358_V_read372_rewind_phi_fu_11819_p6 = data_358_V_read372_phi_reg_22447.read();
    } else {
        ap_phi_mux_data_358_V_read372_rewind_phi_fu_11819_p6 = data_358_V_read372_rewind_reg_11815.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_359_V_read373_phi_phi_fu_22464_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_359_V_read373_phi_phi_fu_22464_p4 = ap_phi_mux_data_359_V_read373_rewind_phi_fu_11833_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_359_V_read373_phi_phi_fu_22464_p4 = data_359_V_read.read();
    } else {
        ap_phi_mux_data_359_V_read373_phi_phi_fu_22464_p4 = ap_phi_reg_pp0_iter0_data_359_V_read373_phi_reg_22460.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_359_V_read373_rewind_phi_fu_11833_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_359_V_read373_rewind_phi_fu_11833_p6 = data_359_V_read373_phi_reg_22460.read();
    } else {
        ap_phi_mux_data_359_V_read373_rewind_phi_fu_11833_p6 = data_359_V_read373_rewind_reg_11829.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_35_V_read49_phi_phi_fu_18252_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_35_V_read49_phi_phi_fu_18252_p4 = ap_phi_mux_data_35_V_read49_rewind_phi_fu_7297_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_35_V_read49_phi_phi_fu_18252_p4 = data_35_V_read.read();
    } else {
        ap_phi_mux_data_35_V_read49_phi_phi_fu_18252_p4 = ap_phi_reg_pp0_iter0_data_35_V_read49_phi_reg_18248.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_35_V_read49_rewind_phi_fu_7297_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_35_V_read49_rewind_phi_fu_7297_p6 = data_35_V_read49_phi_reg_18248.read();
    } else {
        ap_phi_mux_data_35_V_read49_rewind_phi_fu_7297_p6 = data_35_V_read49_rewind_reg_7293.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_360_V_read374_phi_phi_fu_22477_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_360_V_read374_phi_phi_fu_22477_p4 = ap_phi_mux_data_360_V_read374_rewind_phi_fu_11847_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_360_V_read374_phi_phi_fu_22477_p4 = data_360_V_read.read();
    } else {
        ap_phi_mux_data_360_V_read374_phi_phi_fu_22477_p4 = ap_phi_reg_pp0_iter0_data_360_V_read374_phi_reg_22473.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_360_V_read374_rewind_phi_fu_11847_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_360_V_read374_rewind_phi_fu_11847_p6 = data_360_V_read374_phi_reg_22473.read();
    } else {
        ap_phi_mux_data_360_V_read374_rewind_phi_fu_11847_p6 = data_360_V_read374_rewind_reg_11843.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_361_V_read375_phi_phi_fu_22490_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_361_V_read375_phi_phi_fu_22490_p4 = ap_phi_mux_data_361_V_read375_rewind_phi_fu_11861_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_361_V_read375_phi_phi_fu_22490_p4 = data_361_V_read.read();
    } else {
        ap_phi_mux_data_361_V_read375_phi_phi_fu_22490_p4 = ap_phi_reg_pp0_iter0_data_361_V_read375_phi_reg_22486.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_361_V_read375_rewind_phi_fu_11861_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_361_V_read375_rewind_phi_fu_11861_p6 = data_361_V_read375_phi_reg_22486.read();
    } else {
        ap_phi_mux_data_361_V_read375_rewind_phi_fu_11861_p6 = data_361_V_read375_rewind_reg_11857.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_362_V_read376_phi_phi_fu_22503_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_362_V_read376_phi_phi_fu_22503_p4 = ap_phi_mux_data_362_V_read376_rewind_phi_fu_11875_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_362_V_read376_phi_phi_fu_22503_p4 = data_362_V_read.read();
    } else {
        ap_phi_mux_data_362_V_read376_phi_phi_fu_22503_p4 = ap_phi_reg_pp0_iter0_data_362_V_read376_phi_reg_22499.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_362_V_read376_rewind_phi_fu_11875_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_362_V_read376_rewind_phi_fu_11875_p6 = data_362_V_read376_phi_reg_22499.read();
    } else {
        ap_phi_mux_data_362_V_read376_rewind_phi_fu_11875_p6 = data_362_V_read376_rewind_reg_11871.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_363_V_read377_phi_phi_fu_22516_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_363_V_read377_phi_phi_fu_22516_p4 = ap_phi_mux_data_363_V_read377_rewind_phi_fu_11889_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_363_V_read377_phi_phi_fu_22516_p4 = data_363_V_read.read();
    } else {
        ap_phi_mux_data_363_V_read377_phi_phi_fu_22516_p4 = ap_phi_reg_pp0_iter0_data_363_V_read377_phi_reg_22512.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_363_V_read377_rewind_phi_fu_11889_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_363_V_read377_rewind_phi_fu_11889_p6 = data_363_V_read377_phi_reg_22512.read();
    } else {
        ap_phi_mux_data_363_V_read377_rewind_phi_fu_11889_p6 = data_363_V_read377_rewind_reg_11885.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_364_V_read378_phi_phi_fu_22529_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_364_V_read378_phi_phi_fu_22529_p4 = ap_phi_mux_data_364_V_read378_rewind_phi_fu_11903_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_364_V_read378_phi_phi_fu_22529_p4 = data_364_V_read.read();
    } else {
        ap_phi_mux_data_364_V_read378_phi_phi_fu_22529_p4 = ap_phi_reg_pp0_iter0_data_364_V_read378_phi_reg_22525.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_364_V_read378_rewind_phi_fu_11903_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_364_V_read378_rewind_phi_fu_11903_p6 = data_364_V_read378_phi_reg_22525.read();
    } else {
        ap_phi_mux_data_364_V_read378_rewind_phi_fu_11903_p6 = data_364_V_read378_rewind_reg_11899.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_365_V_read379_phi_phi_fu_22542_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_365_V_read379_phi_phi_fu_22542_p4 = ap_phi_mux_data_365_V_read379_rewind_phi_fu_11917_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_365_V_read379_phi_phi_fu_22542_p4 = data_365_V_read.read();
    } else {
        ap_phi_mux_data_365_V_read379_phi_phi_fu_22542_p4 = ap_phi_reg_pp0_iter0_data_365_V_read379_phi_reg_22538.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_365_V_read379_rewind_phi_fu_11917_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_365_V_read379_rewind_phi_fu_11917_p6 = data_365_V_read379_phi_reg_22538.read();
    } else {
        ap_phi_mux_data_365_V_read379_rewind_phi_fu_11917_p6 = data_365_V_read379_rewind_reg_11913.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_366_V_read380_phi_phi_fu_22555_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_366_V_read380_phi_phi_fu_22555_p4 = ap_phi_mux_data_366_V_read380_rewind_phi_fu_11931_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_366_V_read380_phi_phi_fu_22555_p4 = data_366_V_read.read();
    } else {
        ap_phi_mux_data_366_V_read380_phi_phi_fu_22555_p4 = ap_phi_reg_pp0_iter0_data_366_V_read380_phi_reg_22551.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_366_V_read380_rewind_phi_fu_11931_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_366_V_read380_rewind_phi_fu_11931_p6 = data_366_V_read380_phi_reg_22551.read();
    } else {
        ap_phi_mux_data_366_V_read380_rewind_phi_fu_11931_p6 = data_366_V_read380_rewind_reg_11927.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_367_V_read381_phi_phi_fu_22568_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_367_V_read381_phi_phi_fu_22568_p4 = ap_phi_mux_data_367_V_read381_rewind_phi_fu_11945_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_367_V_read381_phi_phi_fu_22568_p4 = data_367_V_read.read();
    } else {
        ap_phi_mux_data_367_V_read381_phi_phi_fu_22568_p4 = ap_phi_reg_pp0_iter0_data_367_V_read381_phi_reg_22564.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_367_V_read381_rewind_phi_fu_11945_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_367_V_read381_rewind_phi_fu_11945_p6 = data_367_V_read381_phi_reg_22564.read();
    } else {
        ap_phi_mux_data_367_V_read381_rewind_phi_fu_11945_p6 = data_367_V_read381_rewind_reg_11941.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_368_V_read382_phi_phi_fu_22581_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_368_V_read382_phi_phi_fu_22581_p4 = ap_phi_mux_data_368_V_read382_rewind_phi_fu_11959_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_368_V_read382_phi_phi_fu_22581_p4 = data_368_V_read.read();
    } else {
        ap_phi_mux_data_368_V_read382_phi_phi_fu_22581_p4 = ap_phi_reg_pp0_iter0_data_368_V_read382_phi_reg_22577.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_368_V_read382_rewind_phi_fu_11959_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_368_V_read382_rewind_phi_fu_11959_p6 = data_368_V_read382_phi_reg_22577.read();
    } else {
        ap_phi_mux_data_368_V_read382_rewind_phi_fu_11959_p6 = data_368_V_read382_rewind_reg_11955.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_369_V_read383_phi_phi_fu_22594_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_369_V_read383_phi_phi_fu_22594_p4 = ap_phi_mux_data_369_V_read383_rewind_phi_fu_11973_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_369_V_read383_phi_phi_fu_22594_p4 = data_369_V_read.read();
    } else {
        ap_phi_mux_data_369_V_read383_phi_phi_fu_22594_p4 = ap_phi_reg_pp0_iter0_data_369_V_read383_phi_reg_22590.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_369_V_read383_rewind_phi_fu_11973_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_369_V_read383_rewind_phi_fu_11973_p6 = data_369_V_read383_phi_reg_22590.read();
    } else {
        ap_phi_mux_data_369_V_read383_rewind_phi_fu_11973_p6 = data_369_V_read383_rewind_reg_11969.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_36_V_read50_phi_phi_fu_18265_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_36_V_read50_phi_phi_fu_18265_p4 = ap_phi_mux_data_36_V_read50_rewind_phi_fu_7311_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_36_V_read50_phi_phi_fu_18265_p4 = data_36_V_read.read();
    } else {
        ap_phi_mux_data_36_V_read50_phi_phi_fu_18265_p4 = ap_phi_reg_pp0_iter0_data_36_V_read50_phi_reg_18261.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_36_V_read50_rewind_phi_fu_7311_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_36_V_read50_rewind_phi_fu_7311_p6 = data_36_V_read50_phi_reg_18261.read();
    } else {
        ap_phi_mux_data_36_V_read50_rewind_phi_fu_7311_p6 = data_36_V_read50_rewind_reg_7307.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_370_V_read384_phi_phi_fu_22607_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_370_V_read384_phi_phi_fu_22607_p4 = ap_phi_mux_data_370_V_read384_rewind_phi_fu_11987_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_370_V_read384_phi_phi_fu_22607_p4 = data_370_V_read.read();
    } else {
        ap_phi_mux_data_370_V_read384_phi_phi_fu_22607_p4 = ap_phi_reg_pp0_iter0_data_370_V_read384_phi_reg_22603.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_370_V_read384_rewind_phi_fu_11987_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_370_V_read384_rewind_phi_fu_11987_p6 = data_370_V_read384_phi_reg_22603.read();
    } else {
        ap_phi_mux_data_370_V_read384_rewind_phi_fu_11987_p6 = data_370_V_read384_rewind_reg_11983.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_371_V_read385_phi_phi_fu_22620_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_371_V_read385_phi_phi_fu_22620_p4 = ap_phi_mux_data_371_V_read385_rewind_phi_fu_12001_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_371_V_read385_phi_phi_fu_22620_p4 = data_371_V_read.read();
    } else {
        ap_phi_mux_data_371_V_read385_phi_phi_fu_22620_p4 = ap_phi_reg_pp0_iter0_data_371_V_read385_phi_reg_22616.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_371_V_read385_rewind_phi_fu_12001_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_371_V_read385_rewind_phi_fu_12001_p6 = data_371_V_read385_phi_reg_22616.read();
    } else {
        ap_phi_mux_data_371_V_read385_rewind_phi_fu_12001_p6 = data_371_V_read385_rewind_reg_11997.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_372_V_read386_phi_phi_fu_22633_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_372_V_read386_phi_phi_fu_22633_p4 = ap_phi_mux_data_372_V_read386_rewind_phi_fu_12015_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_372_V_read386_phi_phi_fu_22633_p4 = data_372_V_read.read();
    } else {
        ap_phi_mux_data_372_V_read386_phi_phi_fu_22633_p4 = ap_phi_reg_pp0_iter0_data_372_V_read386_phi_reg_22629.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_372_V_read386_rewind_phi_fu_12015_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_372_V_read386_rewind_phi_fu_12015_p6 = data_372_V_read386_phi_reg_22629.read();
    } else {
        ap_phi_mux_data_372_V_read386_rewind_phi_fu_12015_p6 = data_372_V_read386_rewind_reg_12011.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_373_V_read387_phi_phi_fu_22646_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_373_V_read387_phi_phi_fu_22646_p4 = ap_phi_mux_data_373_V_read387_rewind_phi_fu_12029_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_373_V_read387_phi_phi_fu_22646_p4 = data_373_V_read.read();
    } else {
        ap_phi_mux_data_373_V_read387_phi_phi_fu_22646_p4 = ap_phi_reg_pp0_iter0_data_373_V_read387_phi_reg_22642.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_373_V_read387_rewind_phi_fu_12029_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_373_V_read387_rewind_phi_fu_12029_p6 = data_373_V_read387_phi_reg_22642.read();
    } else {
        ap_phi_mux_data_373_V_read387_rewind_phi_fu_12029_p6 = data_373_V_read387_rewind_reg_12025.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_374_V_read388_phi_phi_fu_22659_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_374_V_read388_phi_phi_fu_22659_p4 = ap_phi_mux_data_374_V_read388_rewind_phi_fu_12043_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_374_V_read388_phi_phi_fu_22659_p4 = data_374_V_read.read();
    } else {
        ap_phi_mux_data_374_V_read388_phi_phi_fu_22659_p4 = ap_phi_reg_pp0_iter0_data_374_V_read388_phi_reg_22655.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_374_V_read388_rewind_phi_fu_12043_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_374_V_read388_rewind_phi_fu_12043_p6 = data_374_V_read388_phi_reg_22655.read();
    } else {
        ap_phi_mux_data_374_V_read388_rewind_phi_fu_12043_p6 = data_374_V_read388_rewind_reg_12039.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_375_V_read389_phi_phi_fu_22672_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_375_V_read389_phi_phi_fu_22672_p4 = ap_phi_mux_data_375_V_read389_rewind_phi_fu_12057_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_375_V_read389_phi_phi_fu_22672_p4 = data_375_V_read.read();
    } else {
        ap_phi_mux_data_375_V_read389_phi_phi_fu_22672_p4 = ap_phi_reg_pp0_iter0_data_375_V_read389_phi_reg_22668.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_375_V_read389_rewind_phi_fu_12057_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_375_V_read389_rewind_phi_fu_12057_p6 = data_375_V_read389_phi_reg_22668.read();
    } else {
        ap_phi_mux_data_375_V_read389_rewind_phi_fu_12057_p6 = data_375_V_read389_rewind_reg_12053.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_376_V_read390_phi_phi_fu_22685_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_376_V_read390_phi_phi_fu_22685_p4 = ap_phi_mux_data_376_V_read390_rewind_phi_fu_12071_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_376_V_read390_phi_phi_fu_22685_p4 = data_376_V_read.read();
    } else {
        ap_phi_mux_data_376_V_read390_phi_phi_fu_22685_p4 = ap_phi_reg_pp0_iter0_data_376_V_read390_phi_reg_22681.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_376_V_read390_rewind_phi_fu_12071_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_376_V_read390_rewind_phi_fu_12071_p6 = data_376_V_read390_phi_reg_22681.read();
    } else {
        ap_phi_mux_data_376_V_read390_rewind_phi_fu_12071_p6 = data_376_V_read390_rewind_reg_12067.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_377_V_read391_phi_phi_fu_22698_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_377_V_read391_phi_phi_fu_22698_p4 = ap_phi_mux_data_377_V_read391_rewind_phi_fu_12085_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_377_V_read391_phi_phi_fu_22698_p4 = data_377_V_read.read();
    } else {
        ap_phi_mux_data_377_V_read391_phi_phi_fu_22698_p4 = ap_phi_reg_pp0_iter0_data_377_V_read391_phi_reg_22694.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_377_V_read391_rewind_phi_fu_12085_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_377_V_read391_rewind_phi_fu_12085_p6 = data_377_V_read391_phi_reg_22694.read();
    } else {
        ap_phi_mux_data_377_V_read391_rewind_phi_fu_12085_p6 = data_377_V_read391_rewind_reg_12081.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_378_V_read392_phi_phi_fu_22711_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_378_V_read392_phi_phi_fu_22711_p4 = ap_phi_mux_data_378_V_read392_rewind_phi_fu_12099_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_378_V_read392_phi_phi_fu_22711_p4 = data_378_V_read.read();
    } else {
        ap_phi_mux_data_378_V_read392_phi_phi_fu_22711_p4 = ap_phi_reg_pp0_iter0_data_378_V_read392_phi_reg_22707.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_378_V_read392_rewind_phi_fu_12099_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_378_V_read392_rewind_phi_fu_12099_p6 = data_378_V_read392_phi_reg_22707.read();
    } else {
        ap_phi_mux_data_378_V_read392_rewind_phi_fu_12099_p6 = data_378_V_read392_rewind_reg_12095.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_379_V_read393_phi_phi_fu_22724_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_379_V_read393_phi_phi_fu_22724_p4 = ap_phi_mux_data_379_V_read393_rewind_phi_fu_12113_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_379_V_read393_phi_phi_fu_22724_p4 = data_379_V_read.read();
    } else {
        ap_phi_mux_data_379_V_read393_phi_phi_fu_22724_p4 = ap_phi_reg_pp0_iter0_data_379_V_read393_phi_reg_22720.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_379_V_read393_rewind_phi_fu_12113_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_379_V_read393_rewind_phi_fu_12113_p6 = data_379_V_read393_phi_reg_22720.read();
    } else {
        ap_phi_mux_data_379_V_read393_rewind_phi_fu_12113_p6 = data_379_V_read393_rewind_reg_12109.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_37_V_read51_phi_phi_fu_18278_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_37_V_read51_phi_phi_fu_18278_p4 = ap_phi_mux_data_37_V_read51_rewind_phi_fu_7325_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_37_V_read51_phi_phi_fu_18278_p4 = data_37_V_read.read();
    } else {
        ap_phi_mux_data_37_V_read51_phi_phi_fu_18278_p4 = ap_phi_reg_pp0_iter0_data_37_V_read51_phi_reg_18274.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_37_V_read51_rewind_phi_fu_7325_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_37_V_read51_rewind_phi_fu_7325_p6 = data_37_V_read51_phi_reg_18274.read();
    } else {
        ap_phi_mux_data_37_V_read51_rewind_phi_fu_7325_p6 = data_37_V_read51_rewind_reg_7321.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_380_V_read394_phi_phi_fu_22737_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_380_V_read394_phi_phi_fu_22737_p4 = ap_phi_mux_data_380_V_read394_rewind_phi_fu_12127_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_380_V_read394_phi_phi_fu_22737_p4 = data_380_V_read.read();
    } else {
        ap_phi_mux_data_380_V_read394_phi_phi_fu_22737_p4 = ap_phi_reg_pp0_iter0_data_380_V_read394_phi_reg_22733.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_380_V_read394_rewind_phi_fu_12127_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_380_V_read394_rewind_phi_fu_12127_p6 = data_380_V_read394_phi_reg_22733.read();
    } else {
        ap_phi_mux_data_380_V_read394_rewind_phi_fu_12127_p6 = data_380_V_read394_rewind_reg_12123.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_381_V_read395_phi_phi_fu_22750_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_381_V_read395_phi_phi_fu_22750_p4 = ap_phi_mux_data_381_V_read395_rewind_phi_fu_12141_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_381_V_read395_phi_phi_fu_22750_p4 = data_381_V_read.read();
    } else {
        ap_phi_mux_data_381_V_read395_phi_phi_fu_22750_p4 = ap_phi_reg_pp0_iter0_data_381_V_read395_phi_reg_22746.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_381_V_read395_rewind_phi_fu_12141_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_381_V_read395_rewind_phi_fu_12141_p6 = data_381_V_read395_phi_reg_22746.read();
    } else {
        ap_phi_mux_data_381_V_read395_rewind_phi_fu_12141_p6 = data_381_V_read395_rewind_reg_12137.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_382_V_read396_phi_phi_fu_22763_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_382_V_read396_phi_phi_fu_22763_p4 = ap_phi_mux_data_382_V_read396_rewind_phi_fu_12155_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_382_V_read396_phi_phi_fu_22763_p4 = data_382_V_read.read();
    } else {
        ap_phi_mux_data_382_V_read396_phi_phi_fu_22763_p4 = ap_phi_reg_pp0_iter0_data_382_V_read396_phi_reg_22759.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_382_V_read396_rewind_phi_fu_12155_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_382_V_read396_rewind_phi_fu_12155_p6 = data_382_V_read396_phi_reg_22759.read();
    } else {
        ap_phi_mux_data_382_V_read396_rewind_phi_fu_12155_p6 = data_382_V_read396_rewind_reg_12151.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_383_V_read397_phi_phi_fu_22776_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_383_V_read397_phi_phi_fu_22776_p4 = ap_phi_mux_data_383_V_read397_rewind_phi_fu_12169_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_383_V_read397_phi_phi_fu_22776_p4 = data_383_V_read.read();
    } else {
        ap_phi_mux_data_383_V_read397_phi_phi_fu_22776_p4 = ap_phi_reg_pp0_iter0_data_383_V_read397_phi_reg_22772.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_383_V_read397_rewind_phi_fu_12169_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_383_V_read397_rewind_phi_fu_12169_p6 = data_383_V_read397_phi_reg_22772.read();
    } else {
        ap_phi_mux_data_383_V_read397_rewind_phi_fu_12169_p6 = data_383_V_read397_rewind_reg_12165.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_384_V_read398_phi_phi_fu_22789_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_384_V_read398_phi_phi_fu_22789_p4 = ap_phi_mux_data_384_V_read398_rewind_phi_fu_12183_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_384_V_read398_phi_phi_fu_22789_p4 = data_384_V_read.read();
    } else {
        ap_phi_mux_data_384_V_read398_phi_phi_fu_22789_p4 = ap_phi_reg_pp0_iter0_data_384_V_read398_phi_reg_22785.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_384_V_read398_rewind_phi_fu_12183_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_384_V_read398_rewind_phi_fu_12183_p6 = data_384_V_read398_phi_reg_22785.read();
    } else {
        ap_phi_mux_data_384_V_read398_rewind_phi_fu_12183_p6 = data_384_V_read398_rewind_reg_12179.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_385_V_read399_phi_phi_fu_22802_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_385_V_read399_phi_phi_fu_22802_p4 = ap_phi_mux_data_385_V_read399_rewind_phi_fu_12197_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_385_V_read399_phi_phi_fu_22802_p4 = data_385_V_read.read();
    } else {
        ap_phi_mux_data_385_V_read399_phi_phi_fu_22802_p4 = ap_phi_reg_pp0_iter0_data_385_V_read399_phi_reg_22798.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_385_V_read399_rewind_phi_fu_12197_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_385_V_read399_rewind_phi_fu_12197_p6 = data_385_V_read399_phi_reg_22798.read();
    } else {
        ap_phi_mux_data_385_V_read399_rewind_phi_fu_12197_p6 = data_385_V_read399_rewind_reg_12193.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_386_V_read400_phi_phi_fu_22815_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_386_V_read400_phi_phi_fu_22815_p4 = ap_phi_mux_data_386_V_read400_rewind_phi_fu_12211_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_386_V_read400_phi_phi_fu_22815_p4 = data_386_V_read.read();
    } else {
        ap_phi_mux_data_386_V_read400_phi_phi_fu_22815_p4 = ap_phi_reg_pp0_iter0_data_386_V_read400_phi_reg_22811.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_386_V_read400_rewind_phi_fu_12211_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_386_V_read400_rewind_phi_fu_12211_p6 = data_386_V_read400_phi_reg_22811.read();
    } else {
        ap_phi_mux_data_386_V_read400_rewind_phi_fu_12211_p6 = data_386_V_read400_rewind_reg_12207.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_387_V_read401_phi_phi_fu_22828_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_387_V_read401_phi_phi_fu_22828_p4 = ap_phi_mux_data_387_V_read401_rewind_phi_fu_12225_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_387_V_read401_phi_phi_fu_22828_p4 = data_387_V_read.read();
    } else {
        ap_phi_mux_data_387_V_read401_phi_phi_fu_22828_p4 = ap_phi_reg_pp0_iter0_data_387_V_read401_phi_reg_22824.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_387_V_read401_rewind_phi_fu_12225_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_387_V_read401_rewind_phi_fu_12225_p6 = data_387_V_read401_phi_reg_22824.read();
    } else {
        ap_phi_mux_data_387_V_read401_rewind_phi_fu_12225_p6 = data_387_V_read401_rewind_reg_12221.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_388_V_read402_phi_phi_fu_22841_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_388_V_read402_phi_phi_fu_22841_p4 = ap_phi_mux_data_388_V_read402_rewind_phi_fu_12239_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_388_V_read402_phi_phi_fu_22841_p4 = data_388_V_read.read();
    } else {
        ap_phi_mux_data_388_V_read402_phi_phi_fu_22841_p4 = ap_phi_reg_pp0_iter0_data_388_V_read402_phi_reg_22837.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_388_V_read402_rewind_phi_fu_12239_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_388_V_read402_rewind_phi_fu_12239_p6 = data_388_V_read402_phi_reg_22837.read();
    } else {
        ap_phi_mux_data_388_V_read402_rewind_phi_fu_12239_p6 = data_388_V_read402_rewind_reg_12235.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_389_V_read403_phi_phi_fu_22854_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_389_V_read403_phi_phi_fu_22854_p4 = ap_phi_mux_data_389_V_read403_rewind_phi_fu_12253_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_389_V_read403_phi_phi_fu_22854_p4 = data_389_V_read.read();
    } else {
        ap_phi_mux_data_389_V_read403_phi_phi_fu_22854_p4 = ap_phi_reg_pp0_iter0_data_389_V_read403_phi_reg_22850.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_389_V_read403_rewind_phi_fu_12253_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_389_V_read403_rewind_phi_fu_12253_p6 = data_389_V_read403_phi_reg_22850.read();
    } else {
        ap_phi_mux_data_389_V_read403_rewind_phi_fu_12253_p6 = data_389_V_read403_rewind_reg_12249.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_38_V_read52_phi_phi_fu_18291_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_38_V_read52_phi_phi_fu_18291_p4 = ap_phi_mux_data_38_V_read52_rewind_phi_fu_7339_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_38_V_read52_phi_phi_fu_18291_p4 = data_38_V_read.read();
    } else {
        ap_phi_mux_data_38_V_read52_phi_phi_fu_18291_p4 = ap_phi_reg_pp0_iter0_data_38_V_read52_phi_reg_18287.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_38_V_read52_rewind_phi_fu_7339_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_38_V_read52_rewind_phi_fu_7339_p6 = data_38_V_read52_phi_reg_18287.read();
    } else {
        ap_phi_mux_data_38_V_read52_rewind_phi_fu_7339_p6 = data_38_V_read52_rewind_reg_7335.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_390_V_read404_phi_phi_fu_22867_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_390_V_read404_phi_phi_fu_22867_p4 = ap_phi_mux_data_390_V_read404_rewind_phi_fu_12267_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_390_V_read404_phi_phi_fu_22867_p4 = data_390_V_read.read();
    } else {
        ap_phi_mux_data_390_V_read404_phi_phi_fu_22867_p4 = ap_phi_reg_pp0_iter0_data_390_V_read404_phi_reg_22863.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_390_V_read404_rewind_phi_fu_12267_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_390_V_read404_rewind_phi_fu_12267_p6 = data_390_V_read404_phi_reg_22863.read();
    } else {
        ap_phi_mux_data_390_V_read404_rewind_phi_fu_12267_p6 = data_390_V_read404_rewind_reg_12263.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_391_V_read405_phi_phi_fu_22880_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_391_V_read405_phi_phi_fu_22880_p4 = ap_phi_mux_data_391_V_read405_rewind_phi_fu_12281_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_391_V_read405_phi_phi_fu_22880_p4 = data_391_V_read.read();
    } else {
        ap_phi_mux_data_391_V_read405_phi_phi_fu_22880_p4 = ap_phi_reg_pp0_iter0_data_391_V_read405_phi_reg_22876.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_391_V_read405_rewind_phi_fu_12281_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_391_V_read405_rewind_phi_fu_12281_p6 = data_391_V_read405_phi_reg_22876.read();
    } else {
        ap_phi_mux_data_391_V_read405_rewind_phi_fu_12281_p6 = data_391_V_read405_rewind_reg_12277.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_392_V_read406_phi_phi_fu_22893_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_392_V_read406_phi_phi_fu_22893_p4 = ap_phi_mux_data_392_V_read406_rewind_phi_fu_12295_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_392_V_read406_phi_phi_fu_22893_p4 = data_392_V_read.read();
    } else {
        ap_phi_mux_data_392_V_read406_phi_phi_fu_22893_p4 = ap_phi_reg_pp0_iter0_data_392_V_read406_phi_reg_22889.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_392_V_read406_rewind_phi_fu_12295_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_392_V_read406_rewind_phi_fu_12295_p6 = data_392_V_read406_phi_reg_22889.read();
    } else {
        ap_phi_mux_data_392_V_read406_rewind_phi_fu_12295_p6 = data_392_V_read406_rewind_reg_12291.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_393_V_read407_phi_phi_fu_22906_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_393_V_read407_phi_phi_fu_22906_p4 = ap_phi_mux_data_393_V_read407_rewind_phi_fu_12309_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_393_V_read407_phi_phi_fu_22906_p4 = data_393_V_read.read();
    } else {
        ap_phi_mux_data_393_V_read407_phi_phi_fu_22906_p4 = ap_phi_reg_pp0_iter0_data_393_V_read407_phi_reg_22902.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_393_V_read407_rewind_phi_fu_12309_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_393_V_read407_rewind_phi_fu_12309_p6 = data_393_V_read407_phi_reg_22902.read();
    } else {
        ap_phi_mux_data_393_V_read407_rewind_phi_fu_12309_p6 = data_393_V_read407_rewind_reg_12305.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_394_V_read408_phi_phi_fu_22919_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_394_V_read408_phi_phi_fu_22919_p4 = ap_phi_mux_data_394_V_read408_rewind_phi_fu_12323_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_394_V_read408_phi_phi_fu_22919_p4 = data_394_V_read.read();
    } else {
        ap_phi_mux_data_394_V_read408_phi_phi_fu_22919_p4 = ap_phi_reg_pp0_iter0_data_394_V_read408_phi_reg_22915.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_394_V_read408_rewind_phi_fu_12323_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_394_V_read408_rewind_phi_fu_12323_p6 = data_394_V_read408_phi_reg_22915.read();
    } else {
        ap_phi_mux_data_394_V_read408_rewind_phi_fu_12323_p6 = data_394_V_read408_rewind_reg_12319.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_395_V_read409_phi_phi_fu_22932_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_395_V_read409_phi_phi_fu_22932_p4 = ap_phi_mux_data_395_V_read409_rewind_phi_fu_12337_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_395_V_read409_phi_phi_fu_22932_p4 = data_395_V_read.read();
    } else {
        ap_phi_mux_data_395_V_read409_phi_phi_fu_22932_p4 = ap_phi_reg_pp0_iter0_data_395_V_read409_phi_reg_22928.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_395_V_read409_rewind_phi_fu_12337_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_395_V_read409_rewind_phi_fu_12337_p6 = data_395_V_read409_phi_reg_22928.read();
    } else {
        ap_phi_mux_data_395_V_read409_rewind_phi_fu_12337_p6 = data_395_V_read409_rewind_reg_12333.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_396_V_read410_phi_phi_fu_22945_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_396_V_read410_phi_phi_fu_22945_p4 = ap_phi_mux_data_396_V_read410_rewind_phi_fu_12351_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_396_V_read410_phi_phi_fu_22945_p4 = data_396_V_read.read();
    } else {
        ap_phi_mux_data_396_V_read410_phi_phi_fu_22945_p4 = ap_phi_reg_pp0_iter0_data_396_V_read410_phi_reg_22941.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_396_V_read410_rewind_phi_fu_12351_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_396_V_read410_rewind_phi_fu_12351_p6 = data_396_V_read410_phi_reg_22941.read();
    } else {
        ap_phi_mux_data_396_V_read410_rewind_phi_fu_12351_p6 = data_396_V_read410_rewind_reg_12347.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_397_V_read411_phi_phi_fu_22958_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_397_V_read411_phi_phi_fu_22958_p4 = ap_phi_mux_data_397_V_read411_rewind_phi_fu_12365_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_397_V_read411_phi_phi_fu_22958_p4 = data_397_V_read.read();
    } else {
        ap_phi_mux_data_397_V_read411_phi_phi_fu_22958_p4 = ap_phi_reg_pp0_iter0_data_397_V_read411_phi_reg_22954.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_397_V_read411_rewind_phi_fu_12365_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_397_V_read411_rewind_phi_fu_12365_p6 = data_397_V_read411_phi_reg_22954.read();
    } else {
        ap_phi_mux_data_397_V_read411_rewind_phi_fu_12365_p6 = data_397_V_read411_rewind_reg_12361.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_398_V_read412_phi_phi_fu_22971_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_398_V_read412_phi_phi_fu_22971_p4 = ap_phi_mux_data_398_V_read412_rewind_phi_fu_12379_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_398_V_read412_phi_phi_fu_22971_p4 = data_398_V_read.read();
    } else {
        ap_phi_mux_data_398_V_read412_phi_phi_fu_22971_p4 = ap_phi_reg_pp0_iter0_data_398_V_read412_phi_reg_22967.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_398_V_read412_rewind_phi_fu_12379_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_398_V_read412_rewind_phi_fu_12379_p6 = data_398_V_read412_phi_reg_22967.read();
    } else {
        ap_phi_mux_data_398_V_read412_rewind_phi_fu_12379_p6 = data_398_V_read412_rewind_reg_12375.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_399_V_read413_phi_phi_fu_22984_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_399_V_read413_phi_phi_fu_22984_p4 = ap_phi_mux_data_399_V_read413_rewind_phi_fu_12393_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_399_V_read413_phi_phi_fu_22984_p4 = data_399_V_read.read();
    } else {
        ap_phi_mux_data_399_V_read413_phi_phi_fu_22984_p4 = ap_phi_reg_pp0_iter0_data_399_V_read413_phi_reg_22980.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_399_V_read413_rewind_phi_fu_12393_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_399_V_read413_rewind_phi_fu_12393_p6 = data_399_V_read413_phi_reg_22980.read();
    } else {
        ap_phi_mux_data_399_V_read413_rewind_phi_fu_12393_p6 = data_399_V_read413_rewind_reg_12389.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_39_V_read53_phi_phi_fu_18304_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_39_V_read53_phi_phi_fu_18304_p4 = ap_phi_mux_data_39_V_read53_rewind_phi_fu_7353_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_39_V_read53_phi_phi_fu_18304_p4 = data_39_V_read.read();
    } else {
        ap_phi_mux_data_39_V_read53_phi_phi_fu_18304_p4 = ap_phi_reg_pp0_iter0_data_39_V_read53_phi_reg_18300.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_39_V_read53_rewind_phi_fu_7353_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_39_V_read53_rewind_phi_fu_7353_p6 = data_39_V_read53_phi_reg_18300.read();
    } else {
        ap_phi_mux_data_39_V_read53_rewind_phi_fu_7353_p6 = data_39_V_read53_rewind_reg_7349.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_3_V_read17_phi_phi_fu_17836_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_3_V_read17_phi_phi_fu_17836_p4 = ap_phi_mux_data_3_V_read17_rewind_phi_fu_6849_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_3_V_read17_phi_phi_fu_17836_p4 = data_3_V_read.read();
    } else {
        ap_phi_mux_data_3_V_read17_phi_phi_fu_17836_p4 = ap_phi_reg_pp0_iter0_data_3_V_read17_phi_reg_17832.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_3_V_read17_rewind_phi_fu_6849_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3_V_read17_rewind_phi_fu_6849_p6 = data_3_V_read17_phi_reg_17832.read();
    } else {
        ap_phi_mux_data_3_V_read17_rewind_phi_fu_6849_p6 = data_3_V_read17_rewind_reg_6845.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_400_V_read414_phi_phi_fu_22997_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_400_V_read414_phi_phi_fu_22997_p4 = ap_phi_mux_data_400_V_read414_rewind_phi_fu_12407_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_400_V_read414_phi_phi_fu_22997_p4 = data_400_V_read.read();
    } else {
        ap_phi_mux_data_400_V_read414_phi_phi_fu_22997_p4 = ap_phi_reg_pp0_iter0_data_400_V_read414_phi_reg_22993.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_400_V_read414_rewind_phi_fu_12407_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_400_V_read414_rewind_phi_fu_12407_p6 = data_400_V_read414_phi_reg_22993.read();
    } else {
        ap_phi_mux_data_400_V_read414_rewind_phi_fu_12407_p6 = data_400_V_read414_rewind_reg_12403.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_401_V_read415_phi_phi_fu_23010_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_401_V_read415_phi_phi_fu_23010_p4 = ap_phi_mux_data_401_V_read415_rewind_phi_fu_12421_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_401_V_read415_phi_phi_fu_23010_p4 = data_401_V_read.read();
    } else {
        ap_phi_mux_data_401_V_read415_phi_phi_fu_23010_p4 = ap_phi_reg_pp0_iter0_data_401_V_read415_phi_reg_23006.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_401_V_read415_rewind_phi_fu_12421_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_401_V_read415_rewind_phi_fu_12421_p6 = data_401_V_read415_phi_reg_23006.read();
    } else {
        ap_phi_mux_data_401_V_read415_rewind_phi_fu_12421_p6 = data_401_V_read415_rewind_reg_12417.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_402_V_read416_phi_phi_fu_23023_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_402_V_read416_phi_phi_fu_23023_p4 = ap_phi_mux_data_402_V_read416_rewind_phi_fu_12435_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_402_V_read416_phi_phi_fu_23023_p4 = data_402_V_read.read();
    } else {
        ap_phi_mux_data_402_V_read416_phi_phi_fu_23023_p4 = ap_phi_reg_pp0_iter0_data_402_V_read416_phi_reg_23019.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_402_V_read416_rewind_phi_fu_12435_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_402_V_read416_rewind_phi_fu_12435_p6 = data_402_V_read416_phi_reg_23019.read();
    } else {
        ap_phi_mux_data_402_V_read416_rewind_phi_fu_12435_p6 = data_402_V_read416_rewind_reg_12431.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_403_V_read417_phi_phi_fu_23036_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_403_V_read417_phi_phi_fu_23036_p4 = ap_phi_mux_data_403_V_read417_rewind_phi_fu_12449_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_403_V_read417_phi_phi_fu_23036_p4 = data_403_V_read.read();
    } else {
        ap_phi_mux_data_403_V_read417_phi_phi_fu_23036_p4 = ap_phi_reg_pp0_iter0_data_403_V_read417_phi_reg_23032.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_403_V_read417_rewind_phi_fu_12449_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_403_V_read417_rewind_phi_fu_12449_p6 = data_403_V_read417_phi_reg_23032.read();
    } else {
        ap_phi_mux_data_403_V_read417_rewind_phi_fu_12449_p6 = data_403_V_read417_rewind_reg_12445.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_404_V_read418_phi_phi_fu_23049_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_404_V_read418_phi_phi_fu_23049_p4 = ap_phi_mux_data_404_V_read418_rewind_phi_fu_12463_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_404_V_read418_phi_phi_fu_23049_p4 = data_404_V_read.read();
    } else {
        ap_phi_mux_data_404_V_read418_phi_phi_fu_23049_p4 = ap_phi_reg_pp0_iter0_data_404_V_read418_phi_reg_23045.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_404_V_read418_rewind_phi_fu_12463_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_404_V_read418_rewind_phi_fu_12463_p6 = data_404_V_read418_phi_reg_23045.read();
    } else {
        ap_phi_mux_data_404_V_read418_rewind_phi_fu_12463_p6 = data_404_V_read418_rewind_reg_12459.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_405_V_read419_phi_phi_fu_23062_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_405_V_read419_phi_phi_fu_23062_p4 = ap_phi_mux_data_405_V_read419_rewind_phi_fu_12477_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_405_V_read419_phi_phi_fu_23062_p4 = data_405_V_read.read();
    } else {
        ap_phi_mux_data_405_V_read419_phi_phi_fu_23062_p4 = ap_phi_reg_pp0_iter0_data_405_V_read419_phi_reg_23058.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_405_V_read419_rewind_phi_fu_12477_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_405_V_read419_rewind_phi_fu_12477_p6 = data_405_V_read419_phi_reg_23058.read();
    } else {
        ap_phi_mux_data_405_V_read419_rewind_phi_fu_12477_p6 = data_405_V_read419_rewind_reg_12473.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_406_V_read420_phi_phi_fu_23075_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_406_V_read420_phi_phi_fu_23075_p4 = ap_phi_mux_data_406_V_read420_rewind_phi_fu_12491_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_406_V_read420_phi_phi_fu_23075_p4 = data_406_V_read.read();
    } else {
        ap_phi_mux_data_406_V_read420_phi_phi_fu_23075_p4 = ap_phi_reg_pp0_iter0_data_406_V_read420_phi_reg_23071.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_406_V_read420_rewind_phi_fu_12491_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_406_V_read420_rewind_phi_fu_12491_p6 = data_406_V_read420_phi_reg_23071.read();
    } else {
        ap_phi_mux_data_406_V_read420_rewind_phi_fu_12491_p6 = data_406_V_read420_rewind_reg_12487.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_407_V_read421_phi_phi_fu_23088_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_407_V_read421_phi_phi_fu_23088_p4 = ap_phi_mux_data_407_V_read421_rewind_phi_fu_12505_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_407_V_read421_phi_phi_fu_23088_p4 = data_407_V_read.read();
    } else {
        ap_phi_mux_data_407_V_read421_phi_phi_fu_23088_p4 = ap_phi_reg_pp0_iter0_data_407_V_read421_phi_reg_23084.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_407_V_read421_rewind_phi_fu_12505_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_407_V_read421_rewind_phi_fu_12505_p6 = data_407_V_read421_phi_reg_23084.read();
    } else {
        ap_phi_mux_data_407_V_read421_rewind_phi_fu_12505_p6 = data_407_V_read421_rewind_reg_12501.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_408_V_read422_phi_phi_fu_23101_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_408_V_read422_phi_phi_fu_23101_p4 = ap_phi_mux_data_408_V_read422_rewind_phi_fu_12519_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_408_V_read422_phi_phi_fu_23101_p4 = data_408_V_read.read();
    } else {
        ap_phi_mux_data_408_V_read422_phi_phi_fu_23101_p4 = ap_phi_reg_pp0_iter0_data_408_V_read422_phi_reg_23097.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_408_V_read422_rewind_phi_fu_12519_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_408_V_read422_rewind_phi_fu_12519_p6 = data_408_V_read422_phi_reg_23097.read();
    } else {
        ap_phi_mux_data_408_V_read422_rewind_phi_fu_12519_p6 = data_408_V_read422_rewind_reg_12515.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_409_V_read423_phi_phi_fu_23114_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_409_V_read423_phi_phi_fu_23114_p4 = ap_phi_mux_data_409_V_read423_rewind_phi_fu_12533_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_409_V_read423_phi_phi_fu_23114_p4 = data_409_V_read.read();
    } else {
        ap_phi_mux_data_409_V_read423_phi_phi_fu_23114_p4 = ap_phi_reg_pp0_iter0_data_409_V_read423_phi_reg_23110.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_409_V_read423_rewind_phi_fu_12533_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_409_V_read423_rewind_phi_fu_12533_p6 = data_409_V_read423_phi_reg_23110.read();
    } else {
        ap_phi_mux_data_409_V_read423_rewind_phi_fu_12533_p6 = data_409_V_read423_rewind_reg_12529.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_40_V_read54_phi_phi_fu_18317_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_40_V_read54_phi_phi_fu_18317_p4 = ap_phi_mux_data_40_V_read54_rewind_phi_fu_7367_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_40_V_read54_phi_phi_fu_18317_p4 = data_40_V_read.read();
    } else {
        ap_phi_mux_data_40_V_read54_phi_phi_fu_18317_p4 = ap_phi_reg_pp0_iter0_data_40_V_read54_phi_reg_18313.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_40_V_read54_rewind_phi_fu_7367_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_40_V_read54_rewind_phi_fu_7367_p6 = data_40_V_read54_phi_reg_18313.read();
    } else {
        ap_phi_mux_data_40_V_read54_rewind_phi_fu_7367_p6 = data_40_V_read54_rewind_reg_7363.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_410_V_read424_phi_phi_fu_23127_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_410_V_read424_phi_phi_fu_23127_p4 = ap_phi_mux_data_410_V_read424_rewind_phi_fu_12547_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_410_V_read424_phi_phi_fu_23127_p4 = data_410_V_read.read();
    } else {
        ap_phi_mux_data_410_V_read424_phi_phi_fu_23127_p4 = ap_phi_reg_pp0_iter0_data_410_V_read424_phi_reg_23123.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_410_V_read424_rewind_phi_fu_12547_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_410_V_read424_rewind_phi_fu_12547_p6 = data_410_V_read424_phi_reg_23123.read();
    } else {
        ap_phi_mux_data_410_V_read424_rewind_phi_fu_12547_p6 = data_410_V_read424_rewind_reg_12543.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_411_V_read425_phi_phi_fu_23140_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_411_V_read425_phi_phi_fu_23140_p4 = ap_phi_mux_data_411_V_read425_rewind_phi_fu_12561_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_411_V_read425_phi_phi_fu_23140_p4 = data_411_V_read.read();
    } else {
        ap_phi_mux_data_411_V_read425_phi_phi_fu_23140_p4 = ap_phi_reg_pp0_iter0_data_411_V_read425_phi_reg_23136.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_411_V_read425_rewind_phi_fu_12561_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_411_V_read425_rewind_phi_fu_12561_p6 = data_411_V_read425_phi_reg_23136.read();
    } else {
        ap_phi_mux_data_411_V_read425_rewind_phi_fu_12561_p6 = data_411_V_read425_rewind_reg_12557.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_412_V_read426_phi_phi_fu_23153_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_412_V_read426_phi_phi_fu_23153_p4 = ap_phi_mux_data_412_V_read426_rewind_phi_fu_12575_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_412_V_read426_phi_phi_fu_23153_p4 = data_412_V_read.read();
    } else {
        ap_phi_mux_data_412_V_read426_phi_phi_fu_23153_p4 = ap_phi_reg_pp0_iter0_data_412_V_read426_phi_reg_23149.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_412_V_read426_rewind_phi_fu_12575_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_412_V_read426_rewind_phi_fu_12575_p6 = data_412_V_read426_phi_reg_23149.read();
    } else {
        ap_phi_mux_data_412_V_read426_rewind_phi_fu_12575_p6 = data_412_V_read426_rewind_reg_12571.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_413_V_read427_phi_phi_fu_23166_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_413_V_read427_phi_phi_fu_23166_p4 = ap_phi_mux_data_413_V_read427_rewind_phi_fu_12589_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_413_V_read427_phi_phi_fu_23166_p4 = data_413_V_read.read();
    } else {
        ap_phi_mux_data_413_V_read427_phi_phi_fu_23166_p4 = ap_phi_reg_pp0_iter0_data_413_V_read427_phi_reg_23162.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_413_V_read427_rewind_phi_fu_12589_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_413_V_read427_rewind_phi_fu_12589_p6 = data_413_V_read427_phi_reg_23162.read();
    } else {
        ap_phi_mux_data_413_V_read427_rewind_phi_fu_12589_p6 = data_413_V_read427_rewind_reg_12585.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_414_V_read428_phi_phi_fu_23179_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_414_V_read428_phi_phi_fu_23179_p4 = ap_phi_mux_data_414_V_read428_rewind_phi_fu_12603_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_414_V_read428_phi_phi_fu_23179_p4 = data_414_V_read.read();
    } else {
        ap_phi_mux_data_414_V_read428_phi_phi_fu_23179_p4 = ap_phi_reg_pp0_iter0_data_414_V_read428_phi_reg_23175.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_414_V_read428_rewind_phi_fu_12603_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_414_V_read428_rewind_phi_fu_12603_p6 = data_414_V_read428_phi_reg_23175.read();
    } else {
        ap_phi_mux_data_414_V_read428_rewind_phi_fu_12603_p6 = data_414_V_read428_rewind_reg_12599.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_415_V_read429_phi_phi_fu_23192_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_415_V_read429_phi_phi_fu_23192_p4 = ap_phi_mux_data_415_V_read429_rewind_phi_fu_12617_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_415_V_read429_phi_phi_fu_23192_p4 = data_415_V_read.read();
    } else {
        ap_phi_mux_data_415_V_read429_phi_phi_fu_23192_p4 = ap_phi_reg_pp0_iter0_data_415_V_read429_phi_reg_23188.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_415_V_read429_rewind_phi_fu_12617_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_415_V_read429_rewind_phi_fu_12617_p6 = data_415_V_read429_phi_reg_23188.read();
    } else {
        ap_phi_mux_data_415_V_read429_rewind_phi_fu_12617_p6 = data_415_V_read429_rewind_reg_12613.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_416_V_read430_phi_phi_fu_23205_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_416_V_read430_phi_phi_fu_23205_p4 = ap_phi_mux_data_416_V_read430_rewind_phi_fu_12631_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_416_V_read430_phi_phi_fu_23205_p4 = data_416_V_read.read();
    } else {
        ap_phi_mux_data_416_V_read430_phi_phi_fu_23205_p4 = ap_phi_reg_pp0_iter0_data_416_V_read430_phi_reg_23201.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_416_V_read430_rewind_phi_fu_12631_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_416_V_read430_rewind_phi_fu_12631_p6 = data_416_V_read430_phi_reg_23201.read();
    } else {
        ap_phi_mux_data_416_V_read430_rewind_phi_fu_12631_p6 = data_416_V_read430_rewind_reg_12627.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_417_V_read431_phi_phi_fu_23218_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_417_V_read431_phi_phi_fu_23218_p4 = ap_phi_mux_data_417_V_read431_rewind_phi_fu_12645_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_417_V_read431_phi_phi_fu_23218_p4 = data_417_V_read.read();
    } else {
        ap_phi_mux_data_417_V_read431_phi_phi_fu_23218_p4 = ap_phi_reg_pp0_iter0_data_417_V_read431_phi_reg_23214.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_417_V_read431_rewind_phi_fu_12645_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_417_V_read431_rewind_phi_fu_12645_p6 = data_417_V_read431_phi_reg_23214.read();
    } else {
        ap_phi_mux_data_417_V_read431_rewind_phi_fu_12645_p6 = data_417_V_read431_rewind_reg_12641.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_418_V_read432_phi_phi_fu_23231_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_418_V_read432_phi_phi_fu_23231_p4 = ap_phi_mux_data_418_V_read432_rewind_phi_fu_12659_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_418_V_read432_phi_phi_fu_23231_p4 = data_418_V_read.read();
    } else {
        ap_phi_mux_data_418_V_read432_phi_phi_fu_23231_p4 = ap_phi_reg_pp0_iter0_data_418_V_read432_phi_reg_23227.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_418_V_read432_rewind_phi_fu_12659_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_418_V_read432_rewind_phi_fu_12659_p6 = data_418_V_read432_phi_reg_23227.read();
    } else {
        ap_phi_mux_data_418_V_read432_rewind_phi_fu_12659_p6 = data_418_V_read432_rewind_reg_12655.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_419_V_read433_phi_phi_fu_23244_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_419_V_read433_phi_phi_fu_23244_p4 = ap_phi_mux_data_419_V_read433_rewind_phi_fu_12673_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_419_V_read433_phi_phi_fu_23244_p4 = data_419_V_read.read();
    } else {
        ap_phi_mux_data_419_V_read433_phi_phi_fu_23244_p4 = ap_phi_reg_pp0_iter0_data_419_V_read433_phi_reg_23240.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_419_V_read433_rewind_phi_fu_12673_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_419_V_read433_rewind_phi_fu_12673_p6 = data_419_V_read433_phi_reg_23240.read();
    } else {
        ap_phi_mux_data_419_V_read433_rewind_phi_fu_12673_p6 = data_419_V_read433_rewind_reg_12669.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_41_V_read55_phi_phi_fu_18330_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_41_V_read55_phi_phi_fu_18330_p4 = ap_phi_mux_data_41_V_read55_rewind_phi_fu_7381_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_41_V_read55_phi_phi_fu_18330_p4 = data_41_V_read.read();
    } else {
        ap_phi_mux_data_41_V_read55_phi_phi_fu_18330_p4 = ap_phi_reg_pp0_iter0_data_41_V_read55_phi_reg_18326.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_41_V_read55_rewind_phi_fu_7381_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_41_V_read55_rewind_phi_fu_7381_p6 = data_41_V_read55_phi_reg_18326.read();
    } else {
        ap_phi_mux_data_41_V_read55_rewind_phi_fu_7381_p6 = data_41_V_read55_rewind_reg_7377.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_420_V_read434_phi_phi_fu_23257_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_420_V_read434_phi_phi_fu_23257_p4 = ap_phi_mux_data_420_V_read434_rewind_phi_fu_12687_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_420_V_read434_phi_phi_fu_23257_p4 = data_420_V_read.read();
    } else {
        ap_phi_mux_data_420_V_read434_phi_phi_fu_23257_p4 = ap_phi_reg_pp0_iter0_data_420_V_read434_phi_reg_23253.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_420_V_read434_rewind_phi_fu_12687_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_420_V_read434_rewind_phi_fu_12687_p6 = data_420_V_read434_phi_reg_23253.read();
    } else {
        ap_phi_mux_data_420_V_read434_rewind_phi_fu_12687_p6 = data_420_V_read434_rewind_reg_12683.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_421_V_read435_phi_phi_fu_23270_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_421_V_read435_phi_phi_fu_23270_p4 = ap_phi_mux_data_421_V_read435_rewind_phi_fu_12701_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_421_V_read435_phi_phi_fu_23270_p4 = data_421_V_read.read();
    } else {
        ap_phi_mux_data_421_V_read435_phi_phi_fu_23270_p4 = ap_phi_reg_pp0_iter0_data_421_V_read435_phi_reg_23266.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_421_V_read435_rewind_phi_fu_12701_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_421_V_read435_rewind_phi_fu_12701_p6 = data_421_V_read435_phi_reg_23266.read();
    } else {
        ap_phi_mux_data_421_V_read435_rewind_phi_fu_12701_p6 = data_421_V_read435_rewind_reg_12697.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_422_V_read436_phi_phi_fu_23283_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_422_V_read436_phi_phi_fu_23283_p4 = ap_phi_mux_data_422_V_read436_rewind_phi_fu_12715_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_422_V_read436_phi_phi_fu_23283_p4 = data_422_V_read.read();
    } else {
        ap_phi_mux_data_422_V_read436_phi_phi_fu_23283_p4 = ap_phi_reg_pp0_iter0_data_422_V_read436_phi_reg_23279.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_422_V_read436_rewind_phi_fu_12715_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_422_V_read436_rewind_phi_fu_12715_p6 = data_422_V_read436_phi_reg_23279.read();
    } else {
        ap_phi_mux_data_422_V_read436_rewind_phi_fu_12715_p6 = data_422_V_read436_rewind_reg_12711.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_423_V_read437_phi_phi_fu_23296_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_423_V_read437_phi_phi_fu_23296_p4 = ap_phi_mux_data_423_V_read437_rewind_phi_fu_12729_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_423_V_read437_phi_phi_fu_23296_p4 = data_423_V_read.read();
    } else {
        ap_phi_mux_data_423_V_read437_phi_phi_fu_23296_p4 = ap_phi_reg_pp0_iter0_data_423_V_read437_phi_reg_23292.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_423_V_read437_rewind_phi_fu_12729_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_423_V_read437_rewind_phi_fu_12729_p6 = data_423_V_read437_phi_reg_23292.read();
    } else {
        ap_phi_mux_data_423_V_read437_rewind_phi_fu_12729_p6 = data_423_V_read437_rewind_reg_12725.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_424_V_read438_phi_phi_fu_23309_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_424_V_read438_phi_phi_fu_23309_p4 = ap_phi_mux_data_424_V_read438_rewind_phi_fu_12743_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_424_V_read438_phi_phi_fu_23309_p4 = data_424_V_read.read();
    } else {
        ap_phi_mux_data_424_V_read438_phi_phi_fu_23309_p4 = ap_phi_reg_pp0_iter0_data_424_V_read438_phi_reg_23305.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_424_V_read438_rewind_phi_fu_12743_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_424_V_read438_rewind_phi_fu_12743_p6 = data_424_V_read438_phi_reg_23305.read();
    } else {
        ap_phi_mux_data_424_V_read438_rewind_phi_fu_12743_p6 = data_424_V_read438_rewind_reg_12739.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_425_V_read439_phi_phi_fu_23322_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_425_V_read439_phi_phi_fu_23322_p4 = ap_phi_mux_data_425_V_read439_rewind_phi_fu_12757_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_425_V_read439_phi_phi_fu_23322_p4 = data_425_V_read.read();
    } else {
        ap_phi_mux_data_425_V_read439_phi_phi_fu_23322_p4 = ap_phi_reg_pp0_iter0_data_425_V_read439_phi_reg_23318.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_425_V_read439_rewind_phi_fu_12757_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_425_V_read439_rewind_phi_fu_12757_p6 = data_425_V_read439_phi_reg_23318.read();
    } else {
        ap_phi_mux_data_425_V_read439_rewind_phi_fu_12757_p6 = data_425_V_read439_rewind_reg_12753.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_426_V_read440_phi_phi_fu_23335_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_426_V_read440_phi_phi_fu_23335_p4 = ap_phi_mux_data_426_V_read440_rewind_phi_fu_12771_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_426_V_read440_phi_phi_fu_23335_p4 = data_426_V_read.read();
    } else {
        ap_phi_mux_data_426_V_read440_phi_phi_fu_23335_p4 = ap_phi_reg_pp0_iter0_data_426_V_read440_phi_reg_23331.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_426_V_read440_rewind_phi_fu_12771_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_426_V_read440_rewind_phi_fu_12771_p6 = data_426_V_read440_phi_reg_23331.read();
    } else {
        ap_phi_mux_data_426_V_read440_rewind_phi_fu_12771_p6 = data_426_V_read440_rewind_reg_12767.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_427_V_read441_phi_phi_fu_23348_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_427_V_read441_phi_phi_fu_23348_p4 = ap_phi_mux_data_427_V_read441_rewind_phi_fu_12785_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_427_V_read441_phi_phi_fu_23348_p4 = data_427_V_read.read();
    } else {
        ap_phi_mux_data_427_V_read441_phi_phi_fu_23348_p4 = ap_phi_reg_pp0_iter0_data_427_V_read441_phi_reg_23344.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_427_V_read441_rewind_phi_fu_12785_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_427_V_read441_rewind_phi_fu_12785_p6 = data_427_V_read441_phi_reg_23344.read();
    } else {
        ap_phi_mux_data_427_V_read441_rewind_phi_fu_12785_p6 = data_427_V_read441_rewind_reg_12781.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_428_V_read442_phi_phi_fu_23361_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_428_V_read442_phi_phi_fu_23361_p4 = ap_phi_mux_data_428_V_read442_rewind_phi_fu_12799_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_428_V_read442_phi_phi_fu_23361_p4 = data_428_V_read.read();
    } else {
        ap_phi_mux_data_428_V_read442_phi_phi_fu_23361_p4 = ap_phi_reg_pp0_iter0_data_428_V_read442_phi_reg_23357.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_428_V_read442_rewind_phi_fu_12799_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_428_V_read442_rewind_phi_fu_12799_p6 = data_428_V_read442_phi_reg_23357.read();
    } else {
        ap_phi_mux_data_428_V_read442_rewind_phi_fu_12799_p6 = data_428_V_read442_rewind_reg_12795.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_429_V_read443_phi_phi_fu_23374_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_429_V_read443_phi_phi_fu_23374_p4 = ap_phi_mux_data_429_V_read443_rewind_phi_fu_12813_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_429_V_read443_phi_phi_fu_23374_p4 = data_429_V_read.read();
    } else {
        ap_phi_mux_data_429_V_read443_phi_phi_fu_23374_p4 = ap_phi_reg_pp0_iter0_data_429_V_read443_phi_reg_23370.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_429_V_read443_rewind_phi_fu_12813_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_429_V_read443_rewind_phi_fu_12813_p6 = data_429_V_read443_phi_reg_23370.read();
    } else {
        ap_phi_mux_data_429_V_read443_rewind_phi_fu_12813_p6 = data_429_V_read443_rewind_reg_12809.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_42_V_read56_phi_phi_fu_18343_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_42_V_read56_phi_phi_fu_18343_p4 = ap_phi_mux_data_42_V_read56_rewind_phi_fu_7395_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_42_V_read56_phi_phi_fu_18343_p4 = data_42_V_read.read();
    } else {
        ap_phi_mux_data_42_V_read56_phi_phi_fu_18343_p4 = ap_phi_reg_pp0_iter0_data_42_V_read56_phi_reg_18339.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_42_V_read56_rewind_phi_fu_7395_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_42_V_read56_rewind_phi_fu_7395_p6 = data_42_V_read56_phi_reg_18339.read();
    } else {
        ap_phi_mux_data_42_V_read56_rewind_phi_fu_7395_p6 = data_42_V_read56_rewind_reg_7391.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_430_V_read444_phi_phi_fu_23387_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_430_V_read444_phi_phi_fu_23387_p4 = ap_phi_mux_data_430_V_read444_rewind_phi_fu_12827_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_430_V_read444_phi_phi_fu_23387_p4 = data_430_V_read.read();
    } else {
        ap_phi_mux_data_430_V_read444_phi_phi_fu_23387_p4 = ap_phi_reg_pp0_iter0_data_430_V_read444_phi_reg_23383.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_430_V_read444_rewind_phi_fu_12827_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_430_V_read444_rewind_phi_fu_12827_p6 = data_430_V_read444_phi_reg_23383.read();
    } else {
        ap_phi_mux_data_430_V_read444_rewind_phi_fu_12827_p6 = data_430_V_read444_rewind_reg_12823.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_431_V_read445_phi_phi_fu_23400_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_431_V_read445_phi_phi_fu_23400_p4 = ap_phi_mux_data_431_V_read445_rewind_phi_fu_12841_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_431_V_read445_phi_phi_fu_23400_p4 = data_431_V_read.read();
    } else {
        ap_phi_mux_data_431_V_read445_phi_phi_fu_23400_p4 = ap_phi_reg_pp0_iter0_data_431_V_read445_phi_reg_23396.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_431_V_read445_rewind_phi_fu_12841_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_431_V_read445_rewind_phi_fu_12841_p6 = data_431_V_read445_phi_reg_23396.read();
    } else {
        ap_phi_mux_data_431_V_read445_rewind_phi_fu_12841_p6 = data_431_V_read445_rewind_reg_12837.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_432_V_read446_phi_phi_fu_23413_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_432_V_read446_phi_phi_fu_23413_p4 = ap_phi_mux_data_432_V_read446_rewind_phi_fu_12855_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_432_V_read446_phi_phi_fu_23413_p4 = data_432_V_read.read();
    } else {
        ap_phi_mux_data_432_V_read446_phi_phi_fu_23413_p4 = ap_phi_reg_pp0_iter0_data_432_V_read446_phi_reg_23409.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_432_V_read446_rewind_phi_fu_12855_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_432_V_read446_rewind_phi_fu_12855_p6 = data_432_V_read446_phi_reg_23409.read();
    } else {
        ap_phi_mux_data_432_V_read446_rewind_phi_fu_12855_p6 = data_432_V_read446_rewind_reg_12851.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_433_V_read447_phi_phi_fu_23426_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_433_V_read447_phi_phi_fu_23426_p4 = ap_phi_mux_data_433_V_read447_rewind_phi_fu_12869_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_433_V_read447_phi_phi_fu_23426_p4 = data_433_V_read.read();
    } else {
        ap_phi_mux_data_433_V_read447_phi_phi_fu_23426_p4 = ap_phi_reg_pp0_iter0_data_433_V_read447_phi_reg_23422.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_433_V_read447_rewind_phi_fu_12869_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_433_V_read447_rewind_phi_fu_12869_p6 = data_433_V_read447_phi_reg_23422.read();
    } else {
        ap_phi_mux_data_433_V_read447_rewind_phi_fu_12869_p6 = data_433_V_read447_rewind_reg_12865.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_434_V_read448_phi_phi_fu_23439_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_434_V_read448_phi_phi_fu_23439_p4 = ap_phi_mux_data_434_V_read448_rewind_phi_fu_12883_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_434_V_read448_phi_phi_fu_23439_p4 = data_434_V_read.read();
    } else {
        ap_phi_mux_data_434_V_read448_phi_phi_fu_23439_p4 = ap_phi_reg_pp0_iter0_data_434_V_read448_phi_reg_23435.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_434_V_read448_rewind_phi_fu_12883_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_434_V_read448_rewind_phi_fu_12883_p6 = data_434_V_read448_phi_reg_23435.read();
    } else {
        ap_phi_mux_data_434_V_read448_rewind_phi_fu_12883_p6 = data_434_V_read448_rewind_reg_12879.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_435_V_read449_phi_phi_fu_23452_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_435_V_read449_phi_phi_fu_23452_p4 = ap_phi_mux_data_435_V_read449_rewind_phi_fu_12897_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_435_V_read449_phi_phi_fu_23452_p4 = data_435_V_read.read();
    } else {
        ap_phi_mux_data_435_V_read449_phi_phi_fu_23452_p4 = ap_phi_reg_pp0_iter0_data_435_V_read449_phi_reg_23448.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_435_V_read449_rewind_phi_fu_12897_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_435_V_read449_rewind_phi_fu_12897_p6 = data_435_V_read449_phi_reg_23448.read();
    } else {
        ap_phi_mux_data_435_V_read449_rewind_phi_fu_12897_p6 = data_435_V_read449_rewind_reg_12893.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_436_V_read450_phi_phi_fu_23465_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_436_V_read450_phi_phi_fu_23465_p4 = ap_phi_mux_data_436_V_read450_rewind_phi_fu_12911_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_436_V_read450_phi_phi_fu_23465_p4 = data_436_V_read.read();
    } else {
        ap_phi_mux_data_436_V_read450_phi_phi_fu_23465_p4 = ap_phi_reg_pp0_iter0_data_436_V_read450_phi_reg_23461.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_436_V_read450_rewind_phi_fu_12911_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_436_V_read450_rewind_phi_fu_12911_p6 = data_436_V_read450_phi_reg_23461.read();
    } else {
        ap_phi_mux_data_436_V_read450_rewind_phi_fu_12911_p6 = data_436_V_read450_rewind_reg_12907.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_437_V_read451_phi_phi_fu_23478_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_437_V_read451_phi_phi_fu_23478_p4 = ap_phi_mux_data_437_V_read451_rewind_phi_fu_12925_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_437_V_read451_phi_phi_fu_23478_p4 = data_437_V_read.read();
    } else {
        ap_phi_mux_data_437_V_read451_phi_phi_fu_23478_p4 = ap_phi_reg_pp0_iter0_data_437_V_read451_phi_reg_23474.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_437_V_read451_rewind_phi_fu_12925_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_437_V_read451_rewind_phi_fu_12925_p6 = data_437_V_read451_phi_reg_23474.read();
    } else {
        ap_phi_mux_data_437_V_read451_rewind_phi_fu_12925_p6 = data_437_V_read451_rewind_reg_12921.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_438_V_read452_phi_phi_fu_23491_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_438_V_read452_phi_phi_fu_23491_p4 = ap_phi_mux_data_438_V_read452_rewind_phi_fu_12939_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_438_V_read452_phi_phi_fu_23491_p4 = data_438_V_read.read();
    } else {
        ap_phi_mux_data_438_V_read452_phi_phi_fu_23491_p4 = ap_phi_reg_pp0_iter0_data_438_V_read452_phi_reg_23487.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_438_V_read452_rewind_phi_fu_12939_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_438_V_read452_rewind_phi_fu_12939_p6 = data_438_V_read452_phi_reg_23487.read();
    } else {
        ap_phi_mux_data_438_V_read452_rewind_phi_fu_12939_p6 = data_438_V_read452_rewind_reg_12935.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_439_V_read453_phi_phi_fu_23504_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_439_V_read453_phi_phi_fu_23504_p4 = ap_phi_mux_data_439_V_read453_rewind_phi_fu_12953_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_439_V_read453_phi_phi_fu_23504_p4 = data_439_V_read.read();
    } else {
        ap_phi_mux_data_439_V_read453_phi_phi_fu_23504_p4 = ap_phi_reg_pp0_iter0_data_439_V_read453_phi_reg_23500.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_439_V_read453_rewind_phi_fu_12953_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_439_V_read453_rewind_phi_fu_12953_p6 = data_439_V_read453_phi_reg_23500.read();
    } else {
        ap_phi_mux_data_439_V_read453_rewind_phi_fu_12953_p6 = data_439_V_read453_rewind_reg_12949.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_43_V_read57_phi_phi_fu_18356_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_43_V_read57_phi_phi_fu_18356_p4 = ap_phi_mux_data_43_V_read57_rewind_phi_fu_7409_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_43_V_read57_phi_phi_fu_18356_p4 = data_43_V_read.read();
    } else {
        ap_phi_mux_data_43_V_read57_phi_phi_fu_18356_p4 = ap_phi_reg_pp0_iter0_data_43_V_read57_phi_reg_18352.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_43_V_read57_rewind_phi_fu_7409_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_43_V_read57_rewind_phi_fu_7409_p6 = data_43_V_read57_phi_reg_18352.read();
    } else {
        ap_phi_mux_data_43_V_read57_rewind_phi_fu_7409_p6 = data_43_V_read57_rewind_reg_7405.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_440_V_read454_phi_phi_fu_23517_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_440_V_read454_phi_phi_fu_23517_p4 = ap_phi_mux_data_440_V_read454_rewind_phi_fu_12967_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_440_V_read454_phi_phi_fu_23517_p4 = data_440_V_read.read();
    } else {
        ap_phi_mux_data_440_V_read454_phi_phi_fu_23517_p4 = ap_phi_reg_pp0_iter0_data_440_V_read454_phi_reg_23513.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_440_V_read454_rewind_phi_fu_12967_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_440_V_read454_rewind_phi_fu_12967_p6 = data_440_V_read454_phi_reg_23513.read();
    } else {
        ap_phi_mux_data_440_V_read454_rewind_phi_fu_12967_p6 = data_440_V_read454_rewind_reg_12963.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_441_V_read455_phi_phi_fu_23530_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_441_V_read455_phi_phi_fu_23530_p4 = ap_phi_mux_data_441_V_read455_rewind_phi_fu_12981_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_441_V_read455_phi_phi_fu_23530_p4 = data_441_V_read.read();
    } else {
        ap_phi_mux_data_441_V_read455_phi_phi_fu_23530_p4 = ap_phi_reg_pp0_iter0_data_441_V_read455_phi_reg_23526.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_441_V_read455_rewind_phi_fu_12981_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_441_V_read455_rewind_phi_fu_12981_p6 = data_441_V_read455_phi_reg_23526.read();
    } else {
        ap_phi_mux_data_441_V_read455_rewind_phi_fu_12981_p6 = data_441_V_read455_rewind_reg_12977.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_442_V_read456_phi_phi_fu_23543_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_442_V_read456_phi_phi_fu_23543_p4 = ap_phi_mux_data_442_V_read456_rewind_phi_fu_12995_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_442_V_read456_phi_phi_fu_23543_p4 = data_442_V_read.read();
    } else {
        ap_phi_mux_data_442_V_read456_phi_phi_fu_23543_p4 = ap_phi_reg_pp0_iter0_data_442_V_read456_phi_reg_23539.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_442_V_read456_rewind_phi_fu_12995_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_442_V_read456_rewind_phi_fu_12995_p6 = data_442_V_read456_phi_reg_23539.read();
    } else {
        ap_phi_mux_data_442_V_read456_rewind_phi_fu_12995_p6 = data_442_V_read456_rewind_reg_12991.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_443_V_read457_phi_phi_fu_23556_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_443_V_read457_phi_phi_fu_23556_p4 = ap_phi_mux_data_443_V_read457_rewind_phi_fu_13009_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_443_V_read457_phi_phi_fu_23556_p4 = data_443_V_read.read();
    } else {
        ap_phi_mux_data_443_V_read457_phi_phi_fu_23556_p4 = ap_phi_reg_pp0_iter0_data_443_V_read457_phi_reg_23552.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_443_V_read457_rewind_phi_fu_13009_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_443_V_read457_rewind_phi_fu_13009_p6 = data_443_V_read457_phi_reg_23552.read();
    } else {
        ap_phi_mux_data_443_V_read457_rewind_phi_fu_13009_p6 = data_443_V_read457_rewind_reg_13005.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_444_V_read458_phi_phi_fu_23569_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_444_V_read458_phi_phi_fu_23569_p4 = ap_phi_mux_data_444_V_read458_rewind_phi_fu_13023_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_444_V_read458_phi_phi_fu_23569_p4 = data_444_V_read.read();
    } else {
        ap_phi_mux_data_444_V_read458_phi_phi_fu_23569_p4 = ap_phi_reg_pp0_iter0_data_444_V_read458_phi_reg_23565.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_444_V_read458_rewind_phi_fu_13023_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_444_V_read458_rewind_phi_fu_13023_p6 = data_444_V_read458_phi_reg_23565.read();
    } else {
        ap_phi_mux_data_444_V_read458_rewind_phi_fu_13023_p6 = data_444_V_read458_rewind_reg_13019.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_445_V_read459_phi_phi_fu_23582_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_445_V_read459_phi_phi_fu_23582_p4 = ap_phi_mux_data_445_V_read459_rewind_phi_fu_13037_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_445_V_read459_phi_phi_fu_23582_p4 = data_445_V_read.read();
    } else {
        ap_phi_mux_data_445_V_read459_phi_phi_fu_23582_p4 = ap_phi_reg_pp0_iter0_data_445_V_read459_phi_reg_23578.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_445_V_read459_rewind_phi_fu_13037_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_445_V_read459_rewind_phi_fu_13037_p6 = data_445_V_read459_phi_reg_23578.read();
    } else {
        ap_phi_mux_data_445_V_read459_rewind_phi_fu_13037_p6 = data_445_V_read459_rewind_reg_13033.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_446_V_read460_phi_phi_fu_23595_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_446_V_read460_phi_phi_fu_23595_p4 = ap_phi_mux_data_446_V_read460_rewind_phi_fu_13051_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_446_V_read460_phi_phi_fu_23595_p4 = data_446_V_read.read();
    } else {
        ap_phi_mux_data_446_V_read460_phi_phi_fu_23595_p4 = ap_phi_reg_pp0_iter0_data_446_V_read460_phi_reg_23591.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_446_V_read460_rewind_phi_fu_13051_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_446_V_read460_rewind_phi_fu_13051_p6 = data_446_V_read460_phi_reg_23591.read();
    } else {
        ap_phi_mux_data_446_V_read460_rewind_phi_fu_13051_p6 = data_446_V_read460_rewind_reg_13047.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_447_V_read461_phi_phi_fu_23608_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_447_V_read461_phi_phi_fu_23608_p4 = ap_phi_mux_data_447_V_read461_rewind_phi_fu_13065_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_447_V_read461_phi_phi_fu_23608_p4 = data_447_V_read.read();
    } else {
        ap_phi_mux_data_447_V_read461_phi_phi_fu_23608_p4 = ap_phi_reg_pp0_iter0_data_447_V_read461_phi_reg_23604.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_447_V_read461_rewind_phi_fu_13065_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_447_V_read461_rewind_phi_fu_13065_p6 = data_447_V_read461_phi_reg_23604.read();
    } else {
        ap_phi_mux_data_447_V_read461_rewind_phi_fu_13065_p6 = data_447_V_read461_rewind_reg_13061.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_448_V_read462_phi_phi_fu_23621_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_448_V_read462_phi_phi_fu_23621_p4 = ap_phi_mux_data_448_V_read462_rewind_phi_fu_13079_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_448_V_read462_phi_phi_fu_23621_p4 = data_448_V_read.read();
    } else {
        ap_phi_mux_data_448_V_read462_phi_phi_fu_23621_p4 = ap_phi_reg_pp0_iter0_data_448_V_read462_phi_reg_23617.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_448_V_read462_rewind_phi_fu_13079_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_448_V_read462_rewind_phi_fu_13079_p6 = data_448_V_read462_phi_reg_23617.read();
    } else {
        ap_phi_mux_data_448_V_read462_rewind_phi_fu_13079_p6 = data_448_V_read462_rewind_reg_13075.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_449_V_read463_phi_phi_fu_23634_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_449_V_read463_phi_phi_fu_23634_p4 = ap_phi_mux_data_449_V_read463_rewind_phi_fu_13093_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_449_V_read463_phi_phi_fu_23634_p4 = data_449_V_read.read();
    } else {
        ap_phi_mux_data_449_V_read463_phi_phi_fu_23634_p4 = ap_phi_reg_pp0_iter0_data_449_V_read463_phi_reg_23630.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_449_V_read463_rewind_phi_fu_13093_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_449_V_read463_rewind_phi_fu_13093_p6 = data_449_V_read463_phi_reg_23630.read();
    } else {
        ap_phi_mux_data_449_V_read463_rewind_phi_fu_13093_p6 = data_449_V_read463_rewind_reg_13089.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_44_V_read58_phi_phi_fu_18369_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_44_V_read58_phi_phi_fu_18369_p4 = ap_phi_mux_data_44_V_read58_rewind_phi_fu_7423_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_44_V_read58_phi_phi_fu_18369_p4 = data_44_V_read.read();
    } else {
        ap_phi_mux_data_44_V_read58_phi_phi_fu_18369_p4 = ap_phi_reg_pp0_iter0_data_44_V_read58_phi_reg_18365.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_44_V_read58_rewind_phi_fu_7423_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_44_V_read58_rewind_phi_fu_7423_p6 = data_44_V_read58_phi_reg_18365.read();
    } else {
        ap_phi_mux_data_44_V_read58_rewind_phi_fu_7423_p6 = data_44_V_read58_rewind_reg_7419.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_450_V_read464_phi_phi_fu_23647_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_450_V_read464_phi_phi_fu_23647_p4 = ap_phi_mux_data_450_V_read464_rewind_phi_fu_13107_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_450_V_read464_phi_phi_fu_23647_p4 = data_450_V_read.read();
    } else {
        ap_phi_mux_data_450_V_read464_phi_phi_fu_23647_p4 = ap_phi_reg_pp0_iter0_data_450_V_read464_phi_reg_23643.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_450_V_read464_rewind_phi_fu_13107_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_450_V_read464_rewind_phi_fu_13107_p6 = data_450_V_read464_phi_reg_23643.read();
    } else {
        ap_phi_mux_data_450_V_read464_rewind_phi_fu_13107_p6 = data_450_V_read464_rewind_reg_13103.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_451_V_read465_phi_phi_fu_23660_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_451_V_read465_phi_phi_fu_23660_p4 = ap_phi_mux_data_451_V_read465_rewind_phi_fu_13121_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_451_V_read465_phi_phi_fu_23660_p4 = data_451_V_read.read();
    } else {
        ap_phi_mux_data_451_V_read465_phi_phi_fu_23660_p4 = ap_phi_reg_pp0_iter0_data_451_V_read465_phi_reg_23656.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_451_V_read465_rewind_phi_fu_13121_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_451_V_read465_rewind_phi_fu_13121_p6 = data_451_V_read465_phi_reg_23656.read();
    } else {
        ap_phi_mux_data_451_V_read465_rewind_phi_fu_13121_p6 = data_451_V_read465_rewind_reg_13117.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_452_V_read466_phi_phi_fu_23673_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_452_V_read466_phi_phi_fu_23673_p4 = ap_phi_mux_data_452_V_read466_rewind_phi_fu_13135_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_452_V_read466_phi_phi_fu_23673_p4 = data_452_V_read.read();
    } else {
        ap_phi_mux_data_452_V_read466_phi_phi_fu_23673_p4 = ap_phi_reg_pp0_iter0_data_452_V_read466_phi_reg_23669.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_452_V_read466_rewind_phi_fu_13135_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_452_V_read466_rewind_phi_fu_13135_p6 = data_452_V_read466_phi_reg_23669.read();
    } else {
        ap_phi_mux_data_452_V_read466_rewind_phi_fu_13135_p6 = data_452_V_read466_rewind_reg_13131.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_453_V_read467_phi_phi_fu_23686_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_453_V_read467_phi_phi_fu_23686_p4 = ap_phi_mux_data_453_V_read467_rewind_phi_fu_13149_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_453_V_read467_phi_phi_fu_23686_p4 = data_453_V_read.read();
    } else {
        ap_phi_mux_data_453_V_read467_phi_phi_fu_23686_p4 = ap_phi_reg_pp0_iter0_data_453_V_read467_phi_reg_23682.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_453_V_read467_rewind_phi_fu_13149_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_453_V_read467_rewind_phi_fu_13149_p6 = data_453_V_read467_phi_reg_23682.read();
    } else {
        ap_phi_mux_data_453_V_read467_rewind_phi_fu_13149_p6 = data_453_V_read467_rewind_reg_13145.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_454_V_read468_phi_phi_fu_23699_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_454_V_read468_phi_phi_fu_23699_p4 = ap_phi_mux_data_454_V_read468_rewind_phi_fu_13163_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_454_V_read468_phi_phi_fu_23699_p4 = data_454_V_read.read();
    } else {
        ap_phi_mux_data_454_V_read468_phi_phi_fu_23699_p4 = ap_phi_reg_pp0_iter0_data_454_V_read468_phi_reg_23695.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_454_V_read468_rewind_phi_fu_13163_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_454_V_read468_rewind_phi_fu_13163_p6 = data_454_V_read468_phi_reg_23695.read();
    } else {
        ap_phi_mux_data_454_V_read468_rewind_phi_fu_13163_p6 = data_454_V_read468_rewind_reg_13159.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_455_V_read469_phi_phi_fu_23712_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_455_V_read469_phi_phi_fu_23712_p4 = ap_phi_mux_data_455_V_read469_rewind_phi_fu_13177_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_455_V_read469_phi_phi_fu_23712_p4 = data_455_V_read.read();
    } else {
        ap_phi_mux_data_455_V_read469_phi_phi_fu_23712_p4 = ap_phi_reg_pp0_iter0_data_455_V_read469_phi_reg_23708.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_455_V_read469_rewind_phi_fu_13177_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_455_V_read469_rewind_phi_fu_13177_p6 = data_455_V_read469_phi_reg_23708.read();
    } else {
        ap_phi_mux_data_455_V_read469_rewind_phi_fu_13177_p6 = data_455_V_read469_rewind_reg_13173.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_456_V_read470_phi_phi_fu_23725_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_456_V_read470_phi_phi_fu_23725_p4 = ap_phi_mux_data_456_V_read470_rewind_phi_fu_13191_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_456_V_read470_phi_phi_fu_23725_p4 = data_456_V_read.read();
    } else {
        ap_phi_mux_data_456_V_read470_phi_phi_fu_23725_p4 = ap_phi_reg_pp0_iter0_data_456_V_read470_phi_reg_23721.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_456_V_read470_rewind_phi_fu_13191_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_456_V_read470_rewind_phi_fu_13191_p6 = data_456_V_read470_phi_reg_23721.read();
    } else {
        ap_phi_mux_data_456_V_read470_rewind_phi_fu_13191_p6 = data_456_V_read470_rewind_reg_13187.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_457_V_read471_phi_phi_fu_23738_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_457_V_read471_phi_phi_fu_23738_p4 = ap_phi_mux_data_457_V_read471_rewind_phi_fu_13205_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_457_V_read471_phi_phi_fu_23738_p4 = data_457_V_read.read();
    } else {
        ap_phi_mux_data_457_V_read471_phi_phi_fu_23738_p4 = ap_phi_reg_pp0_iter0_data_457_V_read471_phi_reg_23734.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_457_V_read471_rewind_phi_fu_13205_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_457_V_read471_rewind_phi_fu_13205_p6 = data_457_V_read471_phi_reg_23734.read();
    } else {
        ap_phi_mux_data_457_V_read471_rewind_phi_fu_13205_p6 = data_457_V_read471_rewind_reg_13201.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_458_V_read472_phi_phi_fu_23751_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_458_V_read472_phi_phi_fu_23751_p4 = ap_phi_mux_data_458_V_read472_rewind_phi_fu_13219_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_458_V_read472_phi_phi_fu_23751_p4 = data_458_V_read.read();
    } else {
        ap_phi_mux_data_458_V_read472_phi_phi_fu_23751_p4 = ap_phi_reg_pp0_iter0_data_458_V_read472_phi_reg_23747.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_458_V_read472_rewind_phi_fu_13219_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_458_V_read472_rewind_phi_fu_13219_p6 = data_458_V_read472_phi_reg_23747.read();
    } else {
        ap_phi_mux_data_458_V_read472_rewind_phi_fu_13219_p6 = data_458_V_read472_rewind_reg_13215.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_459_V_read473_phi_phi_fu_23764_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_459_V_read473_phi_phi_fu_23764_p4 = ap_phi_mux_data_459_V_read473_rewind_phi_fu_13233_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_459_V_read473_phi_phi_fu_23764_p4 = data_459_V_read.read();
    } else {
        ap_phi_mux_data_459_V_read473_phi_phi_fu_23764_p4 = ap_phi_reg_pp0_iter0_data_459_V_read473_phi_reg_23760.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_459_V_read473_rewind_phi_fu_13233_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_459_V_read473_rewind_phi_fu_13233_p6 = data_459_V_read473_phi_reg_23760.read();
    } else {
        ap_phi_mux_data_459_V_read473_rewind_phi_fu_13233_p6 = data_459_V_read473_rewind_reg_13229.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_45_V_read59_phi_phi_fu_18382_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_45_V_read59_phi_phi_fu_18382_p4 = ap_phi_mux_data_45_V_read59_rewind_phi_fu_7437_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_45_V_read59_phi_phi_fu_18382_p4 = data_45_V_read.read();
    } else {
        ap_phi_mux_data_45_V_read59_phi_phi_fu_18382_p4 = ap_phi_reg_pp0_iter0_data_45_V_read59_phi_reg_18378.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_45_V_read59_rewind_phi_fu_7437_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_45_V_read59_rewind_phi_fu_7437_p6 = data_45_V_read59_phi_reg_18378.read();
    } else {
        ap_phi_mux_data_45_V_read59_rewind_phi_fu_7437_p6 = data_45_V_read59_rewind_reg_7433.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_460_V_read474_phi_phi_fu_23777_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_460_V_read474_phi_phi_fu_23777_p4 = ap_phi_mux_data_460_V_read474_rewind_phi_fu_13247_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_460_V_read474_phi_phi_fu_23777_p4 = data_460_V_read.read();
    } else {
        ap_phi_mux_data_460_V_read474_phi_phi_fu_23777_p4 = ap_phi_reg_pp0_iter0_data_460_V_read474_phi_reg_23773.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_460_V_read474_rewind_phi_fu_13247_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_460_V_read474_rewind_phi_fu_13247_p6 = data_460_V_read474_phi_reg_23773.read();
    } else {
        ap_phi_mux_data_460_V_read474_rewind_phi_fu_13247_p6 = data_460_V_read474_rewind_reg_13243.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_461_V_read475_phi_phi_fu_23790_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_461_V_read475_phi_phi_fu_23790_p4 = ap_phi_mux_data_461_V_read475_rewind_phi_fu_13261_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_461_V_read475_phi_phi_fu_23790_p4 = data_461_V_read.read();
    } else {
        ap_phi_mux_data_461_V_read475_phi_phi_fu_23790_p4 = ap_phi_reg_pp0_iter0_data_461_V_read475_phi_reg_23786.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_461_V_read475_rewind_phi_fu_13261_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_461_V_read475_rewind_phi_fu_13261_p6 = data_461_V_read475_phi_reg_23786.read();
    } else {
        ap_phi_mux_data_461_V_read475_rewind_phi_fu_13261_p6 = data_461_V_read475_rewind_reg_13257.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_462_V_read476_phi_phi_fu_23803_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_462_V_read476_phi_phi_fu_23803_p4 = ap_phi_mux_data_462_V_read476_rewind_phi_fu_13275_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_462_V_read476_phi_phi_fu_23803_p4 = data_462_V_read.read();
    } else {
        ap_phi_mux_data_462_V_read476_phi_phi_fu_23803_p4 = ap_phi_reg_pp0_iter0_data_462_V_read476_phi_reg_23799.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_462_V_read476_rewind_phi_fu_13275_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_462_V_read476_rewind_phi_fu_13275_p6 = data_462_V_read476_phi_reg_23799.read();
    } else {
        ap_phi_mux_data_462_V_read476_rewind_phi_fu_13275_p6 = data_462_V_read476_rewind_reg_13271.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_463_V_read477_phi_phi_fu_23816_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_463_V_read477_phi_phi_fu_23816_p4 = ap_phi_mux_data_463_V_read477_rewind_phi_fu_13289_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_463_V_read477_phi_phi_fu_23816_p4 = data_463_V_read.read();
    } else {
        ap_phi_mux_data_463_V_read477_phi_phi_fu_23816_p4 = ap_phi_reg_pp0_iter0_data_463_V_read477_phi_reg_23812.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_463_V_read477_rewind_phi_fu_13289_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_463_V_read477_rewind_phi_fu_13289_p6 = data_463_V_read477_phi_reg_23812.read();
    } else {
        ap_phi_mux_data_463_V_read477_rewind_phi_fu_13289_p6 = data_463_V_read477_rewind_reg_13285.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_464_V_read478_phi_phi_fu_23829_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_464_V_read478_phi_phi_fu_23829_p4 = ap_phi_mux_data_464_V_read478_rewind_phi_fu_13303_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_464_V_read478_phi_phi_fu_23829_p4 = data_464_V_read.read();
    } else {
        ap_phi_mux_data_464_V_read478_phi_phi_fu_23829_p4 = ap_phi_reg_pp0_iter0_data_464_V_read478_phi_reg_23825.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_464_V_read478_rewind_phi_fu_13303_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_464_V_read478_rewind_phi_fu_13303_p6 = data_464_V_read478_phi_reg_23825.read();
    } else {
        ap_phi_mux_data_464_V_read478_rewind_phi_fu_13303_p6 = data_464_V_read478_rewind_reg_13299.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_465_V_read479_phi_phi_fu_23842_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_465_V_read479_phi_phi_fu_23842_p4 = ap_phi_mux_data_465_V_read479_rewind_phi_fu_13317_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_465_V_read479_phi_phi_fu_23842_p4 = data_465_V_read.read();
    } else {
        ap_phi_mux_data_465_V_read479_phi_phi_fu_23842_p4 = ap_phi_reg_pp0_iter0_data_465_V_read479_phi_reg_23838.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_465_V_read479_rewind_phi_fu_13317_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_465_V_read479_rewind_phi_fu_13317_p6 = data_465_V_read479_phi_reg_23838.read();
    } else {
        ap_phi_mux_data_465_V_read479_rewind_phi_fu_13317_p6 = data_465_V_read479_rewind_reg_13313.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_466_V_read480_phi_phi_fu_23855_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_466_V_read480_phi_phi_fu_23855_p4 = ap_phi_mux_data_466_V_read480_rewind_phi_fu_13331_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_466_V_read480_phi_phi_fu_23855_p4 = data_466_V_read.read();
    } else {
        ap_phi_mux_data_466_V_read480_phi_phi_fu_23855_p4 = ap_phi_reg_pp0_iter0_data_466_V_read480_phi_reg_23851.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_466_V_read480_rewind_phi_fu_13331_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_466_V_read480_rewind_phi_fu_13331_p6 = data_466_V_read480_phi_reg_23851.read();
    } else {
        ap_phi_mux_data_466_V_read480_rewind_phi_fu_13331_p6 = data_466_V_read480_rewind_reg_13327.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_467_V_read481_phi_phi_fu_23868_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_467_V_read481_phi_phi_fu_23868_p4 = ap_phi_mux_data_467_V_read481_rewind_phi_fu_13345_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_467_V_read481_phi_phi_fu_23868_p4 = data_467_V_read.read();
    } else {
        ap_phi_mux_data_467_V_read481_phi_phi_fu_23868_p4 = ap_phi_reg_pp0_iter0_data_467_V_read481_phi_reg_23864.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_467_V_read481_rewind_phi_fu_13345_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_467_V_read481_rewind_phi_fu_13345_p6 = data_467_V_read481_phi_reg_23864.read();
    } else {
        ap_phi_mux_data_467_V_read481_rewind_phi_fu_13345_p6 = data_467_V_read481_rewind_reg_13341.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_468_V_read482_phi_phi_fu_23881_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_468_V_read482_phi_phi_fu_23881_p4 = ap_phi_mux_data_468_V_read482_rewind_phi_fu_13359_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_468_V_read482_phi_phi_fu_23881_p4 = data_468_V_read.read();
    } else {
        ap_phi_mux_data_468_V_read482_phi_phi_fu_23881_p4 = ap_phi_reg_pp0_iter0_data_468_V_read482_phi_reg_23877.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_468_V_read482_rewind_phi_fu_13359_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_468_V_read482_rewind_phi_fu_13359_p6 = data_468_V_read482_phi_reg_23877.read();
    } else {
        ap_phi_mux_data_468_V_read482_rewind_phi_fu_13359_p6 = data_468_V_read482_rewind_reg_13355.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_469_V_read483_phi_phi_fu_23894_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_469_V_read483_phi_phi_fu_23894_p4 = ap_phi_mux_data_469_V_read483_rewind_phi_fu_13373_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_469_V_read483_phi_phi_fu_23894_p4 = data_469_V_read.read();
    } else {
        ap_phi_mux_data_469_V_read483_phi_phi_fu_23894_p4 = ap_phi_reg_pp0_iter0_data_469_V_read483_phi_reg_23890.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_469_V_read483_rewind_phi_fu_13373_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_469_V_read483_rewind_phi_fu_13373_p6 = data_469_V_read483_phi_reg_23890.read();
    } else {
        ap_phi_mux_data_469_V_read483_rewind_phi_fu_13373_p6 = data_469_V_read483_rewind_reg_13369.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_46_V_read60_phi_phi_fu_18395_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_46_V_read60_phi_phi_fu_18395_p4 = ap_phi_mux_data_46_V_read60_rewind_phi_fu_7451_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_46_V_read60_phi_phi_fu_18395_p4 = data_46_V_read.read();
    } else {
        ap_phi_mux_data_46_V_read60_phi_phi_fu_18395_p4 = ap_phi_reg_pp0_iter0_data_46_V_read60_phi_reg_18391.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_46_V_read60_rewind_phi_fu_7451_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_46_V_read60_rewind_phi_fu_7451_p6 = data_46_V_read60_phi_reg_18391.read();
    } else {
        ap_phi_mux_data_46_V_read60_rewind_phi_fu_7451_p6 = data_46_V_read60_rewind_reg_7447.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_470_V_read484_phi_phi_fu_23907_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_470_V_read484_phi_phi_fu_23907_p4 = ap_phi_mux_data_470_V_read484_rewind_phi_fu_13387_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_470_V_read484_phi_phi_fu_23907_p4 = data_470_V_read.read();
    } else {
        ap_phi_mux_data_470_V_read484_phi_phi_fu_23907_p4 = ap_phi_reg_pp0_iter0_data_470_V_read484_phi_reg_23903.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_470_V_read484_rewind_phi_fu_13387_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_470_V_read484_rewind_phi_fu_13387_p6 = data_470_V_read484_phi_reg_23903.read();
    } else {
        ap_phi_mux_data_470_V_read484_rewind_phi_fu_13387_p6 = data_470_V_read484_rewind_reg_13383.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_471_V_read485_phi_phi_fu_23920_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_471_V_read485_phi_phi_fu_23920_p4 = ap_phi_mux_data_471_V_read485_rewind_phi_fu_13401_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_471_V_read485_phi_phi_fu_23920_p4 = data_471_V_read.read();
    } else {
        ap_phi_mux_data_471_V_read485_phi_phi_fu_23920_p4 = ap_phi_reg_pp0_iter0_data_471_V_read485_phi_reg_23916.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_471_V_read485_rewind_phi_fu_13401_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_471_V_read485_rewind_phi_fu_13401_p6 = data_471_V_read485_phi_reg_23916.read();
    } else {
        ap_phi_mux_data_471_V_read485_rewind_phi_fu_13401_p6 = data_471_V_read485_rewind_reg_13397.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_472_V_read486_phi_phi_fu_23933_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_472_V_read486_phi_phi_fu_23933_p4 = ap_phi_mux_data_472_V_read486_rewind_phi_fu_13415_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_472_V_read486_phi_phi_fu_23933_p4 = data_472_V_read.read();
    } else {
        ap_phi_mux_data_472_V_read486_phi_phi_fu_23933_p4 = ap_phi_reg_pp0_iter0_data_472_V_read486_phi_reg_23929.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_472_V_read486_rewind_phi_fu_13415_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_472_V_read486_rewind_phi_fu_13415_p6 = data_472_V_read486_phi_reg_23929.read();
    } else {
        ap_phi_mux_data_472_V_read486_rewind_phi_fu_13415_p6 = data_472_V_read486_rewind_reg_13411.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_473_V_read487_phi_phi_fu_23946_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_473_V_read487_phi_phi_fu_23946_p4 = ap_phi_mux_data_473_V_read487_rewind_phi_fu_13429_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_473_V_read487_phi_phi_fu_23946_p4 = data_473_V_read.read();
    } else {
        ap_phi_mux_data_473_V_read487_phi_phi_fu_23946_p4 = ap_phi_reg_pp0_iter0_data_473_V_read487_phi_reg_23942.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_473_V_read487_rewind_phi_fu_13429_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_473_V_read487_rewind_phi_fu_13429_p6 = data_473_V_read487_phi_reg_23942.read();
    } else {
        ap_phi_mux_data_473_V_read487_rewind_phi_fu_13429_p6 = data_473_V_read487_rewind_reg_13425.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_474_V_read488_phi_phi_fu_23959_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_474_V_read488_phi_phi_fu_23959_p4 = ap_phi_mux_data_474_V_read488_rewind_phi_fu_13443_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_474_V_read488_phi_phi_fu_23959_p4 = data_474_V_read.read();
    } else {
        ap_phi_mux_data_474_V_read488_phi_phi_fu_23959_p4 = ap_phi_reg_pp0_iter0_data_474_V_read488_phi_reg_23955.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_474_V_read488_rewind_phi_fu_13443_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_474_V_read488_rewind_phi_fu_13443_p6 = data_474_V_read488_phi_reg_23955.read();
    } else {
        ap_phi_mux_data_474_V_read488_rewind_phi_fu_13443_p6 = data_474_V_read488_rewind_reg_13439.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_475_V_read489_phi_phi_fu_23972_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_475_V_read489_phi_phi_fu_23972_p4 = ap_phi_mux_data_475_V_read489_rewind_phi_fu_13457_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_475_V_read489_phi_phi_fu_23972_p4 = data_475_V_read.read();
    } else {
        ap_phi_mux_data_475_V_read489_phi_phi_fu_23972_p4 = ap_phi_reg_pp0_iter0_data_475_V_read489_phi_reg_23968.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_475_V_read489_rewind_phi_fu_13457_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_475_V_read489_rewind_phi_fu_13457_p6 = data_475_V_read489_phi_reg_23968.read();
    } else {
        ap_phi_mux_data_475_V_read489_rewind_phi_fu_13457_p6 = data_475_V_read489_rewind_reg_13453.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_476_V_read490_phi_phi_fu_23985_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_476_V_read490_phi_phi_fu_23985_p4 = ap_phi_mux_data_476_V_read490_rewind_phi_fu_13471_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_476_V_read490_phi_phi_fu_23985_p4 = data_476_V_read.read();
    } else {
        ap_phi_mux_data_476_V_read490_phi_phi_fu_23985_p4 = ap_phi_reg_pp0_iter0_data_476_V_read490_phi_reg_23981.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_476_V_read490_rewind_phi_fu_13471_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_476_V_read490_rewind_phi_fu_13471_p6 = data_476_V_read490_phi_reg_23981.read();
    } else {
        ap_phi_mux_data_476_V_read490_rewind_phi_fu_13471_p6 = data_476_V_read490_rewind_reg_13467.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_477_V_read491_phi_phi_fu_23998_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_477_V_read491_phi_phi_fu_23998_p4 = ap_phi_mux_data_477_V_read491_rewind_phi_fu_13485_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_477_V_read491_phi_phi_fu_23998_p4 = data_477_V_read.read();
    } else {
        ap_phi_mux_data_477_V_read491_phi_phi_fu_23998_p4 = ap_phi_reg_pp0_iter0_data_477_V_read491_phi_reg_23994.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_477_V_read491_rewind_phi_fu_13485_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_477_V_read491_rewind_phi_fu_13485_p6 = data_477_V_read491_phi_reg_23994.read();
    } else {
        ap_phi_mux_data_477_V_read491_rewind_phi_fu_13485_p6 = data_477_V_read491_rewind_reg_13481.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_478_V_read492_phi_phi_fu_24011_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_478_V_read492_phi_phi_fu_24011_p4 = ap_phi_mux_data_478_V_read492_rewind_phi_fu_13499_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_478_V_read492_phi_phi_fu_24011_p4 = data_478_V_read.read();
    } else {
        ap_phi_mux_data_478_V_read492_phi_phi_fu_24011_p4 = ap_phi_reg_pp0_iter0_data_478_V_read492_phi_reg_24007.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_478_V_read492_rewind_phi_fu_13499_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_478_V_read492_rewind_phi_fu_13499_p6 = data_478_V_read492_phi_reg_24007.read();
    } else {
        ap_phi_mux_data_478_V_read492_rewind_phi_fu_13499_p6 = data_478_V_read492_rewind_reg_13495.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_479_V_read493_phi_phi_fu_24024_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_479_V_read493_phi_phi_fu_24024_p4 = ap_phi_mux_data_479_V_read493_rewind_phi_fu_13513_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_479_V_read493_phi_phi_fu_24024_p4 = data_479_V_read.read();
    } else {
        ap_phi_mux_data_479_V_read493_phi_phi_fu_24024_p4 = ap_phi_reg_pp0_iter0_data_479_V_read493_phi_reg_24020.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_479_V_read493_rewind_phi_fu_13513_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_479_V_read493_rewind_phi_fu_13513_p6 = data_479_V_read493_phi_reg_24020.read();
    } else {
        ap_phi_mux_data_479_V_read493_rewind_phi_fu_13513_p6 = data_479_V_read493_rewind_reg_13509.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_47_V_read61_phi_phi_fu_18408_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_47_V_read61_phi_phi_fu_18408_p4 = ap_phi_mux_data_47_V_read61_rewind_phi_fu_7465_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_47_V_read61_phi_phi_fu_18408_p4 = data_47_V_read.read();
    } else {
        ap_phi_mux_data_47_V_read61_phi_phi_fu_18408_p4 = ap_phi_reg_pp0_iter0_data_47_V_read61_phi_reg_18404.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_47_V_read61_rewind_phi_fu_7465_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_47_V_read61_rewind_phi_fu_7465_p6 = data_47_V_read61_phi_reg_18404.read();
    } else {
        ap_phi_mux_data_47_V_read61_rewind_phi_fu_7465_p6 = data_47_V_read61_rewind_reg_7461.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_480_V_read494_phi_phi_fu_24037_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_480_V_read494_phi_phi_fu_24037_p4 = ap_phi_mux_data_480_V_read494_rewind_phi_fu_13527_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_480_V_read494_phi_phi_fu_24037_p4 = data_480_V_read.read();
    } else {
        ap_phi_mux_data_480_V_read494_phi_phi_fu_24037_p4 = ap_phi_reg_pp0_iter0_data_480_V_read494_phi_reg_24033.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_480_V_read494_rewind_phi_fu_13527_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_480_V_read494_rewind_phi_fu_13527_p6 = data_480_V_read494_phi_reg_24033.read();
    } else {
        ap_phi_mux_data_480_V_read494_rewind_phi_fu_13527_p6 = data_480_V_read494_rewind_reg_13523.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_481_V_read495_phi_phi_fu_24050_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_481_V_read495_phi_phi_fu_24050_p4 = ap_phi_mux_data_481_V_read495_rewind_phi_fu_13541_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_481_V_read495_phi_phi_fu_24050_p4 = data_481_V_read.read();
    } else {
        ap_phi_mux_data_481_V_read495_phi_phi_fu_24050_p4 = ap_phi_reg_pp0_iter0_data_481_V_read495_phi_reg_24046.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_481_V_read495_rewind_phi_fu_13541_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_481_V_read495_rewind_phi_fu_13541_p6 = data_481_V_read495_phi_reg_24046.read();
    } else {
        ap_phi_mux_data_481_V_read495_rewind_phi_fu_13541_p6 = data_481_V_read495_rewind_reg_13537.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_482_V_read496_phi_phi_fu_24063_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_482_V_read496_phi_phi_fu_24063_p4 = ap_phi_mux_data_482_V_read496_rewind_phi_fu_13555_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_482_V_read496_phi_phi_fu_24063_p4 = data_482_V_read.read();
    } else {
        ap_phi_mux_data_482_V_read496_phi_phi_fu_24063_p4 = ap_phi_reg_pp0_iter0_data_482_V_read496_phi_reg_24059.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_482_V_read496_rewind_phi_fu_13555_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_482_V_read496_rewind_phi_fu_13555_p6 = data_482_V_read496_phi_reg_24059.read();
    } else {
        ap_phi_mux_data_482_V_read496_rewind_phi_fu_13555_p6 = data_482_V_read496_rewind_reg_13551.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_483_V_read497_phi_phi_fu_24076_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_483_V_read497_phi_phi_fu_24076_p4 = ap_phi_mux_data_483_V_read497_rewind_phi_fu_13569_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_483_V_read497_phi_phi_fu_24076_p4 = data_483_V_read.read();
    } else {
        ap_phi_mux_data_483_V_read497_phi_phi_fu_24076_p4 = ap_phi_reg_pp0_iter0_data_483_V_read497_phi_reg_24072.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_483_V_read497_rewind_phi_fu_13569_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_483_V_read497_rewind_phi_fu_13569_p6 = data_483_V_read497_phi_reg_24072.read();
    } else {
        ap_phi_mux_data_483_V_read497_rewind_phi_fu_13569_p6 = data_483_V_read497_rewind_reg_13565.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_484_V_read498_phi_phi_fu_24089_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_484_V_read498_phi_phi_fu_24089_p4 = ap_phi_mux_data_484_V_read498_rewind_phi_fu_13583_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_484_V_read498_phi_phi_fu_24089_p4 = data_484_V_read.read();
    } else {
        ap_phi_mux_data_484_V_read498_phi_phi_fu_24089_p4 = ap_phi_reg_pp0_iter0_data_484_V_read498_phi_reg_24085.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_484_V_read498_rewind_phi_fu_13583_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_484_V_read498_rewind_phi_fu_13583_p6 = data_484_V_read498_phi_reg_24085.read();
    } else {
        ap_phi_mux_data_484_V_read498_rewind_phi_fu_13583_p6 = data_484_V_read498_rewind_reg_13579.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_485_V_read499_phi_phi_fu_24102_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_485_V_read499_phi_phi_fu_24102_p4 = ap_phi_mux_data_485_V_read499_rewind_phi_fu_13597_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_485_V_read499_phi_phi_fu_24102_p4 = data_485_V_read.read();
    } else {
        ap_phi_mux_data_485_V_read499_phi_phi_fu_24102_p4 = ap_phi_reg_pp0_iter0_data_485_V_read499_phi_reg_24098.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_485_V_read499_rewind_phi_fu_13597_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_485_V_read499_rewind_phi_fu_13597_p6 = data_485_V_read499_phi_reg_24098.read();
    } else {
        ap_phi_mux_data_485_V_read499_rewind_phi_fu_13597_p6 = data_485_V_read499_rewind_reg_13593.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_486_V_read500_phi_phi_fu_24115_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_486_V_read500_phi_phi_fu_24115_p4 = ap_phi_mux_data_486_V_read500_rewind_phi_fu_13611_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_486_V_read500_phi_phi_fu_24115_p4 = data_486_V_read.read();
    } else {
        ap_phi_mux_data_486_V_read500_phi_phi_fu_24115_p4 = ap_phi_reg_pp0_iter0_data_486_V_read500_phi_reg_24111.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_486_V_read500_rewind_phi_fu_13611_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_486_V_read500_rewind_phi_fu_13611_p6 = data_486_V_read500_phi_reg_24111.read();
    } else {
        ap_phi_mux_data_486_V_read500_rewind_phi_fu_13611_p6 = data_486_V_read500_rewind_reg_13607.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_487_V_read501_phi_phi_fu_24128_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_487_V_read501_phi_phi_fu_24128_p4 = ap_phi_mux_data_487_V_read501_rewind_phi_fu_13625_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_487_V_read501_phi_phi_fu_24128_p4 = data_487_V_read.read();
    } else {
        ap_phi_mux_data_487_V_read501_phi_phi_fu_24128_p4 = ap_phi_reg_pp0_iter0_data_487_V_read501_phi_reg_24124.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_487_V_read501_rewind_phi_fu_13625_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_487_V_read501_rewind_phi_fu_13625_p6 = data_487_V_read501_phi_reg_24124.read();
    } else {
        ap_phi_mux_data_487_V_read501_rewind_phi_fu_13625_p6 = data_487_V_read501_rewind_reg_13621.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_488_V_read502_phi_phi_fu_24141_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_488_V_read502_phi_phi_fu_24141_p4 = ap_phi_mux_data_488_V_read502_rewind_phi_fu_13639_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_488_V_read502_phi_phi_fu_24141_p4 = data_488_V_read.read();
    } else {
        ap_phi_mux_data_488_V_read502_phi_phi_fu_24141_p4 = ap_phi_reg_pp0_iter0_data_488_V_read502_phi_reg_24137.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_488_V_read502_rewind_phi_fu_13639_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_488_V_read502_rewind_phi_fu_13639_p6 = data_488_V_read502_phi_reg_24137.read();
    } else {
        ap_phi_mux_data_488_V_read502_rewind_phi_fu_13639_p6 = data_488_V_read502_rewind_reg_13635.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_489_V_read503_phi_phi_fu_24154_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_489_V_read503_phi_phi_fu_24154_p4 = ap_phi_mux_data_489_V_read503_rewind_phi_fu_13653_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_489_V_read503_phi_phi_fu_24154_p4 = data_489_V_read.read();
    } else {
        ap_phi_mux_data_489_V_read503_phi_phi_fu_24154_p4 = ap_phi_reg_pp0_iter0_data_489_V_read503_phi_reg_24150.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_489_V_read503_rewind_phi_fu_13653_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_489_V_read503_rewind_phi_fu_13653_p6 = data_489_V_read503_phi_reg_24150.read();
    } else {
        ap_phi_mux_data_489_V_read503_rewind_phi_fu_13653_p6 = data_489_V_read503_rewind_reg_13649.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_48_V_read62_phi_phi_fu_18421_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_48_V_read62_phi_phi_fu_18421_p4 = ap_phi_mux_data_48_V_read62_rewind_phi_fu_7479_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_48_V_read62_phi_phi_fu_18421_p4 = data_48_V_read.read();
    } else {
        ap_phi_mux_data_48_V_read62_phi_phi_fu_18421_p4 = ap_phi_reg_pp0_iter0_data_48_V_read62_phi_reg_18417.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_48_V_read62_rewind_phi_fu_7479_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_48_V_read62_rewind_phi_fu_7479_p6 = data_48_V_read62_phi_reg_18417.read();
    } else {
        ap_phi_mux_data_48_V_read62_rewind_phi_fu_7479_p6 = data_48_V_read62_rewind_reg_7475.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_490_V_read504_phi_phi_fu_24167_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_490_V_read504_phi_phi_fu_24167_p4 = ap_phi_mux_data_490_V_read504_rewind_phi_fu_13667_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_490_V_read504_phi_phi_fu_24167_p4 = data_490_V_read.read();
    } else {
        ap_phi_mux_data_490_V_read504_phi_phi_fu_24167_p4 = ap_phi_reg_pp0_iter0_data_490_V_read504_phi_reg_24163.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_490_V_read504_rewind_phi_fu_13667_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_490_V_read504_rewind_phi_fu_13667_p6 = data_490_V_read504_phi_reg_24163.read();
    } else {
        ap_phi_mux_data_490_V_read504_rewind_phi_fu_13667_p6 = data_490_V_read504_rewind_reg_13663.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_491_V_read505_phi_phi_fu_24180_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_491_V_read505_phi_phi_fu_24180_p4 = ap_phi_mux_data_491_V_read505_rewind_phi_fu_13681_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_491_V_read505_phi_phi_fu_24180_p4 = data_491_V_read.read();
    } else {
        ap_phi_mux_data_491_V_read505_phi_phi_fu_24180_p4 = ap_phi_reg_pp0_iter0_data_491_V_read505_phi_reg_24176.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_491_V_read505_rewind_phi_fu_13681_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_491_V_read505_rewind_phi_fu_13681_p6 = data_491_V_read505_phi_reg_24176.read();
    } else {
        ap_phi_mux_data_491_V_read505_rewind_phi_fu_13681_p6 = data_491_V_read505_rewind_reg_13677.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_492_V_read506_phi_phi_fu_24193_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_492_V_read506_phi_phi_fu_24193_p4 = ap_phi_mux_data_492_V_read506_rewind_phi_fu_13695_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_492_V_read506_phi_phi_fu_24193_p4 = data_492_V_read.read();
    } else {
        ap_phi_mux_data_492_V_read506_phi_phi_fu_24193_p4 = ap_phi_reg_pp0_iter0_data_492_V_read506_phi_reg_24189.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_492_V_read506_rewind_phi_fu_13695_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_492_V_read506_rewind_phi_fu_13695_p6 = data_492_V_read506_phi_reg_24189.read();
    } else {
        ap_phi_mux_data_492_V_read506_rewind_phi_fu_13695_p6 = data_492_V_read506_rewind_reg_13691.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_493_V_read507_phi_phi_fu_24206_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_493_V_read507_phi_phi_fu_24206_p4 = ap_phi_mux_data_493_V_read507_rewind_phi_fu_13709_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_493_V_read507_phi_phi_fu_24206_p4 = data_493_V_read.read();
    } else {
        ap_phi_mux_data_493_V_read507_phi_phi_fu_24206_p4 = ap_phi_reg_pp0_iter0_data_493_V_read507_phi_reg_24202.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_493_V_read507_rewind_phi_fu_13709_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_493_V_read507_rewind_phi_fu_13709_p6 = data_493_V_read507_phi_reg_24202.read();
    } else {
        ap_phi_mux_data_493_V_read507_rewind_phi_fu_13709_p6 = data_493_V_read507_rewind_reg_13705.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_494_V_read508_phi_phi_fu_24219_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_494_V_read508_phi_phi_fu_24219_p4 = ap_phi_mux_data_494_V_read508_rewind_phi_fu_13723_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_494_V_read508_phi_phi_fu_24219_p4 = data_494_V_read.read();
    } else {
        ap_phi_mux_data_494_V_read508_phi_phi_fu_24219_p4 = ap_phi_reg_pp0_iter0_data_494_V_read508_phi_reg_24215.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_494_V_read508_rewind_phi_fu_13723_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_494_V_read508_rewind_phi_fu_13723_p6 = data_494_V_read508_phi_reg_24215.read();
    } else {
        ap_phi_mux_data_494_V_read508_rewind_phi_fu_13723_p6 = data_494_V_read508_rewind_reg_13719.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_495_V_read509_phi_phi_fu_24232_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_495_V_read509_phi_phi_fu_24232_p4 = ap_phi_mux_data_495_V_read509_rewind_phi_fu_13737_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_495_V_read509_phi_phi_fu_24232_p4 = data_495_V_read.read();
    } else {
        ap_phi_mux_data_495_V_read509_phi_phi_fu_24232_p4 = ap_phi_reg_pp0_iter0_data_495_V_read509_phi_reg_24228.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_495_V_read509_rewind_phi_fu_13737_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_495_V_read509_rewind_phi_fu_13737_p6 = data_495_V_read509_phi_reg_24228.read();
    } else {
        ap_phi_mux_data_495_V_read509_rewind_phi_fu_13737_p6 = data_495_V_read509_rewind_reg_13733.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_496_V_read510_phi_phi_fu_24245_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_496_V_read510_phi_phi_fu_24245_p4 = ap_phi_mux_data_496_V_read510_rewind_phi_fu_13751_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_496_V_read510_phi_phi_fu_24245_p4 = data_496_V_read.read();
    } else {
        ap_phi_mux_data_496_V_read510_phi_phi_fu_24245_p4 = ap_phi_reg_pp0_iter0_data_496_V_read510_phi_reg_24241.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_496_V_read510_rewind_phi_fu_13751_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_496_V_read510_rewind_phi_fu_13751_p6 = data_496_V_read510_phi_reg_24241.read();
    } else {
        ap_phi_mux_data_496_V_read510_rewind_phi_fu_13751_p6 = data_496_V_read510_rewind_reg_13747.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_497_V_read511_phi_phi_fu_24258_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_497_V_read511_phi_phi_fu_24258_p4 = ap_phi_mux_data_497_V_read511_rewind_phi_fu_13765_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_497_V_read511_phi_phi_fu_24258_p4 = data_497_V_read.read();
    } else {
        ap_phi_mux_data_497_V_read511_phi_phi_fu_24258_p4 = ap_phi_reg_pp0_iter0_data_497_V_read511_phi_reg_24254.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_497_V_read511_rewind_phi_fu_13765_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_497_V_read511_rewind_phi_fu_13765_p6 = data_497_V_read511_phi_reg_24254.read();
    } else {
        ap_phi_mux_data_497_V_read511_rewind_phi_fu_13765_p6 = data_497_V_read511_rewind_reg_13761.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_498_V_read512_phi_phi_fu_24271_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_498_V_read512_phi_phi_fu_24271_p4 = ap_phi_mux_data_498_V_read512_rewind_phi_fu_13779_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_498_V_read512_phi_phi_fu_24271_p4 = data_498_V_read.read();
    } else {
        ap_phi_mux_data_498_V_read512_phi_phi_fu_24271_p4 = ap_phi_reg_pp0_iter0_data_498_V_read512_phi_reg_24267.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_498_V_read512_rewind_phi_fu_13779_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_498_V_read512_rewind_phi_fu_13779_p6 = data_498_V_read512_phi_reg_24267.read();
    } else {
        ap_phi_mux_data_498_V_read512_rewind_phi_fu_13779_p6 = data_498_V_read512_rewind_reg_13775.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_499_V_read513_phi_phi_fu_24284_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_499_V_read513_phi_phi_fu_24284_p4 = ap_phi_mux_data_499_V_read513_rewind_phi_fu_13793_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_499_V_read513_phi_phi_fu_24284_p4 = data_499_V_read.read();
    } else {
        ap_phi_mux_data_499_V_read513_phi_phi_fu_24284_p4 = ap_phi_reg_pp0_iter0_data_499_V_read513_phi_reg_24280.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_499_V_read513_rewind_phi_fu_13793_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_499_V_read513_rewind_phi_fu_13793_p6 = data_499_V_read513_phi_reg_24280.read();
    } else {
        ap_phi_mux_data_499_V_read513_rewind_phi_fu_13793_p6 = data_499_V_read513_rewind_reg_13789.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_49_V_read63_phi_phi_fu_18434_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_49_V_read63_phi_phi_fu_18434_p4 = ap_phi_mux_data_49_V_read63_rewind_phi_fu_7493_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_49_V_read63_phi_phi_fu_18434_p4 = data_49_V_read.read();
    } else {
        ap_phi_mux_data_49_V_read63_phi_phi_fu_18434_p4 = ap_phi_reg_pp0_iter0_data_49_V_read63_phi_reg_18430.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_49_V_read63_rewind_phi_fu_7493_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_49_V_read63_rewind_phi_fu_7493_p6 = data_49_V_read63_phi_reg_18430.read();
    } else {
        ap_phi_mux_data_49_V_read63_rewind_phi_fu_7493_p6 = data_49_V_read63_rewind_reg_7489.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_4_V_read18_phi_phi_fu_17849_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_4_V_read18_phi_phi_fu_17849_p4 = ap_phi_mux_data_4_V_read18_rewind_phi_fu_6863_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_4_V_read18_phi_phi_fu_17849_p4 = data_4_V_read.read();
    } else {
        ap_phi_mux_data_4_V_read18_phi_phi_fu_17849_p4 = ap_phi_reg_pp0_iter0_data_4_V_read18_phi_reg_17845.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_4_V_read18_rewind_phi_fu_6863_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_4_V_read18_rewind_phi_fu_6863_p6 = data_4_V_read18_phi_reg_17845.read();
    } else {
        ap_phi_mux_data_4_V_read18_rewind_phi_fu_6863_p6 = data_4_V_read18_rewind_reg_6859.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_500_V_read514_phi_phi_fu_24297_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_500_V_read514_phi_phi_fu_24297_p4 = ap_phi_mux_data_500_V_read514_rewind_phi_fu_13807_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_500_V_read514_phi_phi_fu_24297_p4 = data_500_V_read.read();
    } else {
        ap_phi_mux_data_500_V_read514_phi_phi_fu_24297_p4 = ap_phi_reg_pp0_iter0_data_500_V_read514_phi_reg_24293.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_500_V_read514_rewind_phi_fu_13807_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_500_V_read514_rewind_phi_fu_13807_p6 = data_500_V_read514_phi_reg_24293.read();
    } else {
        ap_phi_mux_data_500_V_read514_rewind_phi_fu_13807_p6 = data_500_V_read514_rewind_reg_13803.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_501_V_read515_phi_phi_fu_24310_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_501_V_read515_phi_phi_fu_24310_p4 = ap_phi_mux_data_501_V_read515_rewind_phi_fu_13821_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_501_V_read515_phi_phi_fu_24310_p4 = data_501_V_read.read();
    } else {
        ap_phi_mux_data_501_V_read515_phi_phi_fu_24310_p4 = ap_phi_reg_pp0_iter0_data_501_V_read515_phi_reg_24306.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_501_V_read515_rewind_phi_fu_13821_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_501_V_read515_rewind_phi_fu_13821_p6 = data_501_V_read515_phi_reg_24306.read();
    } else {
        ap_phi_mux_data_501_V_read515_rewind_phi_fu_13821_p6 = data_501_V_read515_rewind_reg_13817.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_502_V_read516_phi_phi_fu_24323_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_502_V_read516_phi_phi_fu_24323_p4 = ap_phi_mux_data_502_V_read516_rewind_phi_fu_13835_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_502_V_read516_phi_phi_fu_24323_p4 = data_502_V_read.read();
    } else {
        ap_phi_mux_data_502_V_read516_phi_phi_fu_24323_p4 = ap_phi_reg_pp0_iter0_data_502_V_read516_phi_reg_24319.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_502_V_read516_rewind_phi_fu_13835_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_502_V_read516_rewind_phi_fu_13835_p6 = data_502_V_read516_phi_reg_24319.read();
    } else {
        ap_phi_mux_data_502_V_read516_rewind_phi_fu_13835_p6 = data_502_V_read516_rewind_reg_13831.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_503_V_read517_phi_phi_fu_24336_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_503_V_read517_phi_phi_fu_24336_p4 = ap_phi_mux_data_503_V_read517_rewind_phi_fu_13849_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_503_V_read517_phi_phi_fu_24336_p4 = data_503_V_read.read();
    } else {
        ap_phi_mux_data_503_V_read517_phi_phi_fu_24336_p4 = ap_phi_reg_pp0_iter0_data_503_V_read517_phi_reg_24332.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_503_V_read517_rewind_phi_fu_13849_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_503_V_read517_rewind_phi_fu_13849_p6 = data_503_V_read517_phi_reg_24332.read();
    } else {
        ap_phi_mux_data_503_V_read517_rewind_phi_fu_13849_p6 = data_503_V_read517_rewind_reg_13845.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_504_V_read518_phi_phi_fu_24349_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_504_V_read518_phi_phi_fu_24349_p4 = ap_phi_mux_data_504_V_read518_rewind_phi_fu_13863_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_504_V_read518_phi_phi_fu_24349_p4 = data_504_V_read.read();
    } else {
        ap_phi_mux_data_504_V_read518_phi_phi_fu_24349_p4 = ap_phi_reg_pp0_iter0_data_504_V_read518_phi_reg_24345.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_504_V_read518_rewind_phi_fu_13863_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_504_V_read518_rewind_phi_fu_13863_p6 = data_504_V_read518_phi_reg_24345.read();
    } else {
        ap_phi_mux_data_504_V_read518_rewind_phi_fu_13863_p6 = data_504_V_read518_rewind_reg_13859.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_505_V_read519_phi_phi_fu_24362_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_505_V_read519_phi_phi_fu_24362_p4 = ap_phi_mux_data_505_V_read519_rewind_phi_fu_13877_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_505_V_read519_phi_phi_fu_24362_p4 = data_505_V_read.read();
    } else {
        ap_phi_mux_data_505_V_read519_phi_phi_fu_24362_p4 = ap_phi_reg_pp0_iter0_data_505_V_read519_phi_reg_24358.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_505_V_read519_rewind_phi_fu_13877_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_505_V_read519_rewind_phi_fu_13877_p6 = data_505_V_read519_phi_reg_24358.read();
    } else {
        ap_phi_mux_data_505_V_read519_rewind_phi_fu_13877_p6 = data_505_V_read519_rewind_reg_13873.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_506_V_read520_phi_phi_fu_24375_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_506_V_read520_phi_phi_fu_24375_p4 = ap_phi_mux_data_506_V_read520_rewind_phi_fu_13891_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_506_V_read520_phi_phi_fu_24375_p4 = data_506_V_read.read();
    } else {
        ap_phi_mux_data_506_V_read520_phi_phi_fu_24375_p4 = ap_phi_reg_pp0_iter0_data_506_V_read520_phi_reg_24371.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_506_V_read520_rewind_phi_fu_13891_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_506_V_read520_rewind_phi_fu_13891_p6 = data_506_V_read520_phi_reg_24371.read();
    } else {
        ap_phi_mux_data_506_V_read520_rewind_phi_fu_13891_p6 = data_506_V_read520_rewind_reg_13887.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_507_V_read521_phi_phi_fu_24388_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_507_V_read521_phi_phi_fu_24388_p4 = ap_phi_mux_data_507_V_read521_rewind_phi_fu_13905_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_507_V_read521_phi_phi_fu_24388_p4 = data_507_V_read.read();
    } else {
        ap_phi_mux_data_507_V_read521_phi_phi_fu_24388_p4 = ap_phi_reg_pp0_iter0_data_507_V_read521_phi_reg_24384.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_507_V_read521_rewind_phi_fu_13905_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_507_V_read521_rewind_phi_fu_13905_p6 = data_507_V_read521_phi_reg_24384.read();
    } else {
        ap_phi_mux_data_507_V_read521_rewind_phi_fu_13905_p6 = data_507_V_read521_rewind_reg_13901.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_508_V_read522_phi_phi_fu_24401_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_508_V_read522_phi_phi_fu_24401_p4 = ap_phi_mux_data_508_V_read522_rewind_phi_fu_13919_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_508_V_read522_phi_phi_fu_24401_p4 = data_508_V_read.read();
    } else {
        ap_phi_mux_data_508_V_read522_phi_phi_fu_24401_p4 = ap_phi_reg_pp0_iter0_data_508_V_read522_phi_reg_24397.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_508_V_read522_rewind_phi_fu_13919_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_508_V_read522_rewind_phi_fu_13919_p6 = data_508_V_read522_phi_reg_24397.read();
    } else {
        ap_phi_mux_data_508_V_read522_rewind_phi_fu_13919_p6 = data_508_V_read522_rewind_reg_13915.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_509_V_read523_phi_phi_fu_24414_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_509_V_read523_phi_phi_fu_24414_p4 = ap_phi_mux_data_509_V_read523_rewind_phi_fu_13933_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_509_V_read523_phi_phi_fu_24414_p4 = data_509_V_read.read();
    } else {
        ap_phi_mux_data_509_V_read523_phi_phi_fu_24414_p4 = ap_phi_reg_pp0_iter0_data_509_V_read523_phi_reg_24410.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_509_V_read523_rewind_phi_fu_13933_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_509_V_read523_rewind_phi_fu_13933_p6 = data_509_V_read523_phi_reg_24410.read();
    } else {
        ap_phi_mux_data_509_V_read523_rewind_phi_fu_13933_p6 = data_509_V_read523_rewind_reg_13929.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_50_V_read64_phi_phi_fu_18447_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_50_V_read64_phi_phi_fu_18447_p4 = ap_phi_mux_data_50_V_read64_rewind_phi_fu_7507_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_50_V_read64_phi_phi_fu_18447_p4 = data_50_V_read.read();
    } else {
        ap_phi_mux_data_50_V_read64_phi_phi_fu_18447_p4 = ap_phi_reg_pp0_iter0_data_50_V_read64_phi_reg_18443.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_50_V_read64_rewind_phi_fu_7507_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_50_V_read64_rewind_phi_fu_7507_p6 = data_50_V_read64_phi_reg_18443.read();
    } else {
        ap_phi_mux_data_50_V_read64_rewind_phi_fu_7507_p6 = data_50_V_read64_rewind_reg_7503.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_510_V_read524_phi_phi_fu_24427_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_510_V_read524_phi_phi_fu_24427_p4 = ap_phi_mux_data_510_V_read524_rewind_phi_fu_13947_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_510_V_read524_phi_phi_fu_24427_p4 = data_510_V_read.read();
    } else {
        ap_phi_mux_data_510_V_read524_phi_phi_fu_24427_p4 = ap_phi_reg_pp0_iter0_data_510_V_read524_phi_reg_24423.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_510_V_read524_rewind_phi_fu_13947_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_510_V_read524_rewind_phi_fu_13947_p6 = data_510_V_read524_phi_reg_24423.read();
    } else {
        ap_phi_mux_data_510_V_read524_rewind_phi_fu_13947_p6 = data_510_V_read524_rewind_reg_13943.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_511_V_read525_phi_phi_fu_24440_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_511_V_read525_phi_phi_fu_24440_p4 = ap_phi_mux_data_511_V_read525_rewind_phi_fu_13961_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_511_V_read525_phi_phi_fu_24440_p4 = data_511_V_read.read();
    } else {
        ap_phi_mux_data_511_V_read525_phi_phi_fu_24440_p4 = ap_phi_reg_pp0_iter0_data_511_V_read525_phi_reg_24436.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_511_V_read525_rewind_phi_fu_13961_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_511_V_read525_rewind_phi_fu_13961_p6 = data_511_V_read525_phi_reg_24436.read();
    } else {
        ap_phi_mux_data_511_V_read525_rewind_phi_fu_13961_p6 = data_511_V_read525_rewind_reg_13957.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_512_V_read526_phi_phi_fu_24453_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_512_V_read526_phi_phi_fu_24453_p4 = ap_phi_mux_data_512_V_read526_rewind_phi_fu_13975_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_512_V_read526_phi_phi_fu_24453_p4 = data_512_V_read.read();
    } else {
        ap_phi_mux_data_512_V_read526_phi_phi_fu_24453_p4 = ap_phi_reg_pp0_iter0_data_512_V_read526_phi_reg_24449.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_512_V_read526_rewind_phi_fu_13975_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_512_V_read526_rewind_phi_fu_13975_p6 = data_512_V_read526_phi_reg_24449.read();
    } else {
        ap_phi_mux_data_512_V_read526_rewind_phi_fu_13975_p6 = data_512_V_read526_rewind_reg_13971.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_513_V_read527_phi_phi_fu_24466_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_513_V_read527_phi_phi_fu_24466_p4 = ap_phi_mux_data_513_V_read527_rewind_phi_fu_13989_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_513_V_read527_phi_phi_fu_24466_p4 = data_513_V_read.read();
    } else {
        ap_phi_mux_data_513_V_read527_phi_phi_fu_24466_p4 = ap_phi_reg_pp0_iter0_data_513_V_read527_phi_reg_24462.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_513_V_read527_rewind_phi_fu_13989_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_513_V_read527_rewind_phi_fu_13989_p6 = data_513_V_read527_phi_reg_24462.read();
    } else {
        ap_phi_mux_data_513_V_read527_rewind_phi_fu_13989_p6 = data_513_V_read527_rewind_reg_13985.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_514_V_read528_phi_phi_fu_24479_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_514_V_read528_phi_phi_fu_24479_p4 = ap_phi_mux_data_514_V_read528_rewind_phi_fu_14003_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_514_V_read528_phi_phi_fu_24479_p4 = data_514_V_read.read();
    } else {
        ap_phi_mux_data_514_V_read528_phi_phi_fu_24479_p4 = ap_phi_reg_pp0_iter0_data_514_V_read528_phi_reg_24475.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_514_V_read528_rewind_phi_fu_14003_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_514_V_read528_rewind_phi_fu_14003_p6 = data_514_V_read528_phi_reg_24475.read();
    } else {
        ap_phi_mux_data_514_V_read528_rewind_phi_fu_14003_p6 = data_514_V_read528_rewind_reg_13999.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_515_V_read529_phi_phi_fu_24492_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_515_V_read529_phi_phi_fu_24492_p4 = ap_phi_mux_data_515_V_read529_rewind_phi_fu_14017_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_515_V_read529_phi_phi_fu_24492_p4 = data_515_V_read.read();
    } else {
        ap_phi_mux_data_515_V_read529_phi_phi_fu_24492_p4 = ap_phi_reg_pp0_iter0_data_515_V_read529_phi_reg_24488.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_515_V_read529_rewind_phi_fu_14017_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_515_V_read529_rewind_phi_fu_14017_p6 = data_515_V_read529_phi_reg_24488.read();
    } else {
        ap_phi_mux_data_515_V_read529_rewind_phi_fu_14017_p6 = data_515_V_read529_rewind_reg_14013.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_516_V_read530_phi_phi_fu_24505_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_516_V_read530_phi_phi_fu_24505_p4 = ap_phi_mux_data_516_V_read530_rewind_phi_fu_14031_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_516_V_read530_phi_phi_fu_24505_p4 = data_516_V_read.read();
    } else {
        ap_phi_mux_data_516_V_read530_phi_phi_fu_24505_p4 = ap_phi_reg_pp0_iter0_data_516_V_read530_phi_reg_24501.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_516_V_read530_rewind_phi_fu_14031_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_516_V_read530_rewind_phi_fu_14031_p6 = data_516_V_read530_phi_reg_24501.read();
    } else {
        ap_phi_mux_data_516_V_read530_rewind_phi_fu_14031_p6 = data_516_V_read530_rewind_reg_14027.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_517_V_read531_phi_phi_fu_24518_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_517_V_read531_phi_phi_fu_24518_p4 = ap_phi_mux_data_517_V_read531_rewind_phi_fu_14045_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_517_V_read531_phi_phi_fu_24518_p4 = data_517_V_read.read();
    } else {
        ap_phi_mux_data_517_V_read531_phi_phi_fu_24518_p4 = ap_phi_reg_pp0_iter0_data_517_V_read531_phi_reg_24514.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_517_V_read531_rewind_phi_fu_14045_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_517_V_read531_rewind_phi_fu_14045_p6 = data_517_V_read531_phi_reg_24514.read();
    } else {
        ap_phi_mux_data_517_V_read531_rewind_phi_fu_14045_p6 = data_517_V_read531_rewind_reg_14041.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_518_V_read532_phi_phi_fu_24531_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_518_V_read532_phi_phi_fu_24531_p4 = ap_phi_mux_data_518_V_read532_rewind_phi_fu_14059_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_518_V_read532_phi_phi_fu_24531_p4 = data_518_V_read.read();
    } else {
        ap_phi_mux_data_518_V_read532_phi_phi_fu_24531_p4 = ap_phi_reg_pp0_iter0_data_518_V_read532_phi_reg_24527.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_518_V_read532_rewind_phi_fu_14059_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_518_V_read532_rewind_phi_fu_14059_p6 = data_518_V_read532_phi_reg_24527.read();
    } else {
        ap_phi_mux_data_518_V_read532_rewind_phi_fu_14059_p6 = data_518_V_read532_rewind_reg_14055.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_519_V_read533_phi_phi_fu_24544_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_519_V_read533_phi_phi_fu_24544_p4 = ap_phi_mux_data_519_V_read533_rewind_phi_fu_14073_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_519_V_read533_phi_phi_fu_24544_p4 = data_519_V_read.read();
    } else {
        ap_phi_mux_data_519_V_read533_phi_phi_fu_24544_p4 = ap_phi_reg_pp0_iter0_data_519_V_read533_phi_reg_24540.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_519_V_read533_rewind_phi_fu_14073_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_519_V_read533_rewind_phi_fu_14073_p6 = data_519_V_read533_phi_reg_24540.read();
    } else {
        ap_phi_mux_data_519_V_read533_rewind_phi_fu_14073_p6 = data_519_V_read533_rewind_reg_14069.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_51_V_read65_phi_phi_fu_18460_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_51_V_read65_phi_phi_fu_18460_p4 = ap_phi_mux_data_51_V_read65_rewind_phi_fu_7521_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_51_V_read65_phi_phi_fu_18460_p4 = data_51_V_read.read();
    } else {
        ap_phi_mux_data_51_V_read65_phi_phi_fu_18460_p4 = ap_phi_reg_pp0_iter0_data_51_V_read65_phi_reg_18456.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_51_V_read65_rewind_phi_fu_7521_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_51_V_read65_rewind_phi_fu_7521_p6 = data_51_V_read65_phi_reg_18456.read();
    } else {
        ap_phi_mux_data_51_V_read65_rewind_phi_fu_7521_p6 = data_51_V_read65_rewind_reg_7517.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_520_V_read534_phi_phi_fu_24557_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_520_V_read534_phi_phi_fu_24557_p4 = ap_phi_mux_data_520_V_read534_rewind_phi_fu_14087_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_520_V_read534_phi_phi_fu_24557_p4 = data_520_V_read.read();
    } else {
        ap_phi_mux_data_520_V_read534_phi_phi_fu_24557_p4 = ap_phi_reg_pp0_iter0_data_520_V_read534_phi_reg_24553.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_520_V_read534_rewind_phi_fu_14087_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_520_V_read534_rewind_phi_fu_14087_p6 = data_520_V_read534_phi_reg_24553.read();
    } else {
        ap_phi_mux_data_520_V_read534_rewind_phi_fu_14087_p6 = data_520_V_read534_rewind_reg_14083.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_521_V_read535_phi_phi_fu_24570_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_521_V_read535_phi_phi_fu_24570_p4 = ap_phi_mux_data_521_V_read535_rewind_phi_fu_14101_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_521_V_read535_phi_phi_fu_24570_p4 = data_521_V_read.read();
    } else {
        ap_phi_mux_data_521_V_read535_phi_phi_fu_24570_p4 = ap_phi_reg_pp0_iter0_data_521_V_read535_phi_reg_24566.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_521_V_read535_rewind_phi_fu_14101_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_521_V_read535_rewind_phi_fu_14101_p6 = data_521_V_read535_phi_reg_24566.read();
    } else {
        ap_phi_mux_data_521_V_read535_rewind_phi_fu_14101_p6 = data_521_V_read535_rewind_reg_14097.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_522_V_read536_phi_phi_fu_24583_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_522_V_read536_phi_phi_fu_24583_p4 = ap_phi_mux_data_522_V_read536_rewind_phi_fu_14115_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_522_V_read536_phi_phi_fu_24583_p4 = data_522_V_read.read();
    } else {
        ap_phi_mux_data_522_V_read536_phi_phi_fu_24583_p4 = ap_phi_reg_pp0_iter0_data_522_V_read536_phi_reg_24579.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_522_V_read536_rewind_phi_fu_14115_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_522_V_read536_rewind_phi_fu_14115_p6 = data_522_V_read536_phi_reg_24579.read();
    } else {
        ap_phi_mux_data_522_V_read536_rewind_phi_fu_14115_p6 = data_522_V_read536_rewind_reg_14111.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_523_V_read537_phi_phi_fu_24596_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_523_V_read537_phi_phi_fu_24596_p4 = ap_phi_mux_data_523_V_read537_rewind_phi_fu_14129_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_523_V_read537_phi_phi_fu_24596_p4 = data_523_V_read.read();
    } else {
        ap_phi_mux_data_523_V_read537_phi_phi_fu_24596_p4 = ap_phi_reg_pp0_iter0_data_523_V_read537_phi_reg_24592.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_523_V_read537_rewind_phi_fu_14129_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_523_V_read537_rewind_phi_fu_14129_p6 = data_523_V_read537_phi_reg_24592.read();
    } else {
        ap_phi_mux_data_523_V_read537_rewind_phi_fu_14129_p6 = data_523_V_read537_rewind_reg_14125.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_524_V_read538_phi_phi_fu_24609_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_524_V_read538_phi_phi_fu_24609_p4 = ap_phi_mux_data_524_V_read538_rewind_phi_fu_14143_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_524_V_read538_phi_phi_fu_24609_p4 = data_524_V_read.read();
    } else {
        ap_phi_mux_data_524_V_read538_phi_phi_fu_24609_p4 = ap_phi_reg_pp0_iter0_data_524_V_read538_phi_reg_24605.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_524_V_read538_rewind_phi_fu_14143_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_524_V_read538_rewind_phi_fu_14143_p6 = data_524_V_read538_phi_reg_24605.read();
    } else {
        ap_phi_mux_data_524_V_read538_rewind_phi_fu_14143_p6 = data_524_V_read538_rewind_reg_14139.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_525_V_read539_phi_phi_fu_24622_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_525_V_read539_phi_phi_fu_24622_p4 = ap_phi_mux_data_525_V_read539_rewind_phi_fu_14157_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_525_V_read539_phi_phi_fu_24622_p4 = data_525_V_read.read();
    } else {
        ap_phi_mux_data_525_V_read539_phi_phi_fu_24622_p4 = ap_phi_reg_pp0_iter0_data_525_V_read539_phi_reg_24618.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_525_V_read539_rewind_phi_fu_14157_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_525_V_read539_rewind_phi_fu_14157_p6 = data_525_V_read539_phi_reg_24618.read();
    } else {
        ap_phi_mux_data_525_V_read539_rewind_phi_fu_14157_p6 = data_525_V_read539_rewind_reg_14153.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_526_V_read540_phi_phi_fu_24635_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_526_V_read540_phi_phi_fu_24635_p4 = ap_phi_mux_data_526_V_read540_rewind_phi_fu_14171_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_526_V_read540_phi_phi_fu_24635_p4 = data_526_V_read.read();
    } else {
        ap_phi_mux_data_526_V_read540_phi_phi_fu_24635_p4 = ap_phi_reg_pp0_iter0_data_526_V_read540_phi_reg_24631.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_526_V_read540_rewind_phi_fu_14171_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_526_V_read540_rewind_phi_fu_14171_p6 = data_526_V_read540_phi_reg_24631.read();
    } else {
        ap_phi_mux_data_526_V_read540_rewind_phi_fu_14171_p6 = data_526_V_read540_rewind_reg_14167.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_527_V_read541_phi_phi_fu_24648_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_527_V_read541_phi_phi_fu_24648_p4 = ap_phi_mux_data_527_V_read541_rewind_phi_fu_14185_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_527_V_read541_phi_phi_fu_24648_p4 = data_527_V_read.read();
    } else {
        ap_phi_mux_data_527_V_read541_phi_phi_fu_24648_p4 = ap_phi_reg_pp0_iter0_data_527_V_read541_phi_reg_24644.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_527_V_read541_rewind_phi_fu_14185_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_527_V_read541_rewind_phi_fu_14185_p6 = data_527_V_read541_phi_reg_24644.read();
    } else {
        ap_phi_mux_data_527_V_read541_rewind_phi_fu_14185_p6 = data_527_V_read541_rewind_reg_14181.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_528_V_read542_phi_phi_fu_24661_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_528_V_read542_phi_phi_fu_24661_p4 = ap_phi_mux_data_528_V_read542_rewind_phi_fu_14199_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_6791_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_528_V_read542_phi_phi_fu_24661_p4 = data_528_V_read.read();
    } else {
        ap_phi_mux_data_528_V_read542_phi_phi_fu_24661_p4 = ap_phi_reg_pp0_iter0_data_528_V_read542_phi_reg_24657.read();
    }
}

void dense_wrapper_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config11_s::thread_ap_phi_mux_data_528_V_read542_rewind_phi_fu_14199_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_38076.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_528_V_read542_rewind_phi_fu_14199_p6 = data_528_V_read542_phi_reg_24657.read();
    } else {
        ap_phi_mux_data_528_V_read542_rewind_phi_fu_14199_p6 = data_528_V_read542_rewind_reg_14195.read();
    }
}

}

