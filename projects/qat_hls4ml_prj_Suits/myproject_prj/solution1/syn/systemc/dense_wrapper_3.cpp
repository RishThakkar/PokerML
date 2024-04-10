#include "dense_wrapper.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_wrapper::thread_acc_0_V_fu_42226_p2() {
    acc_0_V_fu_42226_p2 = (!sext_ln703_8_fu_42222_p1.read().is_01() || !acc_V_0_05_reg_28386.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln703_8_fu_42222_p1.read()) + sc_biguint<32>(acc_V_0_05_reg_28386.read()));
}

void dense_wrapper::thread_acc_1_V_fu_42290_p2() {
    acc_1_V_fu_42290_p2 = (!sext_ln703_11_fu_42286_p1.read().is_01() || !acc_V_1_06_reg_28372.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln703_11_fu_42286_p1.read()) + sc_biguint<32>(acc_V_1_06_reg_28372.read()));
}

void dense_wrapper::thread_acc_2_V_fu_42354_p2() {
    acc_2_V_fu_42354_p2 = (!sext_ln703_14_fu_42350_p1.read().is_01() || !acc_V_2_07_reg_28358.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln703_14_fu_42350_p1.read()) + sc_biguint<32>(acc_V_2_07_reg_28358.read()));
}

void dense_wrapper::thread_acc_3_V_fu_42418_p2() {
    acc_3_V_fu_42418_p2 = (!sext_ln703_17_fu_42414_p1.read().is_01() || !acc_V_3_08_reg_28344.read().is_01())? sc_lv<32>(): (sc_bigint<32>(sext_ln703_17_fu_42414_p1.read()) + sc_biguint<32>(acc_V_3_08_reg_28344.read()));
}

void dense_wrapper::thread_add_ln703_10_fu_42360_p2() {
    add_ln703_10_fu_42360_p2 = (!shl_ln703_5_fu_42339_p2.read().is_01() || !trunc_ln703_2_fu_42324_p1.read().is_01())? sc_lv<22>(): (sc_biguint<22>(shl_ln703_5_fu_42339_p2.read()) + sc_biguint<22>(trunc_ln703_2_fu_42324_p1.read()));
}

void dense_wrapper::thread_add_ln703_11_fu_42366_p2() {
    add_ln703_11_fu_42366_p2 = (!shl_ln703_4_fu_42319_p2.read().is_01() || !add_ln703_10_fu_42360_p2.read().is_01())? sc_lv<22>(): (sc_biguint<22>(shl_ln703_4_fu_42319_p2.read()) + sc_biguint<22>(add_ln703_10_fu_42360_p2.read()));
}

void dense_wrapper::thread_add_ln703_12_fu_42408_p2() {
    add_ln703_12_fu_42408_p2 = (!sext_ln703_15_fu_42379_p1.read().is_01() || !sext_ln703_16_fu_42399_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln703_15_fu_42379_p1.read()) + sc_bigint<24>(sext_ln703_16_fu_42399_p1.read()));
}

void dense_wrapper::thread_add_ln703_14_fu_42424_p2() {
    add_ln703_14_fu_42424_p2 = (!shl_ln703_7_fu_42403_p2.read().is_01() || !trunc_ln703_3_fu_42388_p1.read().is_01())? sc_lv<22>(): (sc_biguint<22>(shl_ln703_7_fu_42403_p2.read()) + sc_biguint<22>(trunc_ln703_3_fu_42388_p1.read()));
}

void dense_wrapper::thread_add_ln703_15_fu_42430_p2() {
    add_ln703_15_fu_42430_p2 = (!shl_ln703_6_fu_42383_p2.read().is_01() || !add_ln703_14_fu_42424_p2.read().is_01())? sc_lv<22>(): (sc_biguint<22>(shl_ln703_6_fu_42383_p2.read()) + sc_biguint<22>(add_ln703_14_fu_42424_p2.read()));
}

void dense_wrapper::thread_add_ln703_2_fu_42232_p2() {
    add_ln703_2_fu_42232_p2 = (!shl_ln703_1_fu_42211_p2.read().is_01() || !shl_ln703_fu_42195_p2.read().is_01())? sc_lv<22>(): (sc_biguint<22>(shl_ln703_1_fu_42211_p2.read()) + sc_biguint<22>(shl_ln703_fu_42195_p2.read()));
}

void dense_wrapper::thread_add_ln703_3_fu_42238_p2() {
    add_ln703_3_fu_42238_p2 = (!trunc_ln703_fu_42191_p1.read().is_01() || !add_ln703_2_fu_42232_p2.read().is_01())? sc_lv<22>(): (sc_biguint<22>(trunc_ln703_fu_42191_p1.read()) + sc_biguint<22>(add_ln703_2_fu_42232_p2.read()));
}

void dense_wrapper::thread_add_ln703_4_fu_42280_p2() {
    add_ln703_4_fu_42280_p2 = (!sext_ln703_9_fu_42251_p1.read().is_01() || !sext_ln703_10_fu_42271_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln703_9_fu_42251_p1.read()) + sc_bigint<24>(sext_ln703_10_fu_42271_p1.read()));
}

void dense_wrapper::thread_add_ln703_6_fu_42296_p2() {
    add_ln703_6_fu_42296_p2 = (!shl_ln703_3_fu_42275_p2.read().is_01() || !trunc_ln703_1_fu_42260_p1.read().is_01())? sc_lv<22>(): (sc_biguint<22>(shl_ln703_3_fu_42275_p2.read()) + sc_biguint<22>(trunc_ln703_1_fu_42260_p1.read()));
}

void dense_wrapper::thread_add_ln703_7_fu_42302_p2() {
    add_ln703_7_fu_42302_p2 = (!shl_ln703_2_fu_42255_p2.read().is_01() || !add_ln703_6_fu_42296_p2.read().is_01())? sc_lv<22>(): (sc_biguint<22>(shl_ln703_2_fu_42255_p2.read()) + sc_biguint<22>(add_ln703_6_fu_42296_p2.read()));
}

void dense_wrapper::thread_add_ln703_8_fu_42344_p2() {
    add_ln703_8_fu_42344_p2 = (!sext_ln703_12_fu_42315_p1.read().is_01() || !sext_ln703_13_fu_42335_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln703_12_fu_42315_p1.read()) + sc_bigint<24>(sext_ln703_13_fu_42335_p1.read()));
}

void dense_wrapper::thread_add_ln703_fu_42216_p2() {
    add_ln703_fu_42216_p2 = (!sext_ln703_fu_42187_p1.read().is_01() || !sext_ln703_7_fu_42207_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(sext_ln703_fu_42187_p1.read()) + sc_bigint<24>(sext_ln703_7_fu_42207_p1.read()));
}

void dense_wrapper::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void dense_wrapper::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void dense_wrapper::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper::thread_ap_block_state10_pp0_stage0_iter8() {
    ap_block_state10_pp0_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper::thread_ap_block_state11_pp0_stage0_iter9() {
    ap_block_state11_pp0_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper::thread_ap_block_state12_pp0_stage0_iter10() {
    ap_block_state12_pp0_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper::thread_ap_block_state13_pp0_stage0_iter11() {
    ap_block_state13_pp0_stage0_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper::thread_ap_block_state14_pp0_stage0_iter12() {
    ap_block_state14_pp0_stage0_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper::thread_ap_block_state15_pp0_stage0_iter13() {
    ap_block_state15_pp0_stage0_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper::thread_ap_block_state16_pp0_stage0_iter14() {
    ap_block_state16_pp0_stage0_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper::thread_ap_block_state17_pp0_stage0_iter15() {
    ap_block_state17_pp0_stage0_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper::thread_ap_block_state18_pp0_stage0_iter16() {
    ap_block_state18_pp0_stage0_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper::thread_ap_block_state19_pp0_stage0_iter17() {
    ap_block_state19_pp0_stage0_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper::thread_ap_block_state20_pp0_stage0_iter18() {
    ap_block_state20_pp0_stage0_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper::thread_ap_block_state4_pp0_stage0_iter2() {
    ap_block_state4_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper::thread_ap_block_state5_pp0_stage0_iter3() {
    ap_block_state5_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper::thread_ap_block_state6_pp0_stage0_iter4() {
    ap_block_state6_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper::thread_ap_block_state7_pp0_stage0_iter5() {
    ap_block_state7_pp0_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper::thread_ap_block_state8_pp0_stage0_iter6() {
    ap_block_state8_pp0_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper::thread_ap_block_state9_pp0_stage0_iter7() {
    ap_block_state9_pp0_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_wrapper::thread_ap_condition_16208() {
    ap_condition_16208 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0));
}

void dense_wrapper::thread_ap_condition_56() {
    ap_condition_56 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()));
}

void dense_wrapper::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter18.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln43_reg_44442_pp0_iter17_reg.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void dense_wrapper::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void dense_wrapper::thread_ap_enable_reg_pp0_iter0() {
    ap_enable_reg_pp0_iter0 = ap_start.read();
}

void dense_wrapper::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void dense_wrapper::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter17.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter18.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void dense_wrapper::thread_ap_idle_pp0_0to17() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter17.read()))) {
        ap_idle_pp0_0to17 = ap_const_logic_1;
    } else {
        ap_idle_pp0_0to17 = ap_const_logic_0;
    }
}

void dense_wrapper::thread_ap_phi_mux_data_0_V_read14_phi_phi_fu_18156_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_0_V_read14_phi_phi_fu_18156_p4 = ap_phi_mux_data_0_V_read14_rew_phi_fu_7165_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_0_V_read14_phi_phi_fu_18156_p4 = data_0_V_read.read();
    } else {
        ap_phi_mux_data_0_V_read14_phi_phi_fu_18156_p4 = ap_phi_reg_pp0_iter0_data_0_V_read14_phi_reg_18152.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_0_V_read14_rew_phi_fu_7165_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_0_V_read14_rew_phi_fu_7165_p6 = data_0_V_read14_phi_reg_18152.read();
    } else {
        ap_phi_mux_data_0_V_read14_rew_phi_fu_7165_p6 = data_0_V_read14_rew_reg_7161.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_100_V_read114_1_phi_fu_8565_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_100_V_read114_1_phi_fu_8565_p6 = data_100_V_read114_s_reg_19452.read();
    } else {
        ap_phi_mux_data_100_V_read114_1_phi_fu_8565_p6 = data_100_V_read114_1_reg_8561.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_100_V_read114_s_phi_fu_19456_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_100_V_read114_s_phi_fu_19456_p4 = ap_phi_mux_data_100_V_read114_1_phi_fu_8565_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_100_V_read114_s_phi_fu_19456_p4 = data_100_V_read.read();
    } else {
        ap_phi_mux_data_100_V_read114_s_phi_fu_19456_p4 = ap_phi_reg_pp0_iter0_data_100_V_read114_s_reg_19452.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_101_V_read115_1_phi_fu_8579_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_101_V_read115_1_phi_fu_8579_p6 = data_101_V_read115_s_reg_19465.read();
    } else {
        ap_phi_mux_data_101_V_read115_1_phi_fu_8579_p6 = data_101_V_read115_1_reg_8575.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_101_V_read115_s_phi_fu_19469_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_101_V_read115_s_phi_fu_19469_p4 = ap_phi_mux_data_101_V_read115_1_phi_fu_8579_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_101_V_read115_s_phi_fu_19469_p4 = data_101_V_read.read();
    } else {
        ap_phi_mux_data_101_V_read115_s_phi_fu_19469_p4 = ap_phi_reg_pp0_iter0_data_101_V_read115_s_reg_19465.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_102_V_read116_1_phi_fu_8593_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_102_V_read116_1_phi_fu_8593_p6 = data_102_V_read116_s_reg_19478.read();
    } else {
        ap_phi_mux_data_102_V_read116_1_phi_fu_8593_p6 = data_102_V_read116_1_reg_8589.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_102_V_read116_s_phi_fu_19482_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_102_V_read116_s_phi_fu_19482_p4 = ap_phi_mux_data_102_V_read116_1_phi_fu_8593_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_102_V_read116_s_phi_fu_19482_p4 = data_102_V_read.read();
    } else {
        ap_phi_mux_data_102_V_read116_s_phi_fu_19482_p4 = ap_phi_reg_pp0_iter0_data_102_V_read116_s_reg_19478.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_103_V_read117_1_phi_fu_8607_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_103_V_read117_1_phi_fu_8607_p6 = data_103_V_read117_s_reg_19491.read();
    } else {
        ap_phi_mux_data_103_V_read117_1_phi_fu_8607_p6 = data_103_V_read117_1_reg_8603.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_103_V_read117_s_phi_fu_19495_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_103_V_read117_s_phi_fu_19495_p4 = ap_phi_mux_data_103_V_read117_1_phi_fu_8607_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_103_V_read117_s_phi_fu_19495_p4 = data_103_V_read.read();
    } else {
        ap_phi_mux_data_103_V_read117_s_phi_fu_19495_p4 = ap_phi_reg_pp0_iter0_data_103_V_read117_s_reg_19491.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_104_V_read118_1_phi_fu_8621_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_104_V_read118_1_phi_fu_8621_p6 = data_104_V_read118_s_reg_19504.read();
    } else {
        ap_phi_mux_data_104_V_read118_1_phi_fu_8621_p6 = data_104_V_read118_1_reg_8617.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_104_V_read118_s_phi_fu_19508_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_104_V_read118_s_phi_fu_19508_p4 = ap_phi_mux_data_104_V_read118_1_phi_fu_8621_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_104_V_read118_s_phi_fu_19508_p4 = data_104_V_read.read();
    } else {
        ap_phi_mux_data_104_V_read118_s_phi_fu_19508_p4 = ap_phi_reg_pp0_iter0_data_104_V_read118_s_reg_19504.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_105_V_read119_1_phi_fu_8635_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_105_V_read119_1_phi_fu_8635_p6 = data_105_V_read119_s_reg_19517.read();
    } else {
        ap_phi_mux_data_105_V_read119_1_phi_fu_8635_p6 = data_105_V_read119_1_reg_8631.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_105_V_read119_s_phi_fu_19521_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_105_V_read119_s_phi_fu_19521_p4 = ap_phi_mux_data_105_V_read119_1_phi_fu_8635_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_105_V_read119_s_phi_fu_19521_p4 = data_105_V_read.read();
    } else {
        ap_phi_mux_data_105_V_read119_s_phi_fu_19521_p4 = ap_phi_reg_pp0_iter0_data_105_V_read119_s_reg_19517.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_106_V_read120_1_phi_fu_8649_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_106_V_read120_1_phi_fu_8649_p6 = data_106_V_read120_s_reg_19530.read();
    } else {
        ap_phi_mux_data_106_V_read120_1_phi_fu_8649_p6 = data_106_V_read120_1_reg_8645.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_106_V_read120_s_phi_fu_19534_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_106_V_read120_s_phi_fu_19534_p4 = ap_phi_mux_data_106_V_read120_1_phi_fu_8649_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_106_V_read120_s_phi_fu_19534_p4 = data_106_V_read.read();
    } else {
        ap_phi_mux_data_106_V_read120_s_phi_fu_19534_p4 = ap_phi_reg_pp0_iter0_data_106_V_read120_s_reg_19530.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_107_V_read121_1_phi_fu_8663_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_107_V_read121_1_phi_fu_8663_p6 = data_107_V_read121_s_reg_19543.read();
    } else {
        ap_phi_mux_data_107_V_read121_1_phi_fu_8663_p6 = data_107_V_read121_1_reg_8659.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_107_V_read121_s_phi_fu_19547_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_107_V_read121_s_phi_fu_19547_p4 = ap_phi_mux_data_107_V_read121_1_phi_fu_8663_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_107_V_read121_s_phi_fu_19547_p4 = data_107_V_read.read();
    } else {
        ap_phi_mux_data_107_V_read121_s_phi_fu_19547_p4 = ap_phi_reg_pp0_iter0_data_107_V_read121_s_reg_19543.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_108_V_read122_1_phi_fu_8677_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_108_V_read122_1_phi_fu_8677_p6 = data_108_V_read122_s_reg_19556.read();
    } else {
        ap_phi_mux_data_108_V_read122_1_phi_fu_8677_p6 = data_108_V_read122_1_reg_8673.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_108_V_read122_s_phi_fu_19560_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_108_V_read122_s_phi_fu_19560_p4 = ap_phi_mux_data_108_V_read122_1_phi_fu_8677_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_108_V_read122_s_phi_fu_19560_p4 = data_108_V_read.read();
    } else {
        ap_phi_mux_data_108_V_read122_s_phi_fu_19560_p4 = ap_phi_reg_pp0_iter0_data_108_V_read122_s_reg_19556.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_109_V_read123_1_phi_fu_8691_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_109_V_read123_1_phi_fu_8691_p6 = data_109_V_read123_s_reg_19569.read();
    } else {
        ap_phi_mux_data_109_V_read123_1_phi_fu_8691_p6 = data_109_V_read123_1_reg_8687.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_109_V_read123_s_phi_fu_19573_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_109_V_read123_s_phi_fu_19573_p4 = ap_phi_mux_data_109_V_read123_1_phi_fu_8691_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_109_V_read123_s_phi_fu_19573_p4 = data_109_V_read.read();
    } else {
        ap_phi_mux_data_109_V_read123_s_phi_fu_19573_p4 = ap_phi_reg_pp0_iter0_data_109_V_read123_s_reg_19569.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_10_V_read24_ph_phi_fu_18286_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_10_V_read24_ph_phi_fu_18286_p4 = ap_phi_mux_data_10_V_read24_re_phi_fu_7305_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_10_V_read24_ph_phi_fu_18286_p4 = data_10_V_read.read();
    } else {
        ap_phi_mux_data_10_V_read24_ph_phi_fu_18286_p4 = ap_phi_reg_pp0_iter0_data_10_V_read24_ph_reg_18282.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_10_V_read24_re_phi_fu_7305_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_10_V_read24_re_phi_fu_7305_p6 = data_10_V_read24_ph_reg_18282.read();
    } else {
        ap_phi_mux_data_10_V_read24_re_phi_fu_7305_p6 = data_10_V_read24_re_reg_7301.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_110_V_read124_1_phi_fu_8705_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_110_V_read124_1_phi_fu_8705_p6 = data_110_V_read124_s_reg_19582.read();
    } else {
        ap_phi_mux_data_110_V_read124_1_phi_fu_8705_p6 = data_110_V_read124_1_reg_8701.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_110_V_read124_s_phi_fu_19586_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_110_V_read124_s_phi_fu_19586_p4 = ap_phi_mux_data_110_V_read124_1_phi_fu_8705_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_110_V_read124_s_phi_fu_19586_p4 = data_110_V_read.read();
    } else {
        ap_phi_mux_data_110_V_read124_s_phi_fu_19586_p4 = ap_phi_reg_pp0_iter0_data_110_V_read124_s_reg_19582.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_111_V_read125_1_phi_fu_8719_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_111_V_read125_1_phi_fu_8719_p6 = data_111_V_read125_s_reg_19595.read();
    } else {
        ap_phi_mux_data_111_V_read125_1_phi_fu_8719_p6 = data_111_V_read125_1_reg_8715.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_111_V_read125_s_phi_fu_19599_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_111_V_read125_s_phi_fu_19599_p4 = ap_phi_mux_data_111_V_read125_1_phi_fu_8719_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_111_V_read125_s_phi_fu_19599_p4 = data_111_V_read.read();
    } else {
        ap_phi_mux_data_111_V_read125_s_phi_fu_19599_p4 = ap_phi_reg_pp0_iter0_data_111_V_read125_s_reg_19595.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_112_V_read126_1_phi_fu_8733_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_112_V_read126_1_phi_fu_8733_p6 = data_112_V_read126_s_reg_19608.read();
    } else {
        ap_phi_mux_data_112_V_read126_1_phi_fu_8733_p6 = data_112_V_read126_1_reg_8729.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_112_V_read126_s_phi_fu_19612_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_112_V_read126_s_phi_fu_19612_p4 = ap_phi_mux_data_112_V_read126_1_phi_fu_8733_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_112_V_read126_s_phi_fu_19612_p4 = data_112_V_read.read();
    } else {
        ap_phi_mux_data_112_V_read126_s_phi_fu_19612_p4 = ap_phi_reg_pp0_iter0_data_112_V_read126_s_reg_19608.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_113_V_read127_1_phi_fu_8747_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_113_V_read127_1_phi_fu_8747_p6 = data_113_V_read127_s_reg_19621.read();
    } else {
        ap_phi_mux_data_113_V_read127_1_phi_fu_8747_p6 = data_113_V_read127_1_reg_8743.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_113_V_read127_s_phi_fu_19625_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_113_V_read127_s_phi_fu_19625_p4 = ap_phi_mux_data_113_V_read127_1_phi_fu_8747_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_113_V_read127_s_phi_fu_19625_p4 = data_113_V_read.read();
    } else {
        ap_phi_mux_data_113_V_read127_s_phi_fu_19625_p4 = ap_phi_reg_pp0_iter0_data_113_V_read127_s_reg_19621.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_114_V_read128_1_phi_fu_8761_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_114_V_read128_1_phi_fu_8761_p6 = data_114_V_read128_s_reg_19634.read();
    } else {
        ap_phi_mux_data_114_V_read128_1_phi_fu_8761_p6 = data_114_V_read128_1_reg_8757.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_114_V_read128_s_phi_fu_19638_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_114_V_read128_s_phi_fu_19638_p4 = ap_phi_mux_data_114_V_read128_1_phi_fu_8761_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_114_V_read128_s_phi_fu_19638_p4 = data_114_V_read.read();
    } else {
        ap_phi_mux_data_114_V_read128_s_phi_fu_19638_p4 = ap_phi_reg_pp0_iter0_data_114_V_read128_s_reg_19634.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_115_V_read129_1_phi_fu_8775_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_115_V_read129_1_phi_fu_8775_p6 = data_115_V_read129_s_reg_19647.read();
    } else {
        ap_phi_mux_data_115_V_read129_1_phi_fu_8775_p6 = data_115_V_read129_1_reg_8771.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_115_V_read129_s_phi_fu_19651_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_115_V_read129_s_phi_fu_19651_p4 = ap_phi_mux_data_115_V_read129_1_phi_fu_8775_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_115_V_read129_s_phi_fu_19651_p4 = data_115_V_read.read();
    } else {
        ap_phi_mux_data_115_V_read129_s_phi_fu_19651_p4 = ap_phi_reg_pp0_iter0_data_115_V_read129_s_reg_19647.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_116_V_read130_1_phi_fu_8789_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_116_V_read130_1_phi_fu_8789_p6 = data_116_V_read130_s_reg_19660.read();
    } else {
        ap_phi_mux_data_116_V_read130_1_phi_fu_8789_p6 = data_116_V_read130_1_reg_8785.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_116_V_read130_s_phi_fu_19664_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_116_V_read130_s_phi_fu_19664_p4 = ap_phi_mux_data_116_V_read130_1_phi_fu_8789_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_116_V_read130_s_phi_fu_19664_p4 = data_116_V_read.read();
    } else {
        ap_phi_mux_data_116_V_read130_s_phi_fu_19664_p4 = ap_phi_reg_pp0_iter0_data_116_V_read130_s_reg_19660.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_117_V_read131_1_phi_fu_8803_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_117_V_read131_1_phi_fu_8803_p6 = data_117_V_read131_s_reg_19673.read();
    } else {
        ap_phi_mux_data_117_V_read131_1_phi_fu_8803_p6 = data_117_V_read131_1_reg_8799.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_117_V_read131_s_phi_fu_19677_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_117_V_read131_s_phi_fu_19677_p4 = ap_phi_mux_data_117_V_read131_1_phi_fu_8803_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_117_V_read131_s_phi_fu_19677_p4 = data_117_V_read.read();
    } else {
        ap_phi_mux_data_117_V_read131_s_phi_fu_19677_p4 = ap_phi_reg_pp0_iter0_data_117_V_read131_s_reg_19673.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_118_V_read132_1_phi_fu_8817_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_118_V_read132_1_phi_fu_8817_p6 = data_118_V_read132_s_reg_19686.read();
    } else {
        ap_phi_mux_data_118_V_read132_1_phi_fu_8817_p6 = data_118_V_read132_1_reg_8813.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_118_V_read132_s_phi_fu_19690_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_118_V_read132_s_phi_fu_19690_p4 = ap_phi_mux_data_118_V_read132_1_phi_fu_8817_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_118_V_read132_s_phi_fu_19690_p4 = data_118_V_read.read();
    } else {
        ap_phi_mux_data_118_V_read132_s_phi_fu_19690_p4 = ap_phi_reg_pp0_iter0_data_118_V_read132_s_reg_19686.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_119_V_read133_1_phi_fu_8831_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_119_V_read133_1_phi_fu_8831_p6 = data_119_V_read133_s_reg_19699.read();
    } else {
        ap_phi_mux_data_119_V_read133_1_phi_fu_8831_p6 = data_119_V_read133_1_reg_8827.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_119_V_read133_s_phi_fu_19703_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_119_V_read133_s_phi_fu_19703_p4 = ap_phi_mux_data_119_V_read133_1_phi_fu_8831_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_119_V_read133_s_phi_fu_19703_p4 = data_119_V_read.read();
    } else {
        ap_phi_mux_data_119_V_read133_s_phi_fu_19703_p4 = ap_phi_reg_pp0_iter0_data_119_V_read133_s_reg_19699.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_11_V_read25_ph_phi_fu_18299_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_11_V_read25_ph_phi_fu_18299_p4 = ap_phi_mux_data_11_V_read25_re_phi_fu_7319_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_11_V_read25_ph_phi_fu_18299_p4 = data_11_V_read.read();
    } else {
        ap_phi_mux_data_11_V_read25_ph_phi_fu_18299_p4 = ap_phi_reg_pp0_iter0_data_11_V_read25_ph_reg_18295.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_11_V_read25_re_phi_fu_7319_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_11_V_read25_re_phi_fu_7319_p6 = data_11_V_read25_ph_reg_18295.read();
    } else {
        ap_phi_mux_data_11_V_read25_re_phi_fu_7319_p6 = data_11_V_read25_re_reg_7315.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_120_V_read134_1_phi_fu_8845_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_120_V_read134_1_phi_fu_8845_p6 = data_120_V_read134_s_reg_19712.read();
    } else {
        ap_phi_mux_data_120_V_read134_1_phi_fu_8845_p6 = data_120_V_read134_1_reg_8841.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_120_V_read134_s_phi_fu_19716_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_120_V_read134_s_phi_fu_19716_p4 = ap_phi_mux_data_120_V_read134_1_phi_fu_8845_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_120_V_read134_s_phi_fu_19716_p4 = data_120_V_read.read();
    } else {
        ap_phi_mux_data_120_V_read134_s_phi_fu_19716_p4 = ap_phi_reg_pp0_iter0_data_120_V_read134_s_reg_19712.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_121_V_read135_1_phi_fu_8859_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_121_V_read135_1_phi_fu_8859_p6 = data_121_V_read135_s_reg_19725.read();
    } else {
        ap_phi_mux_data_121_V_read135_1_phi_fu_8859_p6 = data_121_V_read135_1_reg_8855.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_121_V_read135_s_phi_fu_19729_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_121_V_read135_s_phi_fu_19729_p4 = ap_phi_mux_data_121_V_read135_1_phi_fu_8859_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_121_V_read135_s_phi_fu_19729_p4 = data_121_V_read.read();
    } else {
        ap_phi_mux_data_121_V_read135_s_phi_fu_19729_p4 = ap_phi_reg_pp0_iter0_data_121_V_read135_s_reg_19725.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_122_V_read136_1_phi_fu_8873_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_122_V_read136_1_phi_fu_8873_p6 = data_122_V_read136_s_reg_19738.read();
    } else {
        ap_phi_mux_data_122_V_read136_1_phi_fu_8873_p6 = data_122_V_read136_1_reg_8869.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_122_V_read136_s_phi_fu_19742_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_122_V_read136_s_phi_fu_19742_p4 = ap_phi_mux_data_122_V_read136_1_phi_fu_8873_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_122_V_read136_s_phi_fu_19742_p4 = data_122_V_read.read();
    } else {
        ap_phi_mux_data_122_V_read136_s_phi_fu_19742_p4 = ap_phi_reg_pp0_iter0_data_122_V_read136_s_reg_19738.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_123_V_read137_1_phi_fu_8887_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_123_V_read137_1_phi_fu_8887_p6 = data_123_V_read137_s_reg_19751.read();
    } else {
        ap_phi_mux_data_123_V_read137_1_phi_fu_8887_p6 = data_123_V_read137_1_reg_8883.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_123_V_read137_s_phi_fu_19755_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_123_V_read137_s_phi_fu_19755_p4 = ap_phi_mux_data_123_V_read137_1_phi_fu_8887_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_123_V_read137_s_phi_fu_19755_p4 = data_123_V_read.read();
    } else {
        ap_phi_mux_data_123_V_read137_s_phi_fu_19755_p4 = ap_phi_reg_pp0_iter0_data_123_V_read137_s_reg_19751.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_124_V_read138_1_phi_fu_8901_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_124_V_read138_1_phi_fu_8901_p6 = data_124_V_read138_s_reg_19764.read();
    } else {
        ap_phi_mux_data_124_V_read138_1_phi_fu_8901_p6 = data_124_V_read138_1_reg_8897.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_124_V_read138_s_phi_fu_19768_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_124_V_read138_s_phi_fu_19768_p4 = ap_phi_mux_data_124_V_read138_1_phi_fu_8901_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_124_V_read138_s_phi_fu_19768_p4 = data_124_V_read.read();
    } else {
        ap_phi_mux_data_124_V_read138_s_phi_fu_19768_p4 = ap_phi_reg_pp0_iter0_data_124_V_read138_s_reg_19764.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_125_V_read139_1_phi_fu_8915_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_125_V_read139_1_phi_fu_8915_p6 = data_125_V_read139_s_reg_19777.read();
    } else {
        ap_phi_mux_data_125_V_read139_1_phi_fu_8915_p6 = data_125_V_read139_1_reg_8911.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_125_V_read139_s_phi_fu_19781_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_125_V_read139_s_phi_fu_19781_p4 = ap_phi_mux_data_125_V_read139_1_phi_fu_8915_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_125_V_read139_s_phi_fu_19781_p4 = data_125_V_read.read();
    } else {
        ap_phi_mux_data_125_V_read139_s_phi_fu_19781_p4 = ap_phi_reg_pp0_iter0_data_125_V_read139_s_reg_19777.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_126_V_read140_1_phi_fu_8929_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_126_V_read140_1_phi_fu_8929_p6 = data_126_V_read140_s_reg_19790.read();
    } else {
        ap_phi_mux_data_126_V_read140_1_phi_fu_8929_p6 = data_126_V_read140_1_reg_8925.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_126_V_read140_s_phi_fu_19794_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_126_V_read140_s_phi_fu_19794_p4 = ap_phi_mux_data_126_V_read140_1_phi_fu_8929_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_126_V_read140_s_phi_fu_19794_p4 = data_126_V_read.read();
    } else {
        ap_phi_mux_data_126_V_read140_s_phi_fu_19794_p4 = ap_phi_reg_pp0_iter0_data_126_V_read140_s_reg_19790.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_127_V_read141_1_phi_fu_8943_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_127_V_read141_1_phi_fu_8943_p6 = data_127_V_read141_s_reg_19803.read();
    } else {
        ap_phi_mux_data_127_V_read141_1_phi_fu_8943_p6 = data_127_V_read141_1_reg_8939.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_127_V_read141_s_phi_fu_19807_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_127_V_read141_s_phi_fu_19807_p4 = ap_phi_mux_data_127_V_read141_1_phi_fu_8943_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_127_V_read141_s_phi_fu_19807_p4 = data_127_V_read.read();
    } else {
        ap_phi_mux_data_127_V_read141_s_phi_fu_19807_p4 = ap_phi_reg_pp0_iter0_data_127_V_read141_s_reg_19803.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_128_V_read142_1_phi_fu_8957_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_128_V_read142_1_phi_fu_8957_p6 = data_128_V_read142_s_reg_19816.read();
    } else {
        ap_phi_mux_data_128_V_read142_1_phi_fu_8957_p6 = data_128_V_read142_1_reg_8953.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_128_V_read142_s_phi_fu_19820_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_128_V_read142_s_phi_fu_19820_p4 = ap_phi_mux_data_128_V_read142_1_phi_fu_8957_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_128_V_read142_s_phi_fu_19820_p4 = data_128_V_read.read();
    } else {
        ap_phi_mux_data_128_V_read142_s_phi_fu_19820_p4 = ap_phi_reg_pp0_iter0_data_128_V_read142_s_reg_19816.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_129_V_read143_1_phi_fu_8971_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_129_V_read143_1_phi_fu_8971_p6 = data_129_V_read143_s_reg_19829.read();
    } else {
        ap_phi_mux_data_129_V_read143_1_phi_fu_8971_p6 = data_129_V_read143_1_reg_8967.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_129_V_read143_s_phi_fu_19833_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_129_V_read143_s_phi_fu_19833_p4 = ap_phi_mux_data_129_V_read143_1_phi_fu_8971_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_129_V_read143_s_phi_fu_19833_p4 = data_129_V_read.read();
    } else {
        ap_phi_mux_data_129_V_read143_s_phi_fu_19833_p4 = ap_phi_reg_pp0_iter0_data_129_V_read143_s_reg_19829.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_12_V_read26_ph_phi_fu_18312_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_12_V_read26_ph_phi_fu_18312_p4 = ap_phi_mux_data_12_V_read26_re_phi_fu_7333_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_12_V_read26_ph_phi_fu_18312_p4 = data_12_V_read.read();
    } else {
        ap_phi_mux_data_12_V_read26_ph_phi_fu_18312_p4 = ap_phi_reg_pp0_iter0_data_12_V_read26_ph_reg_18308.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_12_V_read26_re_phi_fu_7333_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_12_V_read26_re_phi_fu_7333_p6 = data_12_V_read26_ph_reg_18308.read();
    } else {
        ap_phi_mux_data_12_V_read26_re_phi_fu_7333_p6 = data_12_V_read26_re_reg_7329.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_130_V_read144_1_phi_fu_8985_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_130_V_read144_1_phi_fu_8985_p6 = data_130_V_read144_s_reg_19842.read();
    } else {
        ap_phi_mux_data_130_V_read144_1_phi_fu_8985_p6 = data_130_V_read144_1_reg_8981.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_130_V_read144_s_phi_fu_19846_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_130_V_read144_s_phi_fu_19846_p4 = ap_phi_mux_data_130_V_read144_1_phi_fu_8985_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_130_V_read144_s_phi_fu_19846_p4 = data_130_V_read.read();
    } else {
        ap_phi_mux_data_130_V_read144_s_phi_fu_19846_p4 = ap_phi_reg_pp0_iter0_data_130_V_read144_s_reg_19842.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_131_V_read145_1_phi_fu_8999_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_131_V_read145_1_phi_fu_8999_p6 = data_131_V_read145_s_reg_19855.read();
    } else {
        ap_phi_mux_data_131_V_read145_1_phi_fu_8999_p6 = data_131_V_read145_1_reg_8995.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_131_V_read145_s_phi_fu_19859_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_131_V_read145_s_phi_fu_19859_p4 = ap_phi_mux_data_131_V_read145_1_phi_fu_8999_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_131_V_read145_s_phi_fu_19859_p4 = data_131_V_read.read();
    } else {
        ap_phi_mux_data_131_V_read145_s_phi_fu_19859_p4 = ap_phi_reg_pp0_iter0_data_131_V_read145_s_reg_19855.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_132_V_read146_1_phi_fu_9013_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_132_V_read146_1_phi_fu_9013_p6 = data_132_V_read146_s_reg_19868.read();
    } else {
        ap_phi_mux_data_132_V_read146_1_phi_fu_9013_p6 = data_132_V_read146_1_reg_9009.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_132_V_read146_s_phi_fu_19872_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_132_V_read146_s_phi_fu_19872_p4 = ap_phi_mux_data_132_V_read146_1_phi_fu_9013_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_132_V_read146_s_phi_fu_19872_p4 = data_132_V_read.read();
    } else {
        ap_phi_mux_data_132_V_read146_s_phi_fu_19872_p4 = ap_phi_reg_pp0_iter0_data_132_V_read146_s_reg_19868.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_133_V_read147_1_phi_fu_9027_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_133_V_read147_1_phi_fu_9027_p6 = data_133_V_read147_s_reg_19881.read();
    } else {
        ap_phi_mux_data_133_V_read147_1_phi_fu_9027_p6 = data_133_V_read147_1_reg_9023.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_133_V_read147_s_phi_fu_19885_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_133_V_read147_s_phi_fu_19885_p4 = ap_phi_mux_data_133_V_read147_1_phi_fu_9027_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_133_V_read147_s_phi_fu_19885_p4 = data_133_V_read.read();
    } else {
        ap_phi_mux_data_133_V_read147_s_phi_fu_19885_p4 = ap_phi_reg_pp0_iter0_data_133_V_read147_s_reg_19881.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_134_V_read148_1_phi_fu_9041_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_134_V_read148_1_phi_fu_9041_p6 = data_134_V_read148_s_reg_19894.read();
    } else {
        ap_phi_mux_data_134_V_read148_1_phi_fu_9041_p6 = data_134_V_read148_1_reg_9037.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_134_V_read148_s_phi_fu_19898_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_134_V_read148_s_phi_fu_19898_p4 = ap_phi_mux_data_134_V_read148_1_phi_fu_9041_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_134_V_read148_s_phi_fu_19898_p4 = data_134_V_read.read();
    } else {
        ap_phi_mux_data_134_V_read148_s_phi_fu_19898_p4 = ap_phi_reg_pp0_iter0_data_134_V_read148_s_reg_19894.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_135_V_read149_1_phi_fu_9055_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_135_V_read149_1_phi_fu_9055_p6 = data_135_V_read149_s_reg_19907.read();
    } else {
        ap_phi_mux_data_135_V_read149_1_phi_fu_9055_p6 = data_135_V_read149_1_reg_9051.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_135_V_read149_s_phi_fu_19911_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_135_V_read149_s_phi_fu_19911_p4 = ap_phi_mux_data_135_V_read149_1_phi_fu_9055_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_135_V_read149_s_phi_fu_19911_p4 = data_135_V_read.read();
    } else {
        ap_phi_mux_data_135_V_read149_s_phi_fu_19911_p4 = ap_phi_reg_pp0_iter0_data_135_V_read149_s_reg_19907.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_136_V_read150_1_phi_fu_9069_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_136_V_read150_1_phi_fu_9069_p6 = data_136_V_read150_s_reg_19920.read();
    } else {
        ap_phi_mux_data_136_V_read150_1_phi_fu_9069_p6 = data_136_V_read150_1_reg_9065.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_136_V_read150_s_phi_fu_19924_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_136_V_read150_s_phi_fu_19924_p4 = ap_phi_mux_data_136_V_read150_1_phi_fu_9069_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_136_V_read150_s_phi_fu_19924_p4 = data_136_V_read.read();
    } else {
        ap_phi_mux_data_136_V_read150_s_phi_fu_19924_p4 = ap_phi_reg_pp0_iter0_data_136_V_read150_s_reg_19920.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_137_V_read151_1_phi_fu_9083_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_137_V_read151_1_phi_fu_9083_p6 = data_137_V_read151_s_reg_19933.read();
    } else {
        ap_phi_mux_data_137_V_read151_1_phi_fu_9083_p6 = data_137_V_read151_1_reg_9079.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_137_V_read151_s_phi_fu_19937_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_137_V_read151_s_phi_fu_19937_p4 = ap_phi_mux_data_137_V_read151_1_phi_fu_9083_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_137_V_read151_s_phi_fu_19937_p4 = data_137_V_read.read();
    } else {
        ap_phi_mux_data_137_V_read151_s_phi_fu_19937_p4 = ap_phi_reg_pp0_iter0_data_137_V_read151_s_reg_19933.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_138_V_read152_1_phi_fu_9097_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_138_V_read152_1_phi_fu_9097_p6 = data_138_V_read152_s_reg_19946.read();
    } else {
        ap_phi_mux_data_138_V_read152_1_phi_fu_9097_p6 = data_138_V_read152_1_reg_9093.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_138_V_read152_s_phi_fu_19950_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_138_V_read152_s_phi_fu_19950_p4 = ap_phi_mux_data_138_V_read152_1_phi_fu_9097_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_138_V_read152_s_phi_fu_19950_p4 = data_138_V_read.read();
    } else {
        ap_phi_mux_data_138_V_read152_s_phi_fu_19950_p4 = ap_phi_reg_pp0_iter0_data_138_V_read152_s_reg_19946.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_139_V_read153_1_phi_fu_9111_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_139_V_read153_1_phi_fu_9111_p6 = data_139_V_read153_s_reg_19959.read();
    } else {
        ap_phi_mux_data_139_V_read153_1_phi_fu_9111_p6 = data_139_V_read153_1_reg_9107.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_139_V_read153_s_phi_fu_19963_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_139_V_read153_s_phi_fu_19963_p4 = ap_phi_mux_data_139_V_read153_1_phi_fu_9111_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_139_V_read153_s_phi_fu_19963_p4 = data_139_V_read.read();
    } else {
        ap_phi_mux_data_139_V_read153_s_phi_fu_19963_p4 = ap_phi_reg_pp0_iter0_data_139_V_read153_s_reg_19959.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_13_V_read27_ph_phi_fu_18325_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_13_V_read27_ph_phi_fu_18325_p4 = ap_phi_mux_data_13_V_read27_re_phi_fu_7347_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_13_V_read27_ph_phi_fu_18325_p4 = data_13_V_read.read();
    } else {
        ap_phi_mux_data_13_V_read27_ph_phi_fu_18325_p4 = ap_phi_reg_pp0_iter0_data_13_V_read27_ph_reg_18321.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_13_V_read27_re_phi_fu_7347_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_13_V_read27_re_phi_fu_7347_p6 = data_13_V_read27_ph_reg_18321.read();
    } else {
        ap_phi_mux_data_13_V_read27_re_phi_fu_7347_p6 = data_13_V_read27_re_reg_7343.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_140_V_read154_1_phi_fu_9125_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_140_V_read154_1_phi_fu_9125_p6 = data_140_V_read154_s_reg_19972.read();
    } else {
        ap_phi_mux_data_140_V_read154_1_phi_fu_9125_p6 = data_140_V_read154_1_reg_9121.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_140_V_read154_s_phi_fu_19976_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_140_V_read154_s_phi_fu_19976_p4 = ap_phi_mux_data_140_V_read154_1_phi_fu_9125_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_140_V_read154_s_phi_fu_19976_p4 = data_140_V_read.read();
    } else {
        ap_phi_mux_data_140_V_read154_s_phi_fu_19976_p4 = ap_phi_reg_pp0_iter0_data_140_V_read154_s_reg_19972.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_141_V_read155_1_phi_fu_9139_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_141_V_read155_1_phi_fu_9139_p6 = data_141_V_read155_s_reg_19985.read();
    } else {
        ap_phi_mux_data_141_V_read155_1_phi_fu_9139_p6 = data_141_V_read155_1_reg_9135.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_141_V_read155_s_phi_fu_19989_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_141_V_read155_s_phi_fu_19989_p4 = ap_phi_mux_data_141_V_read155_1_phi_fu_9139_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_141_V_read155_s_phi_fu_19989_p4 = data_141_V_read.read();
    } else {
        ap_phi_mux_data_141_V_read155_s_phi_fu_19989_p4 = ap_phi_reg_pp0_iter0_data_141_V_read155_s_reg_19985.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_142_V_read156_1_phi_fu_9153_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_142_V_read156_1_phi_fu_9153_p6 = data_142_V_read156_s_reg_19998.read();
    } else {
        ap_phi_mux_data_142_V_read156_1_phi_fu_9153_p6 = data_142_V_read156_1_reg_9149.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_142_V_read156_s_phi_fu_20002_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_142_V_read156_s_phi_fu_20002_p4 = ap_phi_mux_data_142_V_read156_1_phi_fu_9153_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_142_V_read156_s_phi_fu_20002_p4 = data_142_V_read.read();
    } else {
        ap_phi_mux_data_142_V_read156_s_phi_fu_20002_p4 = ap_phi_reg_pp0_iter0_data_142_V_read156_s_reg_19998.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_143_V_read157_1_phi_fu_9167_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_143_V_read157_1_phi_fu_9167_p6 = data_143_V_read157_s_reg_20011.read();
    } else {
        ap_phi_mux_data_143_V_read157_1_phi_fu_9167_p6 = data_143_V_read157_1_reg_9163.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_143_V_read157_s_phi_fu_20015_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_143_V_read157_s_phi_fu_20015_p4 = ap_phi_mux_data_143_V_read157_1_phi_fu_9167_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_143_V_read157_s_phi_fu_20015_p4 = data_143_V_read.read();
    } else {
        ap_phi_mux_data_143_V_read157_s_phi_fu_20015_p4 = ap_phi_reg_pp0_iter0_data_143_V_read157_s_reg_20011.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_144_V_read158_1_phi_fu_9181_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_144_V_read158_1_phi_fu_9181_p6 = data_144_V_read158_s_reg_20024.read();
    } else {
        ap_phi_mux_data_144_V_read158_1_phi_fu_9181_p6 = data_144_V_read158_1_reg_9177.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_144_V_read158_s_phi_fu_20028_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_144_V_read158_s_phi_fu_20028_p4 = ap_phi_mux_data_144_V_read158_1_phi_fu_9181_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_144_V_read158_s_phi_fu_20028_p4 = data_144_V_read.read();
    } else {
        ap_phi_mux_data_144_V_read158_s_phi_fu_20028_p4 = ap_phi_reg_pp0_iter0_data_144_V_read158_s_reg_20024.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_145_V_read159_1_phi_fu_9195_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_145_V_read159_1_phi_fu_9195_p6 = data_145_V_read159_s_reg_20037.read();
    } else {
        ap_phi_mux_data_145_V_read159_1_phi_fu_9195_p6 = data_145_V_read159_1_reg_9191.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_145_V_read159_s_phi_fu_20041_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_145_V_read159_s_phi_fu_20041_p4 = ap_phi_mux_data_145_V_read159_1_phi_fu_9195_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_145_V_read159_s_phi_fu_20041_p4 = data_145_V_read.read();
    } else {
        ap_phi_mux_data_145_V_read159_s_phi_fu_20041_p4 = ap_phi_reg_pp0_iter0_data_145_V_read159_s_reg_20037.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_146_V_read160_1_phi_fu_9209_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_146_V_read160_1_phi_fu_9209_p6 = data_146_V_read160_s_reg_20050.read();
    } else {
        ap_phi_mux_data_146_V_read160_1_phi_fu_9209_p6 = data_146_V_read160_1_reg_9205.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_146_V_read160_s_phi_fu_20054_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_146_V_read160_s_phi_fu_20054_p4 = ap_phi_mux_data_146_V_read160_1_phi_fu_9209_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_146_V_read160_s_phi_fu_20054_p4 = data_146_V_read.read();
    } else {
        ap_phi_mux_data_146_V_read160_s_phi_fu_20054_p4 = ap_phi_reg_pp0_iter0_data_146_V_read160_s_reg_20050.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_147_V_read161_1_phi_fu_9223_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_147_V_read161_1_phi_fu_9223_p6 = data_147_V_read161_s_reg_20063.read();
    } else {
        ap_phi_mux_data_147_V_read161_1_phi_fu_9223_p6 = data_147_V_read161_1_reg_9219.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_147_V_read161_s_phi_fu_20067_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_147_V_read161_s_phi_fu_20067_p4 = ap_phi_mux_data_147_V_read161_1_phi_fu_9223_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_147_V_read161_s_phi_fu_20067_p4 = data_147_V_read.read();
    } else {
        ap_phi_mux_data_147_V_read161_s_phi_fu_20067_p4 = ap_phi_reg_pp0_iter0_data_147_V_read161_s_reg_20063.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_148_V_read162_1_phi_fu_9237_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_148_V_read162_1_phi_fu_9237_p6 = data_148_V_read162_s_reg_20076.read();
    } else {
        ap_phi_mux_data_148_V_read162_1_phi_fu_9237_p6 = data_148_V_read162_1_reg_9233.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_148_V_read162_s_phi_fu_20080_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_148_V_read162_s_phi_fu_20080_p4 = ap_phi_mux_data_148_V_read162_1_phi_fu_9237_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_148_V_read162_s_phi_fu_20080_p4 = data_148_V_read.read();
    } else {
        ap_phi_mux_data_148_V_read162_s_phi_fu_20080_p4 = ap_phi_reg_pp0_iter0_data_148_V_read162_s_reg_20076.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_149_V_read163_1_phi_fu_9251_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_149_V_read163_1_phi_fu_9251_p6 = data_149_V_read163_s_reg_20089.read();
    } else {
        ap_phi_mux_data_149_V_read163_1_phi_fu_9251_p6 = data_149_V_read163_1_reg_9247.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_149_V_read163_s_phi_fu_20093_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_149_V_read163_s_phi_fu_20093_p4 = ap_phi_mux_data_149_V_read163_1_phi_fu_9251_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_149_V_read163_s_phi_fu_20093_p4 = data_149_V_read.read();
    } else {
        ap_phi_mux_data_149_V_read163_s_phi_fu_20093_p4 = ap_phi_reg_pp0_iter0_data_149_V_read163_s_reg_20089.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_14_V_read28_ph_phi_fu_18338_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_14_V_read28_ph_phi_fu_18338_p4 = ap_phi_mux_data_14_V_read28_re_phi_fu_7361_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_14_V_read28_ph_phi_fu_18338_p4 = data_14_V_read.read();
    } else {
        ap_phi_mux_data_14_V_read28_ph_phi_fu_18338_p4 = ap_phi_reg_pp0_iter0_data_14_V_read28_ph_reg_18334.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_14_V_read28_re_phi_fu_7361_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_14_V_read28_re_phi_fu_7361_p6 = data_14_V_read28_ph_reg_18334.read();
    } else {
        ap_phi_mux_data_14_V_read28_re_phi_fu_7361_p6 = data_14_V_read28_re_reg_7357.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_150_V_read164_1_phi_fu_9265_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_150_V_read164_1_phi_fu_9265_p6 = data_150_V_read164_s_reg_20102.read();
    } else {
        ap_phi_mux_data_150_V_read164_1_phi_fu_9265_p6 = data_150_V_read164_1_reg_9261.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_150_V_read164_s_phi_fu_20106_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_150_V_read164_s_phi_fu_20106_p4 = ap_phi_mux_data_150_V_read164_1_phi_fu_9265_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_150_V_read164_s_phi_fu_20106_p4 = data_150_V_read.read();
    } else {
        ap_phi_mux_data_150_V_read164_s_phi_fu_20106_p4 = ap_phi_reg_pp0_iter0_data_150_V_read164_s_reg_20102.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_151_V_read165_1_phi_fu_9279_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_151_V_read165_1_phi_fu_9279_p6 = data_151_V_read165_s_reg_20115.read();
    } else {
        ap_phi_mux_data_151_V_read165_1_phi_fu_9279_p6 = data_151_V_read165_1_reg_9275.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_151_V_read165_s_phi_fu_20119_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_151_V_read165_s_phi_fu_20119_p4 = ap_phi_mux_data_151_V_read165_1_phi_fu_9279_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_151_V_read165_s_phi_fu_20119_p4 = data_151_V_read.read();
    } else {
        ap_phi_mux_data_151_V_read165_s_phi_fu_20119_p4 = ap_phi_reg_pp0_iter0_data_151_V_read165_s_reg_20115.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_152_V_read166_1_phi_fu_9293_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_152_V_read166_1_phi_fu_9293_p6 = data_152_V_read166_s_reg_20128.read();
    } else {
        ap_phi_mux_data_152_V_read166_1_phi_fu_9293_p6 = data_152_V_read166_1_reg_9289.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_152_V_read166_s_phi_fu_20132_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_152_V_read166_s_phi_fu_20132_p4 = ap_phi_mux_data_152_V_read166_1_phi_fu_9293_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_152_V_read166_s_phi_fu_20132_p4 = data_152_V_read.read();
    } else {
        ap_phi_mux_data_152_V_read166_s_phi_fu_20132_p4 = ap_phi_reg_pp0_iter0_data_152_V_read166_s_reg_20128.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_153_V_read167_1_phi_fu_9307_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_153_V_read167_1_phi_fu_9307_p6 = data_153_V_read167_s_reg_20141.read();
    } else {
        ap_phi_mux_data_153_V_read167_1_phi_fu_9307_p6 = data_153_V_read167_1_reg_9303.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_153_V_read167_s_phi_fu_20145_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_153_V_read167_s_phi_fu_20145_p4 = ap_phi_mux_data_153_V_read167_1_phi_fu_9307_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_153_V_read167_s_phi_fu_20145_p4 = data_153_V_read.read();
    } else {
        ap_phi_mux_data_153_V_read167_s_phi_fu_20145_p4 = ap_phi_reg_pp0_iter0_data_153_V_read167_s_reg_20141.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_154_V_read168_1_phi_fu_9321_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_154_V_read168_1_phi_fu_9321_p6 = data_154_V_read168_s_reg_20154.read();
    } else {
        ap_phi_mux_data_154_V_read168_1_phi_fu_9321_p6 = data_154_V_read168_1_reg_9317.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_154_V_read168_s_phi_fu_20158_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_154_V_read168_s_phi_fu_20158_p4 = ap_phi_mux_data_154_V_read168_1_phi_fu_9321_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_154_V_read168_s_phi_fu_20158_p4 = data_154_V_read.read();
    } else {
        ap_phi_mux_data_154_V_read168_s_phi_fu_20158_p4 = ap_phi_reg_pp0_iter0_data_154_V_read168_s_reg_20154.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_155_V_read169_1_phi_fu_9335_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_155_V_read169_1_phi_fu_9335_p6 = data_155_V_read169_s_reg_20167.read();
    } else {
        ap_phi_mux_data_155_V_read169_1_phi_fu_9335_p6 = data_155_V_read169_1_reg_9331.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_155_V_read169_s_phi_fu_20171_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_155_V_read169_s_phi_fu_20171_p4 = ap_phi_mux_data_155_V_read169_1_phi_fu_9335_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_155_V_read169_s_phi_fu_20171_p4 = data_155_V_read.read();
    } else {
        ap_phi_mux_data_155_V_read169_s_phi_fu_20171_p4 = ap_phi_reg_pp0_iter0_data_155_V_read169_s_reg_20167.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_156_V_read170_1_phi_fu_9349_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_156_V_read170_1_phi_fu_9349_p6 = data_156_V_read170_s_reg_20180.read();
    } else {
        ap_phi_mux_data_156_V_read170_1_phi_fu_9349_p6 = data_156_V_read170_1_reg_9345.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_156_V_read170_s_phi_fu_20184_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_156_V_read170_s_phi_fu_20184_p4 = ap_phi_mux_data_156_V_read170_1_phi_fu_9349_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_156_V_read170_s_phi_fu_20184_p4 = data_156_V_read.read();
    } else {
        ap_phi_mux_data_156_V_read170_s_phi_fu_20184_p4 = ap_phi_reg_pp0_iter0_data_156_V_read170_s_reg_20180.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_157_V_read171_1_phi_fu_9363_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_157_V_read171_1_phi_fu_9363_p6 = data_157_V_read171_s_reg_20193.read();
    } else {
        ap_phi_mux_data_157_V_read171_1_phi_fu_9363_p6 = data_157_V_read171_1_reg_9359.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_157_V_read171_s_phi_fu_20197_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_157_V_read171_s_phi_fu_20197_p4 = ap_phi_mux_data_157_V_read171_1_phi_fu_9363_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_157_V_read171_s_phi_fu_20197_p4 = data_157_V_read.read();
    } else {
        ap_phi_mux_data_157_V_read171_s_phi_fu_20197_p4 = ap_phi_reg_pp0_iter0_data_157_V_read171_s_reg_20193.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_158_V_read172_1_phi_fu_9377_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_158_V_read172_1_phi_fu_9377_p6 = data_158_V_read172_s_reg_20206.read();
    } else {
        ap_phi_mux_data_158_V_read172_1_phi_fu_9377_p6 = data_158_V_read172_1_reg_9373.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_158_V_read172_s_phi_fu_20210_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_158_V_read172_s_phi_fu_20210_p4 = ap_phi_mux_data_158_V_read172_1_phi_fu_9377_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_158_V_read172_s_phi_fu_20210_p4 = data_158_V_read.read();
    } else {
        ap_phi_mux_data_158_V_read172_s_phi_fu_20210_p4 = ap_phi_reg_pp0_iter0_data_158_V_read172_s_reg_20206.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_159_V_read173_1_phi_fu_9391_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_159_V_read173_1_phi_fu_9391_p6 = data_159_V_read173_s_reg_20219.read();
    } else {
        ap_phi_mux_data_159_V_read173_1_phi_fu_9391_p6 = data_159_V_read173_1_reg_9387.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_159_V_read173_s_phi_fu_20223_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_159_V_read173_s_phi_fu_20223_p4 = ap_phi_mux_data_159_V_read173_1_phi_fu_9391_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_159_V_read173_s_phi_fu_20223_p4 = data_159_V_read.read();
    } else {
        ap_phi_mux_data_159_V_read173_s_phi_fu_20223_p4 = ap_phi_reg_pp0_iter0_data_159_V_read173_s_reg_20219.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_15_V_read29_ph_phi_fu_18351_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_15_V_read29_ph_phi_fu_18351_p4 = ap_phi_mux_data_15_V_read29_re_phi_fu_7375_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_15_V_read29_ph_phi_fu_18351_p4 = data_15_V_read.read();
    } else {
        ap_phi_mux_data_15_V_read29_ph_phi_fu_18351_p4 = ap_phi_reg_pp0_iter0_data_15_V_read29_ph_reg_18347.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_15_V_read29_re_phi_fu_7375_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_15_V_read29_re_phi_fu_7375_p6 = data_15_V_read29_ph_reg_18347.read();
    } else {
        ap_phi_mux_data_15_V_read29_re_phi_fu_7375_p6 = data_15_V_read29_re_reg_7371.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_160_V_read174_1_phi_fu_9405_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_160_V_read174_1_phi_fu_9405_p6 = data_160_V_read174_s_reg_20232.read();
    } else {
        ap_phi_mux_data_160_V_read174_1_phi_fu_9405_p6 = data_160_V_read174_1_reg_9401.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_160_V_read174_s_phi_fu_20236_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_160_V_read174_s_phi_fu_20236_p4 = ap_phi_mux_data_160_V_read174_1_phi_fu_9405_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_160_V_read174_s_phi_fu_20236_p4 = data_160_V_read.read();
    } else {
        ap_phi_mux_data_160_V_read174_s_phi_fu_20236_p4 = ap_phi_reg_pp0_iter0_data_160_V_read174_s_reg_20232.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_161_V_read175_1_phi_fu_9419_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_161_V_read175_1_phi_fu_9419_p6 = data_161_V_read175_s_reg_20245.read();
    } else {
        ap_phi_mux_data_161_V_read175_1_phi_fu_9419_p6 = data_161_V_read175_1_reg_9415.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_161_V_read175_s_phi_fu_20249_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_161_V_read175_s_phi_fu_20249_p4 = ap_phi_mux_data_161_V_read175_1_phi_fu_9419_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_161_V_read175_s_phi_fu_20249_p4 = data_161_V_read.read();
    } else {
        ap_phi_mux_data_161_V_read175_s_phi_fu_20249_p4 = ap_phi_reg_pp0_iter0_data_161_V_read175_s_reg_20245.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_162_V_read176_1_phi_fu_9433_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_162_V_read176_1_phi_fu_9433_p6 = data_162_V_read176_s_reg_20258.read();
    } else {
        ap_phi_mux_data_162_V_read176_1_phi_fu_9433_p6 = data_162_V_read176_1_reg_9429.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_162_V_read176_s_phi_fu_20262_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_162_V_read176_s_phi_fu_20262_p4 = ap_phi_mux_data_162_V_read176_1_phi_fu_9433_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_162_V_read176_s_phi_fu_20262_p4 = data_162_V_read.read();
    } else {
        ap_phi_mux_data_162_V_read176_s_phi_fu_20262_p4 = ap_phi_reg_pp0_iter0_data_162_V_read176_s_reg_20258.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_163_V_read177_1_phi_fu_9447_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_163_V_read177_1_phi_fu_9447_p6 = data_163_V_read177_s_reg_20271.read();
    } else {
        ap_phi_mux_data_163_V_read177_1_phi_fu_9447_p6 = data_163_V_read177_1_reg_9443.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_163_V_read177_s_phi_fu_20275_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_163_V_read177_s_phi_fu_20275_p4 = ap_phi_mux_data_163_V_read177_1_phi_fu_9447_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_163_V_read177_s_phi_fu_20275_p4 = data_163_V_read.read();
    } else {
        ap_phi_mux_data_163_V_read177_s_phi_fu_20275_p4 = ap_phi_reg_pp0_iter0_data_163_V_read177_s_reg_20271.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_164_V_read178_1_phi_fu_9461_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_164_V_read178_1_phi_fu_9461_p6 = data_164_V_read178_s_reg_20284.read();
    } else {
        ap_phi_mux_data_164_V_read178_1_phi_fu_9461_p6 = data_164_V_read178_1_reg_9457.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_164_V_read178_s_phi_fu_20288_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_164_V_read178_s_phi_fu_20288_p4 = ap_phi_mux_data_164_V_read178_1_phi_fu_9461_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_164_V_read178_s_phi_fu_20288_p4 = data_164_V_read.read();
    } else {
        ap_phi_mux_data_164_V_read178_s_phi_fu_20288_p4 = ap_phi_reg_pp0_iter0_data_164_V_read178_s_reg_20284.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_165_V_read179_1_phi_fu_9475_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_165_V_read179_1_phi_fu_9475_p6 = data_165_V_read179_s_reg_20297.read();
    } else {
        ap_phi_mux_data_165_V_read179_1_phi_fu_9475_p6 = data_165_V_read179_1_reg_9471.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_165_V_read179_s_phi_fu_20301_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_165_V_read179_s_phi_fu_20301_p4 = ap_phi_mux_data_165_V_read179_1_phi_fu_9475_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_165_V_read179_s_phi_fu_20301_p4 = data_165_V_read.read();
    } else {
        ap_phi_mux_data_165_V_read179_s_phi_fu_20301_p4 = ap_phi_reg_pp0_iter0_data_165_V_read179_s_reg_20297.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_166_V_read180_1_phi_fu_9489_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_166_V_read180_1_phi_fu_9489_p6 = data_166_V_read180_s_reg_20310.read();
    } else {
        ap_phi_mux_data_166_V_read180_1_phi_fu_9489_p6 = data_166_V_read180_1_reg_9485.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_166_V_read180_s_phi_fu_20314_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_166_V_read180_s_phi_fu_20314_p4 = ap_phi_mux_data_166_V_read180_1_phi_fu_9489_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_166_V_read180_s_phi_fu_20314_p4 = data_166_V_read.read();
    } else {
        ap_phi_mux_data_166_V_read180_s_phi_fu_20314_p4 = ap_phi_reg_pp0_iter0_data_166_V_read180_s_reg_20310.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_167_V_read181_1_phi_fu_9503_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_167_V_read181_1_phi_fu_9503_p6 = data_167_V_read181_s_reg_20323.read();
    } else {
        ap_phi_mux_data_167_V_read181_1_phi_fu_9503_p6 = data_167_V_read181_1_reg_9499.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_167_V_read181_s_phi_fu_20327_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_167_V_read181_s_phi_fu_20327_p4 = ap_phi_mux_data_167_V_read181_1_phi_fu_9503_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_167_V_read181_s_phi_fu_20327_p4 = data_167_V_read.read();
    } else {
        ap_phi_mux_data_167_V_read181_s_phi_fu_20327_p4 = ap_phi_reg_pp0_iter0_data_167_V_read181_s_reg_20323.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_168_V_read182_1_phi_fu_9517_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_168_V_read182_1_phi_fu_9517_p6 = data_168_V_read182_s_reg_20336.read();
    } else {
        ap_phi_mux_data_168_V_read182_1_phi_fu_9517_p6 = data_168_V_read182_1_reg_9513.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_168_V_read182_s_phi_fu_20340_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_168_V_read182_s_phi_fu_20340_p4 = ap_phi_mux_data_168_V_read182_1_phi_fu_9517_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_168_V_read182_s_phi_fu_20340_p4 = data_168_V_read.read();
    } else {
        ap_phi_mux_data_168_V_read182_s_phi_fu_20340_p4 = ap_phi_reg_pp0_iter0_data_168_V_read182_s_reg_20336.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_169_V_read183_1_phi_fu_9531_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_169_V_read183_1_phi_fu_9531_p6 = data_169_V_read183_s_reg_20349.read();
    } else {
        ap_phi_mux_data_169_V_read183_1_phi_fu_9531_p6 = data_169_V_read183_1_reg_9527.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_169_V_read183_s_phi_fu_20353_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_169_V_read183_s_phi_fu_20353_p4 = ap_phi_mux_data_169_V_read183_1_phi_fu_9531_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_169_V_read183_s_phi_fu_20353_p4 = data_169_V_read.read();
    } else {
        ap_phi_mux_data_169_V_read183_s_phi_fu_20353_p4 = ap_phi_reg_pp0_iter0_data_169_V_read183_s_reg_20349.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_16_V_read30_ph_phi_fu_18364_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_16_V_read30_ph_phi_fu_18364_p4 = ap_phi_mux_data_16_V_read30_re_phi_fu_7389_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_16_V_read30_ph_phi_fu_18364_p4 = data_16_V_read.read();
    } else {
        ap_phi_mux_data_16_V_read30_ph_phi_fu_18364_p4 = ap_phi_reg_pp0_iter0_data_16_V_read30_ph_reg_18360.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_16_V_read30_re_phi_fu_7389_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_16_V_read30_re_phi_fu_7389_p6 = data_16_V_read30_ph_reg_18360.read();
    } else {
        ap_phi_mux_data_16_V_read30_re_phi_fu_7389_p6 = data_16_V_read30_re_reg_7385.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_170_V_read184_1_phi_fu_9545_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_170_V_read184_1_phi_fu_9545_p6 = data_170_V_read184_s_reg_20362.read();
    } else {
        ap_phi_mux_data_170_V_read184_1_phi_fu_9545_p6 = data_170_V_read184_1_reg_9541.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_170_V_read184_s_phi_fu_20366_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_170_V_read184_s_phi_fu_20366_p4 = ap_phi_mux_data_170_V_read184_1_phi_fu_9545_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_170_V_read184_s_phi_fu_20366_p4 = data_170_V_read.read();
    } else {
        ap_phi_mux_data_170_V_read184_s_phi_fu_20366_p4 = ap_phi_reg_pp0_iter0_data_170_V_read184_s_reg_20362.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_171_V_read185_1_phi_fu_9559_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_171_V_read185_1_phi_fu_9559_p6 = data_171_V_read185_s_reg_20375.read();
    } else {
        ap_phi_mux_data_171_V_read185_1_phi_fu_9559_p6 = data_171_V_read185_1_reg_9555.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_171_V_read185_s_phi_fu_20379_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_171_V_read185_s_phi_fu_20379_p4 = ap_phi_mux_data_171_V_read185_1_phi_fu_9559_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_171_V_read185_s_phi_fu_20379_p4 = data_171_V_read.read();
    } else {
        ap_phi_mux_data_171_V_read185_s_phi_fu_20379_p4 = ap_phi_reg_pp0_iter0_data_171_V_read185_s_reg_20375.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_172_V_read186_1_phi_fu_9573_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_172_V_read186_1_phi_fu_9573_p6 = data_172_V_read186_s_reg_20388.read();
    } else {
        ap_phi_mux_data_172_V_read186_1_phi_fu_9573_p6 = data_172_V_read186_1_reg_9569.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_172_V_read186_s_phi_fu_20392_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_172_V_read186_s_phi_fu_20392_p4 = ap_phi_mux_data_172_V_read186_1_phi_fu_9573_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_172_V_read186_s_phi_fu_20392_p4 = data_172_V_read.read();
    } else {
        ap_phi_mux_data_172_V_read186_s_phi_fu_20392_p4 = ap_phi_reg_pp0_iter0_data_172_V_read186_s_reg_20388.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_173_V_read187_1_phi_fu_9587_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_173_V_read187_1_phi_fu_9587_p6 = data_173_V_read187_s_reg_20401.read();
    } else {
        ap_phi_mux_data_173_V_read187_1_phi_fu_9587_p6 = data_173_V_read187_1_reg_9583.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_173_V_read187_s_phi_fu_20405_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_173_V_read187_s_phi_fu_20405_p4 = ap_phi_mux_data_173_V_read187_1_phi_fu_9587_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_173_V_read187_s_phi_fu_20405_p4 = data_173_V_read.read();
    } else {
        ap_phi_mux_data_173_V_read187_s_phi_fu_20405_p4 = ap_phi_reg_pp0_iter0_data_173_V_read187_s_reg_20401.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_174_V_read188_1_phi_fu_9601_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_174_V_read188_1_phi_fu_9601_p6 = data_174_V_read188_s_reg_20414.read();
    } else {
        ap_phi_mux_data_174_V_read188_1_phi_fu_9601_p6 = data_174_V_read188_1_reg_9597.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_174_V_read188_s_phi_fu_20418_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_174_V_read188_s_phi_fu_20418_p4 = ap_phi_mux_data_174_V_read188_1_phi_fu_9601_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_174_V_read188_s_phi_fu_20418_p4 = data_174_V_read.read();
    } else {
        ap_phi_mux_data_174_V_read188_s_phi_fu_20418_p4 = ap_phi_reg_pp0_iter0_data_174_V_read188_s_reg_20414.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_175_V_read189_1_phi_fu_9615_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_175_V_read189_1_phi_fu_9615_p6 = data_175_V_read189_s_reg_20427.read();
    } else {
        ap_phi_mux_data_175_V_read189_1_phi_fu_9615_p6 = data_175_V_read189_1_reg_9611.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_175_V_read189_s_phi_fu_20431_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_175_V_read189_s_phi_fu_20431_p4 = ap_phi_mux_data_175_V_read189_1_phi_fu_9615_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_175_V_read189_s_phi_fu_20431_p4 = data_175_V_read.read();
    } else {
        ap_phi_mux_data_175_V_read189_s_phi_fu_20431_p4 = ap_phi_reg_pp0_iter0_data_175_V_read189_s_reg_20427.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_176_V_read190_1_phi_fu_9629_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_176_V_read190_1_phi_fu_9629_p6 = data_176_V_read190_s_reg_20440.read();
    } else {
        ap_phi_mux_data_176_V_read190_1_phi_fu_9629_p6 = data_176_V_read190_1_reg_9625.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_176_V_read190_s_phi_fu_20444_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_176_V_read190_s_phi_fu_20444_p4 = ap_phi_mux_data_176_V_read190_1_phi_fu_9629_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_176_V_read190_s_phi_fu_20444_p4 = data_176_V_read.read();
    } else {
        ap_phi_mux_data_176_V_read190_s_phi_fu_20444_p4 = ap_phi_reg_pp0_iter0_data_176_V_read190_s_reg_20440.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_177_V_read191_1_phi_fu_9643_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_177_V_read191_1_phi_fu_9643_p6 = data_177_V_read191_s_reg_20453.read();
    } else {
        ap_phi_mux_data_177_V_read191_1_phi_fu_9643_p6 = data_177_V_read191_1_reg_9639.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_177_V_read191_s_phi_fu_20457_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_177_V_read191_s_phi_fu_20457_p4 = ap_phi_mux_data_177_V_read191_1_phi_fu_9643_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_177_V_read191_s_phi_fu_20457_p4 = data_177_V_read.read();
    } else {
        ap_phi_mux_data_177_V_read191_s_phi_fu_20457_p4 = ap_phi_reg_pp0_iter0_data_177_V_read191_s_reg_20453.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_178_V_read192_1_phi_fu_9657_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_178_V_read192_1_phi_fu_9657_p6 = data_178_V_read192_s_reg_20466.read();
    } else {
        ap_phi_mux_data_178_V_read192_1_phi_fu_9657_p6 = data_178_V_read192_1_reg_9653.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_178_V_read192_s_phi_fu_20470_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_178_V_read192_s_phi_fu_20470_p4 = ap_phi_mux_data_178_V_read192_1_phi_fu_9657_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_178_V_read192_s_phi_fu_20470_p4 = data_178_V_read.read();
    } else {
        ap_phi_mux_data_178_V_read192_s_phi_fu_20470_p4 = ap_phi_reg_pp0_iter0_data_178_V_read192_s_reg_20466.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_179_V_read193_1_phi_fu_9671_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_179_V_read193_1_phi_fu_9671_p6 = data_179_V_read193_s_reg_20479.read();
    } else {
        ap_phi_mux_data_179_V_read193_1_phi_fu_9671_p6 = data_179_V_read193_1_reg_9667.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_179_V_read193_s_phi_fu_20483_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_179_V_read193_s_phi_fu_20483_p4 = ap_phi_mux_data_179_V_read193_1_phi_fu_9671_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_179_V_read193_s_phi_fu_20483_p4 = data_179_V_read.read();
    } else {
        ap_phi_mux_data_179_V_read193_s_phi_fu_20483_p4 = ap_phi_reg_pp0_iter0_data_179_V_read193_s_reg_20479.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_17_V_read31_ph_phi_fu_18377_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_17_V_read31_ph_phi_fu_18377_p4 = ap_phi_mux_data_17_V_read31_re_phi_fu_7403_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_17_V_read31_ph_phi_fu_18377_p4 = data_17_V_read.read();
    } else {
        ap_phi_mux_data_17_V_read31_ph_phi_fu_18377_p4 = ap_phi_reg_pp0_iter0_data_17_V_read31_ph_reg_18373.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_17_V_read31_re_phi_fu_7403_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_17_V_read31_re_phi_fu_7403_p6 = data_17_V_read31_ph_reg_18373.read();
    } else {
        ap_phi_mux_data_17_V_read31_re_phi_fu_7403_p6 = data_17_V_read31_re_reg_7399.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_180_V_read194_1_phi_fu_9685_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_180_V_read194_1_phi_fu_9685_p6 = data_180_V_read194_s_reg_20492.read();
    } else {
        ap_phi_mux_data_180_V_read194_1_phi_fu_9685_p6 = data_180_V_read194_1_reg_9681.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_180_V_read194_s_phi_fu_20496_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_180_V_read194_s_phi_fu_20496_p4 = ap_phi_mux_data_180_V_read194_1_phi_fu_9685_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_180_V_read194_s_phi_fu_20496_p4 = data_180_V_read.read();
    } else {
        ap_phi_mux_data_180_V_read194_s_phi_fu_20496_p4 = ap_phi_reg_pp0_iter0_data_180_V_read194_s_reg_20492.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_181_V_read195_1_phi_fu_9699_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_181_V_read195_1_phi_fu_9699_p6 = data_181_V_read195_s_reg_20505.read();
    } else {
        ap_phi_mux_data_181_V_read195_1_phi_fu_9699_p6 = data_181_V_read195_1_reg_9695.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_181_V_read195_s_phi_fu_20509_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_181_V_read195_s_phi_fu_20509_p4 = ap_phi_mux_data_181_V_read195_1_phi_fu_9699_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_181_V_read195_s_phi_fu_20509_p4 = data_181_V_read.read();
    } else {
        ap_phi_mux_data_181_V_read195_s_phi_fu_20509_p4 = ap_phi_reg_pp0_iter0_data_181_V_read195_s_reg_20505.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_182_V_read196_1_phi_fu_9713_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_182_V_read196_1_phi_fu_9713_p6 = data_182_V_read196_s_reg_20518.read();
    } else {
        ap_phi_mux_data_182_V_read196_1_phi_fu_9713_p6 = data_182_V_read196_1_reg_9709.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_182_V_read196_s_phi_fu_20522_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_182_V_read196_s_phi_fu_20522_p4 = ap_phi_mux_data_182_V_read196_1_phi_fu_9713_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_182_V_read196_s_phi_fu_20522_p4 = data_182_V_read.read();
    } else {
        ap_phi_mux_data_182_V_read196_s_phi_fu_20522_p4 = ap_phi_reg_pp0_iter0_data_182_V_read196_s_reg_20518.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_183_V_read197_1_phi_fu_9727_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_183_V_read197_1_phi_fu_9727_p6 = data_183_V_read197_s_reg_20531.read();
    } else {
        ap_phi_mux_data_183_V_read197_1_phi_fu_9727_p6 = data_183_V_read197_1_reg_9723.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_183_V_read197_s_phi_fu_20535_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_183_V_read197_s_phi_fu_20535_p4 = ap_phi_mux_data_183_V_read197_1_phi_fu_9727_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_183_V_read197_s_phi_fu_20535_p4 = data_183_V_read.read();
    } else {
        ap_phi_mux_data_183_V_read197_s_phi_fu_20535_p4 = ap_phi_reg_pp0_iter0_data_183_V_read197_s_reg_20531.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_184_V_read198_1_phi_fu_9741_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_184_V_read198_1_phi_fu_9741_p6 = data_184_V_read198_s_reg_20544.read();
    } else {
        ap_phi_mux_data_184_V_read198_1_phi_fu_9741_p6 = data_184_V_read198_1_reg_9737.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_184_V_read198_s_phi_fu_20548_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_184_V_read198_s_phi_fu_20548_p4 = ap_phi_mux_data_184_V_read198_1_phi_fu_9741_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_184_V_read198_s_phi_fu_20548_p4 = data_184_V_read.read();
    } else {
        ap_phi_mux_data_184_V_read198_s_phi_fu_20548_p4 = ap_phi_reg_pp0_iter0_data_184_V_read198_s_reg_20544.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_185_V_read199_1_phi_fu_9755_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_185_V_read199_1_phi_fu_9755_p6 = data_185_V_read199_s_reg_20557.read();
    } else {
        ap_phi_mux_data_185_V_read199_1_phi_fu_9755_p6 = data_185_V_read199_1_reg_9751.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_185_V_read199_s_phi_fu_20561_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_185_V_read199_s_phi_fu_20561_p4 = ap_phi_mux_data_185_V_read199_1_phi_fu_9755_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_185_V_read199_s_phi_fu_20561_p4 = data_185_V_read.read();
    } else {
        ap_phi_mux_data_185_V_read199_s_phi_fu_20561_p4 = ap_phi_reg_pp0_iter0_data_185_V_read199_s_reg_20557.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_186_V_read200_1_phi_fu_9769_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_186_V_read200_1_phi_fu_9769_p6 = data_186_V_read200_s_reg_20570.read();
    } else {
        ap_phi_mux_data_186_V_read200_1_phi_fu_9769_p6 = data_186_V_read200_1_reg_9765.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_186_V_read200_s_phi_fu_20574_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_186_V_read200_s_phi_fu_20574_p4 = ap_phi_mux_data_186_V_read200_1_phi_fu_9769_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_186_V_read200_s_phi_fu_20574_p4 = data_186_V_read.read();
    } else {
        ap_phi_mux_data_186_V_read200_s_phi_fu_20574_p4 = ap_phi_reg_pp0_iter0_data_186_V_read200_s_reg_20570.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_187_V_read201_1_phi_fu_9783_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_187_V_read201_1_phi_fu_9783_p6 = data_187_V_read201_s_reg_20583.read();
    } else {
        ap_phi_mux_data_187_V_read201_1_phi_fu_9783_p6 = data_187_V_read201_1_reg_9779.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_187_V_read201_s_phi_fu_20587_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_187_V_read201_s_phi_fu_20587_p4 = ap_phi_mux_data_187_V_read201_1_phi_fu_9783_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_187_V_read201_s_phi_fu_20587_p4 = data_187_V_read.read();
    } else {
        ap_phi_mux_data_187_V_read201_s_phi_fu_20587_p4 = ap_phi_reg_pp0_iter0_data_187_V_read201_s_reg_20583.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_188_V_read202_1_phi_fu_9797_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_188_V_read202_1_phi_fu_9797_p6 = data_188_V_read202_s_reg_20596.read();
    } else {
        ap_phi_mux_data_188_V_read202_1_phi_fu_9797_p6 = data_188_V_read202_1_reg_9793.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_188_V_read202_s_phi_fu_20600_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_188_V_read202_s_phi_fu_20600_p4 = ap_phi_mux_data_188_V_read202_1_phi_fu_9797_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_188_V_read202_s_phi_fu_20600_p4 = data_188_V_read.read();
    } else {
        ap_phi_mux_data_188_V_read202_s_phi_fu_20600_p4 = ap_phi_reg_pp0_iter0_data_188_V_read202_s_reg_20596.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_189_V_read203_1_phi_fu_9811_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_189_V_read203_1_phi_fu_9811_p6 = data_189_V_read203_s_reg_20609.read();
    } else {
        ap_phi_mux_data_189_V_read203_1_phi_fu_9811_p6 = data_189_V_read203_1_reg_9807.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_189_V_read203_s_phi_fu_20613_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_189_V_read203_s_phi_fu_20613_p4 = ap_phi_mux_data_189_V_read203_1_phi_fu_9811_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_189_V_read203_s_phi_fu_20613_p4 = data_189_V_read.read();
    } else {
        ap_phi_mux_data_189_V_read203_s_phi_fu_20613_p4 = ap_phi_reg_pp0_iter0_data_189_V_read203_s_reg_20609.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_18_V_read32_ph_phi_fu_18390_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_18_V_read32_ph_phi_fu_18390_p4 = ap_phi_mux_data_18_V_read32_re_phi_fu_7417_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_18_V_read32_ph_phi_fu_18390_p4 = data_18_V_read.read();
    } else {
        ap_phi_mux_data_18_V_read32_ph_phi_fu_18390_p4 = ap_phi_reg_pp0_iter0_data_18_V_read32_ph_reg_18386.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_18_V_read32_re_phi_fu_7417_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_18_V_read32_re_phi_fu_7417_p6 = data_18_V_read32_ph_reg_18386.read();
    } else {
        ap_phi_mux_data_18_V_read32_re_phi_fu_7417_p6 = data_18_V_read32_re_reg_7413.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_190_V_read204_1_phi_fu_9825_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_190_V_read204_1_phi_fu_9825_p6 = data_190_V_read204_s_reg_20622.read();
    } else {
        ap_phi_mux_data_190_V_read204_1_phi_fu_9825_p6 = data_190_V_read204_1_reg_9821.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_190_V_read204_s_phi_fu_20626_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_190_V_read204_s_phi_fu_20626_p4 = ap_phi_mux_data_190_V_read204_1_phi_fu_9825_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_190_V_read204_s_phi_fu_20626_p4 = data_190_V_read.read();
    } else {
        ap_phi_mux_data_190_V_read204_s_phi_fu_20626_p4 = ap_phi_reg_pp0_iter0_data_190_V_read204_s_reg_20622.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_191_V_read205_1_phi_fu_9839_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_191_V_read205_1_phi_fu_9839_p6 = data_191_V_read205_s_reg_20635.read();
    } else {
        ap_phi_mux_data_191_V_read205_1_phi_fu_9839_p6 = data_191_V_read205_1_reg_9835.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_191_V_read205_s_phi_fu_20639_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_191_V_read205_s_phi_fu_20639_p4 = ap_phi_mux_data_191_V_read205_1_phi_fu_9839_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_191_V_read205_s_phi_fu_20639_p4 = data_191_V_read.read();
    } else {
        ap_phi_mux_data_191_V_read205_s_phi_fu_20639_p4 = ap_phi_reg_pp0_iter0_data_191_V_read205_s_reg_20635.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_192_V_read206_1_phi_fu_9853_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_192_V_read206_1_phi_fu_9853_p6 = data_192_V_read206_s_reg_20648.read();
    } else {
        ap_phi_mux_data_192_V_read206_1_phi_fu_9853_p6 = data_192_V_read206_1_reg_9849.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_192_V_read206_s_phi_fu_20652_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_192_V_read206_s_phi_fu_20652_p4 = ap_phi_mux_data_192_V_read206_1_phi_fu_9853_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_192_V_read206_s_phi_fu_20652_p4 = data_192_V_read.read();
    } else {
        ap_phi_mux_data_192_V_read206_s_phi_fu_20652_p4 = ap_phi_reg_pp0_iter0_data_192_V_read206_s_reg_20648.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_193_V_read207_1_phi_fu_9867_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_193_V_read207_1_phi_fu_9867_p6 = data_193_V_read207_s_reg_20661.read();
    } else {
        ap_phi_mux_data_193_V_read207_1_phi_fu_9867_p6 = data_193_V_read207_1_reg_9863.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_193_V_read207_s_phi_fu_20665_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_193_V_read207_s_phi_fu_20665_p4 = ap_phi_mux_data_193_V_read207_1_phi_fu_9867_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_193_V_read207_s_phi_fu_20665_p4 = data_193_V_read.read();
    } else {
        ap_phi_mux_data_193_V_read207_s_phi_fu_20665_p4 = ap_phi_reg_pp0_iter0_data_193_V_read207_s_reg_20661.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_194_V_read208_1_phi_fu_9881_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_194_V_read208_1_phi_fu_9881_p6 = data_194_V_read208_s_reg_20674.read();
    } else {
        ap_phi_mux_data_194_V_read208_1_phi_fu_9881_p6 = data_194_V_read208_1_reg_9877.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_194_V_read208_s_phi_fu_20678_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_194_V_read208_s_phi_fu_20678_p4 = ap_phi_mux_data_194_V_read208_1_phi_fu_9881_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_194_V_read208_s_phi_fu_20678_p4 = data_194_V_read.read();
    } else {
        ap_phi_mux_data_194_V_read208_s_phi_fu_20678_p4 = ap_phi_reg_pp0_iter0_data_194_V_read208_s_reg_20674.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_195_V_read209_1_phi_fu_9895_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_195_V_read209_1_phi_fu_9895_p6 = data_195_V_read209_s_reg_20687.read();
    } else {
        ap_phi_mux_data_195_V_read209_1_phi_fu_9895_p6 = data_195_V_read209_1_reg_9891.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_195_V_read209_s_phi_fu_20691_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_195_V_read209_s_phi_fu_20691_p4 = ap_phi_mux_data_195_V_read209_1_phi_fu_9895_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_195_V_read209_s_phi_fu_20691_p4 = data_195_V_read.read();
    } else {
        ap_phi_mux_data_195_V_read209_s_phi_fu_20691_p4 = ap_phi_reg_pp0_iter0_data_195_V_read209_s_reg_20687.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_196_V_read210_1_phi_fu_9909_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_196_V_read210_1_phi_fu_9909_p6 = data_196_V_read210_s_reg_20700.read();
    } else {
        ap_phi_mux_data_196_V_read210_1_phi_fu_9909_p6 = data_196_V_read210_1_reg_9905.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_196_V_read210_s_phi_fu_20704_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_196_V_read210_s_phi_fu_20704_p4 = ap_phi_mux_data_196_V_read210_1_phi_fu_9909_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_196_V_read210_s_phi_fu_20704_p4 = data_196_V_read.read();
    } else {
        ap_phi_mux_data_196_V_read210_s_phi_fu_20704_p4 = ap_phi_reg_pp0_iter0_data_196_V_read210_s_reg_20700.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_197_V_read211_1_phi_fu_9923_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_197_V_read211_1_phi_fu_9923_p6 = data_197_V_read211_s_reg_20713.read();
    } else {
        ap_phi_mux_data_197_V_read211_1_phi_fu_9923_p6 = data_197_V_read211_1_reg_9919.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_197_V_read211_s_phi_fu_20717_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_197_V_read211_s_phi_fu_20717_p4 = ap_phi_mux_data_197_V_read211_1_phi_fu_9923_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_197_V_read211_s_phi_fu_20717_p4 = data_197_V_read.read();
    } else {
        ap_phi_mux_data_197_V_read211_s_phi_fu_20717_p4 = ap_phi_reg_pp0_iter0_data_197_V_read211_s_reg_20713.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_198_V_read212_1_phi_fu_9937_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_198_V_read212_1_phi_fu_9937_p6 = data_198_V_read212_s_reg_20726.read();
    } else {
        ap_phi_mux_data_198_V_read212_1_phi_fu_9937_p6 = data_198_V_read212_1_reg_9933.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_198_V_read212_s_phi_fu_20730_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_198_V_read212_s_phi_fu_20730_p4 = ap_phi_mux_data_198_V_read212_1_phi_fu_9937_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_198_V_read212_s_phi_fu_20730_p4 = data_198_V_read.read();
    } else {
        ap_phi_mux_data_198_V_read212_s_phi_fu_20730_p4 = ap_phi_reg_pp0_iter0_data_198_V_read212_s_reg_20726.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_199_V_read213_1_phi_fu_9951_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_199_V_read213_1_phi_fu_9951_p6 = data_199_V_read213_s_reg_20739.read();
    } else {
        ap_phi_mux_data_199_V_read213_1_phi_fu_9951_p6 = data_199_V_read213_1_reg_9947.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_199_V_read213_s_phi_fu_20743_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_199_V_read213_s_phi_fu_20743_p4 = ap_phi_mux_data_199_V_read213_1_phi_fu_9951_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_199_V_read213_s_phi_fu_20743_p4 = data_199_V_read.read();
    } else {
        ap_phi_mux_data_199_V_read213_s_phi_fu_20743_p4 = ap_phi_reg_pp0_iter0_data_199_V_read213_s_reg_20739.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_19_V_read33_ph_phi_fu_18403_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_19_V_read33_ph_phi_fu_18403_p4 = ap_phi_mux_data_19_V_read33_re_phi_fu_7431_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_19_V_read33_ph_phi_fu_18403_p4 = data_19_V_read.read();
    } else {
        ap_phi_mux_data_19_V_read33_ph_phi_fu_18403_p4 = ap_phi_reg_pp0_iter0_data_19_V_read33_ph_reg_18399.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_19_V_read33_re_phi_fu_7431_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_19_V_read33_re_phi_fu_7431_p6 = data_19_V_read33_ph_reg_18399.read();
    } else {
        ap_phi_mux_data_19_V_read33_re_phi_fu_7431_p6 = data_19_V_read33_re_reg_7427.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_1_V_read15_phi_phi_fu_18169_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_1_V_read15_phi_phi_fu_18169_p4 = ap_phi_mux_data_1_V_read15_rew_phi_fu_7179_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_1_V_read15_phi_phi_fu_18169_p4 = data_1_V_read.read();
    } else {
        ap_phi_mux_data_1_V_read15_phi_phi_fu_18169_p4 = ap_phi_reg_pp0_iter0_data_1_V_read15_phi_reg_18165.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_1_V_read15_rew_phi_fu_7179_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1_V_read15_rew_phi_fu_7179_p6 = data_1_V_read15_phi_reg_18165.read();
    } else {
        ap_phi_mux_data_1_V_read15_rew_phi_fu_7179_p6 = data_1_V_read15_rew_reg_7175.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_200_V_read214_1_phi_fu_9965_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_200_V_read214_1_phi_fu_9965_p6 = data_200_V_read214_s_reg_20752.read();
    } else {
        ap_phi_mux_data_200_V_read214_1_phi_fu_9965_p6 = data_200_V_read214_1_reg_9961.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_200_V_read214_s_phi_fu_20756_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_200_V_read214_s_phi_fu_20756_p4 = ap_phi_mux_data_200_V_read214_1_phi_fu_9965_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_200_V_read214_s_phi_fu_20756_p4 = data_200_V_read.read();
    } else {
        ap_phi_mux_data_200_V_read214_s_phi_fu_20756_p4 = ap_phi_reg_pp0_iter0_data_200_V_read214_s_reg_20752.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_201_V_read215_1_phi_fu_9979_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_201_V_read215_1_phi_fu_9979_p6 = data_201_V_read215_s_reg_20765.read();
    } else {
        ap_phi_mux_data_201_V_read215_1_phi_fu_9979_p6 = data_201_V_read215_1_reg_9975.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_201_V_read215_s_phi_fu_20769_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_201_V_read215_s_phi_fu_20769_p4 = ap_phi_mux_data_201_V_read215_1_phi_fu_9979_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_201_V_read215_s_phi_fu_20769_p4 = data_201_V_read.read();
    } else {
        ap_phi_mux_data_201_V_read215_s_phi_fu_20769_p4 = ap_phi_reg_pp0_iter0_data_201_V_read215_s_reg_20765.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_202_V_read216_1_phi_fu_9993_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_202_V_read216_1_phi_fu_9993_p6 = data_202_V_read216_s_reg_20778.read();
    } else {
        ap_phi_mux_data_202_V_read216_1_phi_fu_9993_p6 = data_202_V_read216_1_reg_9989.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_202_V_read216_s_phi_fu_20782_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_202_V_read216_s_phi_fu_20782_p4 = ap_phi_mux_data_202_V_read216_1_phi_fu_9993_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_202_V_read216_s_phi_fu_20782_p4 = data_202_V_read.read();
    } else {
        ap_phi_mux_data_202_V_read216_s_phi_fu_20782_p4 = ap_phi_reg_pp0_iter0_data_202_V_read216_s_reg_20778.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_203_V_read217_1_phi_fu_10007_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_203_V_read217_1_phi_fu_10007_p6 = data_203_V_read217_s_reg_20791.read();
    } else {
        ap_phi_mux_data_203_V_read217_1_phi_fu_10007_p6 = data_203_V_read217_1_reg_10003.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_203_V_read217_s_phi_fu_20795_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_203_V_read217_s_phi_fu_20795_p4 = ap_phi_mux_data_203_V_read217_1_phi_fu_10007_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_203_V_read217_s_phi_fu_20795_p4 = data_203_V_read.read();
    } else {
        ap_phi_mux_data_203_V_read217_s_phi_fu_20795_p4 = ap_phi_reg_pp0_iter0_data_203_V_read217_s_reg_20791.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_204_V_read218_1_phi_fu_10021_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_204_V_read218_1_phi_fu_10021_p6 = data_204_V_read218_s_reg_20804.read();
    } else {
        ap_phi_mux_data_204_V_read218_1_phi_fu_10021_p6 = data_204_V_read218_1_reg_10017.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_204_V_read218_s_phi_fu_20808_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_204_V_read218_s_phi_fu_20808_p4 = ap_phi_mux_data_204_V_read218_1_phi_fu_10021_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_204_V_read218_s_phi_fu_20808_p4 = data_204_V_read.read();
    } else {
        ap_phi_mux_data_204_V_read218_s_phi_fu_20808_p4 = ap_phi_reg_pp0_iter0_data_204_V_read218_s_reg_20804.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_205_V_read219_1_phi_fu_10035_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_205_V_read219_1_phi_fu_10035_p6 = data_205_V_read219_s_reg_20817.read();
    } else {
        ap_phi_mux_data_205_V_read219_1_phi_fu_10035_p6 = data_205_V_read219_1_reg_10031.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_205_V_read219_s_phi_fu_20821_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_205_V_read219_s_phi_fu_20821_p4 = ap_phi_mux_data_205_V_read219_1_phi_fu_10035_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_205_V_read219_s_phi_fu_20821_p4 = data_205_V_read.read();
    } else {
        ap_phi_mux_data_205_V_read219_s_phi_fu_20821_p4 = ap_phi_reg_pp0_iter0_data_205_V_read219_s_reg_20817.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_206_V_read220_1_phi_fu_10049_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_206_V_read220_1_phi_fu_10049_p6 = data_206_V_read220_s_reg_20830.read();
    } else {
        ap_phi_mux_data_206_V_read220_1_phi_fu_10049_p6 = data_206_V_read220_1_reg_10045.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_206_V_read220_s_phi_fu_20834_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_206_V_read220_s_phi_fu_20834_p4 = ap_phi_mux_data_206_V_read220_1_phi_fu_10049_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_206_V_read220_s_phi_fu_20834_p4 = data_206_V_read.read();
    } else {
        ap_phi_mux_data_206_V_read220_s_phi_fu_20834_p4 = ap_phi_reg_pp0_iter0_data_206_V_read220_s_reg_20830.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_207_V_read221_1_phi_fu_10063_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_207_V_read221_1_phi_fu_10063_p6 = data_207_V_read221_s_reg_20843.read();
    } else {
        ap_phi_mux_data_207_V_read221_1_phi_fu_10063_p6 = data_207_V_read221_1_reg_10059.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_207_V_read221_s_phi_fu_20847_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_207_V_read221_s_phi_fu_20847_p4 = ap_phi_mux_data_207_V_read221_1_phi_fu_10063_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_207_V_read221_s_phi_fu_20847_p4 = data_207_V_read.read();
    } else {
        ap_phi_mux_data_207_V_read221_s_phi_fu_20847_p4 = ap_phi_reg_pp0_iter0_data_207_V_read221_s_reg_20843.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_208_V_read222_1_phi_fu_10077_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_208_V_read222_1_phi_fu_10077_p6 = data_208_V_read222_s_reg_20856.read();
    } else {
        ap_phi_mux_data_208_V_read222_1_phi_fu_10077_p6 = data_208_V_read222_1_reg_10073.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_208_V_read222_s_phi_fu_20860_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_208_V_read222_s_phi_fu_20860_p4 = ap_phi_mux_data_208_V_read222_1_phi_fu_10077_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_208_V_read222_s_phi_fu_20860_p4 = data_208_V_read.read();
    } else {
        ap_phi_mux_data_208_V_read222_s_phi_fu_20860_p4 = ap_phi_reg_pp0_iter0_data_208_V_read222_s_reg_20856.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_209_V_read223_1_phi_fu_10091_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_209_V_read223_1_phi_fu_10091_p6 = data_209_V_read223_s_reg_20869.read();
    } else {
        ap_phi_mux_data_209_V_read223_1_phi_fu_10091_p6 = data_209_V_read223_1_reg_10087.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_209_V_read223_s_phi_fu_20873_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_209_V_read223_s_phi_fu_20873_p4 = ap_phi_mux_data_209_V_read223_1_phi_fu_10091_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_209_V_read223_s_phi_fu_20873_p4 = data_209_V_read.read();
    } else {
        ap_phi_mux_data_209_V_read223_s_phi_fu_20873_p4 = ap_phi_reg_pp0_iter0_data_209_V_read223_s_reg_20869.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_20_V_read34_ph_phi_fu_18416_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_20_V_read34_ph_phi_fu_18416_p4 = ap_phi_mux_data_20_V_read34_re_phi_fu_7445_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_20_V_read34_ph_phi_fu_18416_p4 = data_20_V_read.read();
    } else {
        ap_phi_mux_data_20_V_read34_ph_phi_fu_18416_p4 = ap_phi_reg_pp0_iter0_data_20_V_read34_ph_reg_18412.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_20_V_read34_re_phi_fu_7445_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_20_V_read34_re_phi_fu_7445_p6 = data_20_V_read34_ph_reg_18412.read();
    } else {
        ap_phi_mux_data_20_V_read34_re_phi_fu_7445_p6 = data_20_V_read34_re_reg_7441.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_210_V_read224_1_phi_fu_10105_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_210_V_read224_1_phi_fu_10105_p6 = data_210_V_read224_s_reg_20882.read();
    } else {
        ap_phi_mux_data_210_V_read224_1_phi_fu_10105_p6 = data_210_V_read224_1_reg_10101.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_210_V_read224_s_phi_fu_20886_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_210_V_read224_s_phi_fu_20886_p4 = ap_phi_mux_data_210_V_read224_1_phi_fu_10105_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_210_V_read224_s_phi_fu_20886_p4 = data_210_V_read.read();
    } else {
        ap_phi_mux_data_210_V_read224_s_phi_fu_20886_p4 = ap_phi_reg_pp0_iter0_data_210_V_read224_s_reg_20882.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_211_V_read225_1_phi_fu_10119_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_211_V_read225_1_phi_fu_10119_p6 = data_211_V_read225_s_reg_20895.read();
    } else {
        ap_phi_mux_data_211_V_read225_1_phi_fu_10119_p6 = data_211_V_read225_1_reg_10115.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_211_V_read225_s_phi_fu_20899_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_211_V_read225_s_phi_fu_20899_p4 = ap_phi_mux_data_211_V_read225_1_phi_fu_10119_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_211_V_read225_s_phi_fu_20899_p4 = data_211_V_read.read();
    } else {
        ap_phi_mux_data_211_V_read225_s_phi_fu_20899_p4 = ap_phi_reg_pp0_iter0_data_211_V_read225_s_reg_20895.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_212_V_read226_1_phi_fu_10133_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_212_V_read226_1_phi_fu_10133_p6 = data_212_V_read226_s_reg_20908.read();
    } else {
        ap_phi_mux_data_212_V_read226_1_phi_fu_10133_p6 = data_212_V_read226_1_reg_10129.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_212_V_read226_s_phi_fu_20912_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_212_V_read226_s_phi_fu_20912_p4 = ap_phi_mux_data_212_V_read226_1_phi_fu_10133_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_212_V_read226_s_phi_fu_20912_p4 = data_212_V_read.read();
    } else {
        ap_phi_mux_data_212_V_read226_s_phi_fu_20912_p4 = ap_phi_reg_pp0_iter0_data_212_V_read226_s_reg_20908.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_213_V_read227_1_phi_fu_10147_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_213_V_read227_1_phi_fu_10147_p6 = data_213_V_read227_s_reg_20921.read();
    } else {
        ap_phi_mux_data_213_V_read227_1_phi_fu_10147_p6 = data_213_V_read227_1_reg_10143.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_213_V_read227_s_phi_fu_20925_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_213_V_read227_s_phi_fu_20925_p4 = ap_phi_mux_data_213_V_read227_1_phi_fu_10147_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_213_V_read227_s_phi_fu_20925_p4 = data_213_V_read.read();
    } else {
        ap_phi_mux_data_213_V_read227_s_phi_fu_20925_p4 = ap_phi_reg_pp0_iter0_data_213_V_read227_s_reg_20921.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_214_V_read228_1_phi_fu_10161_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_214_V_read228_1_phi_fu_10161_p6 = data_214_V_read228_s_reg_20934.read();
    } else {
        ap_phi_mux_data_214_V_read228_1_phi_fu_10161_p6 = data_214_V_read228_1_reg_10157.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_214_V_read228_s_phi_fu_20938_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_214_V_read228_s_phi_fu_20938_p4 = ap_phi_mux_data_214_V_read228_1_phi_fu_10161_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_214_V_read228_s_phi_fu_20938_p4 = data_214_V_read.read();
    } else {
        ap_phi_mux_data_214_V_read228_s_phi_fu_20938_p4 = ap_phi_reg_pp0_iter0_data_214_V_read228_s_reg_20934.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_215_V_read229_1_phi_fu_10175_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_215_V_read229_1_phi_fu_10175_p6 = data_215_V_read229_s_reg_20947.read();
    } else {
        ap_phi_mux_data_215_V_read229_1_phi_fu_10175_p6 = data_215_V_read229_1_reg_10171.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_215_V_read229_s_phi_fu_20951_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_215_V_read229_s_phi_fu_20951_p4 = ap_phi_mux_data_215_V_read229_1_phi_fu_10175_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_215_V_read229_s_phi_fu_20951_p4 = data_215_V_read.read();
    } else {
        ap_phi_mux_data_215_V_read229_s_phi_fu_20951_p4 = ap_phi_reg_pp0_iter0_data_215_V_read229_s_reg_20947.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_216_V_read230_1_phi_fu_10189_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_216_V_read230_1_phi_fu_10189_p6 = data_216_V_read230_s_reg_20960.read();
    } else {
        ap_phi_mux_data_216_V_read230_1_phi_fu_10189_p6 = data_216_V_read230_1_reg_10185.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_216_V_read230_s_phi_fu_20964_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_216_V_read230_s_phi_fu_20964_p4 = ap_phi_mux_data_216_V_read230_1_phi_fu_10189_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_216_V_read230_s_phi_fu_20964_p4 = data_216_V_read.read();
    } else {
        ap_phi_mux_data_216_V_read230_s_phi_fu_20964_p4 = ap_phi_reg_pp0_iter0_data_216_V_read230_s_reg_20960.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_217_V_read231_1_phi_fu_10203_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_217_V_read231_1_phi_fu_10203_p6 = data_217_V_read231_s_reg_20973.read();
    } else {
        ap_phi_mux_data_217_V_read231_1_phi_fu_10203_p6 = data_217_V_read231_1_reg_10199.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_217_V_read231_s_phi_fu_20977_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_217_V_read231_s_phi_fu_20977_p4 = ap_phi_mux_data_217_V_read231_1_phi_fu_10203_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_217_V_read231_s_phi_fu_20977_p4 = data_217_V_read.read();
    } else {
        ap_phi_mux_data_217_V_read231_s_phi_fu_20977_p4 = ap_phi_reg_pp0_iter0_data_217_V_read231_s_reg_20973.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_218_V_read232_1_phi_fu_10217_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_218_V_read232_1_phi_fu_10217_p6 = data_218_V_read232_s_reg_20986.read();
    } else {
        ap_phi_mux_data_218_V_read232_1_phi_fu_10217_p6 = data_218_V_read232_1_reg_10213.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_218_V_read232_s_phi_fu_20990_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_218_V_read232_s_phi_fu_20990_p4 = ap_phi_mux_data_218_V_read232_1_phi_fu_10217_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_218_V_read232_s_phi_fu_20990_p4 = data_218_V_read.read();
    } else {
        ap_phi_mux_data_218_V_read232_s_phi_fu_20990_p4 = ap_phi_reg_pp0_iter0_data_218_V_read232_s_reg_20986.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_219_V_read233_1_phi_fu_10231_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_219_V_read233_1_phi_fu_10231_p6 = data_219_V_read233_s_reg_20999.read();
    } else {
        ap_phi_mux_data_219_V_read233_1_phi_fu_10231_p6 = data_219_V_read233_1_reg_10227.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_219_V_read233_s_phi_fu_21003_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_219_V_read233_s_phi_fu_21003_p4 = ap_phi_mux_data_219_V_read233_1_phi_fu_10231_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_219_V_read233_s_phi_fu_21003_p4 = data_219_V_read.read();
    } else {
        ap_phi_mux_data_219_V_read233_s_phi_fu_21003_p4 = ap_phi_reg_pp0_iter0_data_219_V_read233_s_reg_20999.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_21_V_read35_ph_phi_fu_18429_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_21_V_read35_ph_phi_fu_18429_p4 = ap_phi_mux_data_21_V_read35_re_phi_fu_7459_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_21_V_read35_ph_phi_fu_18429_p4 = data_21_V_read.read();
    } else {
        ap_phi_mux_data_21_V_read35_ph_phi_fu_18429_p4 = ap_phi_reg_pp0_iter0_data_21_V_read35_ph_reg_18425.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_21_V_read35_re_phi_fu_7459_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_21_V_read35_re_phi_fu_7459_p6 = data_21_V_read35_ph_reg_18425.read();
    } else {
        ap_phi_mux_data_21_V_read35_re_phi_fu_7459_p6 = data_21_V_read35_re_reg_7455.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_220_V_read234_1_phi_fu_10245_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_220_V_read234_1_phi_fu_10245_p6 = data_220_V_read234_s_reg_21012.read();
    } else {
        ap_phi_mux_data_220_V_read234_1_phi_fu_10245_p6 = data_220_V_read234_1_reg_10241.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_220_V_read234_s_phi_fu_21016_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_220_V_read234_s_phi_fu_21016_p4 = ap_phi_mux_data_220_V_read234_1_phi_fu_10245_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_220_V_read234_s_phi_fu_21016_p4 = data_220_V_read.read();
    } else {
        ap_phi_mux_data_220_V_read234_s_phi_fu_21016_p4 = ap_phi_reg_pp0_iter0_data_220_V_read234_s_reg_21012.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_221_V_read235_1_phi_fu_10259_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_221_V_read235_1_phi_fu_10259_p6 = data_221_V_read235_s_reg_21025.read();
    } else {
        ap_phi_mux_data_221_V_read235_1_phi_fu_10259_p6 = data_221_V_read235_1_reg_10255.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_221_V_read235_s_phi_fu_21029_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_221_V_read235_s_phi_fu_21029_p4 = ap_phi_mux_data_221_V_read235_1_phi_fu_10259_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_221_V_read235_s_phi_fu_21029_p4 = data_221_V_read.read();
    } else {
        ap_phi_mux_data_221_V_read235_s_phi_fu_21029_p4 = ap_phi_reg_pp0_iter0_data_221_V_read235_s_reg_21025.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_222_V_read236_1_phi_fu_10273_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_222_V_read236_1_phi_fu_10273_p6 = data_222_V_read236_s_reg_21038.read();
    } else {
        ap_phi_mux_data_222_V_read236_1_phi_fu_10273_p6 = data_222_V_read236_1_reg_10269.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_222_V_read236_s_phi_fu_21042_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_222_V_read236_s_phi_fu_21042_p4 = ap_phi_mux_data_222_V_read236_1_phi_fu_10273_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_222_V_read236_s_phi_fu_21042_p4 = data_222_V_read.read();
    } else {
        ap_phi_mux_data_222_V_read236_s_phi_fu_21042_p4 = ap_phi_reg_pp0_iter0_data_222_V_read236_s_reg_21038.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_223_V_read237_1_phi_fu_10287_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_223_V_read237_1_phi_fu_10287_p6 = data_223_V_read237_s_reg_21051.read();
    } else {
        ap_phi_mux_data_223_V_read237_1_phi_fu_10287_p6 = data_223_V_read237_1_reg_10283.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_223_V_read237_s_phi_fu_21055_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_223_V_read237_s_phi_fu_21055_p4 = ap_phi_mux_data_223_V_read237_1_phi_fu_10287_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_223_V_read237_s_phi_fu_21055_p4 = data_223_V_read.read();
    } else {
        ap_phi_mux_data_223_V_read237_s_phi_fu_21055_p4 = ap_phi_reg_pp0_iter0_data_223_V_read237_s_reg_21051.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_224_V_read238_1_phi_fu_10301_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_224_V_read238_1_phi_fu_10301_p6 = data_224_V_read238_s_reg_21064.read();
    } else {
        ap_phi_mux_data_224_V_read238_1_phi_fu_10301_p6 = data_224_V_read238_1_reg_10297.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_224_V_read238_s_phi_fu_21068_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_224_V_read238_s_phi_fu_21068_p4 = ap_phi_mux_data_224_V_read238_1_phi_fu_10301_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_224_V_read238_s_phi_fu_21068_p4 = data_224_V_read.read();
    } else {
        ap_phi_mux_data_224_V_read238_s_phi_fu_21068_p4 = ap_phi_reg_pp0_iter0_data_224_V_read238_s_reg_21064.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_225_V_read239_1_phi_fu_10315_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_225_V_read239_1_phi_fu_10315_p6 = data_225_V_read239_s_reg_21077.read();
    } else {
        ap_phi_mux_data_225_V_read239_1_phi_fu_10315_p6 = data_225_V_read239_1_reg_10311.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_225_V_read239_s_phi_fu_21081_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_225_V_read239_s_phi_fu_21081_p4 = ap_phi_mux_data_225_V_read239_1_phi_fu_10315_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_225_V_read239_s_phi_fu_21081_p4 = data_225_V_read.read();
    } else {
        ap_phi_mux_data_225_V_read239_s_phi_fu_21081_p4 = ap_phi_reg_pp0_iter0_data_225_V_read239_s_reg_21077.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_226_V_read240_1_phi_fu_10329_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_226_V_read240_1_phi_fu_10329_p6 = data_226_V_read240_s_reg_21090.read();
    } else {
        ap_phi_mux_data_226_V_read240_1_phi_fu_10329_p6 = data_226_V_read240_1_reg_10325.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_226_V_read240_s_phi_fu_21094_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_226_V_read240_s_phi_fu_21094_p4 = ap_phi_mux_data_226_V_read240_1_phi_fu_10329_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_226_V_read240_s_phi_fu_21094_p4 = data_226_V_read.read();
    } else {
        ap_phi_mux_data_226_V_read240_s_phi_fu_21094_p4 = ap_phi_reg_pp0_iter0_data_226_V_read240_s_reg_21090.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_227_V_read241_1_phi_fu_10343_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_227_V_read241_1_phi_fu_10343_p6 = data_227_V_read241_s_reg_21103.read();
    } else {
        ap_phi_mux_data_227_V_read241_1_phi_fu_10343_p6 = data_227_V_read241_1_reg_10339.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_227_V_read241_s_phi_fu_21107_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_227_V_read241_s_phi_fu_21107_p4 = ap_phi_mux_data_227_V_read241_1_phi_fu_10343_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_227_V_read241_s_phi_fu_21107_p4 = data_227_V_read.read();
    } else {
        ap_phi_mux_data_227_V_read241_s_phi_fu_21107_p4 = ap_phi_reg_pp0_iter0_data_227_V_read241_s_reg_21103.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_228_V_read242_1_phi_fu_10357_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_228_V_read242_1_phi_fu_10357_p6 = data_228_V_read242_s_reg_21116.read();
    } else {
        ap_phi_mux_data_228_V_read242_1_phi_fu_10357_p6 = data_228_V_read242_1_reg_10353.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_228_V_read242_s_phi_fu_21120_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_228_V_read242_s_phi_fu_21120_p4 = ap_phi_mux_data_228_V_read242_1_phi_fu_10357_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_228_V_read242_s_phi_fu_21120_p4 = data_228_V_read.read();
    } else {
        ap_phi_mux_data_228_V_read242_s_phi_fu_21120_p4 = ap_phi_reg_pp0_iter0_data_228_V_read242_s_reg_21116.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_229_V_read243_1_phi_fu_10371_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_229_V_read243_1_phi_fu_10371_p6 = data_229_V_read243_s_reg_21129.read();
    } else {
        ap_phi_mux_data_229_V_read243_1_phi_fu_10371_p6 = data_229_V_read243_1_reg_10367.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_229_V_read243_s_phi_fu_21133_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_229_V_read243_s_phi_fu_21133_p4 = ap_phi_mux_data_229_V_read243_1_phi_fu_10371_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_229_V_read243_s_phi_fu_21133_p4 = data_229_V_read.read();
    } else {
        ap_phi_mux_data_229_V_read243_s_phi_fu_21133_p4 = ap_phi_reg_pp0_iter0_data_229_V_read243_s_reg_21129.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_22_V_read36_ph_phi_fu_18442_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_22_V_read36_ph_phi_fu_18442_p4 = ap_phi_mux_data_22_V_read36_re_phi_fu_7473_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_22_V_read36_ph_phi_fu_18442_p4 = data_22_V_read.read();
    } else {
        ap_phi_mux_data_22_V_read36_ph_phi_fu_18442_p4 = ap_phi_reg_pp0_iter0_data_22_V_read36_ph_reg_18438.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_22_V_read36_re_phi_fu_7473_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_22_V_read36_re_phi_fu_7473_p6 = data_22_V_read36_ph_reg_18438.read();
    } else {
        ap_phi_mux_data_22_V_read36_re_phi_fu_7473_p6 = data_22_V_read36_re_reg_7469.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_230_V_read244_1_phi_fu_10385_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_230_V_read244_1_phi_fu_10385_p6 = data_230_V_read244_s_reg_21142.read();
    } else {
        ap_phi_mux_data_230_V_read244_1_phi_fu_10385_p6 = data_230_V_read244_1_reg_10381.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_230_V_read244_s_phi_fu_21146_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_230_V_read244_s_phi_fu_21146_p4 = ap_phi_mux_data_230_V_read244_1_phi_fu_10385_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_230_V_read244_s_phi_fu_21146_p4 = data_230_V_read.read();
    } else {
        ap_phi_mux_data_230_V_read244_s_phi_fu_21146_p4 = ap_phi_reg_pp0_iter0_data_230_V_read244_s_reg_21142.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_231_V_read245_1_phi_fu_10399_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_231_V_read245_1_phi_fu_10399_p6 = data_231_V_read245_s_reg_21155.read();
    } else {
        ap_phi_mux_data_231_V_read245_1_phi_fu_10399_p6 = data_231_V_read245_1_reg_10395.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_231_V_read245_s_phi_fu_21159_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_231_V_read245_s_phi_fu_21159_p4 = ap_phi_mux_data_231_V_read245_1_phi_fu_10399_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_231_V_read245_s_phi_fu_21159_p4 = data_231_V_read.read();
    } else {
        ap_phi_mux_data_231_V_read245_s_phi_fu_21159_p4 = ap_phi_reg_pp0_iter0_data_231_V_read245_s_reg_21155.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_232_V_read246_1_phi_fu_10413_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_232_V_read246_1_phi_fu_10413_p6 = data_232_V_read246_s_reg_21168.read();
    } else {
        ap_phi_mux_data_232_V_read246_1_phi_fu_10413_p6 = data_232_V_read246_1_reg_10409.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_232_V_read246_s_phi_fu_21172_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_232_V_read246_s_phi_fu_21172_p4 = ap_phi_mux_data_232_V_read246_1_phi_fu_10413_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_232_V_read246_s_phi_fu_21172_p4 = data_232_V_read.read();
    } else {
        ap_phi_mux_data_232_V_read246_s_phi_fu_21172_p4 = ap_phi_reg_pp0_iter0_data_232_V_read246_s_reg_21168.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_233_V_read247_1_phi_fu_10427_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_233_V_read247_1_phi_fu_10427_p6 = data_233_V_read247_s_reg_21181.read();
    } else {
        ap_phi_mux_data_233_V_read247_1_phi_fu_10427_p6 = data_233_V_read247_1_reg_10423.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_233_V_read247_s_phi_fu_21185_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_233_V_read247_s_phi_fu_21185_p4 = ap_phi_mux_data_233_V_read247_1_phi_fu_10427_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_233_V_read247_s_phi_fu_21185_p4 = data_233_V_read.read();
    } else {
        ap_phi_mux_data_233_V_read247_s_phi_fu_21185_p4 = ap_phi_reg_pp0_iter0_data_233_V_read247_s_reg_21181.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_234_V_read248_1_phi_fu_10441_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_234_V_read248_1_phi_fu_10441_p6 = data_234_V_read248_s_reg_21194.read();
    } else {
        ap_phi_mux_data_234_V_read248_1_phi_fu_10441_p6 = data_234_V_read248_1_reg_10437.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_234_V_read248_s_phi_fu_21198_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_234_V_read248_s_phi_fu_21198_p4 = ap_phi_mux_data_234_V_read248_1_phi_fu_10441_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_234_V_read248_s_phi_fu_21198_p4 = data_234_V_read.read();
    } else {
        ap_phi_mux_data_234_V_read248_s_phi_fu_21198_p4 = ap_phi_reg_pp0_iter0_data_234_V_read248_s_reg_21194.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_235_V_read249_1_phi_fu_10455_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_235_V_read249_1_phi_fu_10455_p6 = data_235_V_read249_s_reg_21207.read();
    } else {
        ap_phi_mux_data_235_V_read249_1_phi_fu_10455_p6 = data_235_V_read249_1_reg_10451.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_235_V_read249_s_phi_fu_21211_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_235_V_read249_s_phi_fu_21211_p4 = ap_phi_mux_data_235_V_read249_1_phi_fu_10455_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_235_V_read249_s_phi_fu_21211_p4 = data_235_V_read.read();
    } else {
        ap_phi_mux_data_235_V_read249_s_phi_fu_21211_p4 = ap_phi_reg_pp0_iter0_data_235_V_read249_s_reg_21207.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_236_V_read250_1_phi_fu_10469_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_236_V_read250_1_phi_fu_10469_p6 = data_236_V_read250_s_reg_21220.read();
    } else {
        ap_phi_mux_data_236_V_read250_1_phi_fu_10469_p6 = data_236_V_read250_1_reg_10465.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_236_V_read250_s_phi_fu_21224_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_236_V_read250_s_phi_fu_21224_p4 = ap_phi_mux_data_236_V_read250_1_phi_fu_10469_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_236_V_read250_s_phi_fu_21224_p4 = data_236_V_read.read();
    } else {
        ap_phi_mux_data_236_V_read250_s_phi_fu_21224_p4 = ap_phi_reg_pp0_iter0_data_236_V_read250_s_reg_21220.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_237_V_read251_1_phi_fu_10483_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_237_V_read251_1_phi_fu_10483_p6 = data_237_V_read251_s_reg_21233.read();
    } else {
        ap_phi_mux_data_237_V_read251_1_phi_fu_10483_p6 = data_237_V_read251_1_reg_10479.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_237_V_read251_s_phi_fu_21237_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_237_V_read251_s_phi_fu_21237_p4 = ap_phi_mux_data_237_V_read251_1_phi_fu_10483_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_237_V_read251_s_phi_fu_21237_p4 = data_237_V_read.read();
    } else {
        ap_phi_mux_data_237_V_read251_s_phi_fu_21237_p4 = ap_phi_reg_pp0_iter0_data_237_V_read251_s_reg_21233.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_238_V_read252_1_phi_fu_10497_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_238_V_read252_1_phi_fu_10497_p6 = data_238_V_read252_s_reg_21246.read();
    } else {
        ap_phi_mux_data_238_V_read252_1_phi_fu_10497_p6 = data_238_V_read252_1_reg_10493.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_238_V_read252_s_phi_fu_21250_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_238_V_read252_s_phi_fu_21250_p4 = ap_phi_mux_data_238_V_read252_1_phi_fu_10497_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_238_V_read252_s_phi_fu_21250_p4 = data_238_V_read.read();
    } else {
        ap_phi_mux_data_238_V_read252_s_phi_fu_21250_p4 = ap_phi_reg_pp0_iter0_data_238_V_read252_s_reg_21246.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_239_V_read253_1_phi_fu_10511_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_239_V_read253_1_phi_fu_10511_p6 = data_239_V_read253_s_reg_21259.read();
    } else {
        ap_phi_mux_data_239_V_read253_1_phi_fu_10511_p6 = data_239_V_read253_1_reg_10507.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_239_V_read253_s_phi_fu_21263_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_239_V_read253_s_phi_fu_21263_p4 = ap_phi_mux_data_239_V_read253_1_phi_fu_10511_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_239_V_read253_s_phi_fu_21263_p4 = data_239_V_read.read();
    } else {
        ap_phi_mux_data_239_V_read253_s_phi_fu_21263_p4 = ap_phi_reg_pp0_iter0_data_239_V_read253_s_reg_21259.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_23_V_read37_ph_phi_fu_18455_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_23_V_read37_ph_phi_fu_18455_p4 = ap_phi_mux_data_23_V_read37_re_phi_fu_7487_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_23_V_read37_ph_phi_fu_18455_p4 = data_23_V_read.read();
    } else {
        ap_phi_mux_data_23_V_read37_ph_phi_fu_18455_p4 = ap_phi_reg_pp0_iter0_data_23_V_read37_ph_reg_18451.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_23_V_read37_re_phi_fu_7487_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_23_V_read37_re_phi_fu_7487_p6 = data_23_V_read37_ph_reg_18451.read();
    } else {
        ap_phi_mux_data_23_V_read37_re_phi_fu_7487_p6 = data_23_V_read37_re_reg_7483.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_240_V_read254_1_phi_fu_10525_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_240_V_read254_1_phi_fu_10525_p6 = data_240_V_read254_s_reg_21272.read();
    } else {
        ap_phi_mux_data_240_V_read254_1_phi_fu_10525_p6 = data_240_V_read254_1_reg_10521.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_240_V_read254_s_phi_fu_21276_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_240_V_read254_s_phi_fu_21276_p4 = ap_phi_mux_data_240_V_read254_1_phi_fu_10525_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_240_V_read254_s_phi_fu_21276_p4 = data_240_V_read.read();
    } else {
        ap_phi_mux_data_240_V_read254_s_phi_fu_21276_p4 = ap_phi_reg_pp0_iter0_data_240_V_read254_s_reg_21272.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_241_V_read255_1_phi_fu_10539_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_241_V_read255_1_phi_fu_10539_p6 = data_241_V_read255_s_reg_21285.read();
    } else {
        ap_phi_mux_data_241_V_read255_1_phi_fu_10539_p6 = data_241_V_read255_1_reg_10535.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_241_V_read255_s_phi_fu_21289_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_241_V_read255_s_phi_fu_21289_p4 = ap_phi_mux_data_241_V_read255_1_phi_fu_10539_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_241_V_read255_s_phi_fu_21289_p4 = data_241_V_read.read();
    } else {
        ap_phi_mux_data_241_V_read255_s_phi_fu_21289_p4 = ap_phi_reg_pp0_iter0_data_241_V_read255_s_reg_21285.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_242_V_read256_1_phi_fu_10553_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_242_V_read256_1_phi_fu_10553_p6 = data_242_V_read256_s_reg_21298.read();
    } else {
        ap_phi_mux_data_242_V_read256_1_phi_fu_10553_p6 = data_242_V_read256_1_reg_10549.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_242_V_read256_s_phi_fu_21302_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_242_V_read256_s_phi_fu_21302_p4 = ap_phi_mux_data_242_V_read256_1_phi_fu_10553_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_242_V_read256_s_phi_fu_21302_p4 = data_242_V_read.read();
    } else {
        ap_phi_mux_data_242_V_read256_s_phi_fu_21302_p4 = ap_phi_reg_pp0_iter0_data_242_V_read256_s_reg_21298.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_243_V_read257_1_phi_fu_10567_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_243_V_read257_1_phi_fu_10567_p6 = data_243_V_read257_s_reg_21311.read();
    } else {
        ap_phi_mux_data_243_V_read257_1_phi_fu_10567_p6 = data_243_V_read257_1_reg_10563.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_243_V_read257_s_phi_fu_21315_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_243_V_read257_s_phi_fu_21315_p4 = ap_phi_mux_data_243_V_read257_1_phi_fu_10567_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_243_V_read257_s_phi_fu_21315_p4 = data_243_V_read.read();
    } else {
        ap_phi_mux_data_243_V_read257_s_phi_fu_21315_p4 = ap_phi_reg_pp0_iter0_data_243_V_read257_s_reg_21311.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_244_V_read258_1_phi_fu_10581_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_244_V_read258_1_phi_fu_10581_p6 = data_244_V_read258_s_reg_21324.read();
    } else {
        ap_phi_mux_data_244_V_read258_1_phi_fu_10581_p6 = data_244_V_read258_1_reg_10577.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_244_V_read258_s_phi_fu_21328_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_244_V_read258_s_phi_fu_21328_p4 = ap_phi_mux_data_244_V_read258_1_phi_fu_10581_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_244_V_read258_s_phi_fu_21328_p4 = data_244_V_read.read();
    } else {
        ap_phi_mux_data_244_V_read258_s_phi_fu_21328_p4 = ap_phi_reg_pp0_iter0_data_244_V_read258_s_reg_21324.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_245_V_read259_1_phi_fu_10595_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_245_V_read259_1_phi_fu_10595_p6 = data_245_V_read259_s_reg_21337.read();
    } else {
        ap_phi_mux_data_245_V_read259_1_phi_fu_10595_p6 = data_245_V_read259_1_reg_10591.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_245_V_read259_s_phi_fu_21341_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_245_V_read259_s_phi_fu_21341_p4 = ap_phi_mux_data_245_V_read259_1_phi_fu_10595_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_245_V_read259_s_phi_fu_21341_p4 = data_245_V_read.read();
    } else {
        ap_phi_mux_data_245_V_read259_s_phi_fu_21341_p4 = ap_phi_reg_pp0_iter0_data_245_V_read259_s_reg_21337.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_246_V_read260_1_phi_fu_10609_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_246_V_read260_1_phi_fu_10609_p6 = data_246_V_read260_s_reg_21350.read();
    } else {
        ap_phi_mux_data_246_V_read260_1_phi_fu_10609_p6 = data_246_V_read260_1_reg_10605.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_246_V_read260_s_phi_fu_21354_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_246_V_read260_s_phi_fu_21354_p4 = ap_phi_mux_data_246_V_read260_1_phi_fu_10609_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_246_V_read260_s_phi_fu_21354_p4 = data_246_V_read.read();
    } else {
        ap_phi_mux_data_246_V_read260_s_phi_fu_21354_p4 = ap_phi_reg_pp0_iter0_data_246_V_read260_s_reg_21350.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_247_V_read261_1_phi_fu_10623_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_247_V_read261_1_phi_fu_10623_p6 = data_247_V_read261_s_reg_21363.read();
    } else {
        ap_phi_mux_data_247_V_read261_1_phi_fu_10623_p6 = data_247_V_read261_1_reg_10619.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_247_V_read261_s_phi_fu_21367_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_247_V_read261_s_phi_fu_21367_p4 = ap_phi_mux_data_247_V_read261_1_phi_fu_10623_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_247_V_read261_s_phi_fu_21367_p4 = data_247_V_read.read();
    } else {
        ap_phi_mux_data_247_V_read261_s_phi_fu_21367_p4 = ap_phi_reg_pp0_iter0_data_247_V_read261_s_reg_21363.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_248_V_read262_1_phi_fu_10637_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_248_V_read262_1_phi_fu_10637_p6 = data_248_V_read262_s_reg_21376.read();
    } else {
        ap_phi_mux_data_248_V_read262_1_phi_fu_10637_p6 = data_248_V_read262_1_reg_10633.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_248_V_read262_s_phi_fu_21380_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_248_V_read262_s_phi_fu_21380_p4 = ap_phi_mux_data_248_V_read262_1_phi_fu_10637_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_248_V_read262_s_phi_fu_21380_p4 = data_248_V_read.read();
    } else {
        ap_phi_mux_data_248_V_read262_s_phi_fu_21380_p4 = ap_phi_reg_pp0_iter0_data_248_V_read262_s_reg_21376.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_249_V_read263_1_phi_fu_10651_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_249_V_read263_1_phi_fu_10651_p6 = data_249_V_read263_s_reg_21389.read();
    } else {
        ap_phi_mux_data_249_V_read263_1_phi_fu_10651_p6 = data_249_V_read263_1_reg_10647.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_249_V_read263_s_phi_fu_21393_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_249_V_read263_s_phi_fu_21393_p4 = ap_phi_mux_data_249_V_read263_1_phi_fu_10651_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_249_V_read263_s_phi_fu_21393_p4 = data_249_V_read.read();
    } else {
        ap_phi_mux_data_249_V_read263_s_phi_fu_21393_p4 = ap_phi_reg_pp0_iter0_data_249_V_read263_s_reg_21389.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_24_V_read38_ph_phi_fu_18468_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_24_V_read38_ph_phi_fu_18468_p4 = ap_phi_mux_data_24_V_read38_re_phi_fu_7501_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_24_V_read38_ph_phi_fu_18468_p4 = data_24_V_read.read();
    } else {
        ap_phi_mux_data_24_V_read38_ph_phi_fu_18468_p4 = ap_phi_reg_pp0_iter0_data_24_V_read38_ph_reg_18464.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_24_V_read38_re_phi_fu_7501_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_24_V_read38_re_phi_fu_7501_p6 = data_24_V_read38_ph_reg_18464.read();
    } else {
        ap_phi_mux_data_24_V_read38_re_phi_fu_7501_p6 = data_24_V_read38_re_reg_7497.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_250_V_read264_1_phi_fu_10665_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_250_V_read264_1_phi_fu_10665_p6 = data_250_V_read264_s_reg_21402.read();
    } else {
        ap_phi_mux_data_250_V_read264_1_phi_fu_10665_p6 = data_250_V_read264_1_reg_10661.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_250_V_read264_s_phi_fu_21406_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_250_V_read264_s_phi_fu_21406_p4 = ap_phi_mux_data_250_V_read264_1_phi_fu_10665_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_250_V_read264_s_phi_fu_21406_p4 = data_250_V_read.read();
    } else {
        ap_phi_mux_data_250_V_read264_s_phi_fu_21406_p4 = ap_phi_reg_pp0_iter0_data_250_V_read264_s_reg_21402.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_251_V_read265_1_phi_fu_10679_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_251_V_read265_1_phi_fu_10679_p6 = data_251_V_read265_s_reg_21415.read();
    } else {
        ap_phi_mux_data_251_V_read265_1_phi_fu_10679_p6 = data_251_V_read265_1_reg_10675.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_251_V_read265_s_phi_fu_21419_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_251_V_read265_s_phi_fu_21419_p4 = ap_phi_mux_data_251_V_read265_1_phi_fu_10679_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_251_V_read265_s_phi_fu_21419_p4 = data_251_V_read.read();
    } else {
        ap_phi_mux_data_251_V_read265_s_phi_fu_21419_p4 = ap_phi_reg_pp0_iter0_data_251_V_read265_s_reg_21415.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_252_V_read266_1_phi_fu_10693_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_252_V_read266_1_phi_fu_10693_p6 = data_252_V_read266_s_reg_21428.read();
    } else {
        ap_phi_mux_data_252_V_read266_1_phi_fu_10693_p6 = data_252_V_read266_1_reg_10689.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_252_V_read266_s_phi_fu_21432_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_252_V_read266_s_phi_fu_21432_p4 = ap_phi_mux_data_252_V_read266_1_phi_fu_10693_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_252_V_read266_s_phi_fu_21432_p4 = data_252_V_read.read();
    } else {
        ap_phi_mux_data_252_V_read266_s_phi_fu_21432_p4 = ap_phi_reg_pp0_iter0_data_252_V_read266_s_reg_21428.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_253_V_read267_1_phi_fu_10707_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_253_V_read267_1_phi_fu_10707_p6 = data_253_V_read267_s_reg_21441.read();
    } else {
        ap_phi_mux_data_253_V_read267_1_phi_fu_10707_p6 = data_253_V_read267_1_reg_10703.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_253_V_read267_s_phi_fu_21445_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_253_V_read267_s_phi_fu_21445_p4 = ap_phi_mux_data_253_V_read267_1_phi_fu_10707_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_253_V_read267_s_phi_fu_21445_p4 = data_253_V_read.read();
    } else {
        ap_phi_mux_data_253_V_read267_s_phi_fu_21445_p4 = ap_phi_reg_pp0_iter0_data_253_V_read267_s_reg_21441.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_254_V_read268_1_phi_fu_10721_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_254_V_read268_1_phi_fu_10721_p6 = data_254_V_read268_s_reg_21454.read();
    } else {
        ap_phi_mux_data_254_V_read268_1_phi_fu_10721_p6 = data_254_V_read268_1_reg_10717.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_254_V_read268_s_phi_fu_21458_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_254_V_read268_s_phi_fu_21458_p4 = ap_phi_mux_data_254_V_read268_1_phi_fu_10721_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_254_V_read268_s_phi_fu_21458_p4 = data_254_V_read.read();
    } else {
        ap_phi_mux_data_254_V_read268_s_phi_fu_21458_p4 = ap_phi_reg_pp0_iter0_data_254_V_read268_s_reg_21454.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_255_V_read269_1_phi_fu_10735_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_255_V_read269_1_phi_fu_10735_p6 = data_255_V_read269_s_reg_21467.read();
    } else {
        ap_phi_mux_data_255_V_read269_1_phi_fu_10735_p6 = data_255_V_read269_1_reg_10731.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_255_V_read269_s_phi_fu_21471_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_255_V_read269_s_phi_fu_21471_p4 = ap_phi_mux_data_255_V_read269_1_phi_fu_10735_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_255_V_read269_s_phi_fu_21471_p4 = data_255_V_read.read();
    } else {
        ap_phi_mux_data_255_V_read269_s_phi_fu_21471_p4 = ap_phi_reg_pp0_iter0_data_255_V_read269_s_reg_21467.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_256_V_read270_1_phi_fu_10749_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_256_V_read270_1_phi_fu_10749_p6 = data_256_V_read270_s_reg_21480.read();
    } else {
        ap_phi_mux_data_256_V_read270_1_phi_fu_10749_p6 = data_256_V_read270_1_reg_10745.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_256_V_read270_s_phi_fu_21484_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_256_V_read270_s_phi_fu_21484_p4 = ap_phi_mux_data_256_V_read270_1_phi_fu_10749_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_256_V_read270_s_phi_fu_21484_p4 = data_256_V_read.read();
    } else {
        ap_phi_mux_data_256_V_read270_s_phi_fu_21484_p4 = ap_phi_reg_pp0_iter0_data_256_V_read270_s_reg_21480.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_257_V_read271_1_phi_fu_10763_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_257_V_read271_1_phi_fu_10763_p6 = data_257_V_read271_s_reg_21493.read();
    } else {
        ap_phi_mux_data_257_V_read271_1_phi_fu_10763_p6 = data_257_V_read271_1_reg_10759.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_257_V_read271_s_phi_fu_21497_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_257_V_read271_s_phi_fu_21497_p4 = ap_phi_mux_data_257_V_read271_1_phi_fu_10763_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_257_V_read271_s_phi_fu_21497_p4 = data_257_V_read.read();
    } else {
        ap_phi_mux_data_257_V_read271_s_phi_fu_21497_p4 = ap_phi_reg_pp0_iter0_data_257_V_read271_s_reg_21493.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_258_V_read272_1_phi_fu_10777_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_258_V_read272_1_phi_fu_10777_p6 = data_258_V_read272_s_reg_21506.read();
    } else {
        ap_phi_mux_data_258_V_read272_1_phi_fu_10777_p6 = data_258_V_read272_1_reg_10773.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_258_V_read272_s_phi_fu_21510_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_258_V_read272_s_phi_fu_21510_p4 = ap_phi_mux_data_258_V_read272_1_phi_fu_10777_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_258_V_read272_s_phi_fu_21510_p4 = data_258_V_read.read();
    } else {
        ap_phi_mux_data_258_V_read272_s_phi_fu_21510_p4 = ap_phi_reg_pp0_iter0_data_258_V_read272_s_reg_21506.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_259_V_read273_1_phi_fu_10791_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_259_V_read273_1_phi_fu_10791_p6 = data_259_V_read273_s_reg_21519.read();
    } else {
        ap_phi_mux_data_259_V_read273_1_phi_fu_10791_p6 = data_259_V_read273_1_reg_10787.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_259_V_read273_s_phi_fu_21523_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_259_V_read273_s_phi_fu_21523_p4 = ap_phi_mux_data_259_V_read273_1_phi_fu_10791_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_259_V_read273_s_phi_fu_21523_p4 = data_259_V_read.read();
    } else {
        ap_phi_mux_data_259_V_read273_s_phi_fu_21523_p4 = ap_phi_reg_pp0_iter0_data_259_V_read273_s_reg_21519.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_25_V_read39_ph_phi_fu_18481_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_25_V_read39_ph_phi_fu_18481_p4 = ap_phi_mux_data_25_V_read39_re_phi_fu_7515_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_25_V_read39_ph_phi_fu_18481_p4 = data_25_V_read.read();
    } else {
        ap_phi_mux_data_25_V_read39_ph_phi_fu_18481_p4 = ap_phi_reg_pp0_iter0_data_25_V_read39_ph_reg_18477.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_25_V_read39_re_phi_fu_7515_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_25_V_read39_re_phi_fu_7515_p6 = data_25_V_read39_ph_reg_18477.read();
    } else {
        ap_phi_mux_data_25_V_read39_re_phi_fu_7515_p6 = data_25_V_read39_re_reg_7511.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_260_V_read274_1_phi_fu_10805_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_260_V_read274_1_phi_fu_10805_p6 = data_260_V_read274_s_reg_21532.read();
    } else {
        ap_phi_mux_data_260_V_read274_1_phi_fu_10805_p6 = data_260_V_read274_1_reg_10801.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_260_V_read274_s_phi_fu_21536_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_260_V_read274_s_phi_fu_21536_p4 = ap_phi_mux_data_260_V_read274_1_phi_fu_10805_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_260_V_read274_s_phi_fu_21536_p4 = data_260_V_read.read();
    } else {
        ap_phi_mux_data_260_V_read274_s_phi_fu_21536_p4 = ap_phi_reg_pp0_iter0_data_260_V_read274_s_reg_21532.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_261_V_read275_1_phi_fu_10819_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_261_V_read275_1_phi_fu_10819_p6 = data_261_V_read275_s_reg_21545.read();
    } else {
        ap_phi_mux_data_261_V_read275_1_phi_fu_10819_p6 = data_261_V_read275_1_reg_10815.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_261_V_read275_s_phi_fu_21549_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_261_V_read275_s_phi_fu_21549_p4 = ap_phi_mux_data_261_V_read275_1_phi_fu_10819_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_261_V_read275_s_phi_fu_21549_p4 = data_261_V_read.read();
    } else {
        ap_phi_mux_data_261_V_read275_s_phi_fu_21549_p4 = ap_phi_reg_pp0_iter0_data_261_V_read275_s_reg_21545.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_262_V_read276_1_phi_fu_10833_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_262_V_read276_1_phi_fu_10833_p6 = data_262_V_read276_s_reg_21558.read();
    } else {
        ap_phi_mux_data_262_V_read276_1_phi_fu_10833_p6 = data_262_V_read276_1_reg_10829.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_262_V_read276_s_phi_fu_21562_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_262_V_read276_s_phi_fu_21562_p4 = ap_phi_mux_data_262_V_read276_1_phi_fu_10833_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_262_V_read276_s_phi_fu_21562_p4 = data_262_V_read.read();
    } else {
        ap_phi_mux_data_262_V_read276_s_phi_fu_21562_p4 = ap_phi_reg_pp0_iter0_data_262_V_read276_s_reg_21558.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_263_V_read277_1_phi_fu_10847_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_263_V_read277_1_phi_fu_10847_p6 = data_263_V_read277_s_reg_21571.read();
    } else {
        ap_phi_mux_data_263_V_read277_1_phi_fu_10847_p6 = data_263_V_read277_1_reg_10843.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_263_V_read277_s_phi_fu_21575_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_263_V_read277_s_phi_fu_21575_p4 = ap_phi_mux_data_263_V_read277_1_phi_fu_10847_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_263_V_read277_s_phi_fu_21575_p4 = data_263_V_read.read();
    } else {
        ap_phi_mux_data_263_V_read277_s_phi_fu_21575_p4 = ap_phi_reg_pp0_iter0_data_263_V_read277_s_reg_21571.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_264_V_read278_1_phi_fu_10861_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_264_V_read278_1_phi_fu_10861_p6 = data_264_V_read278_s_reg_21584.read();
    } else {
        ap_phi_mux_data_264_V_read278_1_phi_fu_10861_p6 = data_264_V_read278_1_reg_10857.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_264_V_read278_s_phi_fu_21588_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_264_V_read278_s_phi_fu_21588_p4 = ap_phi_mux_data_264_V_read278_1_phi_fu_10861_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_264_V_read278_s_phi_fu_21588_p4 = data_264_V_read.read();
    } else {
        ap_phi_mux_data_264_V_read278_s_phi_fu_21588_p4 = ap_phi_reg_pp0_iter0_data_264_V_read278_s_reg_21584.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_265_V_read279_1_phi_fu_10875_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_265_V_read279_1_phi_fu_10875_p6 = data_265_V_read279_s_reg_21597.read();
    } else {
        ap_phi_mux_data_265_V_read279_1_phi_fu_10875_p6 = data_265_V_read279_1_reg_10871.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_265_V_read279_s_phi_fu_21601_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_265_V_read279_s_phi_fu_21601_p4 = ap_phi_mux_data_265_V_read279_1_phi_fu_10875_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_265_V_read279_s_phi_fu_21601_p4 = data_265_V_read.read();
    } else {
        ap_phi_mux_data_265_V_read279_s_phi_fu_21601_p4 = ap_phi_reg_pp0_iter0_data_265_V_read279_s_reg_21597.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_266_V_read280_1_phi_fu_10889_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_266_V_read280_1_phi_fu_10889_p6 = data_266_V_read280_s_reg_21610.read();
    } else {
        ap_phi_mux_data_266_V_read280_1_phi_fu_10889_p6 = data_266_V_read280_1_reg_10885.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_266_V_read280_s_phi_fu_21614_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_266_V_read280_s_phi_fu_21614_p4 = ap_phi_mux_data_266_V_read280_1_phi_fu_10889_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_266_V_read280_s_phi_fu_21614_p4 = data_266_V_read.read();
    } else {
        ap_phi_mux_data_266_V_read280_s_phi_fu_21614_p4 = ap_phi_reg_pp0_iter0_data_266_V_read280_s_reg_21610.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_267_V_read281_1_phi_fu_10903_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_267_V_read281_1_phi_fu_10903_p6 = data_267_V_read281_s_reg_21623.read();
    } else {
        ap_phi_mux_data_267_V_read281_1_phi_fu_10903_p6 = data_267_V_read281_1_reg_10899.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_267_V_read281_s_phi_fu_21627_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_267_V_read281_s_phi_fu_21627_p4 = ap_phi_mux_data_267_V_read281_1_phi_fu_10903_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_267_V_read281_s_phi_fu_21627_p4 = data_267_V_read.read();
    } else {
        ap_phi_mux_data_267_V_read281_s_phi_fu_21627_p4 = ap_phi_reg_pp0_iter0_data_267_V_read281_s_reg_21623.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_268_V_read282_1_phi_fu_10917_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_268_V_read282_1_phi_fu_10917_p6 = data_268_V_read282_s_reg_21636.read();
    } else {
        ap_phi_mux_data_268_V_read282_1_phi_fu_10917_p6 = data_268_V_read282_1_reg_10913.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_268_V_read282_s_phi_fu_21640_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_268_V_read282_s_phi_fu_21640_p4 = ap_phi_mux_data_268_V_read282_1_phi_fu_10917_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_268_V_read282_s_phi_fu_21640_p4 = data_268_V_read.read();
    } else {
        ap_phi_mux_data_268_V_read282_s_phi_fu_21640_p4 = ap_phi_reg_pp0_iter0_data_268_V_read282_s_reg_21636.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_269_V_read283_1_phi_fu_10931_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_269_V_read283_1_phi_fu_10931_p6 = data_269_V_read283_s_reg_21649.read();
    } else {
        ap_phi_mux_data_269_V_read283_1_phi_fu_10931_p6 = data_269_V_read283_1_reg_10927.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_269_V_read283_s_phi_fu_21653_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_269_V_read283_s_phi_fu_21653_p4 = ap_phi_mux_data_269_V_read283_1_phi_fu_10931_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_269_V_read283_s_phi_fu_21653_p4 = data_269_V_read.read();
    } else {
        ap_phi_mux_data_269_V_read283_s_phi_fu_21653_p4 = ap_phi_reg_pp0_iter0_data_269_V_read283_s_reg_21649.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_26_V_read40_ph_phi_fu_18494_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_26_V_read40_ph_phi_fu_18494_p4 = ap_phi_mux_data_26_V_read40_re_phi_fu_7529_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_26_V_read40_ph_phi_fu_18494_p4 = data_26_V_read.read();
    } else {
        ap_phi_mux_data_26_V_read40_ph_phi_fu_18494_p4 = ap_phi_reg_pp0_iter0_data_26_V_read40_ph_reg_18490.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_26_V_read40_re_phi_fu_7529_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_26_V_read40_re_phi_fu_7529_p6 = data_26_V_read40_ph_reg_18490.read();
    } else {
        ap_phi_mux_data_26_V_read40_re_phi_fu_7529_p6 = data_26_V_read40_re_reg_7525.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_270_V_read284_1_phi_fu_10945_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_270_V_read284_1_phi_fu_10945_p6 = data_270_V_read284_s_reg_21662.read();
    } else {
        ap_phi_mux_data_270_V_read284_1_phi_fu_10945_p6 = data_270_V_read284_1_reg_10941.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_270_V_read284_s_phi_fu_21666_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_270_V_read284_s_phi_fu_21666_p4 = ap_phi_mux_data_270_V_read284_1_phi_fu_10945_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_270_V_read284_s_phi_fu_21666_p4 = data_270_V_read.read();
    } else {
        ap_phi_mux_data_270_V_read284_s_phi_fu_21666_p4 = ap_phi_reg_pp0_iter0_data_270_V_read284_s_reg_21662.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_271_V_read285_1_phi_fu_10959_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_271_V_read285_1_phi_fu_10959_p6 = data_271_V_read285_s_reg_21675.read();
    } else {
        ap_phi_mux_data_271_V_read285_1_phi_fu_10959_p6 = data_271_V_read285_1_reg_10955.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_271_V_read285_s_phi_fu_21679_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_271_V_read285_s_phi_fu_21679_p4 = ap_phi_mux_data_271_V_read285_1_phi_fu_10959_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_271_V_read285_s_phi_fu_21679_p4 = data_271_V_read.read();
    } else {
        ap_phi_mux_data_271_V_read285_s_phi_fu_21679_p4 = ap_phi_reg_pp0_iter0_data_271_V_read285_s_reg_21675.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_272_V_read286_1_phi_fu_10973_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_272_V_read286_1_phi_fu_10973_p6 = data_272_V_read286_s_reg_21688.read();
    } else {
        ap_phi_mux_data_272_V_read286_1_phi_fu_10973_p6 = data_272_V_read286_1_reg_10969.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_272_V_read286_s_phi_fu_21692_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_272_V_read286_s_phi_fu_21692_p4 = ap_phi_mux_data_272_V_read286_1_phi_fu_10973_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_272_V_read286_s_phi_fu_21692_p4 = data_272_V_read.read();
    } else {
        ap_phi_mux_data_272_V_read286_s_phi_fu_21692_p4 = ap_phi_reg_pp0_iter0_data_272_V_read286_s_reg_21688.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_273_V_read287_1_phi_fu_10987_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_273_V_read287_1_phi_fu_10987_p6 = data_273_V_read287_s_reg_21701.read();
    } else {
        ap_phi_mux_data_273_V_read287_1_phi_fu_10987_p6 = data_273_V_read287_1_reg_10983.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_273_V_read287_s_phi_fu_21705_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_273_V_read287_s_phi_fu_21705_p4 = ap_phi_mux_data_273_V_read287_1_phi_fu_10987_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_273_V_read287_s_phi_fu_21705_p4 = data_273_V_read.read();
    } else {
        ap_phi_mux_data_273_V_read287_s_phi_fu_21705_p4 = ap_phi_reg_pp0_iter0_data_273_V_read287_s_reg_21701.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_274_V_read288_1_phi_fu_11001_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_274_V_read288_1_phi_fu_11001_p6 = data_274_V_read288_s_reg_21714.read();
    } else {
        ap_phi_mux_data_274_V_read288_1_phi_fu_11001_p6 = data_274_V_read288_1_reg_10997.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_274_V_read288_s_phi_fu_21718_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_274_V_read288_s_phi_fu_21718_p4 = ap_phi_mux_data_274_V_read288_1_phi_fu_11001_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_274_V_read288_s_phi_fu_21718_p4 = data_274_V_read.read();
    } else {
        ap_phi_mux_data_274_V_read288_s_phi_fu_21718_p4 = ap_phi_reg_pp0_iter0_data_274_V_read288_s_reg_21714.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_275_V_read289_1_phi_fu_11015_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_275_V_read289_1_phi_fu_11015_p6 = data_275_V_read289_s_reg_21727.read();
    } else {
        ap_phi_mux_data_275_V_read289_1_phi_fu_11015_p6 = data_275_V_read289_1_reg_11011.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_275_V_read289_s_phi_fu_21731_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_275_V_read289_s_phi_fu_21731_p4 = ap_phi_mux_data_275_V_read289_1_phi_fu_11015_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_275_V_read289_s_phi_fu_21731_p4 = data_275_V_read.read();
    } else {
        ap_phi_mux_data_275_V_read289_s_phi_fu_21731_p4 = ap_phi_reg_pp0_iter0_data_275_V_read289_s_reg_21727.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_276_V_read290_1_phi_fu_11029_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_276_V_read290_1_phi_fu_11029_p6 = data_276_V_read290_s_reg_21740.read();
    } else {
        ap_phi_mux_data_276_V_read290_1_phi_fu_11029_p6 = data_276_V_read290_1_reg_11025.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_276_V_read290_s_phi_fu_21744_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_276_V_read290_s_phi_fu_21744_p4 = ap_phi_mux_data_276_V_read290_1_phi_fu_11029_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_276_V_read290_s_phi_fu_21744_p4 = data_276_V_read.read();
    } else {
        ap_phi_mux_data_276_V_read290_s_phi_fu_21744_p4 = ap_phi_reg_pp0_iter0_data_276_V_read290_s_reg_21740.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_277_V_read291_1_phi_fu_11043_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_277_V_read291_1_phi_fu_11043_p6 = data_277_V_read291_s_reg_21753.read();
    } else {
        ap_phi_mux_data_277_V_read291_1_phi_fu_11043_p6 = data_277_V_read291_1_reg_11039.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_277_V_read291_s_phi_fu_21757_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_277_V_read291_s_phi_fu_21757_p4 = ap_phi_mux_data_277_V_read291_1_phi_fu_11043_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_277_V_read291_s_phi_fu_21757_p4 = data_277_V_read.read();
    } else {
        ap_phi_mux_data_277_V_read291_s_phi_fu_21757_p4 = ap_phi_reg_pp0_iter0_data_277_V_read291_s_reg_21753.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_278_V_read292_1_phi_fu_11057_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_278_V_read292_1_phi_fu_11057_p6 = data_278_V_read292_s_reg_21766.read();
    } else {
        ap_phi_mux_data_278_V_read292_1_phi_fu_11057_p6 = data_278_V_read292_1_reg_11053.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_278_V_read292_s_phi_fu_21770_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_278_V_read292_s_phi_fu_21770_p4 = ap_phi_mux_data_278_V_read292_1_phi_fu_11057_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_278_V_read292_s_phi_fu_21770_p4 = data_278_V_read.read();
    } else {
        ap_phi_mux_data_278_V_read292_s_phi_fu_21770_p4 = ap_phi_reg_pp0_iter0_data_278_V_read292_s_reg_21766.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_279_V_read293_1_phi_fu_11071_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_279_V_read293_1_phi_fu_11071_p6 = data_279_V_read293_s_reg_21779.read();
    } else {
        ap_phi_mux_data_279_V_read293_1_phi_fu_11071_p6 = data_279_V_read293_1_reg_11067.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_279_V_read293_s_phi_fu_21783_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_279_V_read293_s_phi_fu_21783_p4 = ap_phi_mux_data_279_V_read293_1_phi_fu_11071_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_279_V_read293_s_phi_fu_21783_p4 = data_279_V_read.read();
    } else {
        ap_phi_mux_data_279_V_read293_s_phi_fu_21783_p4 = ap_phi_reg_pp0_iter0_data_279_V_read293_s_reg_21779.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_27_V_read41_ph_phi_fu_18507_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_27_V_read41_ph_phi_fu_18507_p4 = ap_phi_mux_data_27_V_read41_re_phi_fu_7543_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_27_V_read41_ph_phi_fu_18507_p4 = data_27_V_read.read();
    } else {
        ap_phi_mux_data_27_V_read41_ph_phi_fu_18507_p4 = ap_phi_reg_pp0_iter0_data_27_V_read41_ph_reg_18503.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_27_V_read41_re_phi_fu_7543_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_27_V_read41_re_phi_fu_7543_p6 = data_27_V_read41_ph_reg_18503.read();
    } else {
        ap_phi_mux_data_27_V_read41_re_phi_fu_7543_p6 = data_27_V_read41_re_reg_7539.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_280_V_read294_1_phi_fu_11085_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_280_V_read294_1_phi_fu_11085_p6 = data_280_V_read294_s_reg_21792.read();
    } else {
        ap_phi_mux_data_280_V_read294_1_phi_fu_11085_p6 = data_280_V_read294_1_reg_11081.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_280_V_read294_s_phi_fu_21796_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_280_V_read294_s_phi_fu_21796_p4 = ap_phi_mux_data_280_V_read294_1_phi_fu_11085_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_280_V_read294_s_phi_fu_21796_p4 = data_280_V_read.read();
    } else {
        ap_phi_mux_data_280_V_read294_s_phi_fu_21796_p4 = ap_phi_reg_pp0_iter0_data_280_V_read294_s_reg_21792.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_281_V_read295_1_phi_fu_11099_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_281_V_read295_1_phi_fu_11099_p6 = data_281_V_read295_s_reg_21805.read();
    } else {
        ap_phi_mux_data_281_V_read295_1_phi_fu_11099_p6 = data_281_V_read295_1_reg_11095.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_281_V_read295_s_phi_fu_21809_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_281_V_read295_s_phi_fu_21809_p4 = ap_phi_mux_data_281_V_read295_1_phi_fu_11099_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_281_V_read295_s_phi_fu_21809_p4 = data_281_V_read.read();
    } else {
        ap_phi_mux_data_281_V_read295_s_phi_fu_21809_p4 = ap_phi_reg_pp0_iter0_data_281_V_read295_s_reg_21805.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_282_V_read296_1_phi_fu_11113_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_282_V_read296_1_phi_fu_11113_p6 = data_282_V_read296_s_reg_21818.read();
    } else {
        ap_phi_mux_data_282_V_read296_1_phi_fu_11113_p6 = data_282_V_read296_1_reg_11109.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_282_V_read296_s_phi_fu_21822_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_282_V_read296_s_phi_fu_21822_p4 = ap_phi_mux_data_282_V_read296_1_phi_fu_11113_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_282_V_read296_s_phi_fu_21822_p4 = data_282_V_read.read();
    } else {
        ap_phi_mux_data_282_V_read296_s_phi_fu_21822_p4 = ap_phi_reg_pp0_iter0_data_282_V_read296_s_reg_21818.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_283_V_read297_1_phi_fu_11127_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_283_V_read297_1_phi_fu_11127_p6 = data_283_V_read297_s_reg_21831.read();
    } else {
        ap_phi_mux_data_283_V_read297_1_phi_fu_11127_p6 = data_283_V_read297_1_reg_11123.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_283_V_read297_s_phi_fu_21835_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_283_V_read297_s_phi_fu_21835_p4 = ap_phi_mux_data_283_V_read297_1_phi_fu_11127_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_283_V_read297_s_phi_fu_21835_p4 = data_283_V_read.read();
    } else {
        ap_phi_mux_data_283_V_read297_s_phi_fu_21835_p4 = ap_phi_reg_pp0_iter0_data_283_V_read297_s_reg_21831.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_284_V_read298_1_phi_fu_11141_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_284_V_read298_1_phi_fu_11141_p6 = data_284_V_read298_s_reg_21844.read();
    } else {
        ap_phi_mux_data_284_V_read298_1_phi_fu_11141_p6 = data_284_V_read298_1_reg_11137.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_284_V_read298_s_phi_fu_21848_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_284_V_read298_s_phi_fu_21848_p4 = ap_phi_mux_data_284_V_read298_1_phi_fu_11141_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_284_V_read298_s_phi_fu_21848_p4 = data_284_V_read.read();
    } else {
        ap_phi_mux_data_284_V_read298_s_phi_fu_21848_p4 = ap_phi_reg_pp0_iter0_data_284_V_read298_s_reg_21844.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_285_V_read299_1_phi_fu_11155_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_285_V_read299_1_phi_fu_11155_p6 = data_285_V_read299_s_reg_21857.read();
    } else {
        ap_phi_mux_data_285_V_read299_1_phi_fu_11155_p6 = data_285_V_read299_1_reg_11151.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_285_V_read299_s_phi_fu_21861_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_285_V_read299_s_phi_fu_21861_p4 = ap_phi_mux_data_285_V_read299_1_phi_fu_11155_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_285_V_read299_s_phi_fu_21861_p4 = data_285_V_read.read();
    } else {
        ap_phi_mux_data_285_V_read299_s_phi_fu_21861_p4 = ap_phi_reg_pp0_iter0_data_285_V_read299_s_reg_21857.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_286_V_read300_1_phi_fu_11169_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_286_V_read300_1_phi_fu_11169_p6 = data_286_V_read300_s_reg_21870.read();
    } else {
        ap_phi_mux_data_286_V_read300_1_phi_fu_11169_p6 = data_286_V_read300_1_reg_11165.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_286_V_read300_s_phi_fu_21874_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_286_V_read300_s_phi_fu_21874_p4 = ap_phi_mux_data_286_V_read300_1_phi_fu_11169_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_286_V_read300_s_phi_fu_21874_p4 = data_286_V_read.read();
    } else {
        ap_phi_mux_data_286_V_read300_s_phi_fu_21874_p4 = ap_phi_reg_pp0_iter0_data_286_V_read300_s_reg_21870.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_287_V_read301_1_phi_fu_11183_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_287_V_read301_1_phi_fu_11183_p6 = data_287_V_read301_s_reg_21883.read();
    } else {
        ap_phi_mux_data_287_V_read301_1_phi_fu_11183_p6 = data_287_V_read301_1_reg_11179.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_287_V_read301_s_phi_fu_21887_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_287_V_read301_s_phi_fu_21887_p4 = ap_phi_mux_data_287_V_read301_1_phi_fu_11183_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_287_V_read301_s_phi_fu_21887_p4 = data_287_V_read.read();
    } else {
        ap_phi_mux_data_287_V_read301_s_phi_fu_21887_p4 = ap_phi_reg_pp0_iter0_data_287_V_read301_s_reg_21883.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_288_V_read302_1_phi_fu_11197_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_288_V_read302_1_phi_fu_11197_p6 = data_288_V_read302_s_reg_21896.read();
    } else {
        ap_phi_mux_data_288_V_read302_1_phi_fu_11197_p6 = data_288_V_read302_1_reg_11193.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_288_V_read302_s_phi_fu_21900_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_288_V_read302_s_phi_fu_21900_p4 = ap_phi_mux_data_288_V_read302_1_phi_fu_11197_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_288_V_read302_s_phi_fu_21900_p4 = data_288_V_read.read();
    } else {
        ap_phi_mux_data_288_V_read302_s_phi_fu_21900_p4 = ap_phi_reg_pp0_iter0_data_288_V_read302_s_reg_21896.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_289_V_read303_1_phi_fu_11211_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_289_V_read303_1_phi_fu_11211_p6 = data_289_V_read303_s_reg_21909.read();
    } else {
        ap_phi_mux_data_289_V_read303_1_phi_fu_11211_p6 = data_289_V_read303_1_reg_11207.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_289_V_read303_s_phi_fu_21913_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_289_V_read303_s_phi_fu_21913_p4 = ap_phi_mux_data_289_V_read303_1_phi_fu_11211_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_289_V_read303_s_phi_fu_21913_p4 = data_289_V_read.read();
    } else {
        ap_phi_mux_data_289_V_read303_s_phi_fu_21913_p4 = ap_phi_reg_pp0_iter0_data_289_V_read303_s_reg_21909.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_28_V_read42_ph_phi_fu_18520_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_28_V_read42_ph_phi_fu_18520_p4 = ap_phi_mux_data_28_V_read42_re_phi_fu_7557_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_28_V_read42_ph_phi_fu_18520_p4 = data_28_V_read.read();
    } else {
        ap_phi_mux_data_28_V_read42_ph_phi_fu_18520_p4 = ap_phi_reg_pp0_iter0_data_28_V_read42_ph_reg_18516.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_28_V_read42_re_phi_fu_7557_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_28_V_read42_re_phi_fu_7557_p6 = data_28_V_read42_ph_reg_18516.read();
    } else {
        ap_phi_mux_data_28_V_read42_re_phi_fu_7557_p6 = data_28_V_read42_re_reg_7553.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_290_V_read304_1_phi_fu_11225_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_290_V_read304_1_phi_fu_11225_p6 = data_290_V_read304_s_reg_21922.read();
    } else {
        ap_phi_mux_data_290_V_read304_1_phi_fu_11225_p6 = data_290_V_read304_1_reg_11221.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_290_V_read304_s_phi_fu_21926_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_290_V_read304_s_phi_fu_21926_p4 = ap_phi_mux_data_290_V_read304_1_phi_fu_11225_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_290_V_read304_s_phi_fu_21926_p4 = data_290_V_read.read();
    } else {
        ap_phi_mux_data_290_V_read304_s_phi_fu_21926_p4 = ap_phi_reg_pp0_iter0_data_290_V_read304_s_reg_21922.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_291_V_read305_1_phi_fu_11239_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_291_V_read305_1_phi_fu_11239_p6 = data_291_V_read305_s_reg_21935.read();
    } else {
        ap_phi_mux_data_291_V_read305_1_phi_fu_11239_p6 = data_291_V_read305_1_reg_11235.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_291_V_read305_s_phi_fu_21939_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_291_V_read305_s_phi_fu_21939_p4 = ap_phi_mux_data_291_V_read305_1_phi_fu_11239_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_291_V_read305_s_phi_fu_21939_p4 = data_291_V_read.read();
    } else {
        ap_phi_mux_data_291_V_read305_s_phi_fu_21939_p4 = ap_phi_reg_pp0_iter0_data_291_V_read305_s_reg_21935.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_292_V_read306_1_phi_fu_11253_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_292_V_read306_1_phi_fu_11253_p6 = data_292_V_read306_s_reg_21948.read();
    } else {
        ap_phi_mux_data_292_V_read306_1_phi_fu_11253_p6 = data_292_V_read306_1_reg_11249.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_292_V_read306_s_phi_fu_21952_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_292_V_read306_s_phi_fu_21952_p4 = ap_phi_mux_data_292_V_read306_1_phi_fu_11253_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_292_V_read306_s_phi_fu_21952_p4 = data_292_V_read.read();
    } else {
        ap_phi_mux_data_292_V_read306_s_phi_fu_21952_p4 = ap_phi_reg_pp0_iter0_data_292_V_read306_s_reg_21948.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_293_V_read307_1_phi_fu_11267_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_293_V_read307_1_phi_fu_11267_p6 = data_293_V_read307_s_reg_21961.read();
    } else {
        ap_phi_mux_data_293_V_read307_1_phi_fu_11267_p6 = data_293_V_read307_1_reg_11263.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_293_V_read307_s_phi_fu_21965_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_293_V_read307_s_phi_fu_21965_p4 = ap_phi_mux_data_293_V_read307_1_phi_fu_11267_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_293_V_read307_s_phi_fu_21965_p4 = data_293_V_read.read();
    } else {
        ap_phi_mux_data_293_V_read307_s_phi_fu_21965_p4 = ap_phi_reg_pp0_iter0_data_293_V_read307_s_reg_21961.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_294_V_read308_1_phi_fu_11281_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_294_V_read308_1_phi_fu_11281_p6 = data_294_V_read308_s_reg_21974.read();
    } else {
        ap_phi_mux_data_294_V_read308_1_phi_fu_11281_p6 = data_294_V_read308_1_reg_11277.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_294_V_read308_s_phi_fu_21978_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_294_V_read308_s_phi_fu_21978_p4 = ap_phi_mux_data_294_V_read308_1_phi_fu_11281_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_294_V_read308_s_phi_fu_21978_p4 = data_294_V_read.read();
    } else {
        ap_phi_mux_data_294_V_read308_s_phi_fu_21978_p4 = ap_phi_reg_pp0_iter0_data_294_V_read308_s_reg_21974.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_295_V_read309_1_phi_fu_11295_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_295_V_read309_1_phi_fu_11295_p6 = data_295_V_read309_s_reg_21987.read();
    } else {
        ap_phi_mux_data_295_V_read309_1_phi_fu_11295_p6 = data_295_V_read309_1_reg_11291.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_295_V_read309_s_phi_fu_21991_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_295_V_read309_s_phi_fu_21991_p4 = ap_phi_mux_data_295_V_read309_1_phi_fu_11295_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_295_V_read309_s_phi_fu_21991_p4 = data_295_V_read.read();
    } else {
        ap_phi_mux_data_295_V_read309_s_phi_fu_21991_p4 = ap_phi_reg_pp0_iter0_data_295_V_read309_s_reg_21987.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_296_V_read310_1_phi_fu_11309_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_296_V_read310_1_phi_fu_11309_p6 = data_296_V_read310_s_reg_22000.read();
    } else {
        ap_phi_mux_data_296_V_read310_1_phi_fu_11309_p6 = data_296_V_read310_1_reg_11305.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_296_V_read310_s_phi_fu_22004_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_296_V_read310_s_phi_fu_22004_p4 = ap_phi_mux_data_296_V_read310_1_phi_fu_11309_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_296_V_read310_s_phi_fu_22004_p4 = data_296_V_read.read();
    } else {
        ap_phi_mux_data_296_V_read310_s_phi_fu_22004_p4 = ap_phi_reg_pp0_iter0_data_296_V_read310_s_reg_22000.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_297_V_read311_1_phi_fu_11323_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_297_V_read311_1_phi_fu_11323_p6 = data_297_V_read311_s_reg_22013.read();
    } else {
        ap_phi_mux_data_297_V_read311_1_phi_fu_11323_p6 = data_297_V_read311_1_reg_11319.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_297_V_read311_s_phi_fu_22017_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_297_V_read311_s_phi_fu_22017_p4 = ap_phi_mux_data_297_V_read311_1_phi_fu_11323_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_297_V_read311_s_phi_fu_22017_p4 = data_297_V_read.read();
    } else {
        ap_phi_mux_data_297_V_read311_s_phi_fu_22017_p4 = ap_phi_reg_pp0_iter0_data_297_V_read311_s_reg_22013.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_298_V_read312_1_phi_fu_11337_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_298_V_read312_1_phi_fu_11337_p6 = data_298_V_read312_s_reg_22026.read();
    } else {
        ap_phi_mux_data_298_V_read312_1_phi_fu_11337_p6 = data_298_V_read312_1_reg_11333.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_298_V_read312_s_phi_fu_22030_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_298_V_read312_s_phi_fu_22030_p4 = ap_phi_mux_data_298_V_read312_1_phi_fu_11337_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_298_V_read312_s_phi_fu_22030_p4 = data_298_V_read.read();
    } else {
        ap_phi_mux_data_298_V_read312_s_phi_fu_22030_p4 = ap_phi_reg_pp0_iter0_data_298_V_read312_s_reg_22026.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_299_V_read313_1_phi_fu_11351_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_299_V_read313_1_phi_fu_11351_p6 = data_299_V_read313_s_reg_22039.read();
    } else {
        ap_phi_mux_data_299_V_read313_1_phi_fu_11351_p6 = data_299_V_read313_1_reg_11347.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_299_V_read313_s_phi_fu_22043_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_299_V_read313_s_phi_fu_22043_p4 = ap_phi_mux_data_299_V_read313_1_phi_fu_11351_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_299_V_read313_s_phi_fu_22043_p4 = data_299_V_read.read();
    } else {
        ap_phi_mux_data_299_V_read313_s_phi_fu_22043_p4 = ap_phi_reg_pp0_iter0_data_299_V_read313_s_reg_22039.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_29_V_read43_ph_phi_fu_18533_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_29_V_read43_ph_phi_fu_18533_p4 = ap_phi_mux_data_29_V_read43_re_phi_fu_7571_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_29_V_read43_ph_phi_fu_18533_p4 = data_29_V_read.read();
    } else {
        ap_phi_mux_data_29_V_read43_ph_phi_fu_18533_p4 = ap_phi_reg_pp0_iter0_data_29_V_read43_ph_reg_18529.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_29_V_read43_re_phi_fu_7571_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_29_V_read43_re_phi_fu_7571_p6 = data_29_V_read43_ph_reg_18529.read();
    } else {
        ap_phi_mux_data_29_V_read43_re_phi_fu_7571_p6 = data_29_V_read43_re_reg_7567.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_2_V_read16_phi_phi_fu_18182_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_2_V_read16_phi_phi_fu_18182_p4 = ap_phi_mux_data_2_V_read16_rew_phi_fu_7193_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_2_V_read16_phi_phi_fu_18182_p4 = data_2_V_read.read();
    } else {
        ap_phi_mux_data_2_V_read16_phi_phi_fu_18182_p4 = ap_phi_reg_pp0_iter0_data_2_V_read16_phi_reg_18178.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_2_V_read16_rew_phi_fu_7193_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2_V_read16_rew_phi_fu_7193_p6 = data_2_V_read16_phi_reg_18178.read();
    } else {
        ap_phi_mux_data_2_V_read16_rew_phi_fu_7193_p6 = data_2_V_read16_rew_reg_7189.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_300_V_read314_1_phi_fu_11365_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_300_V_read314_1_phi_fu_11365_p6 = data_300_V_read314_s_reg_22052.read();
    } else {
        ap_phi_mux_data_300_V_read314_1_phi_fu_11365_p6 = data_300_V_read314_1_reg_11361.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_300_V_read314_s_phi_fu_22056_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_300_V_read314_s_phi_fu_22056_p4 = ap_phi_mux_data_300_V_read314_1_phi_fu_11365_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_300_V_read314_s_phi_fu_22056_p4 = data_300_V_read.read();
    } else {
        ap_phi_mux_data_300_V_read314_s_phi_fu_22056_p4 = ap_phi_reg_pp0_iter0_data_300_V_read314_s_reg_22052.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_301_V_read315_1_phi_fu_11379_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_301_V_read315_1_phi_fu_11379_p6 = data_301_V_read315_s_reg_22065.read();
    } else {
        ap_phi_mux_data_301_V_read315_1_phi_fu_11379_p6 = data_301_V_read315_1_reg_11375.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_301_V_read315_s_phi_fu_22069_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_301_V_read315_s_phi_fu_22069_p4 = ap_phi_mux_data_301_V_read315_1_phi_fu_11379_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_301_V_read315_s_phi_fu_22069_p4 = data_301_V_read.read();
    } else {
        ap_phi_mux_data_301_V_read315_s_phi_fu_22069_p4 = ap_phi_reg_pp0_iter0_data_301_V_read315_s_reg_22065.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_302_V_read316_1_phi_fu_11393_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_302_V_read316_1_phi_fu_11393_p6 = data_302_V_read316_s_reg_22078.read();
    } else {
        ap_phi_mux_data_302_V_read316_1_phi_fu_11393_p6 = data_302_V_read316_1_reg_11389.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_302_V_read316_s_phi_fu_22082_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_302_V_read316_s_phi_fu_22082_p4 = ap_phi_mux_data_302_V_read316_1_phi_fu_11393_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_302_V_read316_s_phi_fu_22082_p4 = data_302_V_read.read();
    } else {
        ap_phi_mux_data_302_V_read316_s_phi_fu_22082_p4 = ap_phi_reg_pp0_iter0_data_302_V_read316_s_reg_22078.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_303_V_read317_1_phi_fu_11407_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_303_V_read317_1_phi_fu_11407_p6 = data_303_V_read317_s_reg_22091.read();
    } else {
        ap_phi_mux_data_303_V_read317_1_phi_fu_11407_p6 = data_303_V_read317_1_reg_11403.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_303_V_read317_s_phi_fu_22095_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_303_V_read317_s_phi_fu_22095_p4 = ap_phi_mux_data_303_V_read317_1_phi_fu_11407_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_303_V_read317_s_phi_fu_22095_p4 = data_303_V_read.read();
    } else {
        ap_phi_mux_data_303_V_read317_s_phi_fu_22095_p4 = ap_phi_reg_pp0_iter0_data_303_V_read317_s_reg_22091.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_304_V_read318_1_phi_fu_11421_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_304_V_read318_1_phi_fu_11421_p6 = data_304_V_read318_s_reg_22104.read();
    } else {
        ap_phi_mux_data_304_V_read318_1_phi_fu_11421_p6 = data_304_V_read318_1_reg_11417.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_304_V_read318_s_phi_fu_22108_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_304_V_read318_s_phi_fu_22108_p4 = ap_phi_mux_data_304_V_read318_1_phi_fu_11421_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_304_V_read318_s_phi_fu_22108_p4 = data_304_V_read.read();
    } else {
        ap_phi_mux_data_304_V_read318_s_phi_fu_22108_p4 = ap_phi_reg_pp0_iter0_data_304_V_read318_s_reg_22104.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_305_V_read319_1_phi_fu_11435_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_305_V_read319_1_phi_fu_11435_p6 = data_305_V_read319_s_reg_22117.read();
    } else {
        ap_phi_mux_data_305_V_read319_1_phi_fu_11435_p6 = data_305_V_read319_1_reg_11431.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_305_V_read319_s_phi_fu_22121_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_305_V_read319_s_phi_fu_22121_p4 = ap_phi_mux_data_305_V_read319_1_phi_fu_11435_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_305_V_read319_s_phi_fu_22121_p4 = data_305_V_read.read();
    } else {
        ap_phi_mux_data_305_V_read319_s_phi_fu_22121_p4 = ap_phi_reg_pp0_iter0_data_305_V_read319_s_reg_22117.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_306_V_read320_1_phi_fu_11449_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_306_V_read320_1_phi_fu_11449_p6 = data_306_V_read320_s_reg_22130.read();
    } else {
        ap_phi_mux_data_306_V_read320_1_phi_fu_11449_p6 = data_306_V_read320_1_reg_11445.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_306_V_read320_s_phi_fu_22134_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_306_V_read320_s_phi_fu_22134_p4 = ap_phi_mux_data_306_V_read320_1_phi_fu_11449_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_306_V_read320_s_phi_fu_22134_p4 = data_306_V_read.read();
    } else {
        ap_phi_mux_data_306_V_read320_s_phi_fu_22134_p4 = ap_phi_reg_pp0_iter0_data_306_V_read320_s_reg_22130.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_307_V_read321_1_phi_fu_11463_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_307_V_read321_1_phi_fu_11463_p6 = data_307_V_read321_s_reg_22143.read();
    } else {
        ap_phi_mux_data_307_V_read321_1_phi_fu_11463_p6 = data_307_V_read321_1_reg_11459.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_307_V_read321_s_phi_fu_22147_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_307_V_read321_s_phi_fu_22147_p4 = ap_phi_mux_data_307_V_read321_1_phi_fu_11463_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_307_V_read321_s_phi_fu_22147_p4 = data_307_V_read.read();
    } else {
        ap_phi_mux_data_307_V_read321_s_phi_fu_22147_p4 = ap_phi_reg_pp0_iter0_data_307_V_read321_s_reg_22143.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_308_V_read322_1_phi_fu_11477_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_308_V_read322_1_phi_fu_11477_p6 = data_308_V_read322_s_reg_22156.read();
    } else {
        ap_phi_mux_data_308_V_read322_1_phi_fu_11477_p6 = data_308_V_read322_1_reg_11473.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_308_V_read322_s_phi_fu_22160_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_308_V_read322_s_phi_fu_22160_p4 = ap_phi_mux_data_308_V_read322_1_phi_fu_11477_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_308_V_read322_s_phi_fu_22160_p4 = data_308_V_read.read();
    } else {
        ap_phi_mux_data_308_V_read322_s_phi_fu_22160_p4 = ap_phi_reg_pp0_iter0_data_308_V_read322_s_reg_22156.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_309_V_read323_1_phi_fu_11491_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_309_V_read323_1_phi_fu_11491_p6 = data_309_V_read323_s_reg_22169.read();
    } else {
        ap_phi_mux_data_309_V_read323_1_phi_fu_11491_p6 = data_309_V_read323_1_reg_11487.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_309_V_read323_s_phi_fu_22173_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_309_V_read323_s_phi_fu_22173_p4 = ap_phi_mux_data_309_V_read323_1_phi_fu_11491_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_309_V_read323_s_phi_fu_22173_p4 = data_309_V_read.read();
    } else {
        ap_phi_mux_data_309_V_read323_s_phi_fu_22173_p4 = ap_phi_reg_pp0_iter0_data_309_V_read323_s_reg_22169.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_30_V_read44_ph_phi_fu_18546_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_30_V_read44_ph_phi_fu_18546_p4 = ap_phi_mux_data_30_V_read44_re_phi_fu_7585_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_30_V_read44_ph_phi_fu_18546_p4 = data_30_V_read.read();
    } else {
        ap_phi_mux_data_30_V_read44_ph_phi_fu_18546_p4 = ap_phi_reg_pp0_iter0_data_30_V_read44_ph_reg_18542.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_30_V_read44_re_phi_fu_7585_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_30_V_read44_re_phi_fu_7585_p6 = data_30_V_read44_ph_reg_18542.read();
    } else {
        ap_phi_mux_data_30_V_read44_re_phi_fu_7585_p6 = data_30_V_read44_re_reg_7581.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_310_V_read324_1_phi_fu_11505_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_310_V_read324_1_phi_fu_11505_p6 = data_310_V_read324_s_reg_22182.read();
    } else {
        ap_phi_mux_data_310_V_read324_1_phi_fu_11505_p6 = data_310_V_read324_1_reg_11501.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_310_V_read324_s_phi_fu_22186_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_310_V_read324_s_phi_fu_22186_p4 = ap_phi_mux_data_310_V_read324_1_phi_fu_11505_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_310_V_read324_s_phi_fu_22186_p4 = data_310_V_read.read();
    } else {
        ap_phi_mux_data_310_V_read324_s_phi_fu_22186_p4 = ap_phi_reg_pp0_iter0_data_310_V_read324_s_reg_22182.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_311_V_read325_1_phi_fu_11519_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_311_V_read325_1_phi_fu_11519_p6 = data_311_V_read325_s_reg_22195.read();
    } else {
        ap_phi_mux_data_311_V_read325_1_phi_fu_11519_p6 = data_311_V_read325_1_reg_11515.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_311_V_read325_s_phi_fu_22199_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_311_V_read325_s_phi_fu_22199_p4 = ap_phi_mux_data_311_V_read325_1_phi_fu_11519_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_311_V_read325_s_phi_fu_22199_p4 = data_311_V_read.read();
    } else {
        ap_phi_mux_data_311_V_read325_s_phi_fu_22199_p4 = ap_phi_reg_pp0_iter0_data_311_V_read325_s_reg_22195.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_312_V_read326_1_phi_fu_11533_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_312_V_read326_1_phi_fu_11533_p6 = data_312_V_read326_s_reg_22208.read();
    } else {
        ap_phi_mux_data_312_V_read326_1_phi_fu_11533_p6 = data_312_V_read326_1_reg_11529.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_312_V_read326_s_phi_fu_22212_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_312_V_read326_s_phi_fu_22212_p4 = ap_phi_mux_data_312_V_read326_1_phi_fu_11533_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_312_V_read326_s_phi_fu_22212_p4 = data_312_V_read.read();
    } else {
        ap_phi_mux_data_312_V_read326_s_phi_fu_22212_p4 = ap_phi_reg_pp0_iter0_data_312_V_read326_s_reg_22208.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_313_V_read327_1_phi_fu_11547_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_313_V_read327_1_phi_fu_11547_p6 = data_313_V_read327_s_reg_22221.read();
    } else {
        ap_phi_mux_data_313_V_read327_1_phi_fu_11547_p6 = data_313_V_read327_1_reg_11543.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_313_V_read327_s_phi_fu_22225_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_313_V_read327_s_phi_fu_22225_p4 = ap_phi_mux_data_313_V_read327_1_phi_fu_11547_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_313_V_read327_s_phi_fu_22225_p4 = data_313_V_read.read();
    } else {
        ap_phi_mux_data_313_V_read327_s_phi_fu_22225_p4 = ap_phi_reg_pp0_iter0_data_313_V_read327_s_reg_22221.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_314_V_read328_1_phi_fu_11561_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_314_V_read328_1_phi_fu_11561_p6 = data_314_V_read328_s_reg_22234.read();
    } else {
        ap_phi_mux_data_314_V_read328_1_phi_fu_11561_p6 = data_314_V_read328_1_reg_11557.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_314_V_read328_s_phi_fu_22238_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_314_V_read328_s_phi_fu_22238_p4 = ap_phi_mux_data_314_V_read328_1_phi_fu_11561_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_314_V_read328_s_phi_fu_22238_p4 = data_314_V_read.read();
    } else {
        ap_phi_mux_data_314_V_read328_s_phi_fu_22238_p4 = ap_phi_reg_pp0_iter0_data_314_V_read328_s_reg_22234.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_315_V_read329_1_phi_fu_11575_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_315_V_read329_1_phi_fu_11575_p6 = data_315_V_read329_s_reg_22247.read();
    } else {
        ap_phi_mux_data_315_V_read329_1_phi_fu_11575_p6 = data_315_V_read329_1_reg_11571.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_315_V_read329_s_phi_fu_22251_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_315_V_read329_s_phi_fu_22251_p4 = ap_phi_mux_data_315_V_read329_1_phi_fu_11575_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_315_V_read329_s_phi_fu_22251_p4 = data_315_V_read.read();
    } else {
        ap_phi_mux_data_315_V_read329_s_phi_fu_22251_p4 = ap_phi_reg_pp0_iter0_data_315_V_read329_s_reg_22247.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_316_V_read330_1_phi_fu_11589_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_316_V_read330_1_phi_fu_11589_p6 = data_316_V_read330_s_reg_22260.read();
    } else {
        ap_phi_mux_data_316_V_read330_1_phi_fu_11589_p6 = data_316_V_read330_1_reg_11585.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_316_V_read330_s_phi_fu_22264_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_316_V_read330_s_phi_fu_22264_p4 = ap_phi_mux_data_316_V_read330_1_phi_fu_11589_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_316_V_read330_s_phi_fu_22264_p4 = data_316_V_read.read();
    } else {
        ap_phi_mux_data_316_V_read330_s_phi_fu_22264_p4 = ap_phi_reg_pp0_iter0_data_316_V_read330_s_reg_22260.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_317_V_read331_1_phi_fu_11603_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_317_V_read331_1_phi_fu_11603_p6 = data_317_V_read331_s_reg_22273.read();
    } else {
        ap_phi_mux_data_317_V_read331_1_phi_fu_11603_p6 = data_317_V_read331_1_reg_11599.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_317_V_read331_s_phi_fu_22277_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_317_V_read331_s_phi_fu_22277_p4 = ap_phi_mux_data_317_V_read331_1_phi_fu_11603_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_317_V_read331_s_phi_fu_22277_p4 = data_317_V_read.read();
    } else {
        ap_phi_mux_data_317_V_read331_s_phi_fu_22277_p4 = ap_phi_reg_pp0_iter0_data_317_V_read331_s_reg_22273.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_318_V_read332_1_phi_fu_11617_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_318_V_read332_1_phi_fu_11617_p6 = data_318_V_read332_s_reg_22286.read();
    } else {
        ap_phi_mux_data_318_V_read332_1_phi_fu_11617_p6 = data_318_V_read332_1_reg_11613.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_318_V_read332_s_phi_fu_22290_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_318_V_read332_s_phi_fu_22290_p4 = ap_phi_mux_data_318_V_read332_1_phi_fu_11617_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_318_V_read332_s_phi_fu_22290_p4 = data_318_V_read.read();
    } else {
        ap_phi_mux_data_318_V_read332_s_phi_fu_22290_p4 = ap_phi_reg_pp0_iter0_data_318_V_read332_s_reg_22286.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_319_V_read333_1_phi_fu_11631_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_319_V_read333_1_phi_fu_11631_p6 = data_319_V_read333_s_reg_22299.read();
    } else {
        ap_phi_mux_data_319_V_read333_1_phi_fu_11631_p6 = data_319_V_read333_1_reg_11627.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_319_V_read333_s_phi_fu_22303_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_319_V_read333_s_phi_fu_22303_p4 = ap_phi_mux_data_319_V_read333_1_phi_fu_11631_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_319_V_read333_s_phi_fu_22303_p4 = data_319_V_read.read();
    } else {
        ap_phi_mux_data_319_V_read333_s_phi_fu_22303_p4 = ap_phi_reg_pp0_iter0_data_319_V_read333_s_reg_22299.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_31_V_read45_ph_phi_fu_18559_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_31_V_read45_ph_phi_fu_18559_p4 = ap_phi_mux_data_31_V_read45_re_phi_fu_7599_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_31_V_read45_ph_phi_fu_18559_p4 = data_31_V_read.read();
    } else {
        ap_phi_mux_data_31_V_read45_ph_phi_fu_18559_p4 = ap_phi_reg_pp0_iter0_data_31_V_read45_ph_reg_18555.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_31_V_read45_re_phi_fu_7599_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_31_V_read45_re_phi_fu_7599_p6 = data_31_V_read45_ph_reg_18555.read();
    } else {
        ap_phi_mux_data_31_V_read45_re_phi_fu_7599_p6 = data_31_V_read45_re_reg_7595.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_320_V_read334_1_phi_fu_11645_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_320_V_read334_1_phi_fu_11645_p6 = data_320_V_read334_s_reg_22312.read();
    } else {
        ap_phi_mux_data_320_V_read334_1_phi_fu_11645_p6 = data_320_V_read334_1_reg_11641.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_320_V_read334_s_phi_fu_22316_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_320_V_read334_s_phi_fu_22316_p4 = ap_phi_mux_data_320_V_read334_1_phi_fu_11645_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_320_V_read334_s_phi_fu_22316_p4 = data_320_V_read.read();
    } else {
        ap_phi_mux_data_320_V_read334_s_phi_fu_22316_p4 = ap_phi_reg_pp0_iter0_data_320_V_read334_s_reg_22312.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_321_V_read335_1_phi_fu_11659_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_321_V_read335_1_phi_fu_11659_p6 = data_321_V_read335_s_reg_22325.read();
    } else {
        ap_phi_mux_data_321_V_read335_1_phi_fu_11659_p6 = data_321_V_read335_1_reg_11655.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_321_V_read335_s_phi_fu_22329_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_321_V_read335_s_phi_fu_22329_p4 = ap_phi_mux_data_321_V_read335_1_phi_fu_11659_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_321_V_read335_s_phi_fu_22329_p4 = data_321_V_read.read();
    } else {
        ap_phi_mux_data_321_V_read335_s_phi_fu_22329_p4 = ap_phi_reg_pp0_iter0_data_321_V_read335_s_reg_22325.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_322_V_read336_1_phi_fu_11673_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_322_V_read336_1_phi_fu_11673_p6 = data_322_V_read336_s_reg_22338.read();
    } else {
        ap_phi_mux_data_322_V_read336_1_phi_fu_11673_p6 = data_322_V_read336_1_reg_11669.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_322_V_read336_s_phi_fu_22342_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_322_V_read336_s_phi_fu_22342_p4 = ap_phi_mux_data_322_V_read336_1_phi_fu_11673_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_322_V_read336_s_phi_fu_22342_p4 = data_322_V_read.read();
    } else {
        ap_phi_mux_data_322_V_read336_s_phi_fu_22342_p4 = ap_phi_reg_pp0_iter0_data_322_V_read336_s_reg_22338.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_323_V_read337_1_phi_fu_11687_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_323_V_read337_1_phi_fu_11687_p6 = data_323_V_read337_s_reg_22351.read();
    } else {
        ap_phi_mux_data_323_V_read337_1_phi_fu_11687_p6 = data_323_V_read337_1_reg_11683.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_323_V_read337_s_phi_fu_22355_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_323_V_read337_s_phi_fu_22355_p4 = ap_phi_mux_data_323_V_read337_1_phi_fu_11687_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_323_V_read337_s_phi_fu_22355_p4 = data_323_V_read.read();
    } else {
        ap_phi_mux_data_323_V_read337_s_phi_fu_22355_p4 = ap_phi_reg_pp0_iter0_data_323_V_read337_s_reg_22351.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_324_V_read338_1_phi_fu_11701_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_324_V_read338_1_phi_fu_11701_p6 = data_324_V_read338_s_reg_22364.read();
    } else {
        ap_phi_mux_data_324_V_read338_1_phi_fu_11701_p6 = data_324_V_read338_1_reg_11697.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_324_V_read338_s_phi_fu_22368_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_324_V_read338_s_phi_fu_22368_p4 = ap_phi_mux_data_324_V_read338_1_phi_fu_11701_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_324_V_read338_s_phi_fu_22368_p4 = data_324_V_read.read();
    } else {
        ap_phi_mux_data_324_V_read338_s_phi_fu_22368_p4 = ap_phi_reg_pp0_iter0_data_324_V_read338_s_reg_22364.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_325_V_read339_1_phi_fu_11715_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_325_V_read339_1_phi_fu_11715_p6 = data_325_V_read339_s_reg_22377.read();
    } else {
        ap_phi_mux_data_325_V_read339_1_phi_fu_11715_p6 = data_325_V_read339_1_reg_11711.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_325_V_read339_s_phi_fu_22381_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_325_V_read339_s_phi_fu_22381_p4 = ap_phi_mux_data_325_V_read339_1_phi_fu_11715_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_325_V_read339_s_phi_fu_22381_p4 = data_325_V_read.read();
    } else {
        ap_phi_mux_data_325_V_read339_s_phi_fu_22381_p4 = ap_phi_reg_pp0_iter0_data_325_V_read339_s_reg_22377.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_326_V_read340_1_phi_fu_11729_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_326_V_read340_1_phi_fu_11729_p6 = data_326_V_read340_s_reg_22390.read();
    } else {
        ap_phi_mux_data_326_V_read340_1_phi_fu_11729_p6 = data_326_V_read340_1_reg_11725.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_326_V_read340_s_phi_fu_22394_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_326_V_read340_s_phi_fu_22394_p4 = ap_phi_mux_data_326_V_read340_1_phi_fu_11729_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_326_V_read340_s_phi_fu_22394_p4 = data_326_V_read.read();
    } else {
        ap_phi_mux_data_326_V_read340_s_phi_fu_22394_p4 = ap_phi_reg_pp0_iter0_data_326_V_read340_s_reg_22390.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_327_V_read341_1_phi_fu_11743_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_327_V_read341_1_phi_fu_11743_p6 = data_327_V_read341_s_reg_22403.read();
    } else {
        ap_phi_mux_data_327_V_read341_1_phi_fu_11743_p6 = data_327_V_read341_1_reg_11739.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_327_V_read341_s_phi_fu_22407_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_327_V_read341_s_phi_fu_22407_p4 = ap_phi_mux_data_327_V_read341_1_phi_fu_11743_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_327_V_read341_s_phi_fu_22407_p4 = data_327_V_read.read();
    } else {
        ap_phi_mux_data_327_V_read341_s_phi_fu_22407_p4 = ap_phi_reg_pp0_iter0_data_327_V_read341_s_reg_22403.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_328_V_read342_1_phi_fu_11757_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_328_V_read342_1_phi_fu_11757_p6 = data_328_V_read342_s_reg_22416.read();
    } else {
        ap_phi_mux_data_328_V_read342_1_phi_fu_11757_p6 = data_328_V_read342_1_reg_11753.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_328_V_read342_s_phi_fu_22420_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_328_V_read342_s_phi_fu_22420_p4 = ap_phi_mux_data_328_V_read342_1_phi_fu_11757_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_328_V_read342_s_phi_fu_22420_p4 = data_328_V_read.read();
    } else {
        ap_phi_mux_data_328_V_read342_s_phi_fu_22420_p4 = ap_phi_reg_pp0_iter0_data_328_V_read342_s_reg_22416.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_329_V_read343_1_phi_fu_11771_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_329_V_read343_1_phi_fu_11771_p6 = data_329_V_read343_s_reg_22429.read();
    } else {
        ap_phi_mux_data_329_V_read343_1_phi_fu_11771_p6 = data_329_V_read343_1_reg_11767.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_329_V_read343_s_phi_fu_22433_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_329_V_read343_s_phi_fu_22433_p4 = ap_phi_mux_data_329_V_read343_1_phi_fu_11771_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_329_V_read343_s_phi_fu_22433_p4 = data_329_V_read.read();
    } else {
        ap_phi_mux_data_329_V_read343_s_phi_fu_22433_p4 = ap_phi_reg_pp0_iter0_data_329_V_read343_s_reg_22429.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_32_V_read46_ph_phi_fu_18572_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_32_V_read46_ph_phi_fu_18572_p4 = ap_phi_mux_data_32_V_read46_re_phi_fu_7613_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_32_V_read46_ph_phi_fu_18572_p4 = data_32_V_read.read();
    } else {
        ap_phi_mux_data_32_V_read46_ph_phi_fu_18572_p4 = ap_phi_reg_pp0_iter0_data_32_V_read46_ph_reg_18568.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_32_V_read46_re_phi_fu_7613_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_32_V_read46_re_phi_fu_7613_p6 = data_32_V_read46_ph_reg_18568.read();
    } else {
        ap_phi_mux_data_32_V_read46_re_phi_fu_7613_p6 = data_32_V_read46_re_reg_7609.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_330_V_read344_1_phi_fu_11785_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_330_V_read344_1_phi_fu_11785_p6 = data_330_V_read344_s_reg_22442.read();
    } else {
        ap_phi_mux_data_330_V_read344_1_phi_fu_11785_p6 = data_330_V_read344_1_reg_11781.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_330_V_read344_s_phi_fu_22446_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_330_V_read344_s_phi_fu_22446_p4 = ap_phi_mux_data_330_V_read344_1_phi_fu_11785_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_330_V_read344_s_phi_fu_22446_p4 = data_330_V_read.read();
    } else {
        ap_phi_mux_data_330_V_read344_s_phi_fu_22446_p4 = ap_phi_reg_pp0_iter0_data_330_V_read344_s_reg_22442.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_331_V_read345_1_phi_fu_11799_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_331_V_read345_1_phi_fu_11799_p6 = data_331_V_read345_s_reg_22455.read();
    } else {
        ap_phi_mux_data_331_V_read345_1_phi_fu_11799_p6 = data_331_V_read345_1_reg_11795.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_331_V_read345_s_phi_fu_22459_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_331_V_read345_s_phi_fu_22459_p4 = ap_phi_mux_data_331_V_read345_1_phi_fu_11799_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_331_V_read345_s_phi_fu_22459_p4 = data_331_V_read.read();
    } else {
        ap_phi_mux_data_331_V_read345_s_phi_fu_22459_p4 = ap_phi_reg_pp0_iter0_data_331_V_read345_s_reg_22455.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_332_V_read346_1_phi_fu_11813_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_332_V_read346_1_phi_fu_11813_p6 = data_332_V_read346_s_reg_22468.read();
    } else {
        ap_phi_mux_data_332_V_read346_1_phi_fu_11813_p6 = data_332_V_read346_1_reg_11809.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_332_V_read346_s_phi_fu_22472_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_332_V_read346_s_phi_fu_22472_p4 = ap_phi_mux_data_332_V_read346_1_phi_fu_11813_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_332_V_read346_s_phi_fu_22472_p4 = data_332_V_read.read();
    } else {
        ap_phi_mux_data_332_V_read346_s_phi_fu_22472_p4 = ap_phi_reg_pp0_iter0_data_332_V_read346_s_reg_22468.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_333_V_read347_1_phi_fu_11827_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_333_V_read347_1_phi_fu_11827_p6 = data_333_V_read347_s_reg_22481.read();
    } else {
        ap_phi_mux_data_333_V_read347_1_phi_fu_11827_p6 = data_333_V_read347_1_reg_11823.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_333_V_read347_s_phi_fu_22485_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_333_V_read347_s_phi_fu_22485_p4 = ap_phi_mux_data_333_V_read347_1_phi_fu_11827_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_333_V_read347_s_phi_fu_22485_p4 = data_333_V_read.read();
    } else {
        ap_phi_mux_data_333_V_read347_s_phi_fu_22485_p4 = ap_phi_reg_pp0_iter0_data_333_V_read347_s_reg_22481.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_334_V_read348_1_phi_fu_11841_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_334_V_read348_1_phi_fu_11841_p6 = data_334_V_read348_s_reg_22494.read();
    } else {
        ap_phi_mux_data_334_V_read348_1_phi_fu_11841_p6 = data_334_V_read348_1_reg_11837.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_334_V_read348_s_phi_fu_22498_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_334_V_read348_s_phi_fu_22498_p4 = ap_phi_mux_data_334_V_read348_1_phi_fu_11841_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_334_V_read348_s_phi_fu_22498_p4 = data_334_V_read.read();
    } else {
        ap_phi_mux_data_334_V_read348_s_phi_fu_22498_p4 = ap_phi_reg_pp0_iter0_data_334_V_read348_s_reg_22494.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_335_V_read349_1_phi_fu_11855_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_335_V_read349_1_phi_fu_11855_p6 = data_335_V_read349_s_reg_22507.read();
    } else {
        ap_phi_mux_data_335_V_read349_1_phi_fu_11855_p6 = data_335_V_read349_1_reg_11851.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_335_V_read349_s_phi_fu_22511_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_335_V_read349_s_phi_fu_22511_p4 = ap_phi_mux_data_335_V_read349_1_phi_fu_11855_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_335_V_read349_s_phi_fu_22511_p4 = data_335_V_read.read();
    } else {
        ap_phi_mux_data_335_V_read349_s_phi_fu_22511_p4 = ap_phi_reg_pp0_iter0_data_335_V_read349_s_reg_22507.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_336_V_read350_1_phi_fu_11869_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_336_V_read350_1_phi_fu_11869_p6 = data_336_V_read350_s_reg_22520.read();
    } else {
        ap_phi_mux_data_336_V_read350_1_phi_fu_11869_p6 = data_336_V_read350_1_reg_11865.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_336_V_read350_s_phi_fu_22524_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_336_V_read350_s_phi_fu_22524_p4 = ap_phi_mux_data_336_V_read350_1_phi_fu_11869_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_336_V_read350_s_phi_fu_22524_p4 = data_336_V_read.read();
    } else {
        ap_phi_mux_data_336_V_read350_s_phi_fu_22524_p4 = ap_phi_reg_pp0_iter0_data_336_V_read350_s_reg_22520.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_337_V_read351_1_phi_fu_11883_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_337_V_read351_1_phi_fu_11883_p6 = data_337_V_read351_s_reg_22533.read();
    } else {
        ap_phi_mux_data_337_V_read351_1_phi_fu_11883_p6 = data_337_V_read351_1_reg_11879.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_337_V_read351_s_phi_fu_22537_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_337_V_read351_s_phi_fu_22537_p4 = ap_phi_mux_data_337_V_read351_1_phi_fu_11883_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_337_V_read351_s_phi_fu_22537_p4 = data_337_V_read.read();
    } else {
        ap_phi_mux_data_337_V_read351_s_phi_fu_22537_p4 = ap_phi_reg_pp0_iter0_data_337_V_read351_s_reg_22533.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_338_V_read352_1_phi_fu_11897_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_338_V_read352_1_phi_fu_11897_p6 = data_338_V_read352_s_reg_22546.read();
    } else {
        ap_phi_mux_data_338_V_read352_1_phi_fu_11897_p6 = data_338_V_read352_1_reg_11893.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_338_V_read352_s_phi_fu_22550_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_338_V_read352_s_phi_fu_22550_p4 = ap_phi_mux_data_338_V_read352_1_phi_fu_11897_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_338_V_read352_s_phi_fu_22550_p4 = data_338_V_read.read();
    } else {
        ap_phi_mux_data_338_V_read352_s_phi_fu_22550_p4 = ap_phi_reg_pp0_iter0_data_338_V_read352_s_reg_22546.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_339_V_read353_1_phi_fu_11911_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_339_V_read353_1_phi_fu_11911_p6 = data_339_V_read353_s_reg_22559.read();
    } else {
        ap_phi_mux_data_339_V_read353_1_phi_fu_11911_p6 = data_339_V_read353_1_reg_11907.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_339_V_read353_s_phi_fu_22563_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_339_V_read353_s_phi_fu_22563_p4 = ap_phi_mux_data_339_V_read353_1_phi_fu_11911_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_339_V_read353_s_phi_fu_22563_p4 = data_339_V_read.read();
    } else {
        ap_phi_mux_data_339_V_read353_s_phi_fu_22563_p4 = ap_phi_reg_pp0_iter0_data_339_V_read353_s_reg_22559.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_33_V_read47_ph_phi_fu_18585_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_33_V_read47_ph_phi_fu_18585_p4 = ap_phi_mux_data_33_V_read47_re_phi_fu_7627_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_33_V_read47_ph_phi_fu_18585_p4 = data_33_V_read.read();
    } else {
        ap_phi_mux_data_33_V_read47_ph_phi_fu_18585_p4 = ap_phi_reg_pp0_iter0_data_33_V_read47_ph_reg_18581.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_33_V_read47_re_phi_fu_7627_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_33_V_read47_re_phi_fu_7627_p6 = data_33_V_read47_ph_reg_18581.read();
    } else {
        ap_phi_mux_data_33_V_read47_re_phi_fu_7627_p6 = data_33_V_read47_re_reg_7623.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_340_V_read354_1_phi_fu_11925_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_340_V_read354_1_phi_fu_11925_p6 = data_340_V_read354_s_reg_22572.read();
    } else {
        ap_phi_mux_data_340_V_read354_1_phi_fu_11925_p6 = data_340_V_read354_1_reg_11921.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_340_V_read354_s_phi_fu_22576_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_340_V_read354_s_phi_fu_22576_p4 = ap_phi_mux_data_340_V_read354_1_phi_fu_11925_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_340_V_read354_s_phi_fu_22576_p4 = data_340_V_read.read();
    } else {
        ap_phi_mux_data_340_V_read354_s_phi_fu_22576_p4 = ap_phi_reg_pp0_iter0_data_340_V_read354_s_reg_22572.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_341_V_read355_1_phi_fu_11939_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_341_V_read355_1_phi_fu_11939_p6 = data_341_V_read355_s_reg_22585.read();
    } else {
        ap_phi_mux_data_341_V_read355_1_phi_fu_11939_p6 = data_341_V_read355_1_reg_11935.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_341_V_read355_s_phi_fu_22589_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_341_V_read355_s_phi_fu_22589_p4 = ap_phi_mux_data_341_V_read355_1_phi_fu_11939_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_341_V_read355_s_phi_fu_22589_p4 = data_341_V_read.read();
    } else {
        ap_phi_mux_data_341_V_read355_s_phi_fu_22589_p4 = ap_phi_reg_pp0_iter0_data_341_V_read355_s_reg_22585.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_342_V_read356_1_phi_fu_11953_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_342_V_read356_1_phi_fu_11953_p6 = data_342_V_read356_s_reg_22598.read();
    } else {
        ap_phi_mux_data_342_V_read356_1_phi_fu_11953_p6 = data_342_V_read356_1_reg_11949.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_342_V_read356_s_phi_fu_22602_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_342_V_read356_s_phi_fu_22602_p4 = ap_phi_mux_data_342_V_read356_1_phi_fu_11953_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_342_V_read356_s_phi_fu_22602_p4 = data_342_V_read.read();
    } else {
        ap_phi_mux_data_342_V_read356_s_phi_fu_22602_p4 = ap_phi_reg_pp0_iter0_data_342_V_read356_s_reg_22598.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_343_V_read357_1_phi_fu_11967_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_343_V_read357_1_phi_fu_11967_p6 = data_343_V_read357_s_reg_22611.read();
    } else {
        ap_phi_mux_data_343_V_read357_1_phi_fu_11967_p6 = data_343_V_read357_1_reg_11963.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_343_V_read357_s_phi_fu_22615_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_343_V_read357_s_phi_fu_22615_p4 = ap_phi_mux_data_343_V_read357_1_phi_fu_11967_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_343_V_read357_s_phi_fu_22615_p4 = data_343_V_read.read();
    } else {
        ap_phi_mux_data_343_V_read357_s_phi_fu_22615_p4 = ap_phi_reg_pp0_iter0_data_343_V_read357_s_reg_22611.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_344_V_read358_1_phi_fu_11981_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_344_V_read358_1_phi_fu_11981_p6 = data_344_V_read358_s_reg_22624.read();
    } else {
        ap_phi_mux_data_344_V_read358_1_phi_fu_11981_p6 = data_344_V_read358_1_reg_11977.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_344_V_read358_s_phi_fu_22628_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_344_V_read358_s_phi_fu_22628_p4 = ap_phi_mux_data_344_V_read358_1_phi_fu_11981_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_344_V_read358_s_phi_fu_22628_p4 = data_344_V_read.read();
    } else {
        ap_phi_mux_data_344_V_read358_s_phi_fu_22628_p4 = ap_phi_reg_pp0_iter0_data_344_V_read358_s_reg_22624.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_345_V_read359_1_phi_fu_11995_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_345_V_read359_1_phi_fu_11995_p6 = data_345_V_read359_s_reg_22637.read();
    } else {
        ap_phi_mux_data_345_V_read359_1_phi_fu_11995_p6 = data_345_V_read359_1_reg_11991.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_345_V_read359_s_phi_fu_22641_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_345_V_read359_s_phi_fu_22641_p4 = ap_phi_mux_data_345_V_read359_1_phi_fu_11995_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_345_V_read359_s_phi_fu_22641_p4 = data_345_V_read.read();
    } else {
        ap_phi_mux_data_345_V_read359_s_phi_fu_22641_p4 = ap_phi_reg_pp0_iter0_data_345_V_read359_s_reg_22637.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_346_V_read360_1_phi_fu_12009_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_346_V_read360_1_phi_fu_12009_p6 = data_346_V_read360_s_reg_22650.read();
    } else {
        ap_phi_mux_data_346_V_read360_1_phi_fu_12009_p6 = data_346_V_read360_1_reg_12005.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_346_V_read360_s_phi_fu_22654_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_346_V_read360_s_phi_fu_22654_p4 = ap_phi_mux_data_346_V_read360_1_phi_fu_12009_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_346_V_read360_s_phi_fu_22654_p4 = data_346_V_read.read();
    } else {
        ap_phi_mux_data_346_V_read360_s_phi_fu_22654_p4 = ap_phi_reg_pp0_iter0_data_346_V_read360_s_reg_22650.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_347_V_read361_1_phi_fu_12023_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_347_V_read361_1_phi_fu_12023_p6 = data_347_V_read361_s_reg_22663.read();
    } else {
        ap_phi_mux_data_347_V_read361_1_phi_fu_12023_p6 = data_347_V_read361_1_reg_12019.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_347_V_read361_s_phi_fu_22667_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_347_V_read361_s_phi_fu_22667_p4 = ap_phi_mux_data_347_V_read361_1_phi_fu_12023_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_347_V_read361_s_phi_fu_22667_p4 = data_347_V_read.read();
    } else {
        ap_phi_mux_data_347_V_read361_s_phi_fu_22667_p4 = ap_phi_reg_pp0_iter0_data_347_V_read361_s_reg_22663.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_348_V_read362_1_phi_fu_12037_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_348_V_read362_1_phi_fu_12037_p6 = data_348_V_read362_s_reg_22676.read();
    } else {
        ap_phi_mux_data_348_V_read362_1_phi_fu_12037_p6 = data_348_V_read362_1_reg_12033.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_348_V_read362_s_phi_fu_22680_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_348_V_read362_s_phi_fu_22680_p4 = ap_phi_mux_data_348_V_read362_1_phi_fu_12037_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_348_V_read362_s_phi_fu_22680_p4 = data_348_V_read.read();
    } else {
        ap_phi_mux_data_348_V_read362_s_phi_fu_22680_p4 = ap_phi_reg_pp0_iter0_data_348_V_read362_s_reg_22676.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_349_V_read363_1_phi_fu_12051_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_349_V_read363_1_phi_fu_12051_p6 = data_349_V_read363_s_reg_22689.read();
    } else {
        ap_phi_mux_data_349_V_read363_1_phi_fu_12051_p6 = data_349_V_read363_1_reg_12047.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_349_V_read363_s_phi_fu_22693_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_349_V_read363_s_phi_fu_22693_p4 = ap_phi_mux_data_349_V_read363_1_phi_fu_12051_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_349_V_read363_s_phi_fu_22693_p4 = data_349_V_read.read();
    } else {
        ap_phi_mux_data_349_V_read363_s_phi_fu_22693_p4 = ap_phi_reg_pp0_iter0_data_349_V_read363_s_reg_22689.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_34_V_read48_ph_phi_fu_18598_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_34_V_read48_ph_phi_fu_18598_p4 = ap_phi_mux_data_34_V_read48_re_phi_fu_7641_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_34_V_read48_ph_phi_fu_18598_p4 = data_34_V_read.read();
    } else {
        ap_phi_mux_data_34_V_read48_ph_phi_fu_18598_p4 = ap_phi_reg_pp0_iter0_data_34_V_read48_ph_reg_18594.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_34_V_read48_re_phi_fu_7641_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_34_V_read48_re_phi_fu_7641_p6 = data_34_V_read48_ph_reg_18594.read();
    } else {
        ap_phi_mux_data_34_V_read48_re_phi_fu_7641_p6 = data_34_V_read48_re_reg_7637.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_350_V_read364_1_phi_fu_12065_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_350_V_read364_1_phi_fu_12065_p6 = data_350_V_read364_s_reg_22702.read();
    } else {
        ap_phi_mux_data_350_V_read364_1_phi_fu_12065_p6 = data_350_V_read364_1_reg_12061.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_350_V_read364_s_phi_fu_22706_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_350_V_read364_s_phi_fu_22706_p4 = ap_phi_mux_data_350_V_read364_1_phi_fu_12065_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_350_V_read364_s_phi_fu_22706_p4 = data_350_V_read.read();
    } else {
        ap_phi_mux_data_350_V_read364_s_phi_fu_22706_p4 = ap_phi_reg_pp0_iter0_data_350_V_read364_s_reg_22702.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_351_V_read365_1_phi_fu_12079_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_351_V_read365_1_phi_fu_12079_p6 = data_351_V_read365_s_reg_22715.read();
    } else {
        ap_phi_mux_data_351_V_read365_1_phi_fu_12079_p6 = data_351_V_read365_1_reg_12075.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_351_V_read365_s_phi_fu_22719_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_351_V_read365_s_phi_fu_22719_p4 = ap_phi_mux_data_351_V_read365_1_phi_fu_12079_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_351_V_read365_s_phi_fu_22719_p4 = data_351_V_read.read();
    } else {
        ap_phi_mux_data_351_V_read365_s_phi_fu_22719_p4 = ap_phi_reg_pp0_iter0_data_351_V_read365_s_reg_22715.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_352_V_read366_1_phi_fu_12093_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_352_V_read366_1_phi_fu_12093_p6 = data_352_V_read366_s_reg_22728.read();
    } else {
        ap_phi_mux_data_352_V_read366_1_phi_fu_12093_p6 = data_352_V_read366_1_reg_12089.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_352_V_read366_s_phi_fu_22732_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_352_V_read366_s_phi_fu_22732_p4 = ap_phi_mux_data_352_V_read366_1_phi_fu_12093_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_352_V_read366_s_phi_fu_22732_p4 = data_352_V_read.read();
    } else {
        ap_phi_mux_data_352_V_read366_s_phi_fu_22732_p4 = ap_phi_reg_pp0_iter0_data_352_V_read366_s_reg_22728.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_353_V_read367_1_phi_fu_12107_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_353_V_read367_1_phi_fu_12107_p6 = data_353_V_read367_s_reg_22741.read();
    } else {
        ap_phi_mux_data_353_V_read367_1_phi_fu_12107_p6 = data_353_V_read367_1_reg_12103.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_353_V_read367_s_phi_fu_22745_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_353_V_read367_s_phi_fu_22745_p4 = ap_phi_mux_data_353_V_read367_1_phi_fu_12107_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_353_V_read367_s_phi_fu_22745_p4 = data_353_V_read.read();
    } else {
        ap_phi_mux_data_353_V_read367_s_phi_fu_22745_p4 = ap_phi_reg_pp0_iter0_data_353_V_read367_s_reg_22741.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_354_V_read368_1_phi_fu_12121_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_354_V_read368_1_phi_fu_12121_p6 = data_354_V_read368_s_reg_22754.read();
    } else {
        ap_phi_mux_data_354_V_read368_1_phi_fu_12121_p6 = data_354_V_read368_1_reg_12117.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_354_V_read368_s_phi_fu_22758_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_354_V_read368_s_phi_fu_22758_p4 = ap_phi_mux_data_354_V_read368_1_phi_fu_12121_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_354_V_read368_s_phi_fu_22758_p4 = data_354_V_read.read();
    } else {
        ap_phi_mux_data_354_V_read368_s_phi_fu_22758_p4 = ap_phi_reg_pp0_iter0_data_354_V_read368_s_reg_22754.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_355_V_read369_1_phi_fu_12135_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_355_V_read369_1_phi_fu_12135_p6 = data_355_V_read369_s_reg_22767.read();
    } else {
        ap_phi_mux_data_355_V_read369_1_phi_fu_12135_p6 = data_355_V_read369_1_reg_12131.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_355_V_read369_s_phi_fu_22771_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_355_V_read369_s_phi_fu_22771_p4 = ap_phi_mux_data_355_V_read369_1_phi_fu_12135_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_355_V_read369_s_phi_fu_22771_p4 = data_355_V_read.read();
    } else {
        ap_phi_mux_data_355_V_read369_s_phi_fu_22771_p4 = ap_phi_reg_pp0_iter0_data_355_V_read369_s_reg_22767.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_356_V_read370_1_phi_fu_12149_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_356_V_read370_1_phi_fu_12149_p6 = data_356_V_read370_s_reg_22780.read();
    } else {
        ap_phi_mux_data_356_V_read370_1_phi_fu_12149_p6 = data_356_V_read370_1_reg_12145.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_356_V_read370_s_phi_fu_22784_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_356_V_read370_s_phi_fu_22784_p4 = ap_phi_mux_data_356_V_read370_1_phi_fu_12149_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_356_V_read370_s_phi_fu_22784_p4 = data_356_V_read.read();
    } else {
        ap_phi_mux_data_356_V_read370_s_phi_fu_22784_p4 = ap_phi_reg_pp0_iter0_data_356_V_read370_s_reg_22780.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_357_V_read371_1_phi_fu_12163_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_357_V_read371_1_phi_fu_12163_p6 = data_357_V_read371_s_reg_22793.read();
    } else {
        ap_phi_mux_data_357_V_read371_1_phi_fu_12163_p6 = data_357_V_read371_1_reg_12159.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_357_V_read371_s_phi_fu_22797_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_357_V_read371_s_phi_fu_22797_p4 = ap_phi_mux_data_357_V_read371_1_phi_fu_12163_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_357_V_read371_s_phi_fu_22797_p4 = data_357_V_read.read();
    } else {
        ap_phi_mux_data_357_V_read371_s_phi_fu_22797_p4 = ap_phi_reg_pp0_iter0_data_357_V_read371_s_reg_22793.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_358_V_read372_1_phi_fu_12177_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_358_V_read372_1_phi_fu_12177_p6 = data_358_V_read372_s_reg_22806.read();
    } else {
        ap_phi_mux_data_358_V_read372_1_phi_fu_12177_p6 = data_358_V_read372_1_reg_12173.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_358_V_read372_s_phi_fu_22810_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_358_V_read372_s_phi_fu_22810_p4 = ap_phi_mux_data_358_V_read372_1_phi_fu_12177_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_358_V_read372_s_phi_fu_22810_p4 = data_358_V_read.read();
    } else {
        ap_phi_mux_data_358_V_read372_s_phi_fu_22810_p4 = ap_phi_reg_pp0_iter0_data_358_V_read372_s_reg_22806.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_359_V_read373_1_phi_fu_12191_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_359_V_read373_1_phi_fu_12191_p6 = data_359_V_read373_s_reg_22819.read();
    } else {
        ap_phi_mux_data_359_V_read373_1_phi_fu_12191_p6 = data_359_V_read373_1_reg_12187.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_359_V_read373_s_phi_fu_22823_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_359_V_read373_s_phi_fu_22823_p4 = ap_phi_mux_data_359_V_read373_1_phi_fu_12191_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_359_V_read373_s_phi_fu_22823_p4 = data_359_V_read.read();
    } else {
        ap_phi_mux_data_359_V_read373_s_phi_fu_22823_p4 = ap_phi_reg_pp0_iter0_data_359_V_read373_s_reg_22819.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_35_V_read49_ph_phi_fu_18611_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_35_V_read49_ph_phi_fu_18611_p4 = ap_phi_mux_data_35_V_read49_re_phi_fu_7655_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_35_V_read49_ph_phi_fu_18611_p4 = data_35_V_read.read();
    } else {
        ap_phi_mux_data_35_V_read49_ph_phi_fu_18611_p4 = ap_phi_reg_pp0_iter0_data_35_V_read49_ph_reg_18607.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_35_V_read49_re_phi_fu_7655_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_35_V_read49_re_phi_fu_7655_p6 = data_35_V_read49_ph_reg_18607.read();
    } else {
        ap_phi_mux_data_35_V_read49_re_phi_fu_7655_p6 = data_35_V_read49_re_reg_7651.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_360_V_read374_1_phi_fu_12205_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_360_V_read374_1_phi_fu_12205_p6 = data_360_V_read374_s_reg_22832.read();
    } else {
        ap_phi_mux_data_360_V_read374_1_phi_fu_12205_p6 = data_360_V_read374_1_reg_12201.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_360_V_read374_s_phi_fu_22836_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_360_V_read374_s_phi_fu_22836_p4 = ap_phi_mux_data_360_V_read374_1_phi_fu_12205_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_360_V_read374_s_phi_fu_22836_p4 = data_360_V_read.read();
    } else {
        ap_phi_mux_data_360_V_read374_s_phi_fu_22836_p4 = ap_phi_reg_pp0_iter0_data_360_V_read374_s_reg_22832.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_361_V_read375_1_phi_fu_12219_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_361_V_read375_1_phi_fu_12219_p6 = data_361_V_read375_s_reg_22845.read();
    } else {
        ap_phi_mux_data_361_V_read375_1_phi_fu_12219_p6 = data_361_V_read375_1_reg_12215.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_361_V_read375_s_phi_fu_22849_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_361_V_read375_s_phi_fu_22849_p4 = ap_phi_mux_data_361_V_read375_1_phi_fu_12219_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_361_V_read375_s_phi_fu_22849_p4 = data_361_V_read.read();
    } else {
        ap_phi_mux_data_361_V_read375_s_phi_fu_22849_p4 = ap_phi_reg_pp0_iter0_data_361_V_read375_s_reg_22845.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_362_V_read376_1_phi_fu_12233_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_362_V_read376_1_phi_fu_12233_p6 = data_362_V_read376_s_reg_22858.read();
    } else {
        ap_phi_mux_data_362_V_read376_1_phi_fu_12233_p6 = data_362_V_read376_1_reg_12229.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_362_V_read376_s_phi_fu_22862_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_362_V_read376_s_phi_fu_22862_p4 = ap_phi_mux_data_362_V_read376_1_phi_fu_12233_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_362_V_read376_s_phi_fu_22862_p4 = data_362_V_read.read();
    } else {
        ap_phi_mux_data_362_V_read376_s_phi_fu_22862_p4 = ap_phi_reg_pp0_iter0_data_362_V_read376_s_reg_22858.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_363_V_read377_1_phi_fu_12247_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_363_V_read377_1_phi_fu_12247_p6 = data_363_V_read377_s_reg_22871.read();
    } else {
        ap_phi_mux_data_363_V_read377_1_phi_fu_12247_p6 = data_363_V_read377_1_reg_12243.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_363_V_read377_s_phi_fu_22875_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_363_V_read377_s_phi_fu_22875_p4 = ap_phi_mux_data_363_V_read377_1_phi_fu_12247_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_363_V_read377_s_phi_fu_22875_p4 = data_363_V_read.read();
    } else {
        ap_phi_mux_data_363_V_read377_s_phi_fu_22875_p4 = ap_phi_reg_pp0_iter0_data_363_V_read377_s_reg_22871.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_364_V_read378_1_phi_fu_12261_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_364_V_read378_1_phi_fu_12261_p6 = data_364_V_read378_s_reg_22884.read();
    } else {
        ap_phi_mux_data_364_V_read378_1_phi_fu_12261_p6 = data_364_V_read378_1_reg_12257.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_364_V_read378_s_phi_fu_22888_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_364_V_read378_s_phi_fu_22888_p4 = ap_phi_mux_data_364_V_read378_1_phi_fu_12261_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_364_V_read378_s_phi_fu_22888_p4 = data_364_V_read.read();
    } else {
        ap_phi_mux_data_364_V_read378_s_phi_fu_22888_p4 = ap_phi_reg_pp0_iter0_data_364_V_read378_s_reg_22884.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_365_V_read379_1_phi_fu_12275_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_365_V_read379_1_phi_fu_12275_p6 = data_365_V_read379_s_reg_22897.read();
    } else {
        ap_phi_mux_data_365_V_read379_1_phi_fu_12275_p6 = data_365_V_read379_1_reg_12271.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_365_V_read379_s_phi_fu_22901_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_365_V_read379_s_phi_fu_22901_p4 = ap_phi_mux_data_365_V_read379_1_phi_fu_12275_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_365_V_read379_s_phi_fu_22901_p4 = data_365_V_read.read();
    } else {
        ap_phi_mux_data_365_V_read379_s_phi_fu_22901_p4 = ap_phi_reg_pp0_iter0_data_365_V_read379_s_reg_22897.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_366_V_read380_1_phi_fu_12289_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_366_V_read380_1_phi_fu_12289_p6 = data_366_V_read380_s_reg_22910.read();
    } else {
        ap_phi_mux_data_366_V_read380_1_phi_fu_12289_p6 = data_366_V_read380_1_reg_12285.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_366_V_read380_s_phi_fu_22914_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_366_V_read380_s_phi_fu_22914_p4 = ap_phi_mux_data_366_V_read380_1_phi_fu_12289_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_366_V_read380_s_phi_fu_22914_p4 = data_366_V_read.read();
    } else {
        ap_phi_mux_data_366_V_read380_s_phi_fu_22914_p4 = ap_phi_reg_pp0_iter0_data_366_V_read380_s_reg_22910.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_367_V_read381_1_phi_fu_12303_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_367_V_read381_1_phi_fu_12303_p6 = data_367_V_read381_s_reg_22923.read();
    } else {
        ap_phi_mux_data_367_V_read381_1_phi_fu_12303_p6 = data_367_V_read381_1_reg_12299.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_367_V_read381_s_phi_fu_22927_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_367_V_read381_s_phi_fu_22927_p4 = ap_phi_mux_data_367_V_read381_1_phi_fu_12303_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_367_V_read381_s_phi_fu_22927_p4 = data_367_V_read.read();
    } else {
        ap_phi_mux_data_367_V_read381_s_phi_fu_22927_p4 = ap_phi_reg_pp0_iter0_data_367_V_read381_s_reg_22923.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_368_V_read382_1_phi_fu_12317_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_368_V_read382_1_phi_fu_12317_p6 = data_368_V_read382_s_reg_22936.read();
    } else {
        ap_phi_mux_data_368_V_read382_1_phi_fu_12317_p6 = data_368_V_read382_1_reg_12313.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_368_V_read382_s_phi_fu_22940_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_368_V_read382_s_phi_fu_22940_p4 = ap_phi_mux_data_368_V_read382_1_phi_fu_12317_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_368_V_read382_s_phi_fu_22940_p4 = data_368_V_read.read();
    } else {
        ap_phi_mux_data_368_V_read382_s_phi_fu_22940_p4 = ap_phi_reg_pp0_iter0_data_368_V_read382_s_reg_22936.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_369_V_read383_1_phi_fu_12331_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_369_V_read383_1_phi_fu_12331_p6 = data_369_V_read383_s_reg_22949.read();
    } else {
        ap_phi_mux_data_369_V_read383_1_phi_fu_12331_p6 = data_369_V_read383_1_reg_12327.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_369_V_read383_s_phi_fu_22953_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_369_V_read383_s_phi_fu_22953_p4 = ap_phi_mux_data_369_V_read383_1_phi_fu_12331_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_369_V_read383_s_phi_fu_22953_p4 = data_369_V_read.read();
    } else {
        ap_phi_mux_data_369_V_read383_s_phi_fu_22953_p4 = ap_phi_reg_pp0_iter0_data_369_V_read383_s_reg_22949.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_36_V_read50_ph_phi_fu_18624_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_36_V_read50_ph_phi_fu_18624_p4 = ap_phi_mux_data_36_V_read50_re_phi_fu_7669_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_36_V_read50_ph_phi_fu_18624_p4 = data_36_V_read.read();
    } else {
        ap_phi_mux_data_36_V_read50_ph_phi_fu_18624_p4 = ap_phi_reg_pp0_iter0_data_36_V_read50_ph_reg_18620.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_36_V_read50_re_phi_fu_7669_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_36_V_read50_re_phi_fu_7669_p6 = data_36_V_read50_ph_reg_18620.read();
    } else {
        ap_phi_mux_data_36_V_read50_re_phi_fu_7669_p6 = data_36_V_read50_re_reg_7665.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_370_V_read384_1_phi_fu_12345_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_370_V_read384_1_phi_fu_12345_p6 = data_370_V_read384_s_reg_22962.read();
    } else {
        ap_phi_mux_data_370_V_read384_1_phi_fu_12345_p6 = data_370_V_read384_1_reg_12341.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_370_V_read384_s_phi_fu_22966_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_370_V_read384_s_phi_fu_22966_p4 = ap_phi_mux_data_370_V_read384_1_phi_fu_12345_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_370_V_read384_s_phi_fu_22966_p4 = data_370_V_read.read();
    } else {
        ap_phi_mux_data_370_V_read384_s_phi_fu_22966_p4 = ap_phi_reg_pp0_iter0_data_370_V_read384_s_reg_22962.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_371_V_read385_1_phi_fu_12359_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_371_V_read385_1_phi_fu_12359_p6 = data_371_V_read385_s_reg_22975.read();
    } else {
        ap_phi_mux_data_371_V_read385_1_phi_fu_12359_p6 = data_371_V_read385_1_reg_12355.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_371_V_read385_s_phi_fu_22979_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_371_V_read385_s_phi_fu_22979_p4 = ap_phi_mux_data_371_V_read385_1_phi_fu_12359_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_371_V_read385_s_phi_fu_22979_p4 = data_371_V_read.read();
    } else {
        ap_phi_mux_data_371_V_read385_s_phi_fu_22979_p4 = ap_phi_reg_pp0_iter0_data_371_V_read385_s_reg_22975.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_372_V_read386_1_phi_fu_12373_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_372_V_read386_1_phi_fu_12373_p6 = data_372_V_read386_s_reg_22988.read();
    } else {
        ap_phi_mux_data_372_V_read386_1_phi_fu_12373_p6 = data_372_V_read386_1_reg_12369.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_372_V_read386_s_phi_fu_22992_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_372_V_read386_s_phi_fu_22992_p4 = ap_phi_mux_data_372_V_read386_1_phi_fu_12373_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_372_V_read386_s_phi_fu_22992_p4 = data_372_V_read.read();
    } else {
        ap_phi_mux_data_372_V_read386_s_phi_fu_22992_p4 = ap_phi_reg_pp0_iter0_data_372_V_read386_s_reg_22988.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_373_V_read387_1_phi_fu_12387_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_373_V_read387_1_phi_fu_12387_p6 = data_373_V_read387_s_reg_23001.read();
    } else {
        ap_phi_mux_data_373_V_read387_1_phi_fu_12387_p6 = data_373_V_read387_1_reg_12383.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_373_V_read387_s_phi_fu_23005_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_373_V_read387_s_phi_fu_23005_p4 = ap_phi_mux_data_373_V_read387_1_phi_fu_12387_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_373_V_read387_s_phi_fu_23005_p4 = data_373_V_read.read();
    } else {
        ap_phi_mux_data_373_V_read387_s_phi_fu_23005_p4 = ap_phi_reg_pp0_iter0_data_373_V_read387_s_reg_23001.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_374_V_read388_1_phi_fu_12401_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_374_V_read388_1_phi_fu_12401_p6 = data_374_V_read388_s_reg_23014.read();
    } else {
        ap_phi_mux_data_374_V_read388_1_phi_fu_12401_p6 = data_374_V_read388_1_reg_12397.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_374_V_read388_s_phi_fu_23018_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_374_V_read388_s_phi_fu_23018_p4 = ap_phi_mux_data_374_V_read388_1_phi_fu_12401_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_374_V_read388_s_phi_fu_23018_p4 = data_374_V_read.read();
    } else {
        ap_phi_mux_data_374_V_read388_s_phi_fu_23018_p4 = ap_phi_reg_pp0_iter0_data_374_V_read388_s_reg_23014.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_375_V_read389_1_phi_fu_12415_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_375_V_read389_1_phi_fu_12415_p6 = data_375_V_read389_s_reg_23027.read();
    } else {
        ap_phi_mux_data_375_V_read389_1_phi_fu_12415_p6 = data_375_V_read389_1_reg_12411.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_375_V_read389_s_phi_fu_23031_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_375_V_read389_s_phi_fu_23031_p4 = ap_phi_mux_data_375_V_read389_1_phi_fu_12415_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_375_V_read389_s_phi_fu_23031_p4 = data_375_V_read.read();
    } else {
        ap_phi_mux_data_375_V_read389_s_phi_fu_23031_p4 = ap_phi_reg_pp0_iter0_data_375_V_read389_s_reg_23027.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_376_V_read390_1_phi_fu_12429_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_376_V_read390_1_phi_fu_12429_p6 = data_376_V_read390_s_reg_23040.read();
    } else {
        ap_phi_mux_data_376_V_read390_1_phi_fu_12429_p6 = data_376_V_read390_1_reg_12425.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_376_V_read390_s_phi_fu_23044_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_376_V_read390_s_phi_fu_23044_p4 = ap_phi_mux_data_376_V_read390_1_phi_fu_12429_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_376_V_read390_s_phi_fu_23044_p4 = data_376_V_read.read();
    } else {
        ap_phi_mux_data_376_V_read390_s_phi_fu_23044_p4 = ap_phi_reg_pp0_iter0_data_376_V_read390_s_reg_23040.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_377_V_read391_1_phi_fu_12443_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_377_V_read391_1_phi_fu_12443_p6 = data_377_V_read391_s_reg_23053.read();
    } else {
        ap_phi_mux_data_377_V_read391_1_phi_fu_12443_p6 = data_377_V_read391_1_reg_12439.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_377_V_read391_s_phi_fu_23057_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_377_V_read391_s_phi_fu_23057_p4 = ap_phi_mux_data_377_V_read391_1_phi_fu_12443_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_377_V_read391_s_phi_fu_23057_p4 = data_377_V_read.read();
    } else {
        ap_phi_mux_data_377_V_read391_s_phi_fu_23057_p4 = ap_phi_reg_pp0_iter0_data_377_V_read391_s_reg_23053.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_378_V_read392_1_phi_fu_12457_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_378_V_read392_1_phi_fu_12457_p6 = data_378_V_read392_s_reg_23066.read();
    } else {
        ap_phi_mux_data_378_V_read392_1_phi_fu_12457_p6 = data_378_V_read392_1_reg_12453.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_378_V_read392_s_phi_fu_23070_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_378_V_read392_s_phi_fu_23070_p4 = ap_phi_mux_data_378_V_read392_1_phi_fu_12457_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_378_V_read392_s_phi_fu_23070_p4 = data_378_V_read.read();
    } else {
        ap_phi_mux_data_378_V_read392_s_phi_fu_23070_p4 = ap_phi_reg_pp0_iter0_data_378_V_read392_s_reg_23066.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_379_V_read393_1_phi_fu_12471_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_379_V_read393_1_phi_fu_12471_p6 = data_379_V_read393_s_reg_23079.read();
    } else {
        ap_phi_mux_data_379_V_read393_1_phi_fu_12471_p6 = data_379_V_read393_1_reg_12467.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_379_V_read393_s_phi_fu_23083_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_379_V_read393_s_phi_fu_23083_p4 = ap_phi_mux_data_379_V_read393_1_phi_fu_12471_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_379_V_read393_s_phi_fu_23083_p4 = data_379_V_read.read();
    } else {
        ap_phi_mux_data_379_V_read393_s_phi_fu_23083_p4 = ap_phi_reg_pp0_iter0_data_379_V_read393_s_reg_23079.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_37_V_read51_ph_phi_fu_18637_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_37_V_read51_ph_phi_fu_18637_p4 = ap_phi_mux_data_37_V_read51_re_phi_fu_7683_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_37_V_read51_ph_phi_fu_18637_p4 = data_37_V_read.read();
    } else {
        ap_phi_mux_data_37_V_read51_ph_phi_fu_18637_p4 = ap_phi_reg_pp0_iter0_data_37_V_read51_ph_reg_18633.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_37_V_read51_re_phi_fu_7683_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_37_V_read51_re_phi_fu_7683_p6 = data_37_V_read51_ph_reg_18633.read();
    } else {
        ap_phi_mux_data_37_V_read51_re_phi_fu_7683_p6 = data_37_V_read51_re_reg_7679.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_380_V_read394_1_phi_fu_12485_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_380_V_read394_1_phi_fu_12485_p6 = data_380_V_read394_s_reg_23092.read();
    } else {
        ap_phi_mux_data_380_V_read394_1_phi_fu_12485_p6 = data_380_V_read394_1_reg_12481.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_380_V_read394_s_phi_fu_23096_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_380_V_read394_s_phi_fu_23096_p4 = ap_phi_mux_data_380_V_read394_1_phi_fu_12485_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_380_V_read394_s_phi_fu_23096_p4 = data_380_V_read.read();
    } else {
        ap_phi_mux_data_380_V_read394_s_phi_fu_23096_p4 = ap_phi_reg_pp0_iter0_data_380_V_read394_s_reg_23092.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_381_V_read395_1_phi_fu_12499_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_381_V_read395_1_phi_fu_12499_p6 = data_381_V_read395_s_reg_23105.read();
    } else {
        ap_phi_mux_data_381_V_read395_1_phi_fu_12499_p6 = data_381_V_read395_1_reg_12495.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_381_V_read395_s_phi_fu_23109_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_381_V_read395_s_phi_fu_23109_p4 = ap_phi_mux_data_381_V_read395_1_phi_fu_12499_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_381_V_read395_s_phi_fu_23109_p4 = data_381_V_read.read();
    } else {
        ap_phi_mux_data_381_V_read395_s_phi_fu_23109_p4 = ap_phi_reg_pp0_iter0_data_381_V_read395_s_reg_23105.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_382_V_read396_1_phi_fu_12513_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_382_V_read396_1_phi_fu_12513_p6 = data_382_V_read396_s_reg_23118.read();
    } else {
        ap_phi_mux_data_382_V_read396_1_phi_fu_12513_p6 = data_382_V_read396_1_reg_12509.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_382_V_read396_s_phi_fu_23122_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_382_V_read396_s_phi_fu_23122_p4 = ap_phi_mux_data_382_V_read396_1_phi_fu_12513_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_382_V_read396_s_phi_fu_23122_p4 = data_382_V_read.read();
    } else {
        ap_phi_mux_data_382_V_read396_s_phi_fu_23122_p4 = ap_phi_reg_pp0_iter0_data_382_V_read396_s_reg_23118.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_383_V_read397_1_phi_fu_12527_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_383_V_read397_1_phi_fu_12527_p6 = data_383_V_read397_s_reg_23131.read();
    } else {
        ap_phi_mux_data_383_V_read397_1_phi_fu_12527_p6 = data_383_V_read397_1_reg_12523.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_383_V_read397_s_phi_fu_23135_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_383_V_read397_s_phi_fu_23135_p4 = ap_phi_mux_data_383_V_read397_1_phi_fu_12527_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_383_V_read397_s_phi_fu_23135_p4 = data_383_V_read.read();
    } else {
        ap_phi_mux_data_383_V_read397_s_phi_fu_23135_p4 = ap_phi_reg_pp0_iter0_data_383_V_read397_s_reg_23131.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_384_V_read398_1_phi_fu_12541_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_384_V_read398_1_phi_fu_12541_p6 = data_384_V_read398_s_reg_23144.read();
    } else {
        ap_phi_mux_data_384_V_read398_1_phi_fu_12541_p6 = data_384_V_read398_1_reg_12537.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_384_V_read398_s_phi_fu_23148_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_384_V_read398_s_phi_fu_23148_p4 = ap_phi_mux_data_384_V_read398_1_phi_fu_12541_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_384_V_read398_s_phi_fu_23148_p4 = data_384_V_read.read();
    } else {
        ap_phi_mux_data_384_V_read398_s_phi_fu_23148_p4 = ap_phi_reg_pp0_iter0_data_384_V_read398_s_reg_23144.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_385_V_read399_1_phi_fu_12555_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_385_V_read399_1_phi_fu_12555_p6 = data_385_V_read399_s_reg_23157.read();
    } else {
        ap_phi_mux_data_385_V_read399_1_phi_fu_12555_p6 = data_385_V_read399_1_reg_12551.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_385_V_read399_s_phi_fu_23161_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_385_V_read399_s_phi_fu_23161_p4 = ap_phi_mux_data_385_V_read399_1_phi_fu_12555_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_385_V_read399_s_phi_fu_23161_p4 = data_385_V_read.read();
    } else {
        ap_phi_mux_data_385_V_read399_s_phi_fu_23161_p4 = ap_phi_reg_pp0_iter0_data_385_V_read399_s_reg_23157.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_386_V_read400_1_phi_fu_12569_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_386_V_read400_1_phi_fu_12569_p6 = data_386_V_read400_s_reg_23170.read();
    } else {
        ap_phi_mux_data_386_V_read400_1_phi_fu_12569_p6 = data_386_V_read400_1_reg_12565.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_386_V_read400_s_phi_fu_23174_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_386_V_read400_s_phi_fu_23174_p4 = ap_phi_mux_data_386_V_read400_1_phi_fu_12569_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_386_V_read400_s_phi_fu_23174_p4 = data_386_V_read.read();
    } else {
        ap_phi_mux_data_386_V_read400_s_phi_fu_23174_p4 = ap_phi_reg_pp0_iter0_data_386_V_read400_s_reg_23170.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_387_V_read401_1_phi_fu_12583_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_387_V_read401_1_phi_fu_12583_p6 = data_387_V_read401_s_reg_23183.read();
    } else {
        ap_phi_mux_data_387_V_read401_1_phi_fu_12583_p6 = data_387_V_read401_1_reg_12579.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_387_V_read401_s_phi_fu_23187_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_387_V_read401_s_phi_fu_23187_p4 = ap_phi_mux_data_387_V_read401_1_phi_fu_12583_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_387_V_read401_s_phi_fu_23187_p4 = data_387_V_read.read();
    } else {
        ap_phi_mux_data_387_V_read401_s_phi_fu_23187_p4 = ap_phi_reg_pp0_iter0_data_387_V_read401_s_reg_23183.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_388_V_read402_1_phi_fu_12597_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_388_V_read402_1_phi_fu_12597_p6 = data_388_V_read402_s_reg_23196.read();
    } else {
        ap_phi_mux_data_388_V_read402_1_phi_fu_12597_p6 = data_388_V_read402_1_reg_12593.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_388_V_read402_s_phi_fu_23200_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_388_V_read402_s_phi_fu_23200_p4 = ap_phi_mux_data_388_V_read402_1_phi_fu_12597_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_388_V_read402_s_phi_fu_23200_p4 = data_388_V_read.read();
    } else {
        ap_phi_mux_data_388_V_read402_s_phi_fu_23200_p4 = ap_phi_reg_pp0_iter0_data_388_V_read402_s_reg_23196.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_389_V_read403_1_phi_fu_12611_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_389_V_read403_1_phi_fu_12611_p6 = data_389_V_read403_s_reg_23209.read();
    } else {
        ap_phi_mux_data_389_V_read403_1_phi_fu_12611_p6 = data_389_V_read403_1_reg_12607.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_389_V_read403_s_phi_fu_23213_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_389_V_read403_s_phi_fu_23213_p4 = ap_phi_mux_data_389_V_read403_1_phi_fu_12611_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_389_V_read403_s_phi_fu_23213_p4 = data_389_V_read.read();
    } else {
        ap_phi_mux_data_389_V_read403_s_phi_fu_23213_p4 = ap_phi_reg_pp0_iter0_data_389_V_read403_s_reg_23209.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_38_V_read52_ph_phi_fu_18650_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_38_V_read52_ph_phi_fu_18650_p4 = ap_phi_mux_data_38_V_read52_re_phi_fu_7697_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_38_V_read52_ph_phi_fu_18650_p4 = data_38_V_read.read();
    } else {
        ap_phi_mux_data_38_V_read52_ph_phi_fu_18650_p4 = ap_phi_reg_pp0_iter0_data_38_V_read52_ph_reg_18646.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_38_V_read52_re_phi_fu_7697_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_38_V_read52_re_phi_fu_7697_p6 = data_38_V_read52_ph_reg_18646.read();
    } else {
        ap_phi_mux_data_38_V_read52_re_phi_fu_7697_p6 = data_38_V_read52_re_reg_7693.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_390_V_read404_1_phi_fu_12625_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_390_V_read404_1_phi_fu_12625_p6 = data_390_V_read404_s_reg_23222.read();
    } else {
        ap_phi_mux_data_390_V_read404_1_phi_fu_12625_p6 = data_390_V_read404_1_reg_12621.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_390_V_read404_s_phi_fu_23226_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_390_V_read404_s_phi_fu_23226_p4 = ap_phi_mux_data_390_V_read404_1_phi_fu_12625_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_390_V_read404_s_phi_fu_23226_p4 = data_390_V_read.read();
    } else {
        ap_phi_mux_data_390_V_read404_s_phi_fu_23226_p4 = ap_phi_reg_pp0_iter0_data_390_V_read404_s_reg_23222.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_391_V_read405_1_phi_fu_12639_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_391_V_read405_1_phi_fu_12639_p6 = data_391_V_read405_s_reg_23235.read();
    } else {
        ap_phi_mux_data_391_V_read405_1_phi_fu_12639_p6 = data_391_V_read405_1_reg_12635.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_391_V_read405_s_phi_fu_23239_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_391_V_read405_s_phi_fu_23239_p4 = ap_phi_mux_data_391_V_read405_1_phi_fu_12639_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_391_V_read405_s_phi_fu_23239_p4 = data_391_V_read.read();
    } else {
        ap_phi_mux_data_391_V_read405_s_phi_fu_23239_p4 = ap_phi_reg_pp0_iter0_data_391_V_read405_s_reg_23235.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_392_V_read406_1_phi_fu_12653_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_392_V_read406_1_phi_fu_12653_p6 = data_392_V_read406_s_reg_23248.read();
    } else {
        ap_phi_mux_data_392_V_read406_1_phi_fu_12653_p6 = data_392_V_read406_1_reg_12649.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_392_V_read406_s_phi_fu_23252_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_392_V_read406_s_phi_fu_23252_p4 = ap_phi_mux_data_392_V_read406_1_phi_fu_12653_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_392_V_read406_s_phi_fu_23252_p4 = data_392_V_read.read();
    } else {
        ap_phi_mux_data_392_V_read406_s_phi_fu_23252_p4 = ap_phi_reg_pp0_iter0_data_392_V_read406_s_reg_23248.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_393_V_read407_1_phi_fu_12667_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_393_V_read407_1_phi_fu_12667_p6 = data_393_V_read407_s_reg_23261.read();
    } else {
        ap_phi_mux_data_393_V_read407_1_phi_fu_12667_p6 = data_393_V_read407_1_reg_12663.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_393_V_read407_s_phi_fu_23265_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_393_V_read407_s_phi_fu_23265_p4 = ap_phi_mux_data_393_V_read407_1_phi_fu_12667_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_393_V_read407_s_phi_fu_23265_p4 = data_393_V_read.read();
    } else {
        ap_phi_mux_data_393_V_read407_s_phi_fu_23265_p4 = ap_phi_reg_pp0_iter0_data_393_V_read407_s_reg_23261.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_394_V_read408_1_phi_fu_12681_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_394_V_read408_1_phi_fu_12681_p6 = data_394_V_read408_s_reg_23274.read();
    } else {
        ap_phi_mux_data_394_V_read408_1_phi_fu_12681_p6 = data_394_V_read408_1_reg_12677.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_394_V_read408_s_phi_fu_23278_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_394_V_read408_s_phi_fu_23278_p4 = ap_phi_mux_data_394_V_read408_1_phi_fu_12681_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_394_V_read408_s_phi_fu_23278_p4 = data_394_V_read.read();
    } else {
        ap_phi_mux_data_394_V_read408_s_phi_fu_23278_p4 = ap_phi_reg_pp0_iter0_data_394_V_read408_s_reg_23274.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_395_V_read409_1_phi_fu_12695_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_395_V_read409_1_phi_fu_12695_p6 = data_395_V_read409_s_reg_23287.read();
    } else {
        ap_phi_mux_data_395_V_read409_1_phi_fu_12695_p6 = data_395_V_read409_1_reg_12691.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_395_V_read409_s_phi_fu_23291_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_395_V_read409_s_phi_fu_23291_p4 = ap_phi_mux_data_395_V_read409_1_phi_fu_12695_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_395_V_read409_s_phi_fu_23291_p4 = data_395_V_read.read();
    } else {
        ap_phi_mux_data_395_V_read409_s_phi_fu_23291_p4 = ap_phi_reg_pp0_iter0_data_395_V_read409_s_reg_23287.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_396_V_read410_1_phi_fu_12709_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_396_V_read410_1_phi_fu_12709_p6 = data_396_V_read410_s_reg_23300.read();
    } else {
        ap_phi_mux_data_396_V_read410_1_phi_fu_12709_p6 = data_396_V_read410_1_reg_12705.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_396_V_read410_s_phi_fu_23304_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_396_V_read410_s_phi_fu_23304_p4 = ap_phi_mux_data_396_V_read410_1_phi_fu_12709_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_396_V_read410_s_phi_fu_23304_p4 = data_396_V_read.read();
    } else {
        ap_phi_mux_data_396_V_read410_s_phi_fu_23304_p4 = ap_phi_reg_pp0_iter0_data_396_V_read410_s_reg_23300.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_397_V_read411_1_phi_fu_12723_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_397_V_read411_1_phi_fu_12723_p6 = data_397_V_read411_s_reg_23313.read();
    } else {
        ap_phi_mux_data_397_V_read411_1_phi_fu_12723_p6 = data_397_V_read411_1_reg_12719.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_397_V_read411_s_phi_fu_23317_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_397_V_read411_s_phi_fu_23317_p4 = ap_phi_mux_data_397_V_read411_1_phi_fu_12723_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_397_V_read411_s_phi_fu_23317_p4 = data_397_V_read.read();
    } else {
        ap_phi_mux_data_397_V_read411_s_phi_fu_23317_p4 = ap_phi_reg_pp0_iter0_data_397_V_read411_s_reg_23313.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_398_V_read412_1_phi_fu_12737_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_398_V_read412_1_phi_fu_12737_p6 = data_398_V_read412_s_reg_23326.read();
    } else {
        ap_phi_mux_data_398_V_read412_1_phi_fu_12737_p6 = data_398_V_read412_1_reg_12733.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_398_V_read412_s_phi_fu_23330_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_398_V_read412_s_phi_fu_23330_p4 = ap_phi_mux_data_398_V_read412_1_phi_fu_12737_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_398_V_read412_s_phi_fu_23330_p4 = data_398_V_read.read();
    } else {
        ap_phi_mux_data_398_V_read412_s_phi_fu_23330_p4 = ap_phi_reg_pp0_iter0_data_398_V_read412_s_reg_23326.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_399_V_read413_1_phi_fu_12751_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_399_V_read413_1_phi_fu_12751_p6 = data_399_V_read413_s_reg_23339.read();
    } else {
        ap_phi_mux_data_399_V_read413_1_phi_fu_12751_p6 = data_399_V_read413_1_reg_12747.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_399_V_read413_s_phi_fu_23343_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_399_V_read413_s_phi_fu_23343_p4 = ap_phi_mux_data_399_V_read413_1_phi_fu_12751_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_399_V_read413_s_phi_fu_23343_p4 = data_399_V_read.read();
    } else {
        ap_phi_mux_data_399_V_read413_s_phi_fu_23343_p4 = ap_phi_reg_pp0_iter0_data_399_V_read413_s_reg_23339.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_39_V_read53_ph_phi_fu_18663_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_39_V_read53_ph_phi_fu_18663_p4 = ap_phi_mux_data_39_V_read53_re_phi_fu_7711_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_39_V_read53_ph_phi_fu_18663_p4 = data_39_V_read.read();
    } else {
        ap_phi_mux_data_39_V_read53_ph_phi_fu_18663_p4 = ap_phi_reg_pp0_iter0_data_39_V_read53_ph_reg_18659.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_39_V_read53_re_phi_fu_7711_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_39_V_read53_re_phi_fu_7711_p6 = data_39_V_read53_ph_reg_18659.read();
    } else {
        ap_phi_mux_data_39_V_read53_re_phi_fu_7711_p6 = data_39_V_read53_re_reg_7707.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_3_V_read17_phi_phi_fu_18195_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_3_V_read17_phi_phi_fu_18195_p4 = ap_phi_mux_data_3_V_read17_rew_phi_fu_7207_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_3_V_read17_phi_phi_fu_18195_p4 = data_3_V_read.read();
    } else {
        ap_phi_mux_data_3_V_read17_phi_phi_fu_18195_p4 = ap_phi_reg_pp0_iter0_data_3_V_read17_phi_reg_18191.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_3_V_read17_rew_phi_fu_7207_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3_V_read17_rew_phi_fu_7207_p6 = data_3_V_read17_phi_reg_18191.read();
    } else {
        ap_phi_mux_data_3_V_read17_rew_phi_fu_7207_p6 = data_3_V_read17_rew_reg_7203.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_400_V_read414_1_phi_fu_12765_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_400_V_read414_1_phi_fu_12765_p6 = data_400_V_read414_s_reg_23352.read();
    } else {
        ap_phi_mux_data_400_V_read414_1_phi_fu_12765_p6 = data_400_V_read414_1_reg_12761.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_400_V_read414_s_phi_fu_23356_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_400_V_read414_s_phi_fu_23356_p4 = ap_phi_mux_data_400_V_read414_1_phi_fu_12765_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_400_V_read414_s_phi_fu_23356_p4 = data_400_V_read.read();
    } else {
        ap_phi_mux_data_400_V_read414_s_phi_fu_23356_p4 = ap_phi_reg_pp0_iter0_data_400_V_read414_s_reg_23352.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_401_V_read415_1_phi_fu_12779_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_401_V_read415_1_phi_fu_12779_p6 = data_401_V_read415_s_reg_23365.read();
    } else {
        ap_phi_mux_data_401_V_read415_1_phi_fu_12779_p6 = data_401_V_read415_1_reg_12775.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_401_V_read415_s_phi_fu_23369_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_401_V_read415_s_phi_fu_23369_p4 = ap_phi_mux_data_401_V_read415_1_phi_fu_12779_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_401_V_read415_s_phi_fu_23369_p4 = data_401_V_read.read();
    } else {
        ap_phi_mux_data_401_V_read415_s_phi_fu_23369_p4 = ap_phi_reg_pp0_iter0_data_401_V_read415_s_reg_23365.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_402_V_read416_1_phi_fu_12793_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_402_V_read416_1_phi_fu_12793_p6 = data_402_V_read416_s_reg_23378.read();
    } else {
        ap_phi_mux_data_402_V_read416_1_phi_fu_12793_p6 = data_402_V_read416_1_reg_12789.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_402_V_read416_s_phi_fu_23382_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_402_V_read416_s_phi_fu_23382_p4 = ap_phi_mux_data_402_V_read416_1_phi_fu_12793_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_402_V_read416_s_phi_fu_23382_p4 = data_402_V_read.read();
    } else {
        ap_phi_mux_data_402_V_read416_s_phi_fu_23382_p4 = ap_phi_reg_pp0_iter0_data_402_V_read416_s_reg_23378.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_403_V_read417_1_phi_fu_12807_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_403_V_read417_1_phi_fu_12807_p6 = data_403_V_read417_s_reg_23391.read();
    } else {
        ap_phi_mux_data_403_V_read417_1_phi_fu_12807_p6 = data_403_V_read417_1_reg_12803.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_403_V_read417_s_phi_fu_23395_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_403_V_read417_s_phi_fu_23395_p4 = ap_phi_mux_data_403_V_read417_1_phi_fu_12807_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_403_V_read417_s_phi_fu_23395_p4 = data_403_V_read.read();
    } else {
        ap_phi_mux_data_403_V_read417_s_phi_fu_23395_p4 = ap_phi_reg_pp0_iter0_data_403_V_read417_s_reg_23391.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_404_V_read418_1_phi_fu_12821_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_404_V_read418_1_phi_fu_12821_p6 = data_404_V_read418_s_reg_23404.read();
    } else {
        ap_phi_mux_data_404_V_read418_1_phi_fu_12821_p6 = data_404_V_read418_1_reg_12817.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_404_V_read418_s_phi_fu_23408_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_404_V_read418_s_phi_fu_23408_p4 = ap_phi_mux_data_404_V_read418_1_phi_fu_12821_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_404_V_read418_s_phi_fu_23408_p4 = data_404_V_read.read();
    } else {
        ap_phi_mux_data_404_V_read418_s_phi_fu_23408_p4 = ap_phi_reg_pp0_iter0_data_404_V_read418_s_reg_23404.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_405_V_read419_1_phi_fu_12835_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_405_V_read419_1_phi_fu_12835_p6 = data_405_V_read419_s_reg_23417.read();
    } else {
        ap_phi_mux_data_405_V_read419_1_phi_fu_12835_p6 = data_405_V_read419_1_reg_12831.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_405_V_read419_s_phi_fu_23421_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_405_V_read419_s_phi_fu_23421_p4 = ap_phi_mux_data_405_V_read419_1_phi_fu_12835_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_405_V_read419_s_phi_fu_23421_p4 = data_405_V_read.read();
    } else {
        ap_phi_mux_data_405_V_read419_s_phi_fu_23421_p4 = ap_phi_reg_pp0_iter0_data_405_V_read419_s_reg_23417.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_406_V_read420_1_phi_fu_12849_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_406_V_read420_1_phi_fu_12849_p6 = data_406_V_read420_s_reg_23430.read();
    } else {
        ap_phi_mux_data_406_V_read420_1_phi_fu_12849_p6 = data_406_V_read420_1_reg_12845.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_406_V_read420_s_phi_fu_23434_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_406_V_read420_s_phi_fu_23434_p4 = ap_phi_mux_data_406_V_read420_1_phi_fu_12849_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_406_V_read420_s_phi_fu_23434_p4 = data_406_V_read.read();
    } else {
        ap_phi_mux_data_406_V_read420_s_phi_fu_23434_p4 = ap_phi_reg_pp0_iter0_data_406_V_read420_s_reg_23430.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_407_V_read421_1_phi_fu_12863_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_407_V_read421_1_phi_fu_12863_p6 = data_407_V_read421_s_reg_23443.read();
    } else {
        ap_phi_mux_data_407_V_read421_1_phi_fu_12863_p6 = data_407_V_read421_1_reg_12859.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_407_V_read421_s_phi_fu_23447_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_407_V_read421_s_phi_fu_23447_p4 = ap_phi_mux_data_407_V_read421_1_phi_fu_12863_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_407_V_read421_s_phi_fu_23447_p4 = data_407_V_read.read();
    } else {
        ap_phi_mux_data_407_V_read421_s_phi_fu_23447_p4 = ap_phi_reg_pp0_iter0_data_407_V_read421_s_reg_23443.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_408_V_read422_1_phi_fu_12877_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_408_V_read422_1_phi_fu_12877_p6 = data_408_V_read422_s_reg_23456.read();
    } else {
        ap_phi_mux_data_408_V_read422_1_phi_fu_12877_p6 = data_408_V_read422_1_reg_12873.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_408_V_read422_s_phi_fu_23460_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_408_V_read422_s_phi_fu_23460_p4 = ap_phi_mux_data_408_V_read422_1_phi_fu_12877_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_408_V_read422_s_phi_fu_23460_p4 = data_408_V_read.read();
    } else {
        ap_phi_mux_data_408_V_read422_s_phi_fu_23460_p4 = ap_phi_reg_pp0_iter0_data_408_V_read422_s_reg_23456.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_409_V_read423_1_phi_fu_12891_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_409_V_read423_1_phi_fu_12891_p6 = data_409_V_read423_s_reg_23469.read();
    } else {
        ap_phi_mux_data_409_V_read423_1_phi_fu_12891_p6 = data_409_V_read423_1_reg_12887.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_409_V_read423_s_phi_fu_23473_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_409_V_read423_s_phi_fu_23473_p4 = ap_phi_mux_data_409_V_read423_1_phi_fu_12891_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_409_V_read423_s_phi_fu_23473_p4 = data_409_V_read.read();
    } else {
        ap_phi_mux_data_409_V_read423_s_phi_fu_23473_p4 = ap_phi_reg_pp0_iter0_data_409_V_read423_s_reg_23469.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_40_V_read54_ph_phi_fu_18676_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_40_V_read54_ph_phi_fu_18676_p4 = ap_phi_mux_data_40_V_read54_re_phi_fu_7725_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_40_V_read54_ph_phi_fu_18676_p4 = data_40_V_read.read();
    } else {
        ap_phi_mux_data_40_V_read54_ph_phi_fu_18676_p4 = ap_phi_reg_pp0_iter0_data_40_V_read54_ph_reg_18672.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_40_V_read54_re_phi_fu_7725_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_40_V_read54_re_phi_fu_7725_p6 = data_40_V_read54_ph_reg_18672.read();
    } else {
        ap_phi_mux_data_40_V_read54_re_phi_fu_7725_p6 = data_40_V_read54_re_reg_7721.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_410_V_read424_1_phi_fu_12905_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_410_V_read424_1_phi_fu_12905_p6 = data_410_V_read424_s_reg_23482.read();
    } else {
        ap_phi_mux_data_410_V_read424_1_phi_fu_12905_p6 = data_410_V_read424_1_reg_12901.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_410_V_read424_s_phi_fu_23486_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_410_V_read424_s_phi_fu_23486_p4 = ap_phi_mux_data_410_V_read424_1_phi_fu_12905_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_410_V_read424_s_phi_fu_23486_p4 = data_410_V_read.read();
    } else {
        ap_phi_mux_data_410_V_read424_s_phi_fu_23486_p4 = ap_phi_reg_pp0_iter0_data_410_V_read424_s_reg_23482.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_411_V_read425_1_phi_fu_12919_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_411_V_read425_1_phi_fu_12919_p6 = data_411_V_read425_s_reg_23495.read();
    } else {
        ap_phi_mux_data_411_V_read425_1_phi_fu_12919_p6 = data_411_V_read425_1_reg_12915.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_411_V_read425_s_phi_fu_23499_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_411_V_read425_s_phi_fu_23499_p4 = ap_phi_mux_data_411_V_read425_1_phi_fu_12919_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_411_V_read425_s_phi_fu_23499_p4 = data_411_V_read.read();
    } else {
        ap_phi_mux_data_411_V_read425_s_phi_fu_23499_p4 = ap_phi_reg_pp0_iter0_data_411_V_read425_s_reg_23495.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_412_V_read426_1_phi_fu_12933_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_412_V_read426_1_phi_fu_12933_p6 = data_412_V_read426_s_reg_23508.read();
    } else {
        ap_phi_mux_data_412_V_read426_1_phi_fu_12933_p6 = data_412_V_read426_1_reg_12929.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_412_V_read426_s_phi_fu_23512_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_412_V_read426_s_phi_fu_23512_p4 = ap_phi_mux_data_412_V_read426_1_phi_fu_12933_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_412_V_read426_s_phi_fu_23512_p4 = data_412_V_read.read();
    } else {
        ap_phi_mux_data_412_V_read426_s_phi_fu_23512_p4 = ap_phi_reg_pp0_iter0_data_412_V_read426_s_reg_23508.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_413_V_read427_1_phi_fu_12947_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_413_V_read427_1_phi_fu_12947_p6 = data_413_V_read427_s_reg_23521.read();
    } else {
        ap_phi_mux_data_413_V_read427_1_phi_fu_12947_p6 = data_413_V_read427_1_reg_12943.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_413_V_read427_s_phi_fu_23525_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_413_V_read427_s_phi_fu_23525_p4 = ap_phi_mux_data_413_V_read427_1_phi_fu_12947_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_413_V_read427_s_phi_fu_23525_p4 = data_413_V_read.read();
    } else {
        ap_phi_mux_data_413_V_read427_s_phi_fu_23525_p4 = ap_phi_reg_pp0_iter0_data_413_V_read427_s_reg_23521.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_414_V_read428_1_phi_fu_12961_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_414_V_read428_1_phi_fu_12961_p6 = data_414_V_read428_s_reg_23534.read();
    } else {
        ap_phi_mux_data_414_V_read428_1_phi_fu_12961_p6 = data_414_V_read428_1_reg_12957.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_414_V_read428_s_phi_fu_23538_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_414_V_read428_s_phi_fu_23538_p4 = ap_phi_mux_data_414_V_read428_1_phi_fu_12961_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_414_V_read428_s_phi_fu_23538_p4 = data_414_V_read.read();
    } else {
        ap_phi_mux_data_414_V_read428_s_phi_fu_23538_p4 = ap_phi_reg_pp0_iter0_data_414_V_read428_s_reg_23534.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_415_V_read429_1_phi_fu_12975_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_415_V_read429_1_phi_fu_12975_p6 = data_415_V_read429_s_reg_23547.read();
    } else {
        ap_phi_mux_data_415_V_read429_1_phi_fu_12975_p6 = data_415_V_read429_1_reg_12971.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_415_V_read429_s_phi_fu_23551_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_415_V_read429_s_phi_fu_23551_p4 = ap_phi_mux_data_415_V_read429_1_phi_fu_12975_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_415_V_read429_s_phi_fu_23551_p4 = data_415_V_read.read();
    } else {
        ap_phi_mux_data_415_V_read429_s_phi_fu_23551_p4 = ap_phi_reg_pp0_iter0_data_415_V_read429_s_reg_23547.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_416_V_read430_1_phi_fu_12989_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_416_V_read430_1_phi_fu_12989_p6 = data_416_V_read430_s_reg_23560.read();
    } else {
        ap_phi_mux_data_416_V_read430_1_phi_fu_12989_p6 = data_416_V_read430_1_reg_12985.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_416_V_read430_s_phi_fu_23564_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_416_V_read430_s_phi_fu_23564_p4 = ap_phi_mux_data_416_V_read430_1_phi_fu_12989_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_416_V_read430_s_phi_fu_23564_p4 = data_416_V_read.read();
    } else {
        ap_phi_mux_data_416_V_read430_s_phi_fu_23564_p4 = ap_phi_reg_pp0_iter0_data_416_V_read430_s_reg_23560.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_417_V_read431_1_phi_fu_13003_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_417_V_read431_1_phi_fu_13003_p6 = data_417_V_read431_s_reg_23573.read();
    } else {
        ap_phi_mux_data_417_V_read431_1_phi_fu_13003_p6 = data_417_V_read431_1_reg_12999.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_417_V_read431_s_phi_fu_23577_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_417_V_read431_s_phi_fu_23577_p4 = ap_phi_mux_data_417_V_read431_1_phi_fu_13003_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_417_V_read431_s_phi_fu_23577_p4 = data_417_V_read.read();
    } else {
        ap_phi_mux_data_417_V_read431_s_phi_fu_23577_p4 = ap_phi_reg_pp0_iter0_data_417_V_read431_s_reg_23573.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_418_V_read432_1_phi_fu_13017_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_418_V_read432_1_phi_fu_13017_p6 = data_418_V_read432_s_reg_23586.read();
    } else {
        ap_phi_mux_data_418_V_read432_1_phi_fu_13017_p6 = data_418_V_read432_1_reg_13013.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_418_V_read432_s_phi_fu_23590_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_418_V_read432_s_phi_fu_23590_p4 = ap_phi_mux_data_418_V_read432_1_phi_fu_13017_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_418_V_read432_s_phi_fu_23590_p4 = data_418_V_read.read();
    } else {
        ap_phi_mux_data_418_V_read432_s_phi_fu_23590_p4 = ap_phi_reg_pp0_iter0_data_418_V_read432_s_reg_23586.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_419_V_read433_1_phi_fu_13031_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_419_V_read433_1_phi_fu_13031_p6 = data_419_V_read433_s_reg_23599.read();
    } else {
        ap_phi_mux_data_419_V_read433_1_phi_fu_13031_p6 = data_419_V_read433_1_reg_13027.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_419_V_read433_s_phi_fu_23603_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_419_V_read433_s_phi_fu_23603_p4 = ap_phi_mux_data_419_V_read433_1_phi_fu_13031_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_419_V_read433_s_phi_fu_23603_p4 = data_419_V_read.read();
    } else {
        ap_phi_mux_data_419_V_read433_s_phi_fu_23603_p4 = ap_phi_reg_pp0_iter0_data_419_V_read433_s_reg_23599.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_41_V_read55_ph_phi_fu_18689_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_41_V_read55_ph_phi_fu_18689_p4 = ap_phi_mux_data_41_V_read55_re_phi_fu_7739_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_41_V_read55_ph_phi_fu_18689_p4 = data_41_V_read.read();
    } else {
        ap_phi_mux_data_41_V_read55_ph_phi_fu_18689_p4 = ap_phi_reg_pp0_iter0_data_41_V_read55_ph_reg_18685.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_41_V_read55_re_phi_fu_7739_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_41_V_read55_re_phi_fu_7739_p6 = data_41_V_read55_ph_reg_18685.read();
    } else {
        ap_phi_mux_data_41_V_read55_re_phi_fu_7739_p6 = data_41_V_read55_re_reg_7735.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_420_V_read434_1_phi_fu_13045_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_420_V_read434_1_phi_fu_13045_p6 = data_420_V_read434_s_reg_23612.read();
    } else {
        ap_phi_mux_data_420_V_read434_1_phi_fu_13045_p6 = data_420_V_read434_1_reg_13041.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_420_V_read434_s_phi_fu_23616_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_420_V_read434_s_phi_fu_23616_p4 = ap_phi_mux_data_420_V_read434_1_phi_fu_13045_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_420_V_read434_s_phi_fu_23616_p4 = data_420_V_read.read();
    } else {
        ap_phi_mux_data_420_V_read434_s_phi_fu_23616_p4 = ap_phi_reg_pp0_iter0_data_420_V_read434_s_reg_23612.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_421_V_read435_1_phi_fu_13059_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_421_V_read435_1_phi_fu_13059_p6 = data_421_V_read435_s_reg_23625.read();
    } else {
        ap_phi_mux_data_421_V_read435_1_phi_fu_13059_p6 = data_421_V_read435_1_reg_13055.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_421_V_read435_s_phi_fu_23629_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_421_V_read435_s_phi_fu_23629_p4 = ap_phi_mux_data_421_V_read435_1_phi_fu_13059_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_421_V_read435_s_phi_fu_23629_p4 = data_421_V_read.read();
    } else {
        ap_phi_mux_data_421_V_read435_s_phi_fu_23629_p4 = ap_phi_reg_pp0_iter0_data_421_V_read435_s_reg_23625.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_422_V_read436_1_phi_fu_13073_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_422_V_read436_1_phi_fu_13073_p6 = data_422_V_read436_s_reg_23638.read();
    } else {
        ap_phi_mux_data_422_V_read436_1_phi_fu_13073_p6 = data_422_V_read436_1_reg_13069.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_422_V_read436_s_phi_fu_23642_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_422_V_read436_s_phi_fu_23642_p4 = ap_phi_mux_data_422_V_read436_1_phi_fu_13073_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_422_V_read436_s_phi_fu_23642_p4 = data_422_V_read.read();
    } else {
        ap_phi_mux_data_422_V_read436_s_phi_fu_23642_p4 = ap_phi_reg_pp0_iter0_data_422_V_read436_s_reg_23638.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_423_V_read437_1_phi_fu_13087_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_423_V_read437_1_phi_fu_13087_p6 = data_423_V_read437_s_reg_23651.read();
    } else {
        ap_phi_mux_data_423_V_read437_1_phi_fu_13087_p6 = data_423_V_read437_1_reg_13083.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_423_V_read437_s_phi_fu_23655_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_423_V_read437_s_phi_fu_23655_p4 = ap_phi_mux_data_423_V_read437_1_phi_fu_13087_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_423_V_read437_s_phi_fu_23655_p4 = data_423_V_read.read();
    } else {
        ap_phi_mux_data_423_V_read437_s_phi_fu_23655_p4 = ap_phi_reg_pp0_iter0_data_423_V_read437_s_reg_23651.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_424_V_read438_1_phi_fu_13101_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_424_V_read438_1_phi_fu_13101_p6 = data_424_V_read438_s_reg_23664.read();
    } else {
        ap_phi_mux_data_424_V_read438_1_phi_fu_13101_p6 = data_424_V_read438_1_reg_13097.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_424_V_read438_s_phi_fu_23668_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_424_V_read438_s_phi_fu_23668_p4 = ap_phi_mux_data_424_V_read438_1_phi_fu_13101_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_424_V_read438_s_phi_fu_23668_p4 = data_424_V_read.read();
    } else {
        ap_phi_mux_data_424_V_read438_s_phi_fu_23668_p4 = ap_phi_reg_pp0_iter0_data_424_V_read438_s_reg_23664.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_425_V_read439_1_phi_fu_13115_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_425_V_read439_1_phi_fu_13115_p6 = data_425_V_read439_s_reg_23677.read();
    } else {
        ap_phi_mux_data_425_V_read439_1_phi_fu_13115_p6 = data_425_V_read439_1_reg_13111.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_425_V_read439_s_phi_fu_23681_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_425_V_read439_s_phi_fu_23681_p4 = ap_phi_mux_data_425_V_read439_1_phi_fu_13115_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_425_V_read439_s_phi_fu_23681_p4 = data_425_V_read.read();
    } else {
        ap_phi_mux_data_425_V_read439_s_phi_fu_23681_p4 = ap_phi_reg_pp0_iter0_data_425_V_read439_s_reg_23677.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_426_V_read440_1_phi_fu_13129_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_426_V_read440_1_phi_fu_13129_p6 = data_426_V_read440_s_reg_23690.read();
    } else {
        ap_phi_mux_data_426_V_read440_1_phi_fu_13129_p6 = data_426_V_read440_1_reg_13125.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_426_V_read440_s_phi_fu_23694_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_426_V_read440_s_phi_fu_23694_p4 = ap_phi_mux_data_426_V_read440_1_phi_fu_13129_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_426_V_read440_s_phi_fu_23694_p4 = data_426_V_read.read();
    } else {
        ap_phi_mux_data_426_V_read440_s_phi_fu_23694_p4 = ap_phi_reg_pp0_iter0_data_426_V_read440_s_reg_23690.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_427_V_read441_1_phi_fu_13143_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_427_V_read441_1_phi_fu_13143_p6 = data_427_V_read441_s_reg_23703.read();
    } else {
        ap_phi_mux_data_427_V_read441_1_phi_fu_13143_p6 = data_427_V_read441_1_reg_13139.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_427_V_read441_s_phi_fu_23707_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_427_V_read441_s_phi_fu_23707_p4 = ap_phi_mux_data_427_V_read441_1_phi_fu_13143_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_427_V_read441_s_phi_fu_23707_p4 = data_427_V_read.read();
    } else {
        ap_phi_mux_data_427_V_read441_s_phi_fu_23707_p4 = ap_phi_reg_pp0_iter0_data_427_V_read441_s_reg_23703.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_428_V_read442_1_phi_fu_13157_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_428_V_read442_1_phi_fu_13157_p6 = data_428_V_read442_s_reg_23716.read();
    } else {
        ap_phi_mux_data_428_V_read442_1_phi_fu_13157_p6 = data_428_V_read442_1_reg_13153.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_428_V_read442_s_phi_fu_23720_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_428_V_read442_s_phi_fu_23720_p4 = ap_phi_mux_data_428_V_read442_1_phi_fu_13157_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_428_V_read442_s_phi_fu_23720_p4 = data_428_V_read.read();
    } else {
        ap_phi_mux_data_428_V_read442_s_phi_fu_23720_p4 = ap_phi_reg_pp0_iter0_data_428_V_read442_s_reg_23716.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_429_V_read443_1_phi_fu_13171_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_429_V_read443_1_phi_fu_13171_p6 = data_429_V_read443_s_reg_23729.read();
    } else {
        ap_phi_mux_data_429_V_read443_1_phi_fu_13171_p6 = data_429_V_read443_1_reg_13167.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_429_V_read443_s_phi_fu_23733_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_429_V_read443_s_phi_fu_23733_p4 = ap_phi_mux_data_429_V_read443_1_phi_fu_13171_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_429_V_read443_s_phi_fu_23733_p4 = data_429_V_read.read();
    } else {
        ap_phi_mux_data_429_V_read443_s_phi_fu_23733_p4 = ap_phi_reg_pp0_iter0_data_429_V_read443_s_reg_23729.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_42_V_read56_ph_phi_fu_18702_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_42_V_read56_ph_phi_fu_18702_p4 = ap_phi_mux_data_42_V_read56_re_phi_fu_7753_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_42_V_read56_ph_phi_fu_18702_p4 = data_42_V_read.read();
    } else {
        ap_phi_mux_data_42_V_read56_ph_phi_fu_18702_p4 = ap_phi_reg_pp0_iter0_data_42_V_read56_ph_reg_18698.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_42_V_read56_re_phi_fu_7753_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_42_V_read56_re_phi_fu_7753_p6 = data_42_V_read56_ph_reg_18698.read();
    } else {
        ap_phi_mux_data_42_V_read56_re_phi_fu_7753_p6 = data_42_V_read56_re_reg_7749.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_430_V_read444_1_phi_fu_13185_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_430_V_read444_1_phi_fu_13185_p6 = data_430_V_read444_s_reg_23742.read();
    } else {
        ap_phi_mux_data_430_V_read444_1_phi_fu_13185_p6 = data_430_V_read444_1_reg_13181.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_430_V_read444_s_phi_fu_23746_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_430_V_read444_s_phi_fu_23746_p4 = ap_phi_mux_data_430_V_read444_1_phi_fu_13185_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_430_V_read444_s_phi_fu_23746_p4 = data_430_V_read.read();
    } else {
        ap_phi_mux_data_430_V_read444_s_phi_fu_23746_p4 = ap_phi_reg_pp0_iter0_data_430_V_read444_s_reg_23742.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_431_V_read445_1_phi_fu_13199_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_431_V_read445_1_phi_fu_13199_p6 = data_431_V_read445_s_reg_23755.read();
    } else {
        ap_phi_mux_data_431_V_read445_1_phi_fu_13199_p6 = data_431_V_read445_1_reg_13195.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_431_V_read445_s_phi_fu_23759_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_431_V_read445_s_phi_fu_23759_p4 = ap_phi_mux_data_431_V_read445_1_phi_fu_13199_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_431_V_read445_s_phi_fu_23759_p4 = data_431_V_read.read();
    } else {
        ap_phi_mux_data_431_V_read445_s_phi_fu_23759_p4 = ap_phi_reg_pp0_iter0_data_431_V_read445_s_reg_23755.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_432_V_read446_1_phi_fu_13213_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_432_V_read446_1_phi_fu_13213_p6 = data_432_V_read446_s_reg_23768.read();
    } else {
        ap_phi_mux_data_432_V_read446_1_phi_fu_13213_p6 = data_432_V_read446_1_reg_13209.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_432_V_read446_s_phi_fu_23772_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_432_V_read446_s_phi_fu_23772_p4 = ap_phi_mux_data_432_V_read446_1_phi_fu_13213_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_432_V_read446_s_phi_fu_23772_p4 = data_432_V_read.read();
    } else {
        ap_phi_mux_data_432_V_read446_s_phi_fu_23772_p4 = ap_phi_reg_pp0_iter0_data_432_V_read446_s_reg_23768.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_433_V_read447_1_phi_fu_13227_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_433_V_read447_1_phi_fu_13227_p6 = data_433_V_read447_s_reg_23781.read();
    } else {
        ap_phi_mux_data_433_V_read447_1_phi_fu_13227_p6 = data_433_V_read447_1_reg_13223.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_433_V_read447_s_phi_fu_23785_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_433_V_read447_s_phi_fu_23785_p4 = ap_phi_mux_data_433_V_read447_1_phi_fu_13227_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_433_V_read447_s_phi_fu_23785_p4 = data_433_V_read.read();
    } else {
        ap_phi_mux_data_433_V_read447_s_phi_fu_23785_p4 = ap_phi_reg_pp0_iter0_data_433_V_read447_s_reg_23781.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_434_V_read448_1_phi_fu_13241_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_434_V_read448_1_phi_fu_13241_p6 = data_434_V_read448_s_reg_23794.read();
    } else {
        ap_phi_mux_data_434_V_read448_1_phi_fu_13241_p6 = data_434_V_read448_1_reg_13237.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_434_V_read448_s_phi_fu_23798_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_434_V_read448_s_phi_fu_23798_p4 = ap_phi_mux_data_434_V_read448_1_phi_fu_13241_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_434_V_read448_s_phi_fu_23798_p4 = data_434_V_read.read();
    } else {
        ap_phi_mux_data_434_V_read448_s_phi_fu_23798_p4 = ap_phi_reg_pp0_iter0_data_434_V_read448_s_reg_23794.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_435_V_read449_1_phi_fu_13255_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_435_V_read449_1_phi_fu_13255_p6 = data_435_V_read449_s_reg_23807.read();
    } else {
        ap_phi_mux_data_435_V_read449_1_phi_fu_13255_p6 = data_435_V_read449_1_reg_13251.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_435_V_read449_s_phi_fu_23811_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_435_V_read449_s_phi_fu_23811_p4 = ap_phi_mux_data_435_V_read449_1_phi_fu_13255_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_435_V_read449_s_phi_fu_23811_p4 = data_435_V_read.read();
    } else {
        ap_phi_mux_data_435_V_read449_s_phi_fu_23811_p4 = ap_phi_reg_pp0_iter0_data_435_V_read449_s_reg_23807.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_436_V_read450_1_phi_fu_13269_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_436_V_read450_1_phi_fu_13269_p6 = data_436_V_read450_s_reg_23820.read();
    } else {
        ap_phi_mux_data_436_V_read450_1_phi_fu_13269_p6 = data_436_V_read450_1_reg_13265.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_436_V_read450_s_phi_fu_23824_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_436_V_read450_s_phi_fu_23824_p4 = ap_phi_mux_data_436_V_read450_1_phi_fu_13269_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_436_V_read450_s_phi_fu_23824_p4 = data_436_V_read.read();
    } else {
        ap_phi_mux_data_436_V_read450_s_phi_fu_23824_p4 = ap_phi_reg_pp0_iter0_data_436_V_read450_s_reg_23820.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_437_V_read451_1_phi_fu_13283_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_437_V_read451_1_phi_fu_13283_p6 = data_437_V_read451_s_reg_23833.read();
    } else {
        ap_phi_mux_data_437_V_read451_1_phi_fu_13283_p6 = data_437_V_read451_1_reg_13279.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_437_V_read451_s_phi_fu_23837_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_437_V_read451_s_phi_fu_23837_p4 = ap_phi_mux_data_437_V_read451_1_phi_fu_13283_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_437_V_read451_s_phi_fu_23837_p4 = data_437_V_read.read();
    } else {
        ap_phi_mux_data_437_V_read451_s_phi_fu_23837_p4 = ap_phi_reg_pp0_iter0_data_437_V_read451_s_reg_23833.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_438_V_read452_1_phi_fu_13297_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_438_V_read452_1_phi_fu_13297_p6 = data_438_V_read452_s_reg_23846.read();
    } else {
        ap_phi_mux_data_438_V_read452_1_phi_fu_13297_p6 = data_438_V_read452_1_reg_13293.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_438_V_read452_s_phi_fu_23850_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_438_V_read452_s_phi_fu_23850_p4 = ap_phi_mux_data_438_V_read452_1_phi_fu_13297_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_438_V_read452_s_phi_fu_23850_p4 = data_438_V_read.read();
    } else {
        ap_phi_mux_data_438_V_read452_s_phi_fu_23850_p4 = ap_phi_reg_pp0_iter0_data_438_V_read452_s_reg_23846.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_439_V_read453_1_phi_fu_13311_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_439_V_read453_1_phi_fu_13311_p6 = data_439_V_read453_s_reg_23859.read();
    } else {
        ap_phi_mux_data_439_V_read453_1_phi_fu_13311_p6 = data_439_V_read453_1_reg_13307.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_439_V_read453_s_phi_fu_23863_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_439_V_read453_s_phi_fu_23863_p4 = ap_phi_mux_data_439_V_read453_1_phi_fu_13311_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_439_V_read453_s_phi_fu_23863_p4 = data_439_V_read.read();
    } else {
        ap_phi_mux_data_439_V_read453_s_phi_fu_23863_p4 = ap_phi_reg_pp0_iter0_data_439_V_read453_s_reg_23859.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_43_V_read57_ph_phi_fu_18715_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_43_V_read57_ph_phi_fu_18715_p4 = ap_phi_mux_data_43_V_read57_re_phi_fu_7767_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_43_V_read57_ph_phi_fu_18715_p4 = data_43_V_read.read();
    } else {
        ap_phi_mux_data_43_V_read57_ph_phi_fu_18715_p4 = ap_phi_reg_pp0_iter0_data_43_V_read57_ph_reg_18711.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_43_V_read57_re_phi_fu_7767_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_43_V_read57_re_phi_fu_7767_p6 = data_43_V_read57_ph_reg_18711.read();
    } else {
        ap_phi_mux_data_43_V_read57_re_phi_fu_7767_p6 = data_43_V_read57_re_reg_7763.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_440_V_read454_1_phi_fu_13325_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_440_V_read454_1_phi_fu_13325_p6 = data_440_V_read454_s_reg_23872.read();
    } else {
        ap_phi_mux_data_440_V_read454_1_phi_fu_13325_p6 = data_440_V_read454_1_reg_13321.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_440_V_read454_s_phi_fu_23876_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_440_V_read454_s_phi_fu_23876_p4 = ap_phi_mux_data_440_V_read454_1_phi_fu_13325_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_440_V_read454_s_phi_fu_23876_p4 = data_440_V_read.read();
    } else {
        ap_phi_mux_data_440_V_read454_s_phi_fu_23876_p4 = ap_phi_reg_pp0_iter0_data_440_V_read454_s_reg_23872.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_441_V_read455_1_phi_fu_13339_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_441_V_read455_1_phi_fu_13339_p6 = data_441_V_read455_s_reg_23885.read();
    } else {
        ap_phi_mux_data_441_V_read455_1_phi_fu_13339_p6 = data_441_V_read455_1_reg_13335.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_441_V_read455_s_phi_fu_23889_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_441_V_read455_s_phi_fu_23889_p4 = ap_phi_mux_data_441_V_read455_1_phi_fu_13339_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_441_V_read455_s_phi_fu_23889_p4 = data_441_V_read.read();
    } else {
        ap_phi_mux_data_441_V_read455_s_phi_fu_23889_p4 = ap_phi_reg_pp0_iter0_data_441_V_read455_s_reg_23885.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_442_V_read456_1_phi_fu_13353_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_442_V_read456_1_phi_fu_13353_p6 = data_442_V_read456_s_reg_23898.read();
    } else {
        ap_phi_mux_data_442_V_read456_1_phi_fu_13353_p6 = data_442_V_read456_1_reg_13349.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_442_V_read456_s_phi_fu_23902_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_442_V_read456_s_phi_fu_23902_p4 = ap_phi_mux_data_442_V_read456_1_phi_fu_13353_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_442_V_read456_s_phi_fu_23902_p4 = data_442_V_read.read();
    } else {
        ap_phi_mux_data_442_V_read456_s_phi_fu_23902_p4 = ap_phi_reg_pp0_iter0_data_442_V_read456_s_reg_23898.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_443_V_read457_1_phi_fu_13367_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_443_V_read457_1_phi_fu_13367_p6 = data_443_V_read457_s_reg_23911.read();
    } else {
        ap_phi_mux_data_443_V_read457_1_phi_fu_13367_p6 = data_443_V_read457_1_reg_13363.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_443_V_read457_s_phi_fu_23915_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_443_V_read457_s_phi_fu_23915_p4 = ap_phi_mux_data_443_V_read457_1_phi_fu_13367_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_443_V_read457_s_phi_fu_23915_p4 = data_443_V_read.read();
    } else {
        ap_phi_mux_data_443_V_read457_s_phi_fu_23915_p4 = ap_phi_reg_pp0_iter0_data_443_V_read457_s_reg_23911.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_444_V_read458_1_phi_fu_13381_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_444_V_read458_1_phi_fu_13381_p6 = data_444_V_read458_s_reg_23924.read();
    } else {
        ap_phi_mux_data_444_V_read458_1_phi_fu_13381_p6 = data_444_V_read458_1_reg_13377.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_444_V_read458_s_phi_fu_23928_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_444_V_read458_s_phi_fu_23928_p4 = ap_phi_mux_data_444_V_read458_1_phi_fu_13381_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_444_V_read458_s_phi_fu_23928_p4 = data_444_V_read.read();
    } else {
        ap_phi_mux_data_444_V_read458_s_phi_fu_23928_p4 = ap_phi_reg_pp0_iter0_data_444_V_read458_s_reg_23924.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_445_V_read459_1_phi_fu_13395_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_445_V_read459_1_phi_fu_13395_p6 = data_445_V_read459_s_reg_23937.read();
    } else {
        ap_phi_mux_data_445_V_read459_1_phi_fu_13395_p6 = data_445_V_read459_1_reg_13391.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_445_V_read459_s_phi_fu_23941_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_445_V_read459_s_phi_fu_23941_p4 = ap_phi_mux_data_445_V_read459_1_phi_fu_13395_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_445_V_read459_s_phi_fu_23941_p4 = data_445_V_read.read();
    } else {
        ap_phi_mux_data_445_V_read459_s_phi_fu_23941_p4 = ap_phi_reg_pp0_iter0_data_445_V_read459_s_reg_23937.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_446_V_read460_1_phi_fu_13409_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_446_V_read460_1_phi_fu_13409_p6 = data_446_V_read460_s_reg_23950.read();
    } else {
        ap_phi_mux_data_446_V_read460_1_phi_fu_13409_p6 = data_446_V_read460_1_reg_13405.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_446_V_read460_s_phi_fu_23954_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_446_V_read460_s_phi_fu_23954_p4 = ap_phi_mux_data_446_V_read460_1_phi_fu_13409_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_446_V_read460_s_phi_fu_23954_p4 = data_446_V_read.read();
    } else {
        ap_phi_mux_data_446_V_read460_s_phi_fu_23954_p4 = ap_phi_reg_pp0_iter0_data_446_V_read460_s_reg_23950.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_447_V_read461_1_phi_fu_13423_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_447_V_read461_1_phi_fu_13423_p6 = data_447_V_read461_s_reg_23963.read();
    } else {
        ap_phi_mux_data_447_V_read461_1_phi_fu_13423_p6 = data_447_V_read461_1_reg_13419.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_447_V_read461_s_phi_fu_23967_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_447_V_read461_s_phi_fu_23967_p4 = ap_phi_mux_data_447_V_read461_1_phi_fu_13423_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_447_V_read461_s_phi_fu_23967_p4 = data_447_V_read.read();
    } else {
        ap_phi_mux_data_447_V_read461_s_phi_fu_23967_p4 = ap_phi_reg_pp0_iter0_data_447_V_read461_s_reg_23963.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_448_V_read462_1_phi_fu_13437_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_448_V_read462_1_phi_fu_13437_p6 = data_448_V_read462_s_reg_23976.read();
    } else {
        ap_phi_mux_data_448_V_read462_1_phi_fu_13437_p6 = data_448_V_read462_1_reg_13433.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_448_V_read462_s_phi_fu_23980_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_448_V_read462_s_phi_fu_23980_p4 = ap_phi_mux_data_448_V_read462_1_phi_fu_13437_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_448_V_read462_s_phi_fu_23980_p4 = data_448_V_read.read();
    } else {
        ap_phi_mux_data_448_V_read462_s_phi_fu_23980_p4 = ap_phi_reg_pp0_iter0_data_448_V_read462_s_reg_23976.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_449_V_read463_1_phi_fu_13451_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_449_V_read463_1_phi_fu_13451_p6 = data_449_V_read463_s_reg_23989.read();
    } else {
        ap_phi_mux_data_449_V_read463_1_phi_fu_13451_p6 = data_449_V_read463_1_reg_13447.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_449_V_read463_s_phi_fu_23993_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_449_V_read463_s_phi_fu_23993_p4 = ap_phi_mux_data_449_V_read463_1_phi_fu_13451_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_449_V_read463_s_phi_fu_23993_p4 = data_449_V_read.read();
    } else {
        ap_phi_mux_data_449_V_read463_s_phi_fu_23993_p4 = ap_phi_reg_pp0_iter0_data_449_V_read463_s_reg_23989.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_44_V_read58_ph_phi_fu_18728_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_44_V_read58_ph_phi_fu_18728_p4 = ap_phi_mux_data_44_V_read58_re_phi_fu_7781_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_44_V_read58_ph_phi_fu_18728_p4 = data_44_V_read.read();
    } else {
        ap_phi_mux_data_44_V_read58_ph_phi_fu_18728_p4 = ap_phi_reg_pp0_iter0_data_44_V_read58_ph_reg_18724.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_44_V_read58_re_phi_fu_7781_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_44_V_read58_re_phi_fu_7781_p6 = data_44_V_read58_ph_reg_18724.read();
    } else {
        ap_phi_mux_data_44_V_read58_re_phi_fu_7781_p6 = data_44_V_read58_re_reg_7777.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_450_V_read464_1_phi_fu_13465_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_450_V_read464_1_phi_fu_13465_p6 = data_450_V_read464_s_reg_24002.read();
    } else {
        ap_phi_mux_data_450_V_read464_1_phi_fu_13465_p6 = data_450_V_read464_1_reg_13461.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_450_V_read464_s_phi_fu_24006_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_450_V_read464_s_phi_fu_24006_p4 = ap_phi_mux_data_450_V_read464_1_phi_fu_13465_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_450_V_read464_s_phi_fu_24006_p4 = data_450_V_read.read();
    } else {
        ap_phi_mux_data_450_V_read464_s_phi_fu_24006_p4 = ap_phi_reg_pp0_iter0_data_450_V_read464_s_reg_24002.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_451_V_read465_1_phi_fu_13479_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_451_V_read465_1_phi_fu_13479_p6 = data_451_V_read465_s_reg_24015.read();
    } else {
        ap_phi_mux_data_451_V_read465_1_phi_fu_13479_p6 = data_451_V_read465_1_reg_13475.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_451_V_read465_s_phi_fu_24019_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_451_V_read465_s_phi_fu_24019_p4 = ap_phi_mux_data_451_V_read465_1_phi_fu_13479_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_451_V_read465_s_phi_fu_24019_p4 = data_451_V_read.read();
    } else {
        ap_phi_mux_data_451_V_read465_s_phi_fu_24019_p4 = ap_phi_reg_pp0_iter0_data_451_V_read465_s_reg_24015.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_452_V_read466_1_phi_fu_13493_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_452_V_read466_1_phi_fu_13493_p6 = data_452_V_read466_s_reg_24028.read();
    } else {
        ap_phi_mux_data_452_V_read466_1_phi_fu_13493_p6 = data_452_V_read466_1_reg_13489.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_452_V_read466_s_phi_fu_24032_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_452_V_read466_s_phi_fu_24032_p4 = ap_phi_mux_data_452_V_read466_1_phi_fu_13493_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_452_V_read466_s_phi_fu_24032_p4 = data_452_V_read.read();
    } else {
        ap_phi_mux_data_452_V_read466_s_phi_fu_24032_p4 = ap_phi_reg_pp0_iter0_data_452_V_read466_s_reg_24028.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_453_V_read467_1_phi_fu_13507_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_453_V_read467_1_phi_fu_13507_p6 = data_453_V_read467_s_reg_24041.read();
    } else {
        ap_phi_mux_data_453_V_read467_1_phi_fu_13507_p6 = data_453_V_read467_1_reg_13503.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_453_V_read467_s_phi_fu_24045_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_453_V_read467_s_phi_fu_24045_p4 = ap_phi_mux_data_453_V_read467_1_phi_fu_13507_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_453_V_read467_s_phi_fu_24045_p4 = data_453_V_read.read();
    } else {
        ap_phi_mux_data_453_V_read467_s_phi_fu_24045_p4 = ap_phi_reg_pp0_iter0_data_453_V_read467_s_reg_24041.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_454_V_read468_1_phi_fu_13521_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_454_V_read468_1_phi_fu_13521_p6 = data_454_V_read468_s_reg_24054.read();
    } else {
        ap_phi_mux_data_454_V_read468_1_phi_fu_13521_p6 = data_454_V_read468_1_reg_13517.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_454_V_read468_s_phi_fu_24058_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_454_V_read468_s_phi_fu_24058_p4 = ap_phi_mux_data_454_V_read468_1_phi_fu_13521_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_454_V_read468_s_phi_fu_24058_p4 = data_454_V_read.read();
    } else {
        ap_phi_mux_data_454_V_read468_s_phi_fu_24058_p4 = ap_phi_reg_pp0_iter0_data_454_V_read468_s_reg_24054.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_455_V_read469_1_phi_fu_13535_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_455_V_read469_1_phi_fu_13535_p6 = data_455_V_read469_s_reg_24067.read();
    } else {
        ap_phi_mux_data_455_V_read469_1_phi_fu_13535_p6 = data_455_V_read469_1_reg_13531.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_455_V_read469_s_phi_fu_24071_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_455_V_read469_s_phi_fu_24071_p4 = ap_phi_mux_data_455_V_read469_1_phi_fu_13535_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_455_V_read469_s_phi_fu_24071_p4 = data_455_V_read.read();
    } else {
        ap_phi_mux_data_455_V_read469_s_phi_fu_24071_p4 = ap_phi_reg_pp0_iter0_data_455_V_read469_s_reg_24067.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_456_V_read470_1_phi_fu_13549_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_456_V_read470_1_phi_fu_13549_p6 = data_456_V_read470_s_reg_24080.read();
    } else {
        ap_phi_mux_data_456_V_read470_1_phi_fu_13549_p6 = data_456_V_read470_1_reg_13545.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_456_V_read470_s_phi_fu_24084_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_456_V_read470_s_phi_fu_24084_p4 = ap_phi_mux_data_456_V_read470_1_phi_fu_13549_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_456_V_read470_s_phi_fu_24084_p4 = data_456_V_read.read();
    } else {
        ap_phi_mux_data_456_V_read470_s_phi_fu_24084_p4 = ap_phi_reg_pp0_iter0_data_456_V_read470_s_reg_24080.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_457_V_read471_1_phi_fu_13563_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_457_V_read471_1_phi_fu_13563_p6 = data_457_V_read471_s_reg_24093.read();
    } else {
        ap_phi_mux_data_457_V_read471_1_phi_fu_13563_p6 = data_457_V_read471_1_reg_13559.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_457_V_read471_s_phi_fu_24097_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_457_V_read471_s_phi_fu_24097_p4 = ap_phi_mux_data_457_V_read471_1_phi_fu_13563_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_457_V_read471_s_phi_fu_24097_p4 = data_457_V_read.read();
    } else {
        ap_phi_mux_data_457_V_read471_s_phi_fu_24097_p4 = ap_phi_reg_pp0_iter0_data_457_V_read471_s_reg_24093.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_458_V_read472_1_phi_fu_13577_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_458_V_read472_1_phi_fu_13577_p6 = data_458_V_read472_s_reg_24106.read();
    } else {
        ap_phi_mux_data_458_V_read472_1_phi_fu_13577_p6 = data_458_V_read472_1_reg_13573.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_458_V_read472_s_phi_fu_24110_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_458_V_read472_s_phi_fu_24110_p4 = ap_phi_mux_data_458_V_read472_1_phi_fu_13577_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_458_V_read472_s_phi_fu_24110_p4 = data_458_V_read.read();
    } else {
        ap_phi_mux_data_458_V_read472_s_phi_fu_24110_p4 = ap_phi_reg_pp0_iter0_data_458_V_read472_s_reg_24106.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_459_V_read473_1_phi_fu_13591_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_459_V_read473_1_phi_fu_13591_p6 = data_459_V_read473_s_reg_24119.read();
    } else {
        ap_phi_mux_data_459_V_read473_1_phi_fu_13591_p6 = data_459_V_read473_1_reg_13587.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_459_V_read473_s_phi_fu_24123_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_459_V_read473_s_phi_fu_24123_p4 = ap_phi_mux_data_459_V_read473_1_phi_fu_13591_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_459_V_read473_s_phi_fu_24123_p4 = data_459_V_read.read();
    } else {
        ap_phi_mux_data_459_V_read473_s_phi_fu_24123_p4 = ap_phi_reg_pp0_iter0_data_459_V_read473_s_reg_24119.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_45_V_read59_ph_phi_fu_18741_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_45_V_read59_ph_phi_fu_18741_p4 = ap_phi_mux_data_45_V_read59_re_phi_fu_7795_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_45_V_read59_ph_phi_fu_18741_p4 = data_45_V_read.read();
    } else {
        ap_phi_mux_data_45_V_read59_ph_phi_fu_18741_p4 = ap_phi_reg_pp0_iter0_data_45_V_read59_ph_reg_18737.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_45_V_read59_re_phi_fu_7795_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_45_V_read59_re_phi_fu_7795_p6 = data_45_V_read59_ph_reg_18737.read();
    } else {
        ap_phi_mux_data_45_V_read59_re_phi_fu_7795_p6 = data_45_V_read59_re_reg_7791.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_460_V_read474_1_phi_fu_13605_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_460_V_read474_1_phi_fu_13605_p6 = data_460_V_read474_s_reg_24132.read();
    } else {
        ap_phi_mux_data_460_V_read474_1_phi_fu_13605_p6 = data_460_V_read474_1_reg_13601.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_460_V_read474_s_phi_fu_24136_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_460_V_read474_s_phi_fu_24136_p4 = ap_phi_mux_data_460_V_read474_1_phi_fu_13605_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_460_V_read474_s_phi_fu_24136_p4 = data_460_V_read.read();
    } else {
        ap_phi_mux_data_460_V_read474_s_phi_fu_24136_p4 = ap_phi_reg_pp0_iter0_data_460_V_read474_s_reg_24132.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_461_V_read475_1_phi_fu_13619_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_461_V_read475_1_phi_fu_13619_p6 = data_461_V_read475_s_reg_24145.read();
    } else {
        ap_phi_mux_data_461_V_read475_1_phi_fu_13619_p6 = data_461_V_read475_1_reg_13615.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_461_V_read475_s_phi_fu_24149_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_461_V_read475_s_phi_fu_24149_p4 = ap_phi_mux_data_461_V_read475_1_phi_fu_13619_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_461_V_read475_s_phi_fu_24149_p4 = data_461_V_read.read();
    } else {
        ap_phi_mux_data_461_V_read475_s_phi_fu_24149_p4 = ap_phi_reg_pp0_iter0_data_461_V_read475_s_reg_24145.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_462_V_read476_1_phi_fu_13633_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_462_V_read476_1_phi_fu_13633_p6 = data_462_V_read476_s_reg_24158.read();
    } else {
        ap_phi_mux_data_462_V_read476_1_phi_fu_13633_p6 = data_462_V_read476_1_reg_13629.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_462_V_read476_s_phi_fu_24162_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_462_V_read476_s_phi_fu_24162_p4 = ap_phi_mux_data_462_V_read476_1_phi_fu_13633_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_462_V_read476_s_phi_fu_24162_p4 = data_462_V_read.read();
    } else {
        ap_phi_mux_data_462_V_read476_s_phi_fu_24162_p4 = ap_phi_reg_pp0_iter0_data_462_V_read476_s_reg_24158.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_463_V_read477_1_phi_fu_13647_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_463_V_read477_1_phi_fu_13647_p6 = data_463_V_read477_s_reg_24171.read();
    } else {
        ap_phi_mux_data_463_V_read477_1_phi_fu_13647_p6 = data_463_V_read477_1_reg_13643.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_463_V_read477_s_phi_fu_24175_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_463_V_read477_s_phi_fu_24175_p4 = ap_phi_mux_data_463_V_read477_1_phi_fu_13647_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_463_V_read477_s_phi_fu_24175_p4 = data_463_V_read.read();
    } else {
        ap_phi_mux_data_463_V_read477_s_phi_fu_24175_p4 = ap_phi_reg_pp0_iter0_data_463_V_read477_s_reg_24171.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_464_V_read478_1_phi_fu_13661_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_464_V_read478_1_phi_fu_13661_p6 = data_464_V_read478_s_reg_24184.read();
    } else {
        ap_phi_mux_data_464_V_read478_1_phi_fu_13661_p6 = data_464_V_read478_1_reg_13657.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_464_V_read478_s_phi_fu_24188_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_464_V_read478_s_phi_fu_24188_p4 = ap_phi_mux_data_464_V_read478_1_phi_fu_13661_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_464_V_read478_s_phi_fu_24188_p4 = data_464_V_read.read();
    } else {
        ap_phi_mux_data_464_V_read478_s_phi_fu_24188_p4 = ap_phi_reg_pp0_iter0_data_464_V_read478_s_reg_24184.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_465_V_read479_1_phi_fu_13675_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_465_V_read479_1_phi_fu_13675_p6 = data_465_V_read479_s_reg_24197.read();
    } else {
        ap_phi_mux_data_465_V_read479_1_phi_fu_13675_p6 = data_465_V_read479_1_reg_13671.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_465_V_read479_s_phi_fu_24201_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_465_V_read479_s_phi_fu_24201_p4 = ap_phi_mux_data_465_V_read479_1_phi_fu_13675_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_465_V_read479_s_phi_fu_24201_p4 = data_465_V_read.read();
    } else {
        ap_phi_mux_data_465_V_read479_s_phi_fu_24201_p4 = ap_phi_reg_pp0_iter0_data_465_V_read479_s_reg_24197.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_466_V_read480_1_phi_fu_13689_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_466_V_read480_1_phi_fu_13689_p6 = data_466_V_read480_s_reg_24210.read();
    } else {
        ap_phi_mux_data_466_V_read480_1_phi_fu_13689_p6 = data_466_V_read480_1_reg_13685.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_466_V_read480_s_phi_fu_24214_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_466_V_read480_s_phi_fu_24214_p4 = ap_phi_mux_data_466_V_read480_1_phi_fu_13689_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_466_V_read480_s_phi_fu_24214_p4 = data_466_V_read.read();
    } else {
        ap_phi_mux_data_466_V_read480_s_phi_fu_24214_p4 = ap_phi_reg_pp0_iter0_data_466_V_read480_s_reg_24210.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_467_V_read481_1_phi_fu_13703_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_467_V_read481_1_phi_fu_13703_p6 = data_467_V_read481_s_reg_24223.read();
    } else {
        ap_phi_mux_data_467_V_read481_1_phi_fu_13703_p6 = data_467_V_read481_1_reg_13699.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_467_V_read481_s_phi_fu_24227_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_467_V_read481_s_phi_fu_24227_p4 = ap_phi_mux_data_467_V_read481_1_phi_fu_13703_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_467_V_read481_s_phi_fu_24227_p4 = data_467_V_read.read();
    } else {
        ap_phi_mux_data_467_V_read481_s_phi_fu_24227_p4 = ap_phi_reg_pp0_iter0_data_467_V_read481_s_reg_24223.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_468_V_read482_1_phi_fu_13717_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_468_V_read482_1_phi_fu_13717_p6 = data_468_V_read482_s_reg_24236.read();
    } else {
        ap_phi_mux_data_468_V_read482_1_phi_fu_13717_p6 = data_468_V_read482_1_reg_13713.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_468_V_read482_s_phi_fu_24240_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_468_V_read482_s_phi_fu_24240_p4 = ap_phi_mux_data_468_V_read482_1_phi_fu_13717_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_468_V_read482_s_phi_fu_24240_p4 = data_468_V_read.read();
    } else {
        ap_phi_mux_data_468_V_read482_s_phi_fu_24240_p4 = ap_phi_reg_pp0_iter0_data_468_V_read482_s_reg_24236.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_469_V_read483_1_phi_fu_13731_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_469_V_read483_1_phi_fu_13731_p6 = data_469_V_read483_s_reg_24249.read();
    } else {
        ap_phi_mux_data_469_V_read483_1_phi_fu_13731_p6 = data_469_V_read483_1_reg_13727.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_469_V_read483_s_phi_fu_24253_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_469_V_read483_s_phi_fu_24253_p4 = ap_phi_mux_data_469_V_read483_1_phi_fu_13731_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_469_V_read483_s_phi_fu_24253_p4 = data_469_V_read.read();
    } else {
        ap_phi_mux_data_469_V_read483_s_phi_fu_24253_p4 = ap_phi_reg_pp0_iter0_data_469_V_read483_s_reg_24249.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_46_V_read60_ph_phi_fu_18754_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_46_V_read60_ph_phi_fu_18754_p4 = ap_phi_mux_data_46_V_read60_re_phi_fu_7809_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_46_V_read60_ph_phi_fu_18754_p4 = data_46_V_read.read();
    } else {
        ap_phi_mux_data_46_V_read60_ph_phi_fu_18754_p4 = ap_phi_reg_pp0_iter0_data_46_V_read60_ph_reg_18750.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_46_V_read60_re_phi_fu_7809_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_46_V_read60_re_phi_fu_7809_p6 = data_46_V_read60_ph_reg_18750.read();
    } else {
        ap_phi_mux_data_46_V_read60_re_phi_fu_7809_p6 = data_46_V_read60_re_reg_7805.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_470_V_read484_1_phi_fu_13745_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_470_V_read484_1_phi_fu_13745_p6 = data_470_V_read484_s_reg_24262.read();
    } else {
        ap_phi_mux_data_470_V_read484_1_phi_fu_13745_p6 = data_470_V_read484_1_reg_13741.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_470_V_read484_s_phi_fu_24266_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_470_V_read484_s_phi_fu_24266_p4 = ap_phi_mux_data_470_V_read484_1_phi_fu_13745_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_470_V_read484_s_phi_fu_24266_p4 = data_470_V_read.read();
    } else {
        ap_phi_mux_data_470_V_read484_s_phi_fu_24266_p4 = ap_phi_reg_pp0_iter0_data_470_V_read484_s_reg_24262.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_471_V_read485_1_phi_fu_13759_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_471_V_read485_1_phi_fu_13759_p6 = data_471_V_read485_s_reg_24275.read();
    } else {
        ap_phi_mux_data_471_V_read485_1_phi_fu_13759_p6 = data_471_V_read485_1_reg_13755.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_471_V_read485_s_phi_fu_24279_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_471_V_read485_s_phi_fu_24279_p4 = ap_phi_mux_data_471_V_read485_1_phi_fu_13759_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_471_V_read485_s_phi_fu_24279_p4 = data_471_V_read.read();
    } else {
        ap_phi_mux_data_471_V_read485_s_phi_fu_24279_p4 = ap_phi_reg_pp0_iter0_data_471_V_read485_s_reg_24275.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_472_V_read486_1_phi_fu_13773_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_472_V_read486_1_phi_fu_13773_p6 = data_472_V_read486_s_reg_24288.read();
    } else {
        ap_phi_mux_data_472_V_read486_1_phi_fu_13773_p6 = data_472_V_read486_1_reg_13769.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_472_V_read486_s_phi_fu_24292_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_472_V_read486_s_phi_fu_24292_p4 = ap_phi_mux_data_472_V_read486_1_phi_fu_13773_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_472_V_read486_s_phi_fu_24292_p4 = data_472_V_read.read();
    } else {
        ap_phi_mux_data_472_V_read486_s_phi_fu_24292_p4 = ap_phi_reg_pp0_iter0_data_472_V_read486_s_reg_24288.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_473_V_read487_1_phi_fu_13787_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_473_V_read487_1_phi_fu_13787_p6 = data_473_V_read487_s_reg_24301.read();
    } else {
        ap_phi_mux_data_473_V_read487_1_phi_fu_13787_p6 = data_473_V_read487_1_reg_13783.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_473_V_read487_s_phi_fu_24305_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_473_V_read487_s_phi_fu_24305_p4 = ap_phi_mux_data_473_V_read487_1_phi_fu_13787_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_473_V_read487_s_phi_fu_24305_p4 = data_473_V_read.read();
    } else {
        ap_phi_mux_data_473_V_read487_s_phi_fu_24305_p4 = ap_phi_reg_pp0_iter0_data_473_V_read487_s_reg_24301.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_474_V_read488_1_phi_fu_13801_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_474_V_read488_1_phi_fu_13801_p6 = data_474_V_read488_s_reg_24314.read();
    } else {
        ap_phi_mux_data_474_V_read488_1_phi_fu_13801_p6 = data_474_V_read488_1_reg_13797.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_474_V_read488_s_phi_fu_24318_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_474_V_read488_s_phi_fu_24318_p4 = ap_phi_mux_data_474_V_read488_1_phi_fu_13801_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_474_V_read488_s_phi_fu_24318_p4 = data_474_V_read.read();
    } else {
        ap_phi_mux_data_474_V_read488_s_phi_fu_24318_p4 = ap_phi_reg_pp0_iter0_data_474_V_read488_s_reg_24314.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_475_V_read489_1_phi_fu_13815_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_475_V_read489_1_phi_fu_13815_p6 = data_475_V_read489_s_reg_24327.read();
    } else {
        ap_phi_mux_data_475_V_read489_1_phi_fu_13815_p6 = data_475_V_read489_1_reg_13811.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_475_V_read489_s_phi_fu_24331_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_475_V_read489_s_phi_fu_24331_p4 = ap_phi_mux_data_475_V_read489_1_phi_fu_13815_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_475_V_read489_s_phi_fu_24331_p4 = data_475_V_read.read();
    } else {
        ap_phi_mux_data_475_V_read489_s_phi_fu_24331_p4 = ap_phi_reg_pp0_iter0_data_475_V_read489_s_reg_24327.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_476_V_read490_1_phi_fu_13829_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_476_V_read490_1_phi_fu_13829_p6 = data_476_V_read490_s_reg_24340.read();
    } else {
        ap_phi_mux_data_476_V_read490_1_phi_fu_13829_p6 = data_476_V_read490_1_reg_13825.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_476_V_read490_s_phi_fu_24344_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_476_V_read490_s_phi_fu_24344_p4 = ap_phi_mux_data_476_V_read490_1_phi_fu_13829_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_476_V_read490_s_phi_fu_24344_p4 = data_476_V_read.read();
    } else {
        ap_phi_mux_data_476_V_read490_s_phi_fu_24344_p4 = ap_phi_reg_pp0_iter0_data_476_V_read490_s_reg_24340.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_477_V_read491_1_phi_fu_13843_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_477_V_read491_1_phi_fu_13843_p6 = data_477_V_read491_s_reg_24353.read();
    } else {
        ap_phi_mux_data_477_V_read491_1_phi_fu_13843_p6 = data_477_V_read491_1_reg_13839.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_477_V_read491_s_phi_fu_24357_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_477_V_read491_s_phi_fu_24357_p4 = ap_phi_mux_data_477_V_read491_1_phi_fu_13843_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_477_V_read491_s_phi_fu_24357_p4 = data_477_V_read.read();
    } else {
        ap_phi_mux_data_477_V_read491_s_phi_fu_24357_p4 = ap_phi_reg_pp0_iter0_data_477_V_read491_s_reg_24353.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_478_V_read492_1_phi_fu_13857_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_478_V_read492_1_phi_fu_13857_p6 = data_478_V_read492_s_reg_24366.read();
    } else {
        ap_phi_mux_data_478_V_read492_1_phi_fu_13857_p6 = data_478_V_read492_1_reg_13853.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_478_V_read492_s_phi_fu_24370_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_478_V_read492_s_phi_fu_24370_p4 = ap_phi_mux_data_478_V_read492_1_phi_fu_13857_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_478_V_read492_s_phi_fu_24370_p4 = data_478_V_read.read();
    } else {
        ap_phi_mux_data_478_V_read492_s_phi_fu_24370_p4 = ap_phi_reg_pp0_iter0_data_478_V_read492_s_reg_24366.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_479_V_read493_1_phi_fu_13871_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_479_V_read493_1_phi_fu_13871_p6 = data_479_V_read493_s_reg_24379.read();
    } else {
        ap_phi_mux_data_479_V_read493_1_phi_fu_13871_p6 = data_479_V_read493_1_reg_13867.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_479_V_read493_s_phi_fu_24383_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_479_V_read493_s_phi_fu_24383_p4 = ap_phi_mux_data_479_V_read493_1_phi_fu_13871_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_479_V_read493_s_phi_fu_24383_p4 = data_479_V_read.read();
    } else {
        ap_phi_mux_data_479_V_read493_s_phi_fu_24383_p4 = ap_phi_reg_pp0_iter0_data_479_V_read493_s_reg_24379.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_47_V_read61_ph_phi_fu_18767_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_47_V_read61_ph_phi_fu_18767_p4 = ap_phi_mux_data_47_V_read61_re_phi_fu_7823_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_47_V_read61_ph_phi_fu_18767_p4 = data_47_V_read.read();
    } else {
        ap_phi_mux_data_47_V_read61_ph_phi_fu_18767_p4 = ap_phi_reg_pp0_iter0_data_47_V_read61_ph_reg_18763.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_47_V_read61_re_phi_fu_7823_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_47_V_read61_re_phi_fu_7823_p6 = data_47_V_read61_ph_reg_18763.read();
    } else {
        ap_phi_mux_data_47_V_read61_re_phi_fu_7823_p6 = data_47_V_read61_re_reg_7819.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_480_V_read494_1_phi_fu_13885_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_480_V_read494_1_phi_fu_13885_p6 = data_480_V_read494_s_reg_24392.read();
    } else {
        ap_phi_mux_data_480_V_read494_1_phi_fu_13885_p6 = data_480_V_read494_1_reg_13881.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_480_V_read494_s_phi_fu_24396_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_480_V_read494_s_phi_fu_24396_p4 = ap_phi_mux_data_480_V_read494_1_phi_fu_13885_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_480_V_read494_s_phi_fu_24396_p4 = data_480_V_read.read();
    } else {
        ap_phi_mux_data_480_V_read494_s_phi_fu_24396_p4 = ap_phi_reg_pp0_iter0_data_480_V_read494_s_reg_24392.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_481_V_read495_1_phi_fu_13899_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_481_V_read495_1_phi_fu_13899_p6 = data_481_V_read495_s_reg_24405.read();
    } else {
        ap_phi_mux_data_481_V_read495_1_phi_fu_13899_p6 = data_481_V_read495_1_reg_13895.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_481_V_read495_s_phi_fu_24409_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_481_V_read495_s_phi_fu_24409_p4 = ap_phi_mux_data_481_V_read495_1_phi_fu_13899_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_481_V_read495_s_phi_fu_24409_p4 = data_481_V_read.read();
    } else {
        ap_phi_mux_data_481_V_read495_s_phi_fu_24409_p4 = ap_phi_reg_pp0_iter0_data_481_V_read495_s_reg_24405.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_482_V_read496_1_phi_fu_13913_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_482_V_read496_1_phi_fu_13913_p6 = data_482_V_read496_s_reg_24418.read();
    } else {
        ap_phi_mux_data_482_V_read496_1_phi_fu_13913_p6 = data_482_V_read496_1_reg_13909.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_482_V_read496_s_phi_fu_24422_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_482_V_read496_s_phi_fu_24422_p4 = ap_phi_mux_data_482_V_read496_1_phi_fu_13913_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_482_V_read496_s_phi_fu_24422_p4 = data_482_V_read.read();
    } else {
        ap_phi_mux_data_482_V_read496_s_phi_fu_24422_p4 = ap_phi_reg_pp0_iter0_data_482_V_read496_s_reg_24418.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_483_V_read497_1_phi_fu_13927_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_483_V_read497_1_phi_fu_13927_p6 = data_483_V_read497_s_reg_24431.read();
    } else {
        ap_phi_mux_data_483_V_read497_1_phi_fu_13927_p6 = data_483_V_read497_1_reg_13923.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_483_V_read497_s_phi_fu_24435_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_483_V_read497_s_phi_fu_24435_p4 = ap_phi_mux_data_483_V_read497_1_phi_fu_13927_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_483_V_read497_s_phi_fu_24435_p4 = data_483_V_read.read();
    } else {
        ap_phi_mux_data_483_V_read497_s_phi_fu_24435_p4 = ap_phi_reg_pp0_iter0_data_483_V_read497_s_reg_24431.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_484_V_read498_1_phi_fu_13941_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_484_V_read498_1_phi_fu_13941_p6 = data_484_V_read498_s_reg_24444.read();
    } else {
        ap_phi_mux_data_484_V_read498_1_phi_fu_13941_p6 = data_484_V_read498_1_reg_13937.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_484_V_read498_s_phi_fu_24448_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_484_V_read498_s_phi_fu_24448_p4 = ap_phi_mux_data_484_V_read498_1_phi_fu_13941_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_484_V_read498_s_phi_fu_24448_p4 = data_484_V_read.read();
    } else {
        ap_phi_mux_data_484_V_read498_s_phi_fu_24448_p4 = ap_phi_reg_pp0_iter0_data_484_V_read498_s_reg_24444.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_485_V_read499_1_phi_fu_13955_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_485_V_read499_1_phi_fu_13955_p6 = data_485_V_read499_s_reg_24457.read();
    } else {
        ap_phi_mux_data_485_V_read499_1_phi_fu_13955_p6 = data_485_V_read499_1_reg_13951.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_485_V_read499_s_phi_fu_24461_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_485_V_read499_s_phi_fu_24461_p4 = ap_phi_mux_data_485_V_read499_1_phi_fu_13955_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_485_V_read499_s_phi_fu_24461_p4 = data_485_V_read.read();
    } else {
        ap_phi_mux_data_485_V_read499_s_phi_fu_24461_p4 = ap_phi_reg_pp0_iter0_data_485_V_read499_s_reg_24457.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_486_V_read500_1_phi_fu_13969_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_486_V_read500_1_phi_fu_13969_p6 = data_486_V_read500_s_reg_24470.read();
    } else {
        ap_phi_mux_data_486_V_read500_1_phi_fu_13969_p6 = data_486_V_read500_1_reg_13965.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_486_V_read500_s_phi_fu_24474_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_486_V_read500_s_phi_fu_24474_p4 = ap_phi_mux_data_486_V_read500_1_phi_fu_13969_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_486_V_read500_s_phi_fu_24474_p4 = data_486_V_read.read();
    } else {
        ap_phi_mux_data_486_V_read500_s_phi_fu_24474_p4 = ap_phi_reg_pp0_iter0_data_486_V_read500_s_reg_24470.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_487_V_read501_1_phi_fu_13983_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_487_V_read501_1_phi_fu_13983_p6 = data_487_V_read501_s_reg_24483.read();
    } else {
        ap_phi_mux_data_487_V_read501_1_phi_fu_13983_p6 = data_487_V_read501_1_reg_13979.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_487_V_read501_s_phi_fu_24487_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_487_V_read501_s_phi_fu_24487_p4 = ap_phi_mux_data_487_V_read501_1_phi_fu_13983_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_487_V_read501_s_phi_fu_24487_p4 = data_487_V_read.read();
    } else {
        ap_phi_mux_data_487_V_read501_s_phi_fu_24487_p4 = ap_phi_reg_pp0_iter0_data_487_V_read501_s_reg_24483.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_488_V_read502_1_phi_fu_13997_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_488_V_read502_1_phi_fu_13997_p6 = data_488_V_read502_s_reg_24496.read();
    } else {
        ap_phi_mux_data_488_V_read502_1_phi_fu_13997_p6 = data_488_V_read502_1_reg_13993.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_488_V_read502_s_phi_fu_24500_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_488_V_read502_s_phi_fu_24500_p4 = ap_phi_mux_data_488_V_read502_1_phi_fu_13997_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_488_V_read502_s_phi_fu_24500_p4 = data_488_V_read.read();
    } else {
        ap_phi_mux_data_488_V_read502_s_phi_fu_24500_p4 = ap_phi_reg_pp0_iter0_data_488_V_read502_s_reg_24496.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_489_V_read503_1_phi_fu_14011_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_489_V_read503_1_phi_fu_14011_p6 = data_489_V_read503_s_reg_24509.read();
    } else {
        ap_phi_mux_data_489_V_read503_1_phi_fu_14011_p6 = data_489_V_read503_1_reg_14007.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_489_V_read503_s_phi_fu_24513_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_489_V_read503_s_phi_fu_24513_p4 = ap_phi_mux_data_489_V_read503_1_phi_fu_14011_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_489_V_read503_s_phi_fu_24513_p4 = data_489_V_read.read();
    } else {
        ap_phi_mux_data_489_V_read503_s_phi_fu_24513_p4 = ap_phi_reg_pp0_iter0_data_489_V_read503_s_reg_24509.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_48_V_read62_ph_phi_fu_18780_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_48_V_read62_ph_phi_fu_18780_p4 = ap_phi_mux_data_48_V_read62_re_phi_fu_7837_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_48_V_read62_ph_phi_fu_18780_p4 = data_48_V_read.read();
    } else {
        ap_phi_mux_data_48_V_read62_ph_phi_fu_18780_p4 = ap_phi_reg_pp0_iter0_data_48_V_read62_ph_reg_18776.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_48_V_read62_re_phi_fu_7837_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_48_V_read62_re_phi_fu_7837_p6 = data_48_V_read62_ph_reg_18776.read();
    } else {
        ap_phi_mux_data_48_V_read62_re_phi_fu_7837_p6 = data_48_V_read62_re_reg_7833.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_490_V_read504_1_phi_fu_14025_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_490_V_read504_1_phi_fu_14025_p6 = data_490_V_read504_s_reg_24522.read();
    } else {
        ap_phi_mux_data_490_V_read504_1_phi_fu_14025_p6 = data_490_V_read504_1_reg_14021.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_490_V_read504_s_phi_fu_24526_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_490_V_read504_s_phi_fu_24526_p4 = ap_phi_mux_data_490_V_read504_1_phi_fu_14025_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_490_V_read504_s_phi_fu_24526_p4 = data_490_V_read.read();
    } else {
        ap_phi_mux_data_490_V_read504_s_phi_fu_24526_p4 = ap_phi_reg_pp0_iter0_data_490_V_read504_s_reg_24522.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_491_V_read505_1_phi_fu_14039_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_491_V_read505_1_phi_fu_14039_p6 = data_491_V_read505_s_reg_24535.read();
    } else {
        ap_phi_mux_data_491_V_read505_1_phi_fu_14039_p6 = data_491_V_read505_1_reg_14035.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_491_V_read505_s_phi_fu_24539_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_491_V_read505_s_phi_fu_24539_p4 = ap_phi_mux_data_491_V_read505_1_phi_fu_14039_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_491_V_read505_s_phi_fu_24539_p4 = data_491_V_read.read();
    } else {
        ap_phi_mux_data_491_V_read505_s_phi_fu_24539_p4 = ap_phi_reg_pp0_iter0_data_491_V_read505_s_reg_24535.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_492_V_read506_1_phi_fu_14053_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_492_V_read506_1_phi_fu_14053_p6 = data_492_V_read506_s_reg_24548.read();
    } else {
        ap_phi_mux_data_492_V_read506_1_phi_fu_14053_p6 = data_492_V_read506_1_reg_14049.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_492_V_read506_s_phi_fu_24552_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_492_V_read506_s_phi_fu_24552_p4 = ap_phi_mux_data_492_V_read506_1_phi_fu_14053_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_492_V_read506_s_phi_fu_24552_p4 = data_492_V_read.read();
    } else {
        ap_phi_mux_data_492_V_read506_s_phi_fu_24552_p4 = ap_phi_reg_pp0_iter0_data_492_V_read506_s_reg_24548.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_493_V_read507_1_phi_fu_14067_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_493_V_read507_1_phi_fu_14067_p6 = data_493_V_read507_s_reg_24561.read();
    } else {
        ap_phi_mux_data_493_V_read507_1_phi_fu_14067_p6 = data_493_V_read507_1_reg_14063.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_493_V_read507_s_phi_fu_24565_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_493_V_read507_s_phi_fu_24565_p4 = ap_phi_mux_data_493_V_read507_1_phi_fu_14067_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_493_V_read507_s_phi_fu_24565_p4 = data_493_V_read.read();
    } else {
        ap_phi_mux_data_493_V_read507_s_phi_fu_24565_p4 = ap_phi_reg_pp0_iter0_data_493_V_read507_s_reg_24561.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_494_V_read508_1_phi_fu_14081_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_494_V_read508_1_phi_fu_14081_p6 = data_494_V_read508_s_reg_24574.read();
    } else {
        ap_phi_mux_data_494_V_read508_1_phi_fu_14081_p6 = data_494_V_read508_1_reg_14077.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_494_V_read508_s_phi_fu_24578_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_494_V_read508_s_phi_fu_24578_p4 = ap_phi_mux_data_494_V_read508_1_phi_fu_14081_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_494_V_read508_s_phi_fu_24578_p4 = data_494_V_read.read();
    } else {
        ap_phi_mux_data_494_V_read508_s_phi_fu_24578_p4 = ap_phi_reg_pp0_iter0_data_494_V_read508_s_reg_24574.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_495_V_read509_1_phi_fu_14095_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_495_V_read509_1_phi_fu_14095_p6 = data_495_V_read509_s_reg_24587.read();
    } else {
        ap_phi_mux_data_495_V_read509_1_phi_fu_14095_p6 = data_495_V_read509_1_reg_14091.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_495_V_read509_s_phi_fu_24591_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_495_V_read509_s_phi_fu_24591_p4 = ap_phi_mux_data_495_V_read509_1_phi_fu_14095_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_495_V_read509_s_phi_fu_24591_p4 = data_495_V_read.read();
    } else {
        ap_phi_mux_data_495_V_read509_s_phi_fu_24591_p4 = ap_phi_reg_pp0_iter0_data_495_V_read509_s_reg_24587.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_496_V_read510_1_phi_fu_14109_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_496_V_read510_1_phi_fu_14109_p6 = data_496_V_read510_s_reg_24600.read();
    } else {
        ap_phi_mux_data_496_V_read510_1_phi_fu_14109_p6 = data_496_V_read510_1_reg_14105.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_496_V_read510_s_phi_fu_24604_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_496_V_read510_s_phi_fu_24604_p4 = ap_phi_mux_data_496_V_read510_1_phi_fu_14109_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_496_V_read510_s_phi_fu_24604_p4 = data_496_V_read.read();
    } else {
        ap_phi_mux_data_496_V_read510_s_phi_fu_24604_p4 = ap_phi_reg_pp0_iter0_data_496_V_read510_s_reg_24600.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_497_V_read511_1_phi_fu_14123_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_497_V_read511_1_phi_fu_14123_p6 = data_497_V_read511_s_reg_24613.read();
    } else {
        ap_phi_mux_data_497_V_read511_1_phi_fu_14123_p6 = data_497_V_read511_1_reg_14119.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_497_V_read511_s_phi_fu_24617_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_497_V_read511_s_phi_fu_24617_p4 = ap_phi_mux_data_497_V_read511_1_phi_fu_14123_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_497_V_read511_s_phi_fu_24617_p4 = data_497_V_read.read();
    } else {
        ap_phi_mux_data_497_V_read511_s_phi_fu_24617_p4 = ap_phi_reg_pp0_iter0_data_497_V_read511_s_reg_24613.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_498_V_read512_1_phi_fu_14137_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_498_V_read512_1_phi_fu_14137_p6 = data_498_V_read512_s_reg_24626.read();
    } else {
        ap_phi_mux_data_498_V_read512_1_phi_fu_14137_p6 = data_498_V_read512_1_reg_14133.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_498_V_read512_s_phi_fu_24630_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_498_V_read512_s_phi_fu_24630_p4 = ap_phi_mux_data_498_V_read512_1_phi_fu_14137_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_498_V_read512_s_phi_fu_24630_p4 = data_498_V_read.read();
    } else {
        ap_phi_mux_data_498_V_read512_s_phi_fu_24630_p4 = ap_phi_reg_pp0_iter0_data_498_V_read512_s_reg_24626.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_499_V_read513_1_phi_fu_14151_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_499_V_read513_1_phi_fu_14151_p6 = data_499_V_read513_s_reg_24639.read();
    } else {
        ap_phi_mux_data_499_V_read513_1_phi_fu_14151_p6 = data_499_V_read513_1_reg_14147.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_499_V_read513_s_phi_fu_24643_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_499_V_read513_s_phi_fu_24643_p4 = ap_phi_mux_data_499_V_read513_1_phi_fu_14151_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_499_V_read513_s_phi_fu_24643_p4 = data_499_V_read.read();
    } else {
        ap_phi_mux_data_499_V_read513_s_phi_fu_24643_p4 = ap_phi_reg_pp0_iter0_data_499_V_read513_s_reg_24639.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_49_V_read63_ph_phi_fu_18793_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_49_V_read63_ph_phi_fu_18793_p4 = ap_phi_mux_data_49_V_read63_re_phi_fu_7851_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_49_V_read63_ph_phi_fu_18793_p4 = data_49_V_read.read();
    } else {
        ap_phi_mux_data_49_V_read63_ph_phi_fu_18793_p4 = ap_phi_reg_pp0_iter0_data_49_V_read63_ph_reg_18789.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_49_V_read63_re_phi_fu_7851_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_49_V_read63_re_phi_fu_7851_p6 = data_49_V_read63_ph_reg_18789.read();
    } else {
        ap_phi_mux_data_49_V_read63_re_phi_fu_7851_p6 = data_49_V_read63_re_reg_7847.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_4_V_read18_phi_phi_fu_18208_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_4_V_read18_phi_phi_fu_18208_p4 = ap_phi_mux_data_4_V_read18_rew_phi_fu_7221_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_4_V_read18_phi_phi_fu_18208_p4 = data_4_V_read.read();
    } else {
        ap_phi_mux_data_4_V_read18_phi_phi_fu_18208_p4 = ap_phi_reg_pp0_iter0_data_4_V_read18_phi_reg_18204.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_4_V_read18_rew_phi_fu_7221_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_4_V_read18_rew_phi_fu_7221_p6 = data_4_V_read18_phi_reg_18204.read();
    } else {
        ap_phi_mux_data_4_V_read18_rew_phi_fu_7221_p6 = data_4_V_read18_rew_reg_7217.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_500_V_read514_1_phi_fu_14165_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_500_V_read514_1_phi_fu_14165_p6 = data_500_V_read514_s_reg_24652.read();
    } else {
        ap_phi_mux_data_500_V_read514_1_phi_fu_14165_p6 = data_500_V_read514_1_reg_14161.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_500_V_read514_s_phi_fu_24656_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_500_V_read514_s_phi_fu_24656_p4 = ap_phi_mux_data_500_V_read514_1_phi_fu_14165_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_500_V_read514_s_phi_fu_24656_p4 = data_500_V_read.read();
    } else {
        ap_phi_mux_data_500_V_read514_s_phi_fu_24656_p4 = ap_phi_reg_pp0_iter0_data_500_V_read514_s_reg_24652.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_501_V_read515_1_phi_fu_14179_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_501_V_read515_1_phi_fu_14179_p6 = data_501_V_read515_s_reg_24665.read();
    } else {
        ap_phi_mux_data_501_V_read515_1_phi_fu_14179_p6 = data_501_V_read515_1_reg_14175.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_501_V_read515_s_phi_fu_24669_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_501_V_read515_s_phi_fu_24669_p4 = ap_phi_mux_data_501_V_read515_1_phi_fu_14179_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_501_V_read515_s_phi_fu_24669_p4 = data_501_V_read.read();
    } else {
        ap_phi_mux_data_501_V_read515_s_phi_fu_24669_p4 = ap_phi_reg_pp0_iter0_data_501_V_read515_s_reg_24665.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_502_V_read516_1_phi_fu_14193_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_502_V_read516_1_phi_fu_14193_p6 = data_502_V_read516_s_reg_24678.read();
    } else {
        ap_phi_mux_data_502_V_read516_1_phi_fu_14193_p6 = data_502_V_read516_1_reg_14189.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_502_V_read516_s_phi_fu_24682_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_502_V_read516_s_phi_fu_24682_p4 = ap_phi_mux_data_502_V_read516_1_phi_fu_14193_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_502_V_read516_s_phi_fu_24682_p4 = data_502_V_read.read();
    } else {
        ap_phi_mux_data_502_V_read516_s_phi_fu_24682_p4 = ap_phi_reg_pp0_iter0_data_502_V_read516_s_reg_24678.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_503_V_read517_1_phi_fu_14207_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_503_V_read517_1_phi_fu_14207_p6 = data_503_V_read517_s_reg_24691.read();
    } else {
        ap_phi_mux_data_503_V_read517_1_phi_fu_14207_p6 = data_503_V_read517_1_reg_14203.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_503_V_read517_s_phi_fu_24695_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_503_V_read517_s_phi_fu_24695_p4 = ap_phi_mux_data_503_V_read517_1_phi_fu_14207_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_503_V_read517_s_phi_fu_24695_p4 = data_503_V_read.read();
    } else {
        ap_phi_mux_data_503_V_read517_s_phi_fu_24695_p4 = ap_phi_reg_pp0_iter0_data_503_V_read517_s_reg_24691.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_504_V_read518_1_phi_fu_14221_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_504_V_read518_1_phi_fu_14221_p6 = data_504_V_read518_s_reg_24704.read();
    } else {
        ap_phi_mux_data_504_V_read518_1_phi_fu_14221_p6 = data_504_V_read518_1_reg_14217.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_504_V_read518_s_phi_fu_24708_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_504_V_read518_s_phi_fu_24708_p4 = ap_phi_mux_data_504_V_read518_1_phi_fu_14221_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_504_V_read518_s_phi_fu_24708_p4 = data_504_V_read.read();
    } else {
        ap_phi_mux_data_504_V_read518_s_phi_fu_24708_p4 = ap_phi_reg_pp0_iter0_data_504_V_read518_s_reg_24704.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_505_V_read519_1_phi_fu_14235_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_505_V_read519_1_phi_fu_14235_p6 = data_505_V_read519_s_reg_24717.read();
    } else {
        ap_phi_mux_data_505_V_read519_1_phi_fu_14235_p6 = data_505_V_read519_1_reg_14231.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_505_V_read519_s_phi_fu_24721_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_505_V_read519_s_phi_fu_24721_p4 = ap_phi_mux_data_505_V_read519_1_phi_fu_14235_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_505_V_read519_s_phi_fu_24721_p4 = data_505_V_read.read();
    } else {
        ap_phi_mux_data_505_V_read519_s_phi_fu_24721_p4 = ap_phi_reg_pp0_iter0_data_505_V_read519_s_reg_24717.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_506_V_read520_1_phi_fu_14249_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_506_V_read520_1_phi_fu_14249_p6 = data_506_V_read520_s_reg_24730.read();
    } else {
        ap_phi_mux_data_506_V_read520_1_phi_fu_14249_p6 = data_506_V_read520_1_reg_14245.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_506_V_read520_s_phi_fu_24734_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_506_V_read520_s_phi_fu_24734_p4 = ap_phi_mux_data_506_V_read520_1_phi_fu_14249_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_506_V_read520_s_phi_fu_24734_p4 = data_506_V_read.read();
    } else {
        ap_phi_mux_data_506_V_read520_s_phi_fu_24734_p4 = ap_phi_reg_pp0_iter0_data_506_V_read520_s_reg_24730.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_507_V_read521_1_phi_fu_14263_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_507_V_read521_1_phi_fu_14263_p6 = data_507_V_read521_s_reg_24743.read();
    } else {
        ap_phi_mux_data_507_V_read521_1_phi_fu_14263_p6 = data_507_V_read521_1_reg_14259.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_507_V_read521_s_phi_fu_24747_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_507_V_read521_s_phi_fu_24747_p4 = ap_phi_mux_data_507_V_read521_1_phi_fu_14263_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_507_V_read521_s_phi_fu_24747_p4 = data_507_V_read.read();
    } else {
        ap_phi_mux_data_507_V_read521_s_phi_fu_24747_p4 = ap_phi_reg_pp0_iter0_data_507_V_read521_s_reg_24743.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_508_V_read522_1_phi_fu_14277_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_508_V_read522_1_phi_fu_14277_p6 = data_508_V_read522_s_reg_24756.read();
    } else {
        ap_phi_mux_data_508_V_read522_1_phi_fu_14277_p6 = data_508_V_read522_1_reg_14273.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_508_V_read522_s_phi_fu_24760_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_508_V_read522_s_phi_fu_24760_p4 = ap_phi_mux_data_508_V_read522_1_phi_fu_14277_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_508_V_read522_s_phi_fu_24760_p4 = data_508_V_read.read();
    } else {
        ap_phi_mux_data_508_V_read522_s_phi_fu_24760_p4 = ap_phi_reg_pp0_iter0_data_508_V_read522_s_reg_24756.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_509_V_read523_1_phi_fu_14291_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_509_V_read523_1_phi_fu_14291_p6 = data_509_V_read523_s_reg_24769.read();
    } else {
        ap_phi_mux_data_509_V_read523_1_phi_fu_14291_p6 = data_509_V_read523_1_reg_14287.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_509_V_read523_s_phi_fu_24773_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_509_V_read523_s_phi_fu_24773_p4 = ap_phi_mux_data_509_V_read523_1_phi_fu_14291_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_509_V_read523_s_phi_fu_24773_p4 = data_509_V_read.read();
    } else {
        ap_phi_mux_data_509_V_read523_s_phi_fu_24773_p4 = ap_phi_reg_pp0_iter0_data_509_V_read523_s_reg_24769.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_50_V_read64_ph_phi_fu_18806_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_50_V_read64_ph_phi_fu_18806_p4 = ap_phi_mux_data_50_V_read64_re_phi_fu_7865_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_50_V_read64_ph_phi_fu_18806_p4 = data_50_V_read.read();
    } else {
        ap_phi_mux_data_50_V_read64_ph_phi_fu_18806_p4 = ap_phi_reg_pp0_iter0_data_50_V_read64_ph_reg_18802.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_50_V_read64_re_phi_fu_7865_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_50_V_read64_re_phi_fu_7865_p6 = data_50_V_read64_ph_reg_18802.read();
    } else {
        ap_phi_mux_data_50_V_read64_re_phi_fu_7865_p6 = data_50_V_read64_re_reg_7861.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_510_V_read524_1_phi_fu_14305_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_510_V_read524_1_phi_fu_14305_p6 = data_510_V_read524_s_reg_24782.read();
    } else {
        ap_phi_mux_data_510_V_read524_1_phi_fu_14305_p6 = data_510_V_read524_1_reg_14301.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_510_V_read524_s_phi_fu_24786_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_510_V_read524_s_phi_fu_24786_p4 = ap_phi_mux_data_510_V_read524_1_phi_fu_14305_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_510_V_read524_s_phi_fu_24786_p4 = data_510_V_read.read();
    } else {
        ap_phi_mux_data_510_V_read524_s_phi_fu_24786_p4 = ap_phi_reg_pp0_iter0_data_510_V_read524_s_reg_24782.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_511_V_read525_1_phi_fu_14319_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_511_V_read525_1_phi_fu_14319_p6 = data_511_V_read525_s_reg_24795.read();
    } else {
        ap_phi_mux_data_511_V_read525_1_phi_fu_14319_p6 = data_511_V_read525_1_reg_14315.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_511_V_read525_s_phi_fu_24799_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_511_V_read525_s_phi_fu_24799_p4 = ap_phi_mux_data_511_V_read525_1_phi_fu_14319_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_511_V_read525_s_phi_fu_24799_p4 = data_511_V_read.read();
    } else {
        ap_phi_mux_data_511_V_read525_s_phi_fu_24799_p4 = ap_phi_reg_pp0_iter0_data_511_V_read525_s_reg_24795.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_512_V_read526_1_phi_fu_14333_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_512_V_read526_1_phi_fu_14333_p6 = data_512_V_read526_s_reg_24808.read();
    } else {
        ap_phi_mux_data_512_V_read526_1_phi_fu_14333_p6 = data_512_V_read526_1_reg_14329.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_512_V_read526_s_phi_fu_24812_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_512_V_read526_s_phi_fu_24812_p4 = ap_phi_mux_data_512_V_read526_1_phi_fu_14333_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_512_V_read526_s_phi_fu_24812_p4 = data_512_V_read.read();
    } else {
        ap_phi_mux_data_512_V_read526_s_phi_fu_24812_p4 = ap_phi_reg_pp0_iter0_data_512_V_read526_s_reg_24808.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_513_V_read527_1_phi_fu_14347_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_513_V_read527_1_phi_fu_14347_p6 = data_513_V_read527_s_reg_24821.read();
    } else {
        ap_phi_mux_data_513_V_read527_1_phi_fu_14347_p6 = data_513_V_read527_1_reg_14343.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_513_V_read527_s_phi_fu_24825_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_513_V_read527_s_phi_fu_24825_p4 = ap_phi_mux_data_513_V_read527_1_phi_fu_14347_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_513_V_read527_s_phi_fu_24825_p4 = data_513_V_read.read();
    } else {
        ap_phi_mux_data_513_V_read527_s_phi_fu_24825_p4 = ap_phi_reg_pp0_iter0_data_513_V_read527_s_reg_24821.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_514_V_read528_1_phi_fu_14361_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_514_V_read528_1_phi_fu_14361_p6 = data_514_V_read528_s_reg_24834.read();
    } else {
        ap_phi_mux_data_514_V_read528_1_phi_fu_14361_p6 = data_514_V_read528_1_reg_14357.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_514_V_read528_s_phi_fu_24838_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_514_V_read528_s_phi_fu_24838_p4 = ap_phi_mux_data_514_V_read528_1_phi_fu_14361_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_514_V_read528_s_phi_fu_24838_p4 = data_514_V_read.read();
    } else {
        ap_phi_mux_data_514_V_read528_s_phi_fu_24838_p4 = ap_phi_reg_pp0_iter0_data_514_V_read528_s_reg_24834.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_515_V_read529_1_phi_fu_14375_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_515_V_read529_1_phi_fu_14375_p6 = data_515_V_read529_s_reg_24847.read();
    } else {
        ap_phi_mux_data_515_V_read529_1_phi_fu_14375_p6 = data_515_V_read529_1_reg_14371.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_515_V_read529_s_phi_fu_24851_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_515_V_read529_s_phi_fu_24851_p4 = ap_phi_mux_data_515_V_read529_1_phi_fu_14375_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_515_V_read529_s_phi_fu_24851_p4 = data_515_V_read.read();
    } else {
        ap_phi_mux_data_515_V_read529_s_phi_fu_24851_p4 = ap_phi_reg_pp0_iter0_data_515_V_read529_s_reg_24847.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_516_V_read530_1_phi_fu_14389_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_516_V_read530_1_phi_fu_14389_p6 = data_516_V_read530_s_reg_24860.read();
    } else {
        ap_phi_mux_data_516_V_read530_1_phi_fu_14389_p6 = data_516_V_read530_1_reg_14385.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_516_V_read530_s_phi_fu_24864_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_516_V_read530_s_phi_fu_24864_p4 = ap_phi_mux_data_516_V_read530_1_phi_fu_14389_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_516_V_read530_s_phi_fu_24864_p4 = data_516_V_read.read();
    } else {
        ap_phi_mux_data_516_V_read530_s_phi_fu_24864_p4 = ap_phi_reg_pp0_iter0_data_516_V_read530_s_reg_24860.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_517_V_read531_1_phi_fu_14403_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_517_V_read531_1_phi_fu_14403_p6 = data_517_V_read531_s_reg_24873.read();
    } else {
        ap_phi_mux_data_517_V_read531_1_phi_fu_14403_p6 = data_517_V_read531_1_reg_14399.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_517_V_read531_s_phi_fu_24877_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_517_V_read531_s_phi_fu_24877_p4 = ap_phi_mux_data_517_V_read531_1_phi_fu_14403_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_517_V_read531_s_phi_fu_24877_p4 = data_517_V_read.read();
    } else {
        ap_phi_mux_data_517_V_read531_s_phi_fu_24877_p4 = ap_phi_reg_pp0_iter0_data_517_V_read531_s_reg_24873.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_518_V_read532_1_phi_fu_14417_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_518_V_read532_1_phi_fu_14417_p6 = data_518_V_read532_s_reg_24886.read();
    } else {
        ap_phi_mux_data_518_V_read532_1_phi_fu_14417_p6 = data_518_V_read532_1_reg_14413.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_518_V_read532_s_phi_fu_24890_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_518_V_read532_s_phi_fu_24890_p4 = ap_phi_mux_data_518_V_read532_1_phi_fu_14417_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_518_V_read532_s_phi_fu_24890_p4 = data_518_V_read.read();
    } else {
        ap_phi_mux_data_518_V_read532_s_phi_fu_24890_p4 = ap_phi_reg_pp0_iter0_data_518_V_read532_s_reg_24886.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_519_V_read533_1_phi_fu_14431_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_519_V_read533_1_phi_fu_14431_p6 = data_519_V_read533_s_reg_24899.read();
    } else {
        ap_phi_mux_data_519_V_read533_1_phi_fu_14431_p6 = data_519_V_read533_1_reg_14427.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_519_V_read533_s_phi_fu_24903_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_519_V_read533_s_phi_fu_24903_p4 = ap_phi_mux_data_519_V_read533_1_phi_fu_14431_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_519_V_read533_s_phi_fu_24903_p4 = data_519_V_read.read();
    } else {
        ap_phi_mux_data_519_V_read533_s_phi_fu_24903_p4 = ap_phi_reg_pp0_iter0_data_519_V_read533_s_reg_24899.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_51_V_read65_ph_phi_fu_18819_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_51_V_read65_ph_phi_fu_18819_p4 = ap_phi_mux_data_51_V_read65_re_phi_fu_7879_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_51_V_read65_ph_phi_fu_18819_p4 = data_51_V_read.read();
    } else {
        ap_phi_mux_data_51_V_read65_ph_phi_fu_18819_p4 = ap_phi_reg_pp0_iter0_data_51_V_read65_ph_reg_18815.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_51_V_read65_re_phi_fu_7879_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_51_V_read65_re_phi_fu_7879_p6 = data_51_V_read65_ph_reg_18815.read();
    } else {
        ap_phi_mux_data_51_V_read65_re_phi_fu_7879_p6 = data_51_V_read65_re_reg_7875.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_520_V_read534_1_phi_fu_14445_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_520_V_read534_1_phi_fu_14445_p6 = data_520_V_read534_s_reg_24912.read();
    } else {
        ap_phi_mux_data_520_V_read534_1_phi_fu_14445_p6 = data_520_V_read534_1_reg_14441.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_520_V_read534_s_phi_fu_24916_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_520_V_read534_s_phi_fu_24916_p4 = ap_phi_mux_data_520_V_read534_1_phi_fu_14445_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_520_V_read534_s_phi_fu_24916_p4 = data_520_V_read.read();
    } else {
        ap_phi_mux_data_520_V_read534_s_phi_fu_24916_p4 = ap_phi_reg_pp0_iter0_data_520_V_read534_s_reg_24912.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_521_V_read535_1_phi_fu_14459_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_521_V_read535_1_phi_fu_14459_p6 = data_521_V_read535_s_reg_24925.read();
    } else {
        ap_phi_mux_data_521_V_read535_1_phi_fu_14459_p6 = data_521_V_read535_1_reg_14455.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_521_V_read535_s_phi_fu_24929_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_521_V_read535_s_phi_fu_24929_p4 = ap_phi_mux_data_521_V_read535_1_phi_fu_14459_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_521_V_read535_s_phi_fu_24929_p4 = data_521_V_read.read();
    } else {
        ap_phi_mux_data_521_V_read535_s_phi_fu_24929_p4 = ap_phi_reg_pp0_iter0_data_521_V_read535_s_reg_24925.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_522_V_read536_1_phi_fu_14473_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_522_V_read536_1_phi_fu_14473_p6 = data_522_V_read536_s_reg_24938.read();
    } else {
        ap_phi_mux_data_522_V_read536_1_phi_fu_14473_p6 = data_522_V_read536_1_reg_14469.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_522_V_read536_s_phi_fu_24942_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_522_V_read536_s_phi_fu_24942_p4 = ap_phi_mux_data_522_V_read536_1_phi_fu_14473_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_522_V_read536_s_phi_fu_24942_p4 = data_522_V_read.read();
    } else {
        ap_phi_mux_data_522_V_read536_s_phi_fu_24942_p4 = ap_phi_reg_pp0_iter0_data_522_V_read536_s_reg_24938.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_523_V_read537_1_phi_fu_14487_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_523_V_read537_1_phi_fu_14487_p6 = data_523_V_read537_s_reg_24951.read();
    } else {
        ap_phi_mux_data_523_V_read537_1_phi_fu_14487_p6 = data_523_V_read537_1_reg_14483.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_523_V_read537_s_phi_fu_24955_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_523_V_read537_s_phi_fu_24955_p4 = ap_phi_mux_data_523_V_read537_1_phi_fu_14487_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_523_V_read537_s_phi_fu_24955_p4 = data_523_V_read.read();
    } else {
        ap_phi_mux_data_523_V_read537_s_phi_fu_24955_p4 = ap_phi_reg_pp0_iter0_data_523_V_read537_s_reg_24951.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_524_V_read538_1_phi_fu_14501_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_524_V_read538_1_phi_fu_14501_p6 = data_524_V_read538_s_reg_24964.read();
    } else {
        ap_phi_mux_data_524_V_read538_1_phi_fu_14501_p6 = data_524_V_read538_1_reg_14497.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_524_V_read538_s_phi_fu_24968_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_524_V_read538_s_phi_fu_24968_p4 = ap_phi_mux_data_524_V_read538_1_phi_fu_14501_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_524_V_read538_s_phi_fu_24968_p4 = data_524_V_read.read();
    } else {
        ap_phi_mux_data_524_V_read538_s_phi_fu_24968_p4 = ap_phi_reg_pp0_iter0_data_524_V_read538_s_reg_24964.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_525_V_read539_1_phi_fu_14515_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_525_V_read539_1_phi_fu_14515_p6 = data_525_V_read539_s_reg_24977.read();
    } else {
        ap_phi_mux_data_525_V_read539_1_phi_fu_14515_p6 = data_525_V_read539_1_reg_14511.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_525_V_read539_s_phi_fu_24981_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_525_V_read539_s_phi_fu_24981_p4 = ap_phi_mux_data_525_V_read539_1_phi_fu_14515_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_525_V_read539_s_phi_fu_24981_p4 = data_525_V_read.read();
    } else {
        ap_phi_mux_data_525_V_read539_s_phi_fu_24981_p4 = ap_phi_reg_pp0_iter0_data_525_V_read539_s_reg_24977.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_526_V_read540_1_phi_fu_14529_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_526_V_read540_1_phi_fu_14529_p6 = data_526_V_read540_s_reg_24990.read();
    } else {
        ap_phi_mux_data_526_V_read540_1_phi_fu_14529_p6 = data_526_V_read540_1_reg_14525.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_526_V_read540_s_phi_fu_24994_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_526_V_read540_s_phi_fu_24994_p4 = ap_phi_mux_data_526_V_read540_1_phi_fu_14529_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_526_V_read540_s_phi_fu_24994_p4 = data_526_V_read.read();
    } else {
        ap_phi_mux_data_526_V_read540_s_phi_fu_24994_p4 = ap_phi_reg_pp0_iter0_data_526_V_read540_s_reg_24990.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_527_V_read541_1_phi_fu_14543_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_527_V_read541_1_phi_fu_14543_p6 = data_527_V_read541_s_reg_25003.read();
    } else {
        ap_phi_mux_data_527_V_read541_1_phi_fu_14543_p6 = data_527_V_read541_1_reg_14539.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_527_V_read541_s_phi_fu_25007_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_527_V_read541_s_phi_fu_25007_p4 = ap_phi_mux_data_527_V_read541_1_phi_fu_14543_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_527_V_read541_s_phi_fu_25007_p4 = data_527_V_read.read();
    } else {
        ap_phi_mux_data_527_V_read541_s_phi_fu_25007_p4 = ap_phi_reg_pp0_iter0_data_527_V_read541_s_reg_25003.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_528_V_read542_1_phi_fu_14557_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_528_V_read542_1_phi_fu_14557_p6 = data_528_V_read542_s_reg_25016.read();
    } else {
        ap_phi_mux_data_528_V_read542_1_phi_fu_14557_p6 = data_528_V_read542_1_reg_14553.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_528_V_read542_s_phi_fu_25020_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_528_V_read542_s_phi_fu_25020_p4 = ap_phi_mux_data_528_V_read542_1_phi_fu_14557_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_528_V_read542_s_phi_fu_25020_p4 = data_528_V_read.read();
    } else {
        ap_phi_mux_data_528_V_read542_s_phi_fu_25020_p4 = ap_phi_reg_pp0_iter0_data_528_V_read542_s_reg_25016.read();
    }
}

}

