#include "dense_wrapper.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_wrapper::thread_ap_phi_mux_data_529_V_read543_1_phi_fu_14571_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_529_V_read543_1_phi_fu_14571_p6 = data_529_V_read543_s_reg_25029.read();
    } else {
        ap_phi_mux_data_529_V_read543_1_phi_fu_14571_p6 = data_529_V_read543_1_reg_14567.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_529_V_read543_s_phi_fu_25033_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_529_V_read543_s_phi_fu_25033_p4 = ap_phi_mux_data_529_V_read543_1_phi_fu_14571_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_529_V_read543_s_phi_fu_25033_p4 = data_529_V_read.read();
    } else {
        ap_phi_mux_data_529_V_read543_s_phi_fu_25033_p4 = ap_phi_reg_pp0_iter0_data_529_V_read543_s_reg_25029.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_52_V_read66_ph_phi_fu_18832_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_52_V_read66_ph_phi_fu_18832_p4 = ap_phi_mux_data_52_V_read66_re_phi_fu_7893_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_52_V_read66_ph_phi_fu_18832_p4 = data_52_V_read.read();
    } else {
        ap_phi_mux_data_52_V_read66_ph_phi_fu_18832_p4 = ap_phi_reg_pp0_iter0_data_52_V_read66_ph_reg_18828.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_52_V_read66_re_phi_fu_7893_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_52_V_read66_re_phi_fu_7893_p6 = data_52_V_read66_ph_reg_18828.read();
    } else {
        ap_phi_mux_data_52_V_read66_re_phi_fu_7893_p6 = data_52_V_read66_re_reg_7889.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_530_V_read544_1_phi_fu_14585_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_530_V_read544_1_phi_fu_14585_p6 = data_530_V_read544_s_reg_25042.read();
    } else {
        ap_phi_mux_data_530_V_read544_1_phi_fu_14585_p6 = data_530_V_read544_1_reg_14581.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_530_V_read544_s_phi_fu_25046_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_530_V_read544_s_phi_fu_25046_p4 = ap_phi_mux_data_530_V_read544_1_phi_fu_14585_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_530_V_read544_s_phi_fu_25046_p4 = data_530_V_read.read();
    } else {
        ap_phi_mux_data_530_V_read544_s_phi_fu_25046_p4 = ap_phi_reg_pp0_iter0_data_530_V_read544_s_reg_25042.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_531_V_read545_1_phi_fu_14599_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_531_V_read545_1_phi_fu_14599_p6 = data_531_V_read545_s_reg_25055.read();
    } else {
        ap_phi_mux_data_531_V_read545_1_phi_fu_14599_p6 = data_531_V_read545_1_reg_14595.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_531_V_read545_s_phi_fu_25059_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_531_V_read545_s_phi_fu_25059_p4 = ap_phi_mux_data_531_V_read545_1_phi_fu_14599_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_531_V_read545_s_phi_fu_25059_p4 = data_531_V_read.read();
    } else {
        ap_phi_mux_data_531_V_read545_s_phi_fu_25059_p4 = ap_phi_reg_pp0_iter0_data_531_V_read545_s_reg_25055.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_532_V_read546_1_phi_fu_14613_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_532_V_read546_1_phi_fu_14613_p6 = data_532_V_read546_s_reg_25068.read();
    } else {
        ap_phi_mux_data_532_V_read546_1_phi_fu_14613_p6 = data_532_V_read546_1_reg_14609.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_532_V_read546_s_phi_fu_25072_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_532_V_read546_s_phi_fu_25072_p4 = ap_phi_mux_data_532_V_read546_1_phi_fu_14613_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_532_V_read546_s_phi_fu_25072_p4 = data_532_V_read.read();
    } else {
        ap_phi_mux_data_532_V_read546_s_phi_fu_25072_p4 = ap_phi_reg_pp0_iter0_data_532_V_read546_s_reg_25068.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_533_V_read547_1_phi_fu_14627_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_533_V_read547_1_phi_fu_14627_p6 = data_533_V_read547_s_reg_25081.read();
    } else {
        ap_phi_mux_data_533_V_read547_1_phi_fu_14627_p6 = data_533_V_read547_1_reg_14623.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_533_V_read547_s_phi_fu_25085_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_533_V_read547_s_phi_fu_25085_p4 = ap_phi_mux_data_533_V_read547_1_phi_fu_14627_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_533_V_read547_s_phi_fu_25085_p4 = data_533_V_read.read();
    } else {
        ap_phi_mux_data_533_V_read547_s_phi_fu_25085_p4 = ap_phi_reg_pp0_iter0_data_533_V_read547_s_reg_25081.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_534_V_read548_1_phi_fu_14641_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_534_V_read548_1_phi_fu_14641_p6 = data_534_V_read548_s_reg_25094.read();
    } else {
        ap_phi_mux_data_534_V_read548_1_phi_fu_14641_p6 = data_534_V_read548_1_reg_14637.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_534_V_read548_s_phi_fu_25098_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_534_V_read548_s_phi_fu_25098_p4 = ap_phi_mux_data_534_V_read548_1_phi_fu_14641_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_534_V_read548_s_phi_fu_25098_p4 = data_534_V_read.read();
    } else {
        ap_phi_mux_data_534_V_read548_s_phi_fu_25098_p4 = ap_phi_reg_pp0_iter0_data_534_V_read548_s_reg_25094.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_535_V_read549_1_phi_fu_14655_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_535_V_read549_1_phi_fu_14655_p6 = data_535_V_read549_s_reg_25107.read();
    } else {
        ap_phi_mux_data_535_V_read549_1_phi_fu_14655_p6 = data_535_V_read549_1_reg_14651.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_535_V_read549_s_phi_fu_25111_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_535_V_read549_s_phi_fu_25111_p4 = ap_phi_mux_data_535_V_read549_1_phi_fu_14655_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_535_V_read549_s_phi_fu_25111_p4 = data_535_V_read.read();
    } else {
        ap_phi_mux_data_535_V_read549_s_phi_fu_25111_p4 = ap_phi_reg_pp0_iter0_data_535_V_read549_s_reg_25107.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_536_V_read550_1_phi_fu_14669_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_536_V_read550_1_phi_fu_14669_p6 = data_536_V_read550_s_reg_25120.read();
    } else {
        ap_phi_mux_data_536_V_read550_1_phi_fu_14669_p6 = data_536_V_read550_1_reg_14665.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_536_V_read550_s_phi_fu_25124_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_536_V_read550_s_phi_fu_25124_p4 = ap_phi_mux_data_536_V_read550_1_phi_fu_14669_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_536_V_read550_s_phi_fu_25124_p4 = data_536_V_read.read();
    } else {
        ap_phi_mux_data_536_V_read550_s_phi_fu_25124_p4 = ap_phi_reg_pp0_iter0_data_536_V_read550_s_reg_25120.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_537_V_read551_1_phi_fu_14683_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_537_V_read551_1_phi_fu_14683_p6 = data_537_V_read551_s_reg_25133.read();
    } else {
        ap_phi_mux_data_537_V_read551_1_phi_fu_14683_p6 = data_537_V_read551_1_reg_14679.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_537_V_read551_s_phi_fu_25137_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_537_V_read551_s_phi_fu_25137_p4 = ap_phi_mux_data_537_V_read551_1_phi_fu_14683_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_537_V_read551_s_phi_fu_25137_p4 = data_537_V_read.read();
    } else {
        ap_phi_mux_data_537_V_read551_s_phi_fu_25137_p4 = ap_phi_reg_pp0_iter0_data_537_V_read551_s_reg_25133.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_538_V_read552_1_phi_fu_14697_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_538_V_read552_1_phi_fu_14697_p6 = data_538_V_read552_s_reg_25146.read();
    } else {
        ap_phi_mux_data_538_V_read552_1_phi_fu_14697_p6 = data_538_V_read552_1_reg_14693.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_538_V_read552_s_phi_fu_25150_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_538_V_read552_s_phi_fu_25150_p4 = ap_phi_mux_data_538_V_read552_1_phi_fu_14697_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_538_V_read552_s_phi_fu_25150_p4 = data_538_V_read.read();
    } else {
        ap_phi_mux_data_538_V_read552_s_phi_fu_25150_p4 = ap_phi_reg_pp0_iter0_data_538_V_read552_s_reg_25146.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_539_V_read553_1_phi_fu_14711_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_539_V_read553_1_phi_fu_14711_p6 = data_539_V_read553_s_reg_25159.read();
    } else {
        ap_phi_mux_data_539_V_read553_1_phi_fu_14711_p6 = data_539_V_read553_1_reg_14707.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_539_V_read553_s_phi_fu_25163_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_539_V_read553_s_phi_fu_25163_p4 = ap_phi_mux_data_539_V_read553_1_phi_fu_14711_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_539_V_read553_s_phi_fu_25163_p4 = data_539_V_read.read();
    } else {
        ap_phi_mux_data_539_V_read553_s_phi_fu_25163_p4 = ap_phi_reg_pp0_iter0_data_539_V_read553_s_reg_25159.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_53_V_read67_ph_phi_fu_18845_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_53_V_read67_ph_phi_fu_18845_p4 = ap_phi_mux_data_53_V_read67_re_phi_fu_7907_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_53_V_read67_ph_phi_fu_18845_p4 = data_53_V_read.read();
    } else {
        ap_phi_mux_data_53_V_read67_ph_phi_fu_18845_p4 = ap_phi_reg_pp0_iter0_data_53_V_read67_ph_reg_18841.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_53_V_read67_re_phi_fu_7907_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_53_V_read67_re_phi_fu_7907_p6 = data_53_V_read67_ph_reg_18841.read();
    } else {
        ap_phi_mux_data_53_V_read67_re_phi_fu_7907_p6 = data_53_V_read67_re_reg_7903.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_540_V_read554_1_phi_fu_14725_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_540_V_read554_1_phi_fu_14725_p6 = data_540_V_read554_s_reg_25172.read();
    } else {
        ap_phi_mux_data_540_V_read554_1_phi_fu_14725_p6 = data_540_V_read554_1_reg_14721.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_540_V_read554_s_phi_fu_25176_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_540_V_read554_s_phi_fu_25176_p4 = ap_phi_mux_data_540_V_read554_1_phi_fu_14725_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_540_V_read554_s_phi_fu_25176_p4 = data_540_V_read.read();
    } else {
        ap_phi_mux_data_540_V_read554_s_phi_fu_25176_p4 = ap_phi_reg_pp0_iter0_data_540_V_read554_s_reg_25172.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_541_V_read555_1_phi_fu_14739_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_541_V_read555_1_phi_fu_14739_p6 = data_541_V_read555_s_reg_25185.read();
    } else {
        ap_phi_mux_data_541_V_read555_1_phi_fu_14739_p6 = data_541_V_read555_1_reg_14735.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_541_V_read555_s_phi_fu_25189_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_541_V_read555_s_phi_fu_25189_p4 = ap_phi_mux_data_541_V_read555_1_phi_fu_14739_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_541_V_read555_s_phi_fu_25189_p4 = data_541_V_read.read();
    } else {
        ap_phi_mux_data_541_V_read555_s_phi_fu_25189_p4 = ap_phi_reg_pp0_iter0_data_541_V_read555_s_reg_25185.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_542_V_read556_1_phi_fu_14753_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_542_V_read556_1_phi_fu_14753_p6 = data_542_V_read556_s_reg_25198.read();
    } else {
        ap_phi_mux_data_542_V_read556_1_phi_fu_14753_p6 = data_542_V_read556_1_reg_14749.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_542_V_read556_s_phi_fu_25202_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_542_V_read556_s_phi_fu_25202_p4 = ap_phi_mux_data_542_V_read556_1_phi_fu_14753_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_542_V_read556_s_phi_fu_25202_p4 = data_542_V_read.read();
    } else {
        ap_phi_mux_data_542_V_read556_s_phi_fu_25202_p4 = ap_phi_reg_pp0_iter0_data_542_V_read556_s_reg_25198.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_543_V_read557_1_phi_fu_14767_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_543_V_read557_1_phi_fu_14767_p6 = data_543_V_read557_s_reg_25211.read();
    } else {
        ap_phi_mux_data_543_V_read557_1_phi_fu_14767_p6 = data_543_V_read557_1_reg_14763.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_543_V_read557_s_phi_fu_25215_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_543_V_read557_s_phi_fu_25215_p4 = ap_phi_mux_data_543_V_read557_1_phi_fu_14767_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_543_V_read557_s_phi_fu_25215_p4 = data_543_V_read.read();
    } else {
        ap_phi_mux_data_543_V_read557_s_phi_fu_25215_p4 = ap_phi_reg_pp0_iter0_data_543_V_read557_s_reg_25211.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_544_V_read558_1_phi_fu_14781_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_544_V_read558_1_phi_fu_14781_p6 = data_544_V_read558_s_reg_25224.read();
    } else {
        ap_phi_mux_data_544_V_read558_1_phi_fu_14781_p6 = data_544_V_read558_1_reg_14777.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_544_V_read558_s_phi_fu_25228_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_544_V_read558_s_phi_fu_25228_p4 = ap_phi_mux_data_544_V_read558_1_phi_fu_14781_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_544_V_read558_s_phi_fu_25228_p4 = data_544_V_read.read();
    } else {
        ap_phi_mux_data_544_V_read558_s_phi_fu_25228_p4 = ap_phi_reg_pp0_iter0_data_544_V_read558_s_reg_25224.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_545_V_read559_1_phi_fu_14795_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_545_V_read559_1_phi_fu_14795_p6 = data_545_V_read559_s_reg_25237.read();
    } else {
        ap_phi_mux_data_545_V_read559_1_phi_fu_14795_p6 = data_545_V_read559_1_reg_14791.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_545_V_read559_s_phi_fu_25241_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_545_V_read559_s_phi_fu_25241_p4 = ap_phi_mux_data_545_V_read559_1_phi_fu_14795_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_545_V_read559_s_phi_fu_25241_p4 = data_545_V_read.read();
    } else {
        ap_phi_mux_data_545_V_read559_s_phi_fu_25241_p4 = ap_phi_reg_pp0_iter0_data_545_V_read559_s_reg_25237.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_546_V_read560_1_phi_fu_14809_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_546_V_read560_1_phi_fu_14809_p6 = data_546_V_read560_s_reg_25250.read();
    } else {
        ap_phi_mux_data_546_V_read560_1_phi_fu_14809_p6 = data_546_V_read560_1_reg_14805.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_546_V_read560_s_phi_fu_25254_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_546_V_read560_s_phi_fu_25254_p4 = ap_phi_mux_data_546_V_read560_1_phi_fu_14809_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_546_V_read560_s_phi_fu_25254_p4 = data_546_V_read.read();
    } else {
        ap_phi_mux_data_546_V_read560_s_phi_fu_25254_p4 = ap_phi_reg_pp0_iter0_data_546_V_read560_s_reg_25250.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_547_V_read561_1_phi_fu_14823_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_547_V_read561_1_phi_fu_14823_p6 = data_547_V_read561_s_reg_25263.read();
    } else {
        ap_phi_mux_data_547_V_read561_1_phi_fu_14823_p6 = data_547_V_read561_1_reg_14819.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_547_V_read561_s_phi_fu_25267_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_547_V_read561_s_phi_fu_25267_p4 = ap_phi_mux_data_547_V_read561_1_phi_fu_14823_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_547_V_read561_s_phi_fu_25267_p4 = data_547_V_read.read();
    } else {
        ap_phi_mux_data_547_V_read561_s_phi_fu_25267_p4 = ap_phi_reg_pp0_iter0_data_547_V_read561_s_reg_25263.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_548_V_read562_1_phi_fu_14837_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_548_V_read562_1_phi_fu_14837_p6 = data_548_V_read562_s_reg_25276.read();
    } else {
        ap_phi_mux_data_548_V_read562_1_phi_fu_14837_p6 = data_548_V_read562_1_reg_14833.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_548_V_read562_s_phi_fu_25280_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_548_V_read562_s_phi_fu_25280_p4 = ap_phi_mux_data_548_V_read562_1_phi_fu_14837_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_548_V_read562_s_phi_fu_25280_p4 = data_548_V_read.read();
    } else {
        ap_phi_mux_data_548_V_read562_s_phi_fu_25280_p4 = ap_phi_reg_pp0_iter0_data_548_V_read562_s_reg_25276.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_549_V_read563_1_phi_fu_14851_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_549_V_read563_1_phi_fu_14851_p6 = data_549_V_read563_s_reg_25289.read();
    } else {
        ap_phi_mux_data_549_V_read563_1_phi_fu_14851_p6 = data_549_V_read563_1_reg_14847.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_549_V_read563_s_phi_fu_25293_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_549_V_read563_s_phi_fu_25293_p4 = ap_phi_mux_data_549_V_read563_1_phi_fu_14851_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_549_V_read563_s_phi_fu_25293_p4 = data_549_V_read.read();
    } else {
        ap_phi_mux_data_549_V_read563_s_phi_fu_25293_p4 = ap_phi_reg_pp0_iter0_data_549_V_read563_s_reg_25289.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_54_V_read68_ph_phi_fu_18858_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_54_V_read68_ph_phi_fu_18858_p4 = ap_phi_mux_data_54_V_read68_re_phi_fu_7921_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_54_V_read68_ph_phi_fu_18858_p4 = data_54_V_read.read();
    } else {
        ap_phi_mux_data_54_V_read68_ph_phi_fu_18858_p4 = ap_phi_reg_pp0_iter0_data_54_V_read68_ph_reg_18854.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_54_V_read68_re_phi_fu_7921_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_54_V_read68_re_phi_fu_7921_p6 = data_54_V_read68_ph_reg_18854.read();
    } else {
        ap_phi_mux_data_54_V_read68_re_phi_fu_7921_p6 = data_54_V_read68_re_reg_7917.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_550_V_read564_1_phi_fu_14865_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_550_V_read564_1_phi_fu_14865_p6 = data_550_V_read564_s_reg_25302.read();
    } else {
        ap_phi_mux_data_550_V_read564_1_phi_fu_14865_p6 = data_550_V_read564_1_reg_14861.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_550_V_read564_s_phi_fu_25306_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_550_V_read564_s_phi_fu_25306_p4 = ap_phi_mux_data_550_V_read564_1_phi_fu_14865_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_550_V_read564_s_phi_fu_25306_p4 = data_550_V_read.read();
    } else {
        ap_phi_mux_data_550_V_read564_s_phi_fu_25306_p4 = ap_phi_reg_pp0_iter0_data_550_V_read564_s_reg_25302.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_551_V_read565_1_phi_fu_14879_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_551_V_read565_1_phi_fu_14879_p6 = data_551_V_read565_s_reg_25315.read();
    } else {
        ap_phi_mux_data_551_V_read565_1_phi_fu_14879_p6 = data_551_V_read565_1_reg_14875.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_551_V_read565_s_phi_fu_25319_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_551_V_read565_s_phi_fu_25319_p4 = ap_phi_mux_data_551_V_read565_1_phi_fu_14879_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_551_V_read565_s_phi_fu_25319_p4 = data_551_V_read.read();
    } else {
        ap_phi_mux_data_551_V_read565_s_phi_fu_25319_p4 = ap_phi_reg_pp0_iter0_data_551_V_read565_s_reg_25315.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_552_V_read566_1_phi_fu_14893_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_552_V_read566_1_phi_fu_14893_p6 = data_552_V_read566_s_reg_25328.read();
    } else {
        ap_phi_mux_data_552_V_read566_1_phi_fu_14893_p6 = data_552_V_read566_1_reg_14889.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_552_V_read566_s_phi_fu_25332_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_552_V_read566_s_phi_fu_25332_p4 = ap_phi_mux_data_552_V_read566_1_phi_fu_14893_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_552_V_read566_s_phi_fu_25332_p4 = data_552_V_read.read();
    } else {
        ap_phi_mux_data_552_V_read566_s_phi_fu_25332_p4 = ap_phi_reg_pp0_iter0_data_552_V_read566_s_reg_25328.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_553_V_read567_1_phi_fu_14907_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_553_V_read567_1_phi_fu_14907_p6 = data_553_V_read567_s_reg_25341.read();
    } else {
        ap_phi_mux_data_553_V_read567_1_phi_fu_14907_p6 = data_553_V_read567_1_reg_14903.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_553_V_read567_s_phi_fu_25345_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_553_V_read567_s_phi_fu_25345_p4 = ap_phi_mux_data_553_V_read567_1_phi_fu_14907_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_553_V_read567_s_phi_fu_25345_p4 = data_553_V_read.read();
    } else {
        ap_phi_mux_data_553_V_read567_s_phi_fu_25345_p4 = ap_phi_reg_pp0_iter0_data_553_V_read567_s_reg_25341.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_554_V_read568_1_phi_fu_14921_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_554_V_read568_1_phi_fu_14921_p6 = data_554_V_read568_s_reg_25354.read();
    } else {
        ap_phi_mux_data_554_V_read568_1_phi_fu_14921_p6 = data_554_V_read568_1_reg_14917.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_554_V_read568_s_phi_fu_25358_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_554_V_read568_s_phi_fu_25358_p4 = ap_phi_mux_data_554_V_read568_1_phi_fu_14921_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_554_V_read568_s_phi_fu_25358_p4 = data_554_V_read.read();
    } else {
        ap_phi_mux_data_554_V_read568_s_phi_fu_25358_p4 = ap_phi_reg_pp0_iter0_data_554_V_read568_s_reg_25354.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_555_V_read569_1_phi_fu_14935_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_555_V_read569_1_phi_fu_14935_p6 = data_555_V_read569_s_reg_25367.read();
    } else {
        ap_phi_mux_data_555_V_read569_1_phi_fu_14935_p6 = data_555_V_read569_1_reg_14931.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_555_V_read569_s_phi_fu_25371_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_555_V_read569_s_phi_fu_25371_p4 = ap_phi_mux_data_555_V_read569_1_phi_fu_14935_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_555_V_read569_s_phi_fu_25371_p4 = data_555_V_read.read();
    } else {
        ap_phi_mux_data_555_V_read569_s_phi_fu_25371_p4 = ap_phi_reg_pp0_iter0_data_555_V_read569_s_reg_25367.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_556_V_read570_1_phi_fu_14949_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_556_V_read570_1_phi_fu_14949_p6 = data_556_V_read570_s_reg_25380.read();
    } else {
        ap_phi_mux_data_556_V_read570_1_phi_fu_14949_p6 = data_556_V_read570_1_reg_14945.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_556_V_read570_s_phi_fu_25384_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_556_V_read570_s_phi_fu_25384_p4 = ap_phi_mux_data_556_V_read570_1_phi_fu_14949_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_556_V_read570_s_phi_fu_25384_p4 = data_556_V_read.read();
    } else {
        ap_phi_mux_data_556_V_read570_s_phi_fu_25384_p4 = ap_phi_reg_pp0_iter0_data_556_V_read570_s_reg_25380.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_557_V_read571_1_phi_fu_14963_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_557_V_read571_1_phi_fu_14963_p6 = data_557_V_read571_s_reg_25393.read();
    } else {
        ap_phi_mux_data_557_V_read571_1_phi_fu_14963_p6 = data_557_V_read571_1_reg_14959.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_557_V_read571_s_phi_fu_25397_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_557_V_read571_s_phi_fu_25397_p4 = ap_phi_mux_data_557_V_read571_1_phi_fu_14963_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_557_V_read571_s_phi_fu_25397_p4 = data_557_V_read.read();
    } else {
        ap_phi_mux_data_557_V_read571_s_phi_fu_25397_p4 = ap_phi_reg_pp0_iter0_data_557_V_read571_s_reg_25393.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_558_V_read572_1_phi_fu_14977_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_558_V_read572_1_phi_fu_14977_p6 = data_558_V_read572_s_reg_25406.read();
    } else {
        ap_phi_mux_data_558_V_read572_1_phi_fu_14977_p6 = data_558_V_read572_1_reg_14973.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_558_V_read572_s_phi_fu_25410_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_558_V_read572_s_phi_fu_25410_p4 = ap_phi_mux_data_558_V_read572_1_phi_fu_14977_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_558_V_read572_s_phi_fu_25410_p4 = data_558_V_read.read();
    } else {
        ap_phi_mux_data_558_V_read572_s_phi_fu_25410_p4 = ap_phi_reg_pp0_iter0_data_558_V_read572_s_reg_25406.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_559_V_read573_1_phi_fu_14991_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_559_V_read573_1_phi_fu_14991_p6 = data_559_V_read573_s_reg_25419.read();
    } else {
        ap_phi_mux_data_559_V_read573_1_phi_fu_14991_p6 = data_559_V_read573_1_reg_14987.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_559_V_read573_s_phi_fu_25423_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_559_V_read573_s_phi_fu_25423_p4 = ap_phi_mux_data_559_V_read573_1_phi_fu_14991_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_559_V_read573_s_phi_fu_25423_p4 = data_559_V_read.read();
    } else {
        ap_phi_mux_data_559_V_read573_s_phi_fu_25423_p4 = ap_phi_reg_pp0_iter0_data_559_V_read573_s_reg_25419.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_55_V_read69_ph_phi_fu_18871_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_55_V_read69_ph_phi_fu_18871_p4 = ap_phi_mux_data_55_V_read69_re_phi_fu_7935_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_55_V_read69_ph_phi_fu_18871_p4 = data_55_V_read.read();
    } else {
        ap_phi_mux_data_55_V_read69_ph_phi_fu_18871_p4 = ap_phi_reg_pp0_iter0_data_55_V_read69_ph_reg_18867.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_55_V_read69_re_phi_fu_7935_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_55_V_read69_re_phi_fu_7935_p6 = data_55_V_read69_ph_reg_18867.read();
    } else {
        ap_phi_mux_data_55_V_read69_re_phi_fu_7935_p6 = data_55_V_read69_re_reg_7931.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_560_V_read574_1_phi_fu_15005_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_560_V_read574_1_phi_fu_15005_p6 = data_560_V_read574_s_reg_25432.read();
    } else {
        ap_phi_mux_data_560_V_read574_1_phi_fu_15005_p6 = data_560_V_read574_1_reg_15001.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_560_V_read574_s_phi_fu_25436_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_560_V_read574_s_phi_fu_25436_p4 = ap_phi_mux_data_560_V_read574_1_phi_fu_15005_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_560_V_read574_s_phi_fu_25436_p4 = data_560_V_read.read();
    } else {
        ap_phi_mux_data_560_V_read574_s_phi_fu_25436_p4 = ap_phi_reg_pp0_iter0_data_560_V_read574_s_reg_25432.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_561_V_read575_1_phi_fu_15019_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_561_V_read575_1_phi_fu_15019_p6 = data_561_V_read575_s_reg_25445.read();
    } else {
        ap_phi_mux_data_561_V_read575_1_phi_fu_15019_p6 = data_561_V_read575_1_reg_15015.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_561_V_read575_s_phi_fu_25449_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_561_V_read575_s_phi_fu_25449_p4 = ap_phi_mux_data_561_V_read575_1_phi_fu_15019_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_561_V_read575_s_phi_fu_25449_p4 = data_561_V_read.read();
    } else {
        ap_phi_mux_data_561_V_read575_s_phi_fu_25449_p4 = ap_phi_reg_pp0_iter0_data_561_V_read575_s_reg_25445.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_562_V_read576_1_phi_fu_15033_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_562_V_read576_1_phi_fu_15033_p6 = data_562_V_read576_s_reg_25458.read();
    } else {
        ap_phi_mux_data_562_V_read576_1_phi_fu_15033_p6 = data_562_V_read576_1_reg_15029.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_562_V_read576_s_phi_fu_25462_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_562_V_read576_s_phi_fu_25462_p4 = ap_phi_mux_data_562_V_read576_1_phi_fu_15033_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_562_V_read576_s_phi_fu_25462_p4 = data_562_V_read.read();
    } else {
        ap_phi_mux_data_562_V_read576_s_phi_fu_25462_p4 = ap_phi_reg_pp0_iter0_data_562_V_read576_s_reg_25458.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_563_V_read577_1_phi_fu_15047_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_563_V_read577_1_phi_fu_15047_p6 = data_563_V_read577_s_reg_25471.read();
    } else {
        ap_phi_mux_data_563_V_read577_1_phi_fu_15047_p6 = data_563_V_read577_1_reg_15043.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_563_V_read577_s_phi_fu_25475_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_563_V_read577_s_phi_fu_25475_p4 = ap_phi_mux_data_563_V_read577_1_phi_fu_15047_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_563_V_read577_s_phi_fu_25475_p4 = data_563_V_read.read();
    } else {
        ap_phi_mux_data_563_V_read577_s_phi_fu_25475_p4 = ap_phi_reg_pp0_iter0_data_563_V_read577_s_reg_25471.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_564_V_read578_1_phi_fu_15061_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_564_V_read578_1_phi_fu_15061_p6 = data_564_V_read578_s_reg_25484.read();
    } else {
        ap_phi_mux_data_564_V_read578_1_phi_fu_15061_p6 = data_564_V_read578_1_reg_15057.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_564_V_read578_s_phi_fu_25488_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_564_V_read578_s_phi_fu_25488_p4 = ap_phi_mux_data_564_V_read578_1_phi_fu_15061_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_564_V_read578_s_phi_fu_25488_p4 = data_564_V_read.read();
    } else {
        ap_phi_mux_data_564_V_read578_s_phi_fu_25488_p4 = ap_phi_reg_pp0_iter0_data_564_V_read578_s_reg_25484.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_565_V_read579_1_phi_fu_15075_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_565_V_read579_1_phi_fu_15075_p6 = data_565_V_read579_s_reg_25497.read();
    } else {
        ap_phi_mux_data_565_V_read579_1_phi_fu_15075_p6 = data_565_V_read579_1_reg_15071.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_565_V_read579_s_phi_fu_25501_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_565_V_read579_s_phi_fu_25501_p4 = ap_phi_mux_data_565_V_read579_1_phi_fu_15075_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_565_V_read579_s_phi_fu_25501_p4 = data_565_V_read.read();
    } else {
        ap_phi_mux_data_565_V_read579_s_phi_fu_25501_p4 = ap_phi_reg_pp0_iter0_data_565_V_read579_s_reg_25497.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_566_V_read580_1_phi_fu_15089_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_566_V_read580_1_phi_fu_15089_p6 = data_566_V_read580_s_reg_25510.read();
    } else {
        ap_phi_mux_data_566_V_read580_1_phi_fu_15089_p6 = data_566_V_read580_1_reg_15085.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_566_V_read580_s_phi_fu_25514_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_566_V_read580_s_phi_fu_25514_p4 = ap_phi_mux_data_566_V_read580_1_phi_fu_15089_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_566_V_read580_s_phi_fu_25514_p4 = data_566_V_read.read();
    } else {
        ap_phi_mux_data_566_V_read580_s_phi_fu_25514_p4 = ap_phi_reg_pp0_iter0_data_566_V_read580_s_reg_25510.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_567_V_read581_1_phi_fu_15103_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_567_V_read581_1_phi_fu_15103_p6 = data_567_V_read581_s_reg_25523.read();
    } else {
        ap_phi_mux_data_567_V_read581_1_phi_fu_15103_p6 = data_567_V_read581_1_reg_15099.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_567_V_read581_s_phi_fu_25527_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_567_V_read581_s_phi_fu_25527_p4 = ap_phi_mux_data_567_V_read581_1_phi_fu_15103_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_567_V_read581_s_phi_fu_25527_p4 = data_567_V_read.read();
    } else {
        ap_phi_mux_data_567_V_read581_s_phi_fu_25527_p4 = ap_phi_reg_pp0_iter0_data_567_V_read581_s_reg_25523.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_568_V_read582_1_phi_fu_15117_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_568_V_read582_1_phi_fu_15117_p6 = data_568_V_read582_s_reg_25536.read();
    } else {
        ap_phi_mux_data_568_V_read582_1_phi_fu_15117_p6 = data_568_V_read582_1_reg_15113.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_568_V_read582_s_phi_fu_25540_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_568_V_read582_s_phi_fu_25540_p4 = ap_phi_mux_data_568_V_read582_1_phi_fu_15117_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_568_V_read582_s_phi_fu_25540_p4 = data_568_V_read.read();
    } else {
        ap_phi_mux_data_568_V_read582_s_phi_fu_25540_p4 = ap_phi_reg_pp0_iter0_data_568_V_read582_s_reg_25536.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_569_V_read583_1_phi_fu_15131_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_569_V_read583_1_phi_fu_15131_p6 = data_569_V_read583_s_reg_25549.read();
    } else {
        ap_phi_mux_data_569_V_read583_1_phi_fu_15131_p6 = data_569_V_read583_1_reg_15127.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_569_V_read583_s_phi_fu_25553_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_569_V_read583_s_phi_fu_25553_p4 = ap_phi_mux_data_569_V_read583_1_phi_fu_15131_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_569_V_read583_s_phi_fu_25553_p4 = data_569_V_read.read();
    } else {
        ap_phi_mux_data_569_V_read583_s_phi_fu_25553_p4 = ap_phi_reg_pp0_iter0_data_569_V_read583_s_reg_25549.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_56_V_read70_ph_phi_fu_18884_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_56_V_read70_ph_phi_fu_18884_p4 = ap_phi_mux_data_56_V_read70_re_phi_fu_7949_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_56_V_read70_ph_phi_fu_18884_p4 = data_56_V_read.read();
    } else {
        ap_phi_mux_data_56_V_read70_ph_phi_fu_18884_p4 = ap_phi_reg_pp0_iter0_data_56_V_read70_ph_reg_18880.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_56_V_read70_re_phi_fu_7949_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_56_V_read70_re_phi_fu_7949_p6 = data_56_V_read70_ph_reg_18880.read();
    } else {
        ap_phi_mux_data_56_V_read70_re_phi_fu_7949_p6 = data_56_V_read70_re_reg_7945.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_570_V_read584_1_phi_fu_15145_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_570_V_read584_1_phi_fu_15145_p6 = data_570_V_read584_s_reg_25562.read();
    } else {
        ap_phi_mux_data_570_V_read584_1_phi_fu_15145_p6 = data_570_V_read584_1_reg_15141.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_570_V_read584_s_phi_fu_25566_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_570_V_read584_s_phi_fu_25566_p4 = ap_phi_mux_data_570_V_read584_1_phi_fu_15145_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_570_V_read584_s_phi_fu_25566_p4 = data_570_V_read.read();
    } else {
        ap_phi_mux_data_570_V_read584_s_phi_fu_25566_p4 = ap_phi_reg_pp0_iter0_data_570_V_read584_s_reg_25562.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_571_V_read585_1_phi_fu_15159_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_571_V_read585_1_phi_fu_15159_p6 = data_571_V_read585_s_reg_25575.read();
    } else {
        ap_phi_mux_data_571_V_read585_1_phi_fu_15159_p6 = data_571_V_read585_1_reg_15155.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_571_V_read585_s_phi_fu_25579_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_571_V_read585_s_phi_fu_25579_p4 = ap_phi_mux_data_571_V_read585_1_phi_fu_15159_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_571_V_read585_s_phi_fu_25579_p4 = data_571_V_read.read();
    } else {
        ap_phi_mux_data_571_V_read585_s_phi_fu_25579_p4 = ap_phi_reg_pp0_iter0_data_571_V_read585_s_reg_25575.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_572_V_read586_1_phi_fu_15173_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_572_V_read586_1_phi_fu_15173_p6 = data_572_V_read586_s_reg_25588.read();
    } else {
        ap_phi_mux_data_572_V_read586_1_phi_fu_15173_p6 = data_572_V_read586_1_reg_15169.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_572_V_read586_s_phi_fu_25592_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_572_V_read586_s_phi_fu_25592_p4 = ap_phi_mux_data_572_V_read586_1_phi_fu_15173_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_572_V_read586_s_phi_fu_25592_p4 = data_572_V_read.read();
    } else {
        ap_phi_mux_data_572_V_read586_s_phi_fu_25592_p4 = ap_phi_reg_pp0_iter0_data_572_V_read586_s_reg_25588.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_573_V_read587_1_phi_fu_15187_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_573_V_read587_1_phi_fu_15187_p6 = data_573_V_read587_s_reg_25601.read();
    } else {
        ap_phi_mux_data_573_V_read587_1_phi_fu_15187_p6 = data_573_V_read587_1_reg_15183.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_573_V_read587_s_phi_fu_25605_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_573_V_read587_s_phi_fu_25605_p4 = ap_phi_mux_data_573_V_read587_1_phi_fu_15187_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_573_V_read587_s_phi_fu_25605_p4 = data_573_V_read.read();
    } else {
        ap_phi_mux_data_573_V_read587_s_phi_fu_25605_p4 = ap_phi_reg_pp0_iter0_data_573_V_read587_s_reg_25601.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_574_V_read588_1_phi_fu_15201_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_574_V_read588_1_phi_fu_15201_p6 = data_574_V_read588_s_reg_25614.read();
    } else {
        ap_phi_mux_data_574_V_read588_1_phi_fu_15201_p6 = data_574_V_read588_1_reg_15197.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_574_V_read588_s_phi_fu_25618_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_574_V_read588_s_phi_fu_25618_p4 = ap_phi_mux_data_574_V_read588_1_phi_fu_15201_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_574_V_read588_s_phi_fu_25618_p4 = data_574_V_read.read();
    } else {
        ap_phi_mux_data_574_V_read588_s_phi_fu_25618_p4 = ap_phi_reg_pp0_iter0_data_574_V_read588_s_reg_25614.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_575_V_read589_1_phi_fu_15215_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_575_V_read589_1_phi_fu_15215_p6 = data_575_V_read589_s_reg_25627.read();
    } else {
        ap_phi_mux_data_575_V_read589_1_phi_fu_15215_p6 = data_575_V_read589_1_reg_15211.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_575_V_read589_s_phi_fu_25631_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_575_V_read589_s_phi_fu_25631_p4 = ap_phi_mux_data_575_V_read589_1_phi_fu_15215_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_575_V_read589_s_phi_fu_25631_p4 = data_575_V_read.read();
    } else {
        ap_phi_mux_data_575_V_read589_s_phi_fu_25631_p4 = ap_phi_reg_pp0_iter0_data_575_V_read589_s_reg_25627.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_576_V_read590_1_phi_fu_15229_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_576_V_read590_1_phi_fu_15229_p6 = data_576_V_read590_s_reg_25640.read();
    } else {
        ap_phi_mux_data_576_V_read590_1_phi_fu_15229_p6 = data_576_V_read590_1_reg_15225.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_576_V_read590_s_phi_fu_25644_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_576_V_read590_s_phi_fu_25644_p4 = ap_phi_mux_data_576_V_read590_1_phi_fu_15229_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_576_V_read590_s_phi_fu_25644_p4 = data_576_V_read.read();
    } else {
        ap_phi_mux_data_576_V_read590_s_phi_fu_25644_p4 = ap_phi_reg_pp0_iter0_data_576_V_read590_s_reg_25640.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_577_V_read591_1_phi_fu_15243_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_577_V_read591_1_phi_fu_15243_p6 = data_577_V_read591_s_reg_25653.read();
    } else {
        ap_phi_mux_data_577_V_read591_1_phi_fu_15243_p6 = data_577_V_read591_1_reg_15239.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_577_V_read591_s_phi_fu_25657_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_577_V_read591_s_phi_fu_25657_p4 = ap_phi_mux_data_577_V_read591_1_phi_fu_15243_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_577_V_read591_s_phi_fu_25657_p4 = data_577_V_read.read();
    } else {
        ap_phi_mux_data_577_V_read591_s_phi_fu_25657_p4 = ap_phi_reg_pp0_iter0_data_577_V_read591_s_reg_25653.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_578_V_read592_1_phi_fu_15257_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_578_V_read592_1_phi_fu_15257_p6 = data_578_V_read592_s_reg_25666.read();
    } else {
        ap_phi_mux_data_578_V_read592_1_phi_fu_15257_p6 = data_578_V_read592_1_reg_15253.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_578_V_read592_s_phi_fu_25670_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_578_V_read592_s_phi_fu_25670_p4 = ap_phi_mux_data_578_V_read592_1_phi_fu_15257_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_578_V_read592_s_phi_fu_25670_p4 = data_578_V_read.read();
    } else {
        ap_phi_mux_data_578_V_read592_s_phi_fu_25670_p4 = ap_phi_reg_pp0_iter0_data_578_V_read592_s_reg_25666.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_579_V_read593_1_phi_fu_15271_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_579_V_read593_1_phi_fu_15271_p6 = data_579_V_read593_s_reg_25679.read();
    } else {
        ap_phi_mux_data_579_V_read593_1_phi_fu_15271_p6 = data_579_V_read593_1_reg_15267.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_579_V_read593_s_phi_fu_25683_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_579_V_read593_s_phi_fu_25683_p4 = ap_phi_mux_data_579_V_read593_1_phi_fu_15271_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_579_V_read593_s_phi_fu_25683_p4 = data_579_V_read.read();
    } else {
        ap_phi_mux_data_579_V_read593_s_phi_fu_25683_p4 = ap_phi_reg_pp0_iter0_data_579_V_read593_s_reg_25679.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_57_V_read71_ph_phi_fu_18897_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_57_V_read71_ph_phi_fu_18897_p4 = ap_phi_mux_data_57_V_read71_re_phi_fu_7963_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_57_V_read71_ph_phi_fu_18897_p4 = data_57_V_read.read();
    } else {
        ap_phi_mux_data_57_V_read71_ph_phi_fu_18897_p4 = ap_phi_reg_pp0_iter0_data_57_V_read71_ph_reg_18893.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_57_V_read71_re_phi_fu_7963_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_57_V_read71_re_phi_fu_7963_p6 = data_57_V_read71_ph_reg_18893.read();
    } else {
        ap_phi_mux_data_57_V_read71_re_phi_fu_7963_p6 = data_57_V_read71_re_reg_7959.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_580_V_read594_1_phi_fu_15285_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_580_V_read594_1_phi_fu_15285_p6 = data_580_V_read594_s_reg_25692.read();
    } else {
        ap_phi_mux_data_580_V_read594_1_phi_fu_15285_p6 = data_580_V_read594_1_reg_15281.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_580_V_read594_s_phi_fu_25696_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_580_V_read594_s_phi_fu_25696_p4 = ap_phi_mux_data_580_V_read594_1_phi_fu_15285_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_580_V_read594_s_phi_fu_25696_p4 = data_580_V_read.read();
    } else {
        ap_phi_mux_data_580_V_read594_s_phi_fu_25696_p4 = ap_phi_reg_pp0_iter0_data_580_V_read594_s_reg_25692.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_581_V_read595_1_phi_fu_15299_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_581_V_read595_1_phi_fu_15299_p6 = data_581_V_read595_s_reg_25705.read();
    } else {
        ap_phi_mux_data_581_V_read595_1_phi_fu_15299_p6 = data_581_V_read595_1_reg_15295.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_581_V_read595_s_phi_fu_25709_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_581_V_read595_s_phi_fu_25709_p4 = ap_phi_mux_data_581_V_read595_1_phi_fu_15299_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_581_V_read595_s_phi_fu_25709_p4 = data_581_V_read.read();
    } else {
        ap_phi_mux_data_581_V_read595_s_phi_fu_25709_p4 = ap_phi_reg_pp0_iter0_data_581_V_read595_s_reg_25705.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_582_V_read596_1_phi_fu_15313_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_582_V_read596_1_phi_fu_15313_p6 = data_582_V_read596_s_reg_25718.read();
    } else {
        ap_phi_mux_data_582_V_read596_1_phi_fu_15313_p6 = data_582_V_read596_1_reg_15309.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_582_V_read596_s_phi_fu_25722_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_582_V_read596_s_phi_fu_25722_p4 = ap_phi_mux_data_582_V_read596_1_phi_fu_15313_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_582_V_read596_s_phi_fu_25722_p4 = data_582_V_read.read();
    } else {
        ap_phi_mux_data_582_V_read596_s_phi_fu_25722_p4 = ap_phi_reg_pp0_iter0_data_582_V_read596_s_reg_25718.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_583_V_read597_1_phi_fu_15327_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_583_V_read597_1_phi_fu_15327_p6 = data_583_V_read597_s_reg_25731.read();
    } else {
        ap_phi_mux_data_583_V_read597_1_phi_fu_15327_p6 = data_583_V_read597_1_reg_15323.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_583_V_read597_s_phi_fu_25735_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_583_V_read597_s_phi_fu_25735_p4 = ap_phi_mux_data_583_V_read597_1_phi_fu_15327_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_583_V_read597_s_phi_fu_25735_p4 = data_583_V_read.read();
    } else {
        ap_phi_mux_data_583_V_read597_s_phi_fu_25735_p4 = ap_phi_reg_pp0_iter0_data_583_V_read597_s_reg_25731.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_584_V_read598_1_phi_fu_15341_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_584_V_read598_1_phi_fu_15341_p6 = data_584_V_read598_s_reg_25744.read();
    } else {
        ap_phi_mux_data_584_V_read598_1_phi_fu_15341_p6 = data_584_V_read598_1_reg_15337.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_584_V_read598_s_phi_fu_25748_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_584_V_read598_s_phi_fu_25748_p4 = ap_phi_mux_data_584_V_read598_1_phi_fu_15341_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_584_V_read598_s_phi_fu_25748_p4 = data_584_V_read.read();
    } else {
        ap_phi_mux_data_584_V_read598_s_phi_fu_25748_p4 = ap_phi_reg_pp0_iter0_data_584_V_read598_s_reg_25744.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_585_V_read599_1_phi_fu_15355_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_585_V_read599_1_phi_fu_15355_p6 = data_585_V_read599_s_reg_25757.read();
    } else {
        ap_phi_mux_data_585_V_read599_1_phi_fu_15355_p6 = data_585_V_read599_1_reg_15351.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_585_V_read599_s_phi_fu_25761_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_585_V_read599_s_phi_fu_25761_p4 = ap_phi_mux_data_585_V_read599_1_phi_fu_15355_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_585_V_read599_s_phi_fu_25761_p4 = data_585_V_read.read();
    } else {
        ap_phi_mux_data_585_V_read599_s_phi_fu_25761_p4 = ap_phi_reg_pp0_iter0_data_585_V_read599_s_reg_25757.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_586_V_read600_1_phi_fu_15369_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_586_V_read600_1_phi_fu_15369_p6 = data_586_V_read600_s_reg_25770.read();
    } else {
        ap_phi_mux_data_586_V_read600_1_phi_fu_15369_p6 = data_586_V_read600_1_reg_15365.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_586_V_read600_s_phi_fu_25774_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_586_V_read600_s_phi_fu_25774_p4 = ap_phi_mux_data_586_V_read600_1_phi_fu_15369_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_586_V_read600_s_phi_fu_25774_p4 = data_586_V_read.read();
    } else {
        ap_phi_mux_data_586_V_read600_s_phi_fu_25774_p4 = ap_phi_reg_pp0_iter0_data_586_V_read600_s_reg_25770.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_587_V_read601_1_phi_fu_15383_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_587_V_read601_1_phi_fu_15383_p6 = data_587_V_read601_s_reg_25783.read();
    } else {
        ap_phi_mux_data_587_V_read601_1_phi_fu_15383_p6 = data_587_V_read601_1_reg_15379.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_587_V_read601_s_phi_fu_25787_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_587_V_read601_s_phi_fu_25787_p4 = ap_phi_mux_data_587_V_read601_1_phi_fu_15383_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_587_V_read601_s_phi_fu_25787_p4 = data_587_V_read.read();
    } else {
        ap_phi_mux_data_587_V_read601_s_phi_fu_25787_p4 = ap_phi_reg_pp0_iter0_data_587_V_read601_s_reg_25783.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_588_V_read602_1_phi_fu_15397_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_588_V_read602_1_phi_fu_15397_p6 = data_588_V_read602_s_reg_25796.read();
    } else {
        ap_phi_mux_data_588_V_read602_1_phi_fu_15397_p6 = data_588_V_read602_1_reg_15393.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_588_V_read602_s_phi_fu_25800_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_588_V_read602_s_phi_fu_25800_p4 = ap_phi_mux_data_588_V_read602_1_phi_fu_15397_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_588_V_read602_s_phi_fu_25800_p4 = data_588_V_read.read();
    } else {
        ap_phi_mux_data_588_V_read602_s_phi_fu_25800_p4 = ap_phi_reg_pp0_iter0_data_588_V_read602_s_reg_25796.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_589_V_read603_1_phi_fu_15411_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_589_V_read603_1_phi_fu_15411_p6 = data_589_V_read603_s_reg_25809.read();
    } else {
        ap_phi_mux_data_589_V_read603_1_phi_fu_15411_p6 = data_589_V_read603_1_reg_15407.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_589_V_read603_s_phi_fu_25813_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_589_V_read603_s_phi_fu_25813_p4 = ap_phi_mux_data_589_V_read603_1_phi_fu_15411_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_589_V_read603_s_phi_fu_25813_p4 = data_589_V_read.read();
    } else {
        ap_phi_mux_data_589_V_read603_s_phi_fu_25813_p4 = ap_phi_reg_pp0_iter0_data_589_V_read603_s_reg_25809.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_58_V_read72_ph_phi_fu_18910_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_58_V_read72_ph_phi_fu_18910_p4 = ap_phi_mux_data_58_V_read72_re_phi_fu_7977_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_58_V_read72_ph_phi_fu_18910_p4 = data_58_V_read.read();
    } else {
        ap_phi_mux_data_58_V_read72_ph_phi_fu_18910_p4 = ap_phi_reg_pp0_iter0_data_58_V_read72_ph_reg_18906.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_58_V_read72_re_phi_fu_7977_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_58_V_read72_re_phi_fu_7977_p6 = data_58_V_read72_ph_reg_18906.read();
    } else {
        ap_phi_mux_data_58_V_read72_re_phi_fu_7977_p6 = data_58_V_read72_re_reg_7973.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_590_V_read604_1_phi_fu_15425_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_590_V_read604_1_phi_fu_15425_p6 = data_590_V_read604_s_reg_25822.read();
    } else {
        ap_phi_mux_data_590_V_read604_1_phi_fu_15425_p6 = data_590_V_read604_1_reg_15421.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_590_V_read604_s_phi_fu_25826_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_590_V_read604_s_phi_fu_25826_p4 = ap_phi_mux_data_590_V_read604_1_phi_fu_15425_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_590_V_read604_s_phi_fu_25826_p4 = data_590_V_read.read();
    } else {
        ap_phi_mux_data_590_V_read604_s_phi_fu_25826_p4 = ap_phi_reg_pp0_iter0_data_590_V_read604_s_reg_25822.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_591_V_read605_1_phi_fu_15439_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_591_V_read605_1_phi_fu_15439_p6 = data_591_V_read605_s_reg_25835.read();
    } else {
        ap_phi_mux_data_591_V_read605_1_phi_fu_15439_p6 = data_591_V_read605_1_reg_15435.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_591_V_read605_s_phi_fu_25839_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_591_V_read605_s_phi_fu_25839_p4 = ap_phi_mux_data_591_V_read605_1_phi_fu_15439_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_591_V_read605_s_phi_fu_25839_p4 = data_591_V_read.read();
    } else {
        ap_phi_mux_data_591_V_read605_s_phi_fu_25839_p4 = ap_phi_reg_pp0_iter0_data_591_V_read605_s_reg_25835.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_592_V_read606_1_phi_fu_15453_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_592_V_read606_1_phi_fu_15453_p6 = data_592_V_read606_s_reg_25848.read();
    } else {
        ap_phi_mux_data_592_V_read606_1_phi_fu_15453_p6 = data_592_V_read606_1_reg_15449.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_592_V_read606_s_phi_fu_25852_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_592_V_read606_s_phi_fu_25852_p4 = ap_phi_mux_data_592_V_read606_1_phi_fu_15453_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_592_V_read606_s_phi_fu_25852_p4 = data_592_V_read.read();
    } else {
        ap_phi_mux_data_592_V_read606_s_phi_fu_25852_p4 = ap_phi_reg_pp0_iter0_data_592_V_read606_s_reg_25848.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_593_V_read607_1_phi_fu_15467_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_593_V_read607_1_phi_fu_15467_p6 = data_593_V_read607_s_reg_25861.read();
    } else {
        ap_phi_mux_data_593_V_read607_1_phi_fu_15467_p6 = data_593_V_read607_1_reg_15463.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_593_V_read607_s_phi_fu_25865_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_593_V_read607_s_phi_fu_25865_p4 = ap_phi_mux_data_593_V_read607_1_phi_fu_15467_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_593_V_read607_s_phi_fu_25865_p4 = data_593_V_read.read();
    } else {
        ap_phi_mux_data_593_V_read607_s_phi_fu_25865_p4 = ap_phi_reg_pp0_iter0_data_593_V_read607_s_reg_25861.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_594_V_read608_1_phi_fu_15481_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_594_V_read608_1_phi_fu_15481_p6 = data_594_V_read608_s_reg_25874.read();
    } else {
        ap_phi_mux_data_594_V_read608_1_phi_fu_15481_p6 = data_594_V_read608_1_reg_15477.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_594_V_read608_s_phi_fu_25878_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_594_V_read608_s_phi_fu_25878_p4 = ap_phi_mux_data_594_V_read608_1_phi_fu_15481_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_594_V_read608_s_phi_fu_25878_p4 = data_594_V_read.read();
    } else {
        ap_phi_mux_data_594_V_read608_s_phi_fu_25878_p4 = ap_phi_reg_pp0_iter0_data_594_V_read608_s_reg_25874.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_595_V_read609_1_phi_fu_15495_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_595_V_read609_1_phi_fu_15495_p6 = data_595_V_read609_s_reg_25887.read();
    } else {
        ap_phi_mux_data_595_V_read609_1_phi_fu_15495_p6 = data_595_V_read609_1_reg_15491.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_595_V_read609_s_phi_fu_25891_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_595_V_read609_s_phi_fu_25891_p4 = ap_phi_mux_data_595_V_read609_1_phi_fu_15495_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_595_V_read609_s_phi_fu_25891_p4 = data_595_V_read.read();
    } else {
        ap_phi_mux_data_595_V_read609_s_phi_fu_25891_p4 = ap_phi_reg_pp0_iter0_data_595_V_read609_s_reg_25887.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_596_V_read610_1_phi_fu_15509_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_596_V_read610_1_phi_fu_15509_p6 = data_596_V_read610_s_reg_25900.read();
    } else {
        ap_phi_mux_data_596_V_read610_1_phi_fu_15509_p6 = data_596_V_read610_1_reg_15505.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_596_V_read610_s_phi_fu_25904_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_596_V_read610_s_phi_fu_25904_p4 = ap_phi_mux_data_596_V_read610_1_phi_fu_15509_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_596_V_read610_s_phi_fu_25904_p4 = data_596_V_read.read();
    } else {
        ap_phi_mux_data_596_V_read610_s_phi_fu_25904_p4 = ap_phi_reg_pp0_iter0_data_596_V_read610_s_reg_25900.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_597_V_read611_1_phi_fu_15523_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_597_V_read611_1_phi_fu_15523_p6 = data_597_V_read611_s_reg_25913.read();
    } else {
        ap_phi_mux_data_597_V_read611_1_phi_fu_15523_p6 = data_597_V_read611_1_reg_15519.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_597_V_read611_s_phi_fu_25917_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_597_V_read611_s_phi_fu_25917_p4 = ap_phi_mux_data_597_V_read611_1_phi_fu_15523_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_597_V_read611_s_phi_fu_25917_p4 = data_597_V_read.read();
    } else {
        ap_phi_mux_data_597_V_read611_s_phi_fu_25917_p4 = ap_phi_reg_pp0_iter0_data_597_V_read611_s_reg_25913.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_598_V_read612_1_phi_fu_15537_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_598_V_read612_1_phi_fu_15537_p6 = data_598_V_read612_s_reg_25926.read();
    } else {
        ap_phi_mux_data_598_V_read612_1_phi_fu_15537_p6 = data_598_V_read612_1_reg_15533.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_598_V_read612_s_phi_fu_25930_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_598_V_read612_s_phi_fu_25930_p4 = ap_phi_mux_data_598_V_read612_1_phi_fu_15537_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_598_V_read612_s_phi_fu_25930_p4 = data_598_V_read.read();
    } else {
        ap_phi_mux_data_598_V_read612_s_phi_fu_25930_p4 = ap_phi_reg_pp0_iter0_data_598_V_read612_s_reg_25926.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_599_V_read613_1_phi_fu_15551_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_599_V_read613_1_phi_fu_15551_p6 = data_599_V_read613_s_reg_25939.read();
    } else {
        ap_phi_mux_data_599_V_read613_1_phi_fu_15551_p6 = data_599_V_read613_1_reg_15547.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_599_V_read613_s_phi_fu_25943_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_599_V_read613_s_phi_fu_25943_p4 = ap_phi_mux_data_599_V_read613_1_phi_fu_15551_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_599_V_read613_s_phi_fu_25943_p4 = data_599_V_read.read();
    } else {
        ap_phi_mux_data_599_V_read613_s_phi_fu_25943_p4 = ap_phi_reg_pp0_iter0_data_599_V_read613_s_reg_25939.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_59_V_read73_ph_phi_fu_18923_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_59_V_read73_ph_phi_fu_18923_p4 = ap_phi_mux_data_59_V_read73_re_phi_fu_7991_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_59_V_read73_ph_phi_fu_18923_p4 = data_59_V_read.read();
    } else {
        ap_phi_mux_data_59_V_read73_ph_phi_fu_18923_p4 = ap_phi_reg_pp0_iter0_data_59_V_read73_ph_reg_18919.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_59_V_read73_re_phi_fu_7991_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_59_V_read73_re_phi_fu_7991_p6 = data_59_V_read73_ph_reg_18919.read();
    } else {
        ap_phi_mux_data_59_V_read73_re_phi_fu_7991_p6 = data_59_V_read73_re_reg_7987.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_5_V_read19_phi_phi_fu_18221_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_5_V_read19_phi_phi_fu_18221_p4 = ap_phi_mux_data_5_V_read19_rew_phi_fu_7235_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_5_V_read19_phi_phi_fu_18221_p4 = data_5_V_read.read();
    } else {
        ap_phi_mux_data_5_V_read19_phi_phi_fu_18221_p4 = ap_phi_reg_pp0_iter0_data_5_V_read19_phi_reg_18217.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_5_V_read19_rew_phi_fu_7235_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_5_V_read19_rew_phi_fu_7235_p6 = data_5_V_read19_phi_reg_18217.read();
    } else {
        ap_phi_mux_data_5_V_read19_rew_phi_fu_7235_p6 = data_5_V_read19_rew_reg_7231.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_600_V_read614_1_phi_fu_15565_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_600_V_read614_1_phi_fu_15565_p6 = data_600_V_read614_s_reg_25952.read();
    } else {
        ap_phi_mux_data_600_V_read614_1_phi_fu_15565_p6 = data_600_V_read614_1_reg_15561.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_600_V_read614_s_phi_fu_25956_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_600_V_read614_s_phi_fu_25956_p4 = ap_phi_mux_data_600_V_read614_1_phi_fu_15565_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_600_V_read614_s_phi_fu_25956_p4 = data_600_V_read.read();
    } else {
        ap_phi_mux_data_600_V_read614_s_phi_fu_25956_p4 = ap_phi_reg_pp0_iter0_data_600_V_read614_s_reg_25952.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_601_V_read615_1_phi_fu_15579_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_601_V_read615_1_phi_fu_15579_p6 = data_601_V_read615_s_reg_25965.read();
    } else {
        ap_phi_mux_data_601_V_read615_1_phi_fu_15579_p6 = data_601_V_read615_1_reg_15575.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_601_V_read615_s_phi_fu_25969_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_601_V_read615_s_phi_fu_25969_p4 = ap_phi_mux_data_601_V_read615_1_phi_fu_15579_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_601_V_read615_s_phi_fu_25969_p4 = data_601_V_read.read();
    } else {
        ap_phi_mux_data_601_V_read615_s_phi_fu_25969_p4 = ap_phi_reg_pp0_iter0_data_601_V_read615_s_reg_25965.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_602_V_read616_1_phi_fu_15593_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_602_V_read616_1_phi_fu_15593_p6 = data_602_V_read616_s_reg_25978.read();
    } else {
        ap_phi_mux_data_602_V_read616_1_phi_fu_15593_p6 = data_602_V_read616_1_reg_15589.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_602_V_read616_s_phi_fu_25982_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_602_V_read616_s_phi_fu_25982_p4 = ap_phi_mux_data_602_V_read616_1_phi_fu_15593_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_602_V_read616_s_phi_fu_25982_p4 = data_602_V_read.read();
    } else {
        ap_phi_mux_data_602_V_read616_s_phi_fu_25982_p4 = ap_phi_reg_pp0_iter0_data_602_V_read616_s_reg_25978.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_603_V_read617_1_phi_fu_15607_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_603_V_read617_1_phi_fu_15607_p6 = data_603_V_read617_s_reg_25991.read();
    } else {
        ap_phi_mux_data_603_V_read617_1_phi_fu_15607_p6 = data_603_V_read617_1_reg_15603.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_603_V_read617_s_phi_fu_25995_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_603_V_read617_s_phi_fu_25995_p4 = ap_phi_mux_data_603_V_read617_1_phi_fu_15607_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_603_V_read617_s_phi_fu_25995_p4 = data_603_V_read.read();
    } else {
        ap_phi_mux_data_603_V_read617_s_phi_fu_25995_p4 = ap_phi_reg_pp0_iter0_data_603_V_read617_s_reg_25991.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_604_V_read618_1_phi_fu_15621_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_604_V_read618_1_phi_fu_15621_p6 = data_604_V_read618_s_reg_26004.read();
    } else {
        ap_phi_mux_data_604_V_read618_1_phi_fu_15621_p6 = data_604_V_read618_1_reg_15617.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_604_V_read618_s_phi_fu_26008_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_604_V_read618_s_phi_fu_26008_p4 = ap_phi_mux_data_604_V_read618_1_phi_fu_15621_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_604_V_read618_s_phi_fu_26008_p4 = data_604_V_read.read();
    } else {
        ap_phi_mux_data_604_V_read618_s_phi_fu_26008_p4 = ap_phi_reg_pp0_iter0_data_604_V_read618_s_reg_26004.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_605_V_read619_1_phi_fu_15635_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_605_V_read619_1_phi_fu_15635_p6 = data_605_V_read619_s_reg_26017.read();
    } else {
        ap_phi_mux_data_605_V_read619_1_phi_fu_15635_p6 = data_605_V_read619_1_reg_15631.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_605_V_read619_s_phi_fu_26021_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_605_V_read619_s_phi_fu_26021_p4 = ap_phi_mux_data_605_V_read619_1_phi_fu_15635_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_605_V_read619_s_phi_fu_26021_p4 = data_605_V_read.read();
    } else {
        ap_phi_mux_data_605_V_read619_s_phi_fu_26021_p4 = ap_phi_reg_pp0_iter0_data_605_V_read619_s_reg_26017.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_606_V_read620_1_phi_fu_15649_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_606_V_read620_1_phi_fu_15649_p6 = data_606_V_read620_s_reg_26030.read();
    } else {
        ap_phi_mux_data_606_V_read620_1_phi_fu_15649_p6 = data_606_V_read620_1_reg_15645.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_606_V_read620_s_phi_fu_26034_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_606_V_read620_s_phi_fu_26034_p4 = ap_phi_mux_data_606_V_read620_1_phi_fu_15649_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_606_V_read620_s_phi_fu_26034_p4 = data_606_V_read.read();
    } else {
        ap_phi_mux_data_606_V_read620_s_phi_fu_26034_p4 = ap_phi_reg_pp0_iter0_data_606_V_read620_s_reg_26030.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_607_V_read621_1_phi_fu_15663_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_607_V_read621_1_phi_fu_15663_p6 = data_607_V_read621_s_reg_26043.read();
    } else {
        ap_phi_mux_data_607_V_read621_1_phi_fu_15663_p6 = data_607_V_read621_1_reg_15659.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_607_V_read621_s_phi_fu_26047_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_607_V_read621_s_phi_fu_26047_p4 = ap_phi_mux_data_607_V_read621_1_phi_fu_15663_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_607_V_read621_s_phi_fu_26047_p4 = data_607_V_read.read();
    } else {
        ap_phi_mux_data_607_V_read621_s_phi_fu_26047_p4 = ap_phi_reg_pp0_iter0_data_607_V_read621_s_reg_26043.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_608_V_read622_1_phi_fu_15677_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_608_V_read622_1_phi_fu_15677_p6 = data_608_V_read622_s_reg_26056.read();
    } else {
        ap_phi_mux_data_608_V_read622_1_phi_fu_15677_p6 = data_608_V_read622_1_reg_15673.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_608_V_read622_s_phi_fu_26060_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_608_V_read622_s_phi_fu_26060_p4 = ap_phi_mux_data_608_V_read622_1_phi_fu_15677_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_608_V_read622_s_phi_fu_26060_p4 = data_608_V_read.read();
    } else {
        ap_phi_mux_data_608_V_read622_s_phi_fu_26060_p4 = ap_phi_reg_pp0_iter0_data_608_V_read622_s_reg_26056.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_609_V_read623_1_phi_fu_15691_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_609_V_read623_1_phi_fu_15691_p6 = data_609_V_read623_s_reg_26069.read();
    } else {
        ap_phi_mux_data_609_V_read623_1_phi_fu_15691_p6 = data_609_V_read623_1_reg_15687.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_609_V_read623_s_phi_fu_26073_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_609_V_read623_s_phi_fu_26073_p4 = ap_phi_mux_data_609_V_read623_1_phi_fu_15691_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_609_V_read623_s_phi_fu_26073_p4 = data_609_V_read.read();
    } else {
        ap_phi_mux_data_609_V_read623_s_phi_fu_26073_p4 = ap_phi_reg_pp0_iter0_data_609_V_read623_s_reg_26069.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_60_V_read74_ph_phi_fu_18936_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_60_V_read74_ph_phi_fu_18936_p4 = ap_phi_mux_data_60_V_read74_re_phi_fu_8005_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_60_V_read74_ph_phi_fu_18936_p4 = data_60_V_read.read();
    } else {
        ap_phi_mux_data_60_V_read74_ph_phi_fu_18936_p4 = ap_phi_reg_pp0_iter0_data_60_V_read74_ph_reg_18932.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_60_V_read74_re_phi_fu_8005_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_60_V_read74_re_phi_fu_8005_p6 = data_60_V_read74_ph_reg_18932.read();
    } else {
        ap_phi_mux_data_60_V_read74_re_phi_fu_8005_p6 = data_60_V_read74_re_reg_8001.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_610_V_read624_1_phi_fu_15705_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_610_V_read624_1_phi_fu_15705_p6 = data_610_V_read624_s_reg_26082.read();
    } else {
        ap_phi_mux_data_610_V_read624_1_phi_fu_15705_p6 = data_610_V_read624_1_reg_15701.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_610_V_read624_s_phi_fu_26086_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_610_V_read624_s_phi_fu_26086_p4 = ap_phi_mux_data_610_V_read624_1_phi_fu_15705_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_610_V_read624_s_phi_fu_26086_p4 = data_610_V_read.read();
    } else {
        ap_phi_mux_data_610_V_read624_s_phi_fu_26086_p4 = ap_phi_reg_pp0_iter0_data_610_V_read624_s_reg_26082.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_611_V_read625_1_phi_fu_15719_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_611_V_read625_1_phi_fu_15719_p6 = data_611_V_read625_s_reg_26095.read();
    } else {
        ap_phi_mux_data_611_V_read625_1_phi_fu_15719_p6 = data_611_V_read625_1_reg_15715.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_611_V_read625_s_phi_fu_26099_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_611_V_read625_s_phi_fu_26099_p4 = ap_phi_mux_data_611_V_read625_1_phi_fu_15719_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_611_V_read625_s_phi_fu_26099_p4 = data_611_V_read.read();
    } else {
        ap_phi_mux_data_611_V_read625_s_phi_fu_26099_p4 = ap_phi_reg_pp0_iter0_data_611_V_read625_s_reg_26095.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_612_V_read626_1_phi_fu_15733_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_612_V_read626_1_phi_fu_15733_p6 = data_612_V_read626_s_reg_26108.read();
    } else {
        ap_phi_mux_data_612_V_read626_1_phi_fu_15733_p6 = data_612_V_read626_1_reg_15729.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_612_V_read626_s_phi_fu_26112_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_612_V_read626_s_phi_fu_26112_p4 = ap_phi_mux_data_612_V_read626_1_phi_fu_15733_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_612_V_read626_s_phi_fu_26112_p4 = data_612_V_read.read();
    } else {
        ap_phi_mux_data_612_V_read626_s_phi_fu_26112_p4 = ap_phi_reg_pp0_iter0_data_612_V_read626_s_reg_26108.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_613_V_read627_1_phi_fu_15747_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_613_V_read627_1_phi_fu_15747_p6 = data_613_V_read627_s_reg_26121.read();
    } else {
        ap_phi_mux_data_613_V_read627_1_phi_fu_15747_p6 = data_613_V_read627_1_reg_15743.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_613_V_read627_s_phi_fu_26125_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_613_V_read627_s_phi_fu_26125_p4 = ap_phi_mux_data_613_V_read627_1_phi_fu_15747_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_613_V_read627_s_phi_fu_26125_p4 = data_613_V_read.read();
    } else {
        ap_phi_mux_data_613_V_read627_s_phi_fu_26125_p4 = ap_phi_reg_pp0_iter0_data_613_V_read627_s_reg_26121.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_614_V_read628_1_phi_fu_15761_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_614_V_read628_1_phi_fu_15761_p6 = data_614_V_read628_s_reg_26134.read();
    } else {
        ap_phi_mux_data_614_V_read628_1_phi_fu_15761_p6 = data_614_V_read628_1_reg_15757.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_614_V_read628_s_phi_fu_26138_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_614_V_read628_s_phi_fu_26138_p4 = ap_phi_mux_data_614_V_read628_1_phi_fu_15761_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_614_V_read628_s_phi_fu_26138_p4 = data_614_V_read.read();
    } else {
        ap_phi_mux_data_614_V_read628_s_phi_fu_26138_p4 = ap_phi_reg_pp0_iter0_data_614_V_read628_s_reg_26134.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_615_V_read629_1_phi_fu_15775_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_615_V_read629_1_phi_fu_15775_p6 = data_615_V_read629_s_reg_26147.read();
    } else {
        ap_phi_mux_data_615_V_read629_1_phi_fu_15775_p6 = data_615_V_read629_1_reg_15771.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_615_V_read629_s_phi_fu_26151_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_615_V_read629_s_phi_fu_26151_p4 = ap_phi_mux_data_615_V_read629_1_phi_fu_15775_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_615_V_read629_s_phi_fu_26151_p4 = data_615_V_read.read();
    } else {
        ap_phi_mux_data_615_V_read629_s_phi_fu_26151_p4 = ap_phi_reg_pp0_iter0_data_615_V_read629_s_reg_26147.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_616_V_read630_1_phi_fu_15789_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_616_V_read630_1_phi_fu_15789_p6 = data_616_V_read630_s_reg_26160.read();
    } else {
        ap_phi_mux_data_616_V_read630_1_phi_fu_15789_p6 = data_616_V_read630_1_reg_15785.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_616_V_read630_s_phi_fu_26164_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_616_V_read630_s_phi_fu_26164_p4 = ap_phi_mux_data_616_V_read630_1_phi_fu_15789_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_616_V_read630_s_phi_fu_26164_p4 = data_616_V_read.read();
    } else {
        ap_phi_mux_data_616_V_read630_s_phi_fu_26164_p4 = ap_phi_reg_pp0_iter0_data_616_V_read630_s_reg_26160.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_617_V_read631_1_phi_fu_15803_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_617_V_read631_1_phi_fu_15803_p6 = data_617_V_read631_s_reg_26173.read();
    } else {
        ap_phi_mux_data_617_V_read631_1_phi_fu_15803_p6 = data_617_V_read631_1_reg_15799.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_617_V_read631_s_phi_fu_26177_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_617_V_read631_s_phi_fu_26177_p4 = ap_phi_mux_data_617_V_read631_1_phi_fu_15803_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_617_V_read631_s_phi_fu_26177_p4 = data_617_V_read.read();
    } else {
        ap_phi_mux_data_617_V_read631_s_phi_fu_26177_p4 = ap_phi_reg_pp0_iter0_data_617_V_read631_s_reg_26173.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_618_V_read632_1_phi_fu_15817_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_618_V_read632_1_phi_fu_15817_p6 = data_618_V_read632_s_reg_26186.read();
    } else {
        ap_phi_mux_data_618_V_read632_1_phi_fu_15817_p6 = data_618_V_read632_1_reg_15813.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_618_V_read632_s_phi_fu_26190_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_618_V_read632_s_phi_fu_26190_p4 = ap_phi_mux_data_618_V_read632_1_phi_fu_15817_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_618_V_read632_s_phi_fu_26190_p4 = data_618_V_read.read();
    } else {
        ap_phi_mux_data_618_V_read632_s_phi_fu_26190_p4 = ap_phi_reg_pp0_iter0_data_618_V_read632_s_reg_26186.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_619_V_read633_1_phi_fu_15831_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_619_V_read633_1_phi_fu_15831_p6 = data_619_V_read633_s_reg_26199.read();
    } else {
        ap_phi_mux_data_619_V_read633_1_phi_fu_15831_p6 = data_619_V_read633_1_reg_15827.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_619_V_read633_s_phi_fu_26203_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_619_V_read633_s_phi_fu_26203_p4 = ap_phi_mux_data_619_V_read633_1_phi_fu_15831_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_619_V_read633_s_phi_fu_26203_p4 = data_619_V_read.read();
    } else {
        ap_phi_mux_data_619_V_read633_s_phi_fu_26203_p4 = ap_phi_reg_pp0_iter0_data_619_V_read633_s_reg_26199.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_61_V_read75_ph_phi_fu_18949_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_61_V_read75_ph_phi_fu_18949_p4 = ap_phi_mux_data_61_V_read75_re_phi_fu_8019_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_61_V_read75_ph_phi_fu_18949_p4 = data_61_V_read.read();
    } else {
        ap_phi_mux_data_61_V_read75_ph_phi_fu_18949_p4 = ap_phi_reg_pp0_iter0_data_61_V_read75_ph_reg_18945.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_61_V_read75_re_phi_fu_8019_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_61_V_read75_re_phi_fu_8019_p6 = data_61_V_read75_ph_reg_18945.read();
    } else {
        ap_phi_mux_data_61_V_read75_re_phi_fu_8019_p6 = data_61_V_read75_re_reg_8015.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_620_V_read634_1_phi_fu_15845_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_620_V_read634_1_phi_fu_15845_p6 = data_620_V_read634_s_reg_26212.read();
    } else {
        ap_phi_mux_data_620_V_read634_1_phi_fu_15845_p6 = data_620_V_read634_1_reg_15841.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_620_V_read634_s_phi_fu_26216_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_620_V_read634_s_phi_fu_26216_p4 = ap_phi_mux_data_620_V_read634_1_phi_fu_15845_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_620_V_read634_s_phi_fu_26216_p4 = data_620_V_read.read();
    } else {
        ap_phi_mux_data_620_V_read634_s_phi_fu_26216_p4 = ap_phi_reg_pp0_iter0_data_620_V_read634_s_reg_26212.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_621_V_read635_1_phi_fu_15859_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_621_V_read635_1_phi_fu_15859_p6 = data_621_V_read635_s_reg_26225.read();
    } else {
        ap_phi_mux_data_621_V_read635_1_phi_fu_15859_p6 = data_621_V_read635_1_reg_15855.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_621_V_read635_s_phi_fu_26229_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_621_V_read635_s_phi_fu_26229_p4 = ap_phi_mux_data_621_V_read635_1_phi_fu_15859_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_621_V_read635_s_phi_fu_26229_p4 = data_621_V_read.read();
    } else {
        ap_phi_mux_data_621_V_read635_s_phi_fu_26229_p4 = ap_phi_reg_pp0_iter0_data_621_V_read635_s_reg_26225.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_622_V_read636_1_phi_fu_15873_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_622_V_read636_1_phi_fu_15873_p6 = data_622_V_read636_s_reg_26238.read();
    } else {
        ap_phi_mux_data_622_V_read636_1_phi_fu_15873_p6 = data_622_V_read636_1_reg_15869.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_622_V_read636_s_phi_fu_26242_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_622_V_read636_s_phi_fu_26242_p4 = ap_phi_mux_data_622_V_read636_1_phi_fu_15873_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_622_V_read636_s_phi_fu_26242_p4 = data_622_V_read.read();
    } else {
        ap_phi_mux_data_622_V_read636_s_phi_fu_26242_p4 = ap_phi_reg_pp0_iter0_data_622_V_read636_s_reg_26238.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_623_V_read637_1_phi_fu_15887_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_623_V_read637_1_phi_fu_15887_p6 = data_623_V_read637_s_reg_26251.read();
    } else {
        ap_phi_mux_data_623_V_read637_1_phi_fu_15887_p6 = data_623_V_read637_1_reg_15883.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_623_V_read637_s_phi_fu_26255_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_623_V_read637_s_phi_fu_26255_p4 = ap_phi_mux_data_623_V_read637_1_phi_fu_15887_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_623_V_read637_s_phi_fu_26255_p4 = data_623_V_read.read();
    } else {
        ap_phi_mux_data_623_V_read637_s_phi_fu_26255_p4 = ap_phi_reg_pp0_iter0_data_623_V_read637_s_reg_26251.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_624_V_read638_1_phi_fu_15901_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_624_V_read638_1_phi_fu_15901_p6 = data_624_V_read638_s_reg_26264.read();
    } else {
        ap_phi_mux_data_624_V_read638_1_phi_fu_15901_p6 = data_624_V_read638_1_reg_15897.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_624_V_read638_s_phi_fu_26268_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_624_V_read638_s_phi_fu_26268_p4 = ap_phi_mux_data_624_V_read638_1_phi_fu_15901_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_624_V_read638_s_phi_fu_26268_p4 = data_624_V_read.read();
    } else {
        ap_phi_mux_data_624_V_read638_s_phi_fu_26268_p4 = ap_phi_reg_pp0_iter0_data_624_V_read638_s_reg_26264.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_625_V_read639_1_phi_fu_15915_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_625_V_read639_1_phi_fu_15915_p6 = data_625_V_read639_s_reg_26277.read();
    } else {
        ap_phi_mux_data_625_V_read639_1_phi_fu_15915_p6 = data_625_V_read639_1_reg_15911.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_625_V_read639_s_phi_fu_26281_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_625_V_read639_s_phi_fu_26281_p4 = ap_phi_mux_data_625_V_read639_1_phi_fu_15915_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_625_V_read639_s_phi_fu_26281_p4 = data_625_V_read.read();
    } else {
        ap_phi_mux_data_625_V_read639_s_phi_fu_26281_p4 = ap_phi_reg_pp0_iter0_data_625_V_read639_s_reg_26277.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_626_V_read640_1_phi_fu_15929_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_626_V_read640_1_phi_fu_15929_p6 = data_626_V_read640_s_reg_26290.read();
    } else {
        ap_phi_mux_data_626_V_read640_1_phi_fu_15929_p6 = data_626_V_read640_1_reg_15925.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_626_V_read640_s_phi_fu_26294_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_626_V_read640_s_phi_fu_26294_p4 = ap_phi_mux_data_626_V_read640_1_phi_fu_15929_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_626_V_read640_s_phi_fu_26294_p4 = data_626_V_read.read();
    } else {
        ap_phi_mux_data_626_V_read640_s_phi_fu_26294_p4 = ap_phi_reg_pp0_iter0_data_626_V_read640_s_reg_26290.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_627_V_read641_1_phi_fu_15943_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_627_V_read641_1_phi_fu_15943_p6 = data_627_V_read641_s_reg_26303.read();
    } else {
        ap_phi_mux_data_627_V_read641_1_phi_fu_15943_p6 = data_627_V_read641_1_reg_15939.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_627_V_read641_s_phi_fu_26307_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_627_V_read641_s_phi_fu_26307_p4 = ap_phi_mux_data_627_V_read641_1_phi_fu_15943_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_627_V_read641_s_phi_fu_26307_p4 = data_627_V_read.read();
    } else {
        ap_phi_mux_data_627_V_read641_s_phi_fu_26307_p4 = ap_phi_reg_pp0_iter0_data_627_V_read641_s_reg_26303.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_628_V_read642_1_phi_fu_15957_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_628_V_read642_1_phi_fu_15957_p6 = data_628_V_read642_s_reg_26316.read();
    } else {
        ap_phi_mux_data_628_V_read642_1_phi_fu_15957_p6 = data_628_V_read642_1_reg_15953.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_628_V_read642_s_phi_fu_26320_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_628_V_read642_s_phi_fu_26320_p4 = ap_phi_mux_data_628_V_read642_1_phi_fu_15957_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_628_V_read642_s_phi_fu_26320_p4 = data_628_V_read.read();
    } else {
        ap_phi_mux_data_628_V_read642_s_phi_fu_26320_p4 = ap_phi_reg_pp0_iter0_data_628_V_read642_s_reg_26316.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_629_V_read643_1_phi_fu_15971_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_629_V_read643_1_phi_fu_15971_p6 = data_629_V_read643_s_reg_26329.read();
    } else {
        ap_phi_mux_data_629_V_read643_1_phi_fu_15971_p6 = data_629_V_read643_1_reg_15967.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_629_V_read643_s_phi_fu_26333_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_629_V_read643_s_phi_fu_26333_p4 = ap_phi_mux_data_629_V_read643_1_phi_fu_15971_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_629_V_read643_s_phi_fu_26333_p4 = data_629_V_read.read();
    } else {
        ap_phi_mux_data_629_V_read643_s_phi_fu_26333_p4 = ap_phi_reg_pp0_iter0_data_629_V_read643_s_reg_26329.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_62_V_read76_ph_phi_fu_18962_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_62_V_read76_ph_phi_fu_18962_p4 = ap_phi_mux_data_62_V_read76_re_phi_fu_8033_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_62_V_read76_ph_phi_fu_18962_p4 = data_62_V_read.read();
    } else {
        ap_phi_mux_data_62_V_read76_ph_phi_fu_18962_p4 = ap_phi_reg_pp0_iter0_data_62_V_read76_ph_reg_18958.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_62_V_read76_re_phi_fu_8033_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_62_V_read76_re_phi_fu_8033_p6 = data_62_V_read76_ph_reg_18958.read();
    } else {
        ap_phi_mux_data_62_V_read76_re_phi_fu_8033_p6 = data_62_V_read76_re_reg_8029.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_630_V_read644_1_phi_fu_15985_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_630_V_read644_1_phi_fu_15985_p6 = data_630_V_read644_s_reg_26342.read();
    } else {
        ap_phi_mux_data_630_V_read644_1_phi_fu_15985_p6 = data_630_V_read644_1_reg_15981.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_630_V_read644_s_phi_fu_26346_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_630_V_read644_s_phi_fu_26346_p4 = ap_phi_mux_data_630_V_read644_1_phi_fu_15985_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_630_V_read644_s_phi_fu_26346_p4 = data_630_V_read.read();
    } else {
        ap_phi_mux_data_630_V_read644_s_phi_fu_26346_p4 = ap_phi_reg_pp0_iter0_data_630_V_read644_s_reg_26342.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_631_V_read645_1_phi_fu_15999_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_631_V_read645_1_phi_fu_15999_p6 = data_631_V_read645_s_reg_26355.read();
    } else {
        ap_phi_mux_data_631_V_read645_1_phi_fu_15999_p6 = data_631_V_read645_1_reg_15995.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_631_V_read645_s_phi_fu_26359_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_631_V_read645_s_phi_fu_26359_p4 = ap_phi_mux_data_631_V_read645_1_phi_fu_15999_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_631_V_read645_s_phi_fu_26359_p4 = data_631_V_read.read();
    } else {
        ap_phi_mux_data_631_V_read645_s_phi_fu_26359_p4 = ap_phi_reg_pp0_iter0_data_631_V_read645_s_reg_26355.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_632_V_read646_1_phi_fu_16013_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_632_V_read646_1_phi_fu_16013_p6 = data_632_V_read646_s_reg_26368.read();
    } else {
        ap_phi_mux_data_632_V_read646_1_phi_fu_16013_p6 = data_632_V_read646_1_reg_16009.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_632_V_read646_s_phi_fu_26372_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_632_V_read646_s_phi_fu_26372_p4 = ap_phi_mux_data_632_V_read646_1_phi_fu_16013_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_632_V_read646_s_phi_fu_26372_p4 = data_632_V_read.read();
    } else {
        ap_phi_mux_data_632_V_read646_s_phi_fu_26372_p4 = ap_phi_reg_pp0_iter0_data_632_V_read646_s_reg_26368.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_633_V_read647_1_phi_fu_16027_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_633_V_read647_1_phi_fu_16027_p6 = data_633_V_read647_s_reg_26381.read();
    } else {
        ap_phi_mux_data_633_V_read647_1_phi_fu_16027_p6 = data_633_V_read647_1_reg_16023.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_633_V_read647_s_phi_fu_26385_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_633_V_read647_s_phi_fu_26385_p4 = ap_phi_mux_data_633_V_read647_1_phi_fu_16027_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_633_V_read647_s_phi_fu_26385_p4 = data_633_V_read.read();
    } else {
        ap_phi_mux_data_633_V_read647_s_phi_fu_26385_p4 = ap_phi_reg_pp0_iter0_data_633_V_read647_s_reg_26381.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_634_V_read648_1_phi_fu_16041_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_634_V_read648_1_phi_fu_16041_p6 = data_634_V_read648_s_reg_26394.read();
    } else {
        ap_phi_mux_data_634_V_read648_1_phi_fu_16041_p6 = data_634_V_read648_1_reg_16037.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_634_V_read648_s_phi_fu_26398_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_634_V_read648_s_phi_fu_26398_p4 = ap_phi_mux_data_634_V_read648_1_phi_fu_16041_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_634_V_read648_s_phi_fu_26398_p4 = data_634_V_read.read();
    } else {
        ap_phi_mux_data_634_V_read648_s_phi_fu_26398_p4 = ap_phi_reg_pp0_iter0_data_634_V_read648_s_reg_26394.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_635_V_read649_1_phi_fu_16055_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_635_V_read649_1_phi_fu_16055_p6 = data_635_V_read649_s_reg_26407.read();
    } else {
        ap_phi_mux_data_635_V_read649_1_phi_fu_16055_p6 = data_635_V_read649_1_reg_16051.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_635_V_read649_s_phi_fu_26411_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_635_V_read649_s_phi_fu_26411_p4 = ap_phi_mux_data_635_V_read649_1_phi_fu_16055_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_635_V_read649_s_phi_fu_26411_p4 = data_635_V_read.read();
    } else {
        ap_phi_mux_data_635_V_read649_s_phi_fu_26411_p4 = ap_phi_reg_pp0_iter0_data_635_V_read649_s_reg_26407.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_636_V_read650_1_phi_fu_16069_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_636_V_read650_1_phi_fu_16069_p6 = data_636_V_read650_s_reg_26420.read();
    } else {
        ap_phi_mux_data_636_V_read650_1_phi_fu_16069_p6 = data_636_V_read650_1_reg_16065.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_636_V_read650_s_phi_fu_26424_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_636_V_read650_s_phi_fu_26424_p4 = ap_phi_mux_data_636_V_read650_1_phi_fu_16069_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_636_V_read650_s_phi_fu_26424_p4 = data_636_V_read.read();
    } else {
        ap_phi_mux_data_636_V_read650_s_phi_fu_26424_p4 = ap_phi_reg_pp0_iter0_data_636_V_read650_s_reg_26420.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_637_V_read651_1_phi_fu_16083_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_637_V_read651_1_phi_fu_16083_p6 = data_637_V_read651_s_reg_26433.read();
    } else {
        ap_phi_mux_data_637_V_read651_1_phi_fu_16083_p6 = data_637_V_read651_1_reg_16079.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_637_V_read651_s_phi_fu_26437_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_637_V_read651_s_phi_fu_26437_p4 = ap_phi_mux_data_637_V_read651_1_phi_fu_16083_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_637_V_read651_s_phi_fu_26437_p4 = data_637_V_read.read();
    } else {
        ap_phi_mux_data_637_V_read651_s_phi_fu_26437_p4 = ap_phi_reg_pp0_iter0_data_637_V_read651_s_reg_26433.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_638_V_read652_1_phi_fu_16097_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_638_V_read652_1_phi_fu_16097_p6 = data_638_V_read652_s_reg_26446.read();
    } else {
        ap_phi_mux_data_638_V_read652_1_phi_fu_16097_p6 = data_638_V_read652_1_reg_16093.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_638_V_read652_s_phi_fu_26450_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_638_V_read652_s_phi_fu_26450_p4 = ap_phi_mux_data_638_V_read652_1_phi_fu_16097_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_638_V_read652_s_phi_fu_26450_p4 = data_638_V_read.read();
    } else {
        ap_phi_mux_data_638_V_read652_s_phi_fu_26450_p4 = ap_phi_reg_pp0_iter0_data_638_V_read652_s_reg_26446.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_639_V_read653_1_phi_fu_16111_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_639_V_read653_1_phi_fu_16111_p6 = data_639_V_read653_s_reg_26459.read();
    } else {
        ap_phi_mux_data_639_V_read653_1_phi_fu_16111_p6 = data_639_V_read653_1_reg_16107.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_639_V_read653_s_phi_fu_26463_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_639_V_read653_s_phi_fu_26463_p4 = ap_phi_mux_data_639_V_read653_1_phi_fu_16111_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_639_V_read653_s_phi_fu_26463_p4 = data_639_V_read.read();
    } else {
        ap_phi_mux_data_639_V_read653_s_phi_fu_26463_p4 = ap_phi_reg_pp0_iter0_data_639_V_read653_s_reg_26459.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_63_V_read77_ph_phi_fu_18975_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_63_V_read77_ph_phi_fu_18975_p4 = ap_phi_mux_data_63_V_read77_re_phi_fu_8047_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_63_V_read77_ph_phi_fu_18975_p4 = data_63_V_read.read();
    } else {
        ap_phi_mux_data_63_V_read77_ph_phi_fu_18975_p4 = ap_phi_reg_pp0_iter0_data_63_V_read77_ph_reg_18971.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_63_V_read77_re_phi_fu_8047_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_63_V_read77_re_phi_fu_8047_p6 = data_63_V_read77_ph_reg_18971.read();
    } else {
        ap_phi_mux_data_63_V_read77_re_phi_fu_8047_p6 = data_63_V_read77_re_reg_8043.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_640_V_read654_1_phi_fu_16125_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_640_V_read654_1_phi_fu_16125_p6 = data_640_V_read654_s_reg_26472.read();
    } else {
        ap_phi_mux_data_640_V_read654_1_phi_fu_16125_p6 = data_640_V_read654_1_reg_16121.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_640_V_read654_s_phi_fu_26476_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_640_V_read654_s_phi_fu_26476_p4 = ap_phi_mux_data_640_V_read654_1_phi_fu_16125_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_640_V_read654_s_phi_fu_26476_p4 = data_640_V_read.read();
    } else {
        ap_phi_mux_data_640_V_read654_s_phi_fu_26476_p4 = ap_phi_reg_pp0_iter0_data_640_V_read654_s_reg_26472.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_641_V_read655_1_phi_fu_16139_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_641_V_read655_1_phi_fu_16139_p6 = data_641_V_read655_s_reg_26485.read();
    } else {
        ap_phi_mux_data_641_V_read655_1_phi_fu_16139_p6 = data_641_V_read655_1_reg_16135.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_641_V_read655_s_phi_fu_26489_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_641_V_read655_s_phi_fu_26489_p4 = ap_phi_mux_data_641_V_read655_1_phi_fu_16139_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_641_V_read655_s_phi_fu_26489_p4 = data_641_V_read.read();
    } else {
        ap_phi_mux_data_641_V_read655_s_phi_fu_26489_p4 = ap_phi_reg_pp0_iter0_data_641_V_read655_s_reg_26485.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_642_V_read656_1_phi_fu_16153_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_642_V_read656_1_phi_fu_16153_p6 = data_642_V_read656_s_reg_26498.read();
    } else {
        ap_phi_mux_data_642_V_read656_1_phi_fu_16153_p6 = data_642_V_read656_1_reg_16149.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_642_V_read656_s_phi_fu_26502_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_642_V_read656_s_phi_fu_26502_p4 = ap_phi_mux_data_642_V_read656_1_phi_fu_16153_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_642_V_read656_s_phi_fu_26502_p4 = data_642_V_read.read();
    } else {
        ap_phi_mux_data_642_V_read656_s_phi_fu_26502_p4 = ap_phi_reg_pp0_iter0_data_642_V_read656_s_reg_26498.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_643_V_read657_1_phi_fu_16167_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_643_V_read657_1_phi_fu_16167_p6 = data_643_V_read657_s_reg_26511.read();
    } else {
        ap_phi_mux_data_643_V_read657_1_phi_fu_16167_p6 = data_643_V_read657_1_reg_16163.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_643_V_read657_s_phi_fu_26515_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_643_V_read657_s_phi_fu_26515_p4 = ap_phi_mux_data_643_V_read657_1_phi_fu_16167_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_643_V_read657_s_phi_fu_26515_p4 = data_643_V_read.read();
    } else {
        ap_phi_mux_data_643_V_read657_s_phi_fu_26515_p4 = ap_phi_reg_pp0_iter0_data_643_V_read657_s_reg_26511.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_644_V_read658_1_phi_fu_16181_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_644_V_read658_1_phi_fu_16181_p6 = data_644_V_read658_s_reg_26524.read();
    } else {
        ap_phi_mux_data_644_V_read658_1_phi_fu_16181_p6 = data_644_V_read658_1_reg_16177.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_644_V_read658_s_phi_fu_26528_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_644_V_read658_s_phi_fu_26528_p4 = ap_phi_mux_data_644_V_read658_1_phi_fu_16181_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_644_V_read658_s_phi_fu_26528_p4 = data_644_V_read.read();
    } else {
        ap_phi_mux_data_644_V_read658_s_phi_fu_26528_p4 = ap_phi_reg_pp0_iter0_data_644_V_read658_s_reg_26524.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_645_V_read659_1_phi_fu_16195_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_645_V_read659_1_phi_fu_16195_p6 = data_645_V_read659_s_reg_26537.read();
    } else {
        ap_phi_mux_data_645_V_read659_1_phi_fu_16195_p6 = data_645_V_read659_1_reg_16191.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_645_V_read659_s_phi_fu_26541_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_645_V_read659_s_phi_fu_26541_p4 = ap_phi_mux_data_645_V_read659_1_phi_fu_16195_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_645_V_read659_s_phi_fu_26541_p4 = data_645_V_read.read();
    } else {
        ap_phi_mux_data_645_V_read659_s_phi_fu_26541_p4 = ap_phi_reg_pp0_iter0_data_645_V_read659_s_reg_26537.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_646_V_read660_1_phi_fu_16209_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_646_V_read660_1_phi_fu_16209_p6 = data_646_V_read660_s_reg_26550.read();
    } else {
        ap_phi_mux_data_646_V_read660_1_phi_fu_16209_p6 = data_646_V_read660_1_reg_16205.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_646_V_read660_s_phi_fu_26554_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_646_V_read660_s_phi_fu_26554_p4 = ap_phi_mux_data_646_V_read660_1_phi_fu_16209_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_646_V_read660_s_phi_fu_26554_p4 = data_646_V_read.read();
    } else {
        ap_phi_mux_data_646_V_read660_s_phi_fu_26554_p4 = ap_phi_reg_pp0_iter0_data_646_V_read660_s_reg_26550.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_647_V_read661_1_phi_fu_16223_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_647_V_read661_1_phi_fu_16223_p6 = data_647_V_read661_s_reg_26563.read();
    } else {
        ap_phi_mux_data_647_V_read661_1_phi_fu_16223_p6 = data_647_V_read661_1_reg_16219.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_647_V_read661_s_phi_fu_26567_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_647_V_read661_s_phi_fu_26567_p4 = ap_phi_mux_data_647_V_read661_1_phi_fu_16223_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_647_V_read661_s_phi_fu_26567_p4 = data_647_V_read.read();
    } else {
        ap_phi_mux_data_647_V_read661_s_phi_fu_26567_p4 = ap_phi_reg_pp0_iter0_data_647_V_read661_s_reg_26563.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_648_V_read662_1_phi_fu_16237_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_648_V_read662_1_phi_fu_16237_p6 = data_648_V_read662_s_reg_26576.read();
    } else {
        ap_phi_mux_data_648_V_read662_1_phi_fu_16237_p6 = data_648_V_read662_1_reg_16233.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_648_V_read662_s_phi_fu_26580_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_648_V_read662_s_phi_fu_26580_p4 = ap_phi_mux_data_648_V_read662_1_phi_fu_16237_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_648_V_read662_s_phi_fu_26580_p4 = data_648_V_read.read();
    } else {
        ap_phi_mux_data_648_V_read662_s_phi_fu_26580_p4 = ap_phi_reg_pp0_iter0_data_648_V_read662_s_reg_26576.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_649_V_read663_1_phi_fu_16251_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_649_V_read663_1_phi_fu_16251_p6 = data_649_V_read663_s_reg_26589.read();
    } else {
        ap_phi_mux_data_649_V_read663_1_phi_fu_16251_p6 = data_649_V_read663_1_reg_16247.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_649_V_read663_s_phi_fu_26593_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_649_V_read663_s_phi_fu_26593_p4 = ap_phi_mux_data_649_V_read663_1_phi_fu_16251_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_649_V_read663_s_phi_fu_26593_p4 = data_649_V_read.read();
    } else {
        ap_phi_mux_data_649_V_read663_s_phi_fu_26593_p4 = ap_phi_reg_pp0_iter0_data_649_V_read663_s_reg_26589.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_64_V_read78_ph_phi_fu_18988_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_64_V_read78_ph_phi_fu_18988_p4 = ap_phi_mux_data_64_V_read78_re_phi_fu_8061_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_64_V_read78_ph_phi_fu_18988_p4 = data_64_V_read.read();
    } else {
        ap_phi_mux_data_64_V_read78_ph_phi_fu_18988_p4 = ap_phi_reg_pp0_iter0_data_64_V_read78_ph_reg_18984.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_64_V_read78_re_phi_fu_8061_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_64_V_read78_re_phi_fu_8061_p6 = data_64_V_read78_ph_reg_18984.read();
    } else {
        ap_phi_mux_data_64_V_read78_re_phi_fu_8061_p6 = data_64_V_read78_re_reg_8057.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_650_V_read664_1_phi_fu_16265_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_650_V_read664_1_phi_fu_16265_p6 = data_650_V_read664_s_reg_26602.read();
    } else {
        ap_phi_mux_data_650_V_read664_1_phi_fu_16265_p6 = data_650_V_read664_1_reg_16261.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_650_V_read664_s_phi_fu_26606_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_650_V_read664_s_phi_fu_26606_p4 = ap_phi_mux_data_650_V_read664_1_phi_fu_16265_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_650_V_read664_s_phi_fu_26606_p4 = data_650_V_read.read();
    } else {
        ap_phi_mux_data_650_V_read664_s_phi_fu_26606_p4 = ap_phi_reg_pp0_iter0_data_650_V_read664_s_reg_26602.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_651_V_read665_1_phi_fu_16279_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_651_V_read665_1_phi_fu_16279_p6 = data_651_V_read665_s_reg_26615.read();
    } else {
        ap_phi_mux_data_651_V_read665_1_phi_fu_16279_p6 = data_651_V_read665_1_reg_16275.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_651_V_read665_s_phi_fu_26619_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_651_V_read665_s_phi_fu_26619_p4 = ap_phi_mux_data_651_V_read665_1_phi_fu_16279_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_651_V_read665_s_phi_fu_26619_p4 = data_651_V_read.read();
    } else {
        ap_phi_mux_data_651_V_read665_s_phi_fu_26619_p4 = ap_phi_reg_pp0_iter0_data_651_V_read665_s_reg_26615.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_652_V_read666_1_phi_fu_16293_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_652_V_read666_1_phi_fu_16293_p6 = data_652_V_read666_s_reg_26628.read();
    } else {
        ap_phi_mux_data_652_V_read666_1_phi_fu_16293_p6 = data_652_V_read666_1_reg_16289.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_652_V_read666_s_phi_fu_26632_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_652_V_read666_s_phi_fu_26632_p4 = ap_phi_mux_data_652_V_read666_1_phi_fu_16293_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_652_V_read666_s_phi_fu_26632_p4 = data_652_V_read.read();
    } else {
        ap_phi_mux_data_652_V_read666_s_phi_fu_26632_p4 = ap_phi_reg_pp0_iter0_data_652_V_read666_s_reg_26628.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_653_V_read667_1_phi_fu_16307_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_653_V_read667_1_phi_fu_16307_p6 = data_653_V_read667_s_reg_26641.read();
    } else {
        ap_phi_mux_data_653_V_read667_1_phi_fu_16307_p6 = data_653_V_read667_1_reg_16303.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_653_V_read667_s_phi_fu_26645_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_653_V_read667_s_phi_fu_26645_p4 = ap_phi_mux_data_653_V_read667_1_phi_fu_16307_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_653_V_read667_s_phi_fu_26645_p4 = data_653_V_read.read();
    } else {
        ap_phi_mux_data_653_V_read667_s_phi_fu_26645_p4 = ap_phi_reg_pp0_iter0_data_653_V_read667_s_reg_26641.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_654_V_read668_1_phi_fu_16321_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_654_V_read668_1_phi_fu_16321_p6 = data_654_V_read668_s_reg_26654.read();
    } else {
        ap_phi_mux_data_654_V_read668_1_phi_fu_16321_p6 = data_654_V_read668_1_reg_16317.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_654_V_read668_s_phi_fu_26658_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_654_V_read668_s_phi_fu_26658_p4 = ap_phi_mux_data_654_V_read668_1_phi_fu_16321_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_654_V_read668_s_phi_fu_26658_p4 = data_654_V_read.read();
    } else {
        ap_phi_mux_data_654_V_read668_s_phi_fu_26658_p4 = ap_phi_reg_pp0_iter0_data_654_V_read668_s_reg_26654.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_655_V_read669_1_phi_fu_16335_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_655_V_read669_1_phi_fu_16335_p6 = data_655_V_read669_s_reg_26667.read();
    } else {
        ap_phi_mux_data_655_V_read669_1_phi_fu_16335_p6 = data_655_V_read669_1_reg_16331.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_655_V_read669_s_phi_fu_26671_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_655_V_read669_s_phi_fu_26671_p4 = ap_phi_mux_data_655_V_read669_1_phi_fu_16335_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_655_V_read669_s_phi_fu_26671_p4 = data_655_V_read.read();
    } else {
        ap_phi_mux_data_655_V_read669_s_phi_fu_26671_p4 = ap_phi_reg_pp0_iter0_data_655_V_read669_s_reg_26667.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_656_V_read670_1_phi_fu_16349_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_656_V_read670_1_phi_fu_16349_p6 = data_656_V_read670_s_reg_26680.read();
    } else {
        ap_phi_mux_data_656_V_read670_1_phi_fu_16349_p6 = data_656_V_read670_1_reg_16345.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_656_V_read670_s_phi_fu_26684_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_656_V_read670_s_phi_fu_26684_p4 = ap_phi_mux_data_656_V_read670_1_phi_fu_16349_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_656_V_read670_s_phi_fu_26684_p4 = data_656_V_read.read();
    } else {
        ap_phi_mux_data_656_V_read670_s_phi_fu_26684_p4 = ap_phi_reg_pp0_iter0_data_656_V_read670_s_reg_26680.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_657_V_read671_1_phi_fu_16363_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_657_V_read671_1_phi_fu_16363_p6 = data_657_V_read671_s_reg_26693.read();
    } else {
        ap_phi_mux_data_657_V_read671_1_phi_fu_16363_p6 = data_657_V_read671_1_reg_16359.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_657_V_read671_s_phi_fu_26697_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_657_V_read671_s_phi_fu_26697_p4 = ap_phi_mux_data_657_V_read671_1_phi_fu_16363_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_657_V_read671_s_phi_fu_26697_p4 = data_657_V_read.read();
    } else {
        ap_phi_mux_data_657_V_read671_s_phi_fu_26697_p4 = ap_phi_reg_pp0_iter0_data_657_V_read671_s_reg_26693.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_658_V_read672_1_phi_fu_16377_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_658_V_read672_1_phi_fu_16377_p6 = data_658_V_read672_s_reg_26706.read();
    } else {
        ap_phi_mux_data_658_V_read672_1_phi_fu_16377_p6 = data_658_V_read672_1_reg_16373.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_658_V_read672_s_phi_fu_26710_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_658_V_read672_s_phi_fu_26710_p4 = ap_phi_mux_data_658_V_read672_1_phi_fu_16377_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_658_V_read672_s_phi_fu_26710_p4 = data_658_V_read.read();
    } else {
        ap_phi_mux_data_658_V_read672_s_phi_fu_26710_p4 = ap_phi_reg_pp0_iter0_data_658_V_read672_s_reg_26706.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_659_V_read673_1_phi_fu_16391_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_659_V_read673_1_phi_fu_16391_p6 = data_659_V_read673_s_reg_26719.read();
    } else {
        ap_phi_mux_data_659_V_read673_1_phi_fu_16391_p6 = data_659_V_read673_1_reg_16387.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_659_V_read673_s_phi_fu_26723_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_659_V_read673_s_phi_fu_26723_p4 = ap_phi_mux_data_659_V_read673_1_phi_fu_16391_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_659_V_read673_s_phi_fu_26723_p4 = data_659_V_read.read();
    } else {
        ap_phi_mux_data_659_V_read673_s_phi_fu_26723_p4 = ap_phi_reg_pp0_iter0_data_659_V_read673_s_reg_26719.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_65_V_read79_ph_phi_fu_19001_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_65_V_read79_ph_phi_fu_19001_p4 = ap_phi_mux_data_65_V_read79_re_phi_fu_8075_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_65_V_read79_ph_phi_fu_19001_p4 = data_65_V_read.read();
    } else {
        ap_phi_mux_data_65_V_read79_ph_phi_fu_19001_p4 = ap_phi_reg_pp0_iter0_data_65_V_read79_ph_reg_18997.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_65_V_read79_re_phi_fu_8075_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_65_V_read79_re_phi_fu_8075_p6 = data_65_V_read79_ph_reg_18997.read();
    } else {
        ap_phi_mux_data_65_V_read79_re_phi_fu_8075_p6 = data_65_V_read79_re_reg_8071.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_660_V_read674_1_phi_fu_16405_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_660_V_read674_1_phi_fu_16405_p6 = data_660_V_read674_s_reg_26732.read();
    } else {
        ap_phi_mux_data_660_V_read674_1_phi_fu_16405_p6 = data_660_V_read674_1_reg_16401.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_660_V_read674_s_phi_fu_26736_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_660_V_read674_s_phi_fu_26736_p4 = ap_phi_mux_data_660_V_read674_1_phi_fu_16405_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_660_V_read674_s_phi_fu_26736_p4 = data_660_V_read.read();
    } else {
        ap_phi_mux_data_660_V_read674_s_phi_fu_26736_p4 = ap_phi_reg_pp0_iter0_data_660_V_read674_s_reg_26732.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_661_V_read675_1_phi_fu_16419_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_661_V_read675_1_phi_fu_16419_p6 = data_661_V_read675_s_reg_26745.read();
    } else {
        ap_phi_mux_data_661_V_read675_1_phi_fu_16419_p6 = data_661_V_read675_1_reg_16415.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_661_V_read675_s_phi_fu_26749_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_661_V_read675_s_phi_fu_26749_p4 = ap_phi_mux_data_661_V_read675_1_phi_fu_16419_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_661_V_read675_s_phi_fu_26749_p4 = data_661_V_read.read();
    } else {
        ap_phi_mux_data_661_V_read675_s_phi_fu_26749_p4 = ap_phi_reg_pp0_iter0_data_661_V_read675_s_reg_26745.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_662_V_read676_1_phi_fu_16433_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_662_V_read676_1_phi_fu_16433_p6 = data_662_V_read676_s_reg_26758.read();
    } else {
        ap_phi_mux_data_662_V_read676_1_phi_fu_16433_p6 = data_662_V_read676_1_reg_16429.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_662_V_read676_s_phi_fu_26762_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_662_V_read676_s_phi_fu_26762_p4 = ap_phi_mux_data_662_V_read676_1_phi_fu_16433_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_662_V_read676_s_phi_fu_26762_p4 = data_662_V_read.read();
    } else {
        ap_phi_mux_data_662_V_read676_s_phi_fu_26762_p4 = ap_phi_reg_pp0_iter0_data_662_V_read676_s_reg_26758.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_663_V_read677_1_phi_fu_16447_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_663_V_read677_1_phi_fu_16447_p6 = data_663_V_read677_s_reg_26771.read();
    } else {
        ap_phi_mux_data_663_V_read677_1_phi_fu_16447_p6 = data_663_V_read677_1_reg_16443.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_663_V_read677_s_phi_fu_26775_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_663_V_read677_s_phi_fu_26775_p4 = ap_phi_mux_data_663_V_read677_1_phi_fu_16447_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_663_V_read677_s_phi_fu_26775_p4 = data_663_V_read.read();
    } else {
        ap_phi_mux_data_663_V_read677_s_phi_fu_26775_p4 = ap_phi_reg_pp0_iter0_data_663_V_read677_s_reg_26771.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_664_V_read678_1_phi_fu_16461_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_664_V_read678_1_phi_fu_16461_p6 = data_664_V_read678_s_reg_26784.read();
    } else {
        ap_phi_mux_data_664_V_read678_1_phi_fu_16461_p6 = data_664_V_read678_1_reg_16457.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_664_V_read678_s_phi_fu_26788_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_664_V_read678_s_phi_fu_26788_p4 = ap_phi_mux_data_664_V_read678_1_phi_fu_16461_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_664_V_read678_s_phi_fu_26788_p4 = data_664_V_read.read();
    } else {
        ap_phi_mux_data_664_V_read678_s_phi_fu_26788_p4 = ap_phi_reg_pp0_iter0_data_664_V_read678_s_reg_26784.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_665_V_read679_1_phi_fu_16475_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_665_V_read679_1_phi_fu_16475_p6 = data_665_V_read679_s_reg_26797.read();
    } else {
        ap_phi_mux_data_665_V_read679_1_phi_fu_16475_p6 = data_665_V_read679_1_reg_16471.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_665_V_read679_s_phi_fu_26801_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_665_V_read679_s_phi_fu_26801_p4 = ap_phi_mux_data_665_V_read679_1_phi_fu_16475_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_665_V_read679_s_phi_fu_26801_p4 = data_665_V_read.read();
    } else {
        ap_phi_mux_data_665_V_read679_s_phi_fu_26801_p4 = ap_phi_reg_pp0_iter0_data_665_V_read679_s_reg_26797.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_666_V_read680_1_phi_fu_16489_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_666_V_read680_1_phi_fu_16489_p6 = data_666_V_read680_s_reg_26810.read();
    } else {
        ap_phi_mux_data_666_V_read680_1_phi_fu_16489_p6 = data_666_V_read680_1_reg_16485.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_666_V_read680_s_phi_fu_26814_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_666_V_read680_s_phi_fu_26814_p4 = ap_phi_mux_data_666_V_read680_1_phi_fu_16489_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_666_V_read680_s_phi_fu_26814_p4 = data_666_V_read.read();
    } else {
        ap_phi_mux_data_666_V_read680_s_phi_fu_26814_p4 = ap_phi_reg_pp0_iter0_data_666_V_read680_s_reg_26810.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_667_V_read681_1_phi_fu_16503_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_667_V_read681_1_phi_fu_16503_p6 = data_667_V_read681_s_reg_26823.read();
    } else {
        ap_phi_mux_data_667_V_read681_1_phi_fu_16503_p6 = data_667_V_read681_1_reg_16499.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_667_V_read681_s_phi_fu_26827_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_667_V_read681_s_phi_fu_26827_p4 = ap_phi_mux_data_667_V_read681_1_phi_fu_16503_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_667_V_read681_s_phi_fu_26827_p4 = data_667_V_read.read();
    } else {
        ap_phi_mux_data_667_V_read681_s_phi_fu_26827_p4 = ap_phi_reg_pp0_iter0_data_667_V_read681_s_reg_26823.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_668_V_read682_1_phi_fu_16517_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_668_V_read682_1_phi_fu_16517_p6 = data_668_V_read682_s_reg_26836.read();
    } else {
        ap_phi_mux_data_668_V_read682_1_phi_fu_16517_p6 = data_668_V_read682_1_reg_16513.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_668_V_read682_s_phi_fu_26840_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_668_V_read682_s_phi_fu_26840_p4 = ap_phi_mux_data_668_V_read682_1_phi_fu_16517_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_668_V_read682_s_phi_fu_26840_p4 = data_668_V_read.read();
    } else {
        ap_phi_mux_data_668_V_read682_s_phi_fu_26840_p4 = ap_phi_reg_pp0_iter0_data_668_V_read682_s_reg_26836.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_669_V_read683_1_phi_fu_16531_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_669_V_read683_1_phi_fu_16531_p6 = data_669_V_read683_s_reg_26849.read();
    } else {
        ap_phi_mux_data_669_V_read683_1_phi_fu_16531_p6 = data_669_V_read683_1_reg_16527.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_669_V_read683_s_phi_fu_26853_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_669_V_read683_s_phi_fu_26853_p4 = ap_phi_mux_data_669_V_read683_1_phi_fu_16531_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_669_V_read683_s_phi_fu_26853_p4 = data_669_V_read.read();
    } else {
        ap_phi_mux_data_669_V_read683_s_phi_fu_26853_p4 = ap_phi_reg_pp0_iter0_data_669_V_read683_s_reg_26849.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_66_V_read80_ph_phi_fu_19014_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_66_V_read80_ph_phi_fu_19014_p4 = ap_phi_mux_data_66_V_read80_re_phi_fu_8089_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_66_V_read80_ph_phi_fu_19014_p4 = data_66_V_read.read();
    } else {
        ap_phi_mux_data_66_V_read80_ph_phi_fu_19014_p4 = ap_phi_reg_pp0_iter0_data_66_V_read80_ph_reg_19010.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_66_V_read80_re_phi_fu_8089_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_66_V_read80_re_phi_fu_8089_p6 = data_66_V_read80_ph_reg_19010.read();
    } else {
        ap_phi_mux_data_66_V_read80_re_phi_fu_8089_p6 = data_66_V_read80_re_reg_8085.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_670_V_read684_1_phi_fu_16545_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_670_V_read684_1_phi_fu_16545_p6 = data_670_V_read684_s_reg_26862.read();
    } else {
        ap_phi_mux_data_670_V_read684_1_phi_fu_16545_p6 = data_670_V_read684_1_reg_16541.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_670_V_read684_s_phi_fu_26866_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_670_V_read684_s_phi_fu_26866_p4 = ap_phi_mux_data_670_V_read684_1_phi_fu_16545_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_670_V_read684_s_phi_fu_26866_p4 = data_670_V_read.read();
    } else {
        ap_phi_mux_data_670_V_read684_s_phi_fu_26866_p4 = ap_phi_reg_pp0_iter0_data_670_V_read684_s_reg_26862.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_671_V_read685_1_phi_fu_16559_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_671_V_read685_1_phi_fu_16559_p6 = data_671_V_read685_s_reg_26875.read();
    } else {
        ap_phi_mux_data_671_V_read685_1_phi_fu_16559_p6 = data_671_V_read685_1_reg_16555.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_671_V_read685_s_phi_fu_26879_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_671_V_read685_s_phi_fu_26879_p4 = ap_phi_mux_data_671_V_read685_1_phi_fu_16559_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_671_V_read685_s_phi_fu_26879_p4 = data_671_V_read.read();
    } else {
        ap_phi_mux_data_671_V_read685_s_phi_fu_26879_p4 = ap_phi_reg_pp0_iter0_data_671_V_read685_s_reg_26875.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_672_V_read686_1_phi_fu_16573_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_672_V_read686_1_phi_fu_16573_p6 = data_672_V_read686_s_reg_26888.read();
    } else {
        ap_phi_mux_data_672_V_read686_1_phi_fu_16573_p6 = data_672_V_read686_1_reg_16569.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_672_V_read686_s_phi_fu_26892_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_672_V_read686_s_phi_fu_26892_p4 = ap_phi_mux_data_672_V_read686_1_phi_fu_16573_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_672_V_read686_s_phi_fu_26892_p4 = data_672_V_read.read();
    } else {
        ap_phi_mux_data_672_V_read686_s_phi_fu_26892_p4 = ap_phi_reg_pp0_iter0_data_672_V_read686_s_reg_26888.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_673_V_read687_1_phi_fu_16587_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_673_V_read687_1_phi_fu_16587_p6 = data_673_V_read687_s_reg_26901.read();
    } else {
        ap_phi_mux_data_673_V_read687_1_phi_fu_16587_p6 = data_673_V_read687_1_reg_16583.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_673_V_read687_s_phi_fu_26905_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_673_V_read687_s_phi_fu_26905_p4 = ap_phi_mux_data_673_V_read687_1_phi_fu_16587_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_673_V_read687_s_phi_fu_26905_p4 = data_673_V_read.read();
    } else {
        ap_phi_mux_data_673_V_read687_s_phi_fu_26905_p4 = ap_phi_reg_pp0_iter0_data_673_V_read687_s_reg_26901.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_674_V_read688_1_phi_fu_16601_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_674_V_read688_1_phi_fu_16601_p6 = data_674_V_read688_s_reg_26914.read();
    } else {
        ap_phi_mux_data_674_V_read688_1_phi_fu_16601_p6 = data_674_V_read688_1_reg_16597.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_674_V_read688_s_phi_fu_26918_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_674_V_read688_s_phi_fu_26918_p4 = ap_phi_mux_data_674_V_read688_1_phi_fu_16601_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_674_V_read688_s_phi_fu_26918_p4 = data_674_V_read.read();
    } else {
        ap_phi_mux_data_674_V_read688_s_phi_fu_26918_p4 = ap_phi_reg_pp0_iter0_data_674_V_read688_s_reg_26914.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_675_V_read689_1_phi_fu_16615_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_675_V_read689_1_phi_fu_16615_p6 = data_675_V_read689_s_reg_26927.read();
    } else {
        ap_phi_mux_data_675_V_read689_1_phi_fu_16615_p6 = data_675_V_read689_1_reg_16611.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_675_V_read689_s_phi_fu_26931_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_675_V_read689_s_phi_fu_26931_p4 = ap_phi_mux_data_675_V_read689_1_phi_fu_16615_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_675_V_read689_s_phi_fu_26931_p4 = data_675_V_read.read();
    } else {
        ap_phi_mux_data_675_V_read689_s_phi_fu_26931_p4 = ap_phi_reg_pp0_iter0_data_675_V_read689_s_reg_26927.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_676_V_read690_1_phi_fu_16629_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_676_V_read690_1_phi_fu_16629_p6 = data_676_V_read690_s_reg_26940.read();
    } else {
        ap_phi_mux_data_676_V_read690_1_phi_fu_16629_p6 = data_676_V_read690_1_reg_16625.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_676_V_read690_s_phi_fu_26944_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_676_V_read690_s_phi_fu_26944_p4 = ap_phi_mux_data_676_V_read690_1_phi_fu_16629_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_676_V_read690_s_phi_fu_26944_p4 = data_676_V_read.read();
    } else {
        ap_phi_mux_data_676_V_read690_s_phi_fu_26944_p4 = ap_phi_reg_pp0_iter0_data_676_V_read690_s_reg_26940.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_677_V_read691_1_phi_fu_16643_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_677_V_read691_1_phi_fu_16643_p6 = data_677_V_read691_s_reg_26953.read();
    } else {
        ap_phi_mux_data_677_V_read691_1_phi_fu_16643_p6 = data_677_V_read691_1_reg_16639.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_677_V_read691_s_phi_fu_26957_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_677_V_read691_s_phi_fu_26957_p4 = ap_phi_mux_data_677_V_read691_1_phi_fu_16643_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_677_V_read691_s_phi_fu_26957_p4 = data_677_V_read.read();
    } else {
        ap_phi_mux_data_677_V_read691_s_phi_fu_26957_p4 = ap_phi_reg_pp0_iter0_data_677_V_read691_s_reg_26953.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_678_V_read692_1_phi_fu_16657_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_678_V_read692_1_phi_fu_16657_p6 = data_678_V_read692_s_reg_26966.read();
    } else {
        ap_phi_mux_data_678_V_read692_1_phi_fu_16657_p6 = data_678_V_read692_1_reg_16653.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_678_V_read692_s_phi_fu_26970_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_678_V_read692_s_phi_fu_26970_p4 = ap_phi_mux_data_678_V_read692_1_phi_fu_16657_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_678_V_read692_s_phi_fu_26970_p4 = data_678_V_read.read();
    } else {
        ap_phi_mux_data_678_V_read692_s_phi_fu_26970_p4 = ap_phi_reg_pp0_iter0_data_678_V_read692_s_reg_26966.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_679_V_read693_1_phi_fu_16671_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_679_V_read693_1_phi_fu_16671_p6 = data_679_V_read693_s_reg_26979.read();
    } else {
        ap_phi_mux_data_679_V_read693_1_phi_fu_16671_p6 = data_679_V_read693_1_reg_16667.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_679_V_read693_s_phi_fu_26983_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_679_V_read693_s_phi_fu_26983_p4 = ap_phi_mux_data_679_V_read693_1_phi_fu_16671_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_679_V_read693_s_phi_fu_26983_p4 = data_679_V_read.read();
    } else {
        ap_phi_mux_data_679_V_read693_s_phi_fu_26983_p4 = ap_phi_reg_pp0_iter0_data_679_V_read693_s_reg_26979.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_67_V_read81_ph_phi_fu_19027_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_67_V_read81_ph_phi_fu_19027_p4 = ap_phi_mux_data_67_V_read81_re_phi_fu_8103_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_67_V_read81_ph_phi_fu_19027_p4 = data_67_V_read.read();
    } else {
        ap_phi_mux_data_67_V_read81_ph_phi_fu_19027_p4 = ap_phi_reg_pp0_iter0_data_67_V_read81_ph_reg_19023.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_67_V_read81_re_phi_fu_8103_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_67_V_read81_re_phi_fu_8103_p6 = data_67_V_read81_ph_reg_19023.read();
    } else {
        ap_phi_mux_data_67_V_read81_re_phi_fu_8103_p6 = data_67_V_read81_re_reg_8099.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_680_V_read694_1_phi_fu_16685_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_680_V_read694_1_phi_fu_16685_p6 = data_680_V_read694_s_reg_26992.read();
    } else {
        ap_phi_mux_data_680_V_read694_1_phi_fu_16685_p6 = data_680_V_read694_1_reg_16681.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_680_V_read694_s_phi_fu_26996_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_680_V_read694_s_phi_fu_26996_p4 = ap_phi_mux_data_680_V_read694_1_phi_fu_16685_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_680_V_read694_s_phi_fu_26996_p4 = data_680_V_read.read();
    } else {
        ap_phi_mux_data_680_V_read694_s_phi_fu_26996_p4 = ap_phi_reg_pp0_iter0_data_680_V_read694_s_reg_26992.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_681_V_read695_1_phi_fu_16699_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_681_V_read695_1_phi_fu_16699_p6 = data_681_V_read695_s_reg_27005.read();
    } else {
        ap_phi_mux_data_681_V_read695_1_phi_fu_16699_p6 = data_681_V_read695_1_reg_16695.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_681_V_read695_s_phi_fu_27009_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_681_V_read695_s_phi_fu_27009_p4 = ap_phi_mux_data_681_V_read695_1_phi_fu_16699_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_681_V_read695_s_phi_fu_27009_p4 = data_681_V_read.read();
    } else {
        ap_phi_mux_data_681_V_read695_s_phi_fu_27009_p4 = ap_phi_reg_pp0_iter0_data_681_V_read695_s_reg_27005.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_682_V_read696_1_phi_fu_16713_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_682_V_read696_1_phi_fu_16713_p6 = data_682_V_read696_s_reg_27018.read();
    } else {
        ap_phi_mux_data_682_V_read696_1_phi_fu_16713_p6 = data_682_V_read696_1_reg_16709.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_682_V_read696_s_phi_fu_27022_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_682_V_read696_s_phi_fu_27022_p4 = ap_phi_mux_data_682_V_read696_1_phi_fu_16713_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_682_V_read696_s_phi_fu_27022_p4 = data_682_V_read.read();
    } else {
        ap_phi_mux_data_682_V_read696_s_phi_fu_27022_p4 = ap_phi_reg_pp0_iter0_data_682_V_read696_s_reg_27018.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_683_V_read697_1_phi_fu_16727_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_683_V_read697_1_phi_fu_16727_p6 = data_683_V_read697_s_reg_27031.read();
    } else {
        ap_phi_mux_data_683_V_read697_1_phi_fu_16727_p6 = data_683_V_read697_1_reg_16723.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_683_V_read697_s_phi_fu_27035_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_683_V_read697_s_phi_fu_27035_p4 = ap_phi_mux_data_683_V_read697_1_phi_fu_16727_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_683_V_read697_s_phi_fu_27035_p4 = data_683_V_read.read();
    } else {
        ap_phi_mux_data_683_V_read697_s_phi_fu_27035_p4 = ap_phi_reg_pp0_iter0_data_683_V_read697_s_reg_27031.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_684_V_read698_1_phi_fu_16741_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_684_V_read698_1_phi_fu_16741_p6 = data_684_V_read698_s_reg_27044.read();
    } else {
        ap_phi_mux_data_684_V_read698_1_phi_fu_16741_p6 = data_684_V_read698_1_reg_16737.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_684_V_read698_s_phi_fu_27048_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_684_V_read698_s_phi_fu_27048_p4 = ap_phi_mux_data_684_V_read698_1_phi_fu_16741_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_684_V_read698_s_phi_fu_27048_p4 = data_684_V_read.read();
    } else {
        ap_phi_mux_data_684_V_read698_s_phi_fu_27048_p4 = ap_phi_reg_pp0_iter0_data_684_V_read698_s_reg_27044.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_685_V_read699_1_phi_fu_16755_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_685_V_read699_1_phi_fu_16755_p6 = data_685_V_read699_s_reg_27057.read();
    } else {
        ap_phi_mux_data_685_V_read699_1_phi_fu_16755_p6 = data_685_V_read699_1_reg_16751.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_685_V_read699_s_phi_fu_27061_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_685_V_read699_s_phi_fu_27061_p4 = ap_phi_mux_data_685_V_read699_1_phi_fu_16755_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_685_V_read699_s_phi_fu_27061_p4 = data_685_V_read.read();
    } else {
        ap_phi_mux_data_685_V_read699_s_phi_fu_27061_p4 = ap_phi_reg_pp0_iter0_data_685_V_read699_s_reg_27057.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_686_V_read700_1_phi_fu_16769_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_686_V_read700_1_phi_fu_16769_p6 = data_686_V_read700_s_reg_27070.read();
    } else {
        ap_phi_mux_data_686_V_read700_1_phi_fu_16769_p6 = data_686_V_read700_1_reg_16765.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_686_V_read700_s_phi_fu_27074_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_686_V_read700_s_phi_fu_27074_p4 = ap_phi_mux_data_686_V_read700_1_phi_fu_16769_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_686_V_read700_s_phi_fu_27074_p4 = data_686_V_read.read();
    } else {
        ap_phi_mux_data_686_V_read700_s_phi_fu_27074_p4 = ap_phi_reg_pp0_iter0_data_686_V_read700_s_reg_27070.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_687_V_read701_1_phi_fu_16783_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_687_V_read701_1_phi_fu_16783_p6 = data_687_V_read701_s_reg_27083.read();
    } else {
        ap_phi_mux_data_687_V_read701_1_phi_fu_16783_p6 = data_687_V_read701_1_reg_16779.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_687_V_read701_s_phi_fu_27087_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_687_V_read701_s_phi_fu_27087_p4 = ap_phi_mux_data_687_V_read701_1_phi_fu_16783_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_687_V_read701_s_phi_fu_27087_p4 = data_687_V_read.read();
    } else {
        ap_phi_mux_data_687_V_read701_s_phi_fu_27087_p4 = ap_phi_reg_pp0_iter0_data_687_V_read701_s_reg_27083.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_688_V_read702_1_phi_fu_16797_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_688_V_read702_1_phi_fu_16797_p6 = data_688_V_read702_s_reg_27096.read();
    } else {
        ap_phi_mux_data_688_V_read702_1_phi_fu_16797_p6 = data_688_V_read702_1_reg_16793.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_688_V_read702_s_phi_fu_27100_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_688_V_read702_s_phi_fu_27100_p4 = ap_phi_mux_data_688_V_read702_1_phi_fu_16797_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_688_V_read702_s_phi_fu_27100_p4 = data_688_V_read.read();
    } else {
        ap_phi_mux_data_688_V_read702_s_phi_fu_27100_p4 = ap_phi_reg_pp0_iter0_data_688_V_read702_s_reg_27096.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_689_V_read703_1_phi_fu_16811_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_689_V_read703_1_phi_fu_16811_p6 = data_689_V_read703_s_reg_27109.read();
    } else {
        ap_phi_mux_data_689_V_read703_1_phi_fu_16811_p6 = data_689_V_read703_1_reg_16807.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_689_V_read703_s_phi_fu_27113_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_689_V_read703_s_phi_fu_27113_p4 = ap_phi_mux_data_689_V_read703_1_phi_fu_16811_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_689_V_read703_s_phi_fu_27113_p4 = data_689_V_read.read();
    } else {
        ap_phi_mux_data_689_V_read703_s_phi_fu_27113_p4 = ap_phi_reg_pp0_iter0_data_689_V_read703_s_reg_27109.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_68_V_read82_ph_phi_fu_19040_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_68_V_read82_ph_phi_fu_19040_p4 = ap_phi_mux_data_68_V_read82_re_phi_fu_8117_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_68_V_read82_ph_phi_fu_19040_p4 = data_68_V_read.read();
    } else {
        ap_phi_mux_data_68_V_read82_ph_phi_fu_19040_p4 = ap_phi_reg_pp0_iter0_data_68_V_read82_ph_reg_19036.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_68_V_read82_re_phi_fu_8117_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_68_V_read82_re_phi_fu_8117_p6 = data_68_V_read82_ph_reg_19036.read();
    } else {
        ap_phi_mux_data_68_V_read82_re_phi_fu_8117_p6 = data_68_V_read82_re_reg_8113.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_690_V_read704_1_phi_fu_16825_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_690_V_read704_1_phi_fu_16825_p6 = data_690_V_read704_s_reg_27122.read();
    } else {
        ap_phi_mux_data_690_V_read704_1_phi_fu_16825_p6 = data_690_V_read704_1_reg_16821.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_690_V_read704_s_phi_fu_27126_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_690_V_read704_s_phi_fu_27126_p4 = ap_phi_mux_data_690_V_read704_1_phi_fu_16825_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_690_V_read704_s_phi_fu_27126_p4 = data_690_V_read.read();
    } else {
        ap_phi_mux_data_690_V_read704_s_phi_fu_27126_p4 = ap_phi_reg_pp0_iter0_data_690_V_read704_s_reg_27122.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_691_V_read705_1_phi_fu_16839_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_691_V_read705_1_phi_fu_16839_p6 = data_691_V_read705_s_reg_27135.read();
    } else {
        ap_phi_mux_data_691_V_read705_1_phi_fu_16839_p6 = data_691_V_read705_1_reg_16835.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_691_V_read705_s_phi_fu_27139_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_691_V_read705_s_phi_fu_27139_p4 = ap_phi_mux_data_691_V_read705_1_phi_fu_16839_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_691_V_read705_s_phi_fu_27139_p4 = data_691_V_read.read();
    } else {
        ap_phi_mux_data_691_V_read705_s_phi_fu_27139_p4 = ap_phi_reg_pp0_iter0_data_691_V_read705_s_reg_27135.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_692_V_read706_1_phi_fu_16853_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_692_V_read706_1_phi_fu_16853_p6 = data_692_V_read706_s_reg_27148.read();
    } else {
        ap_phi_mux_data_692_V_read706_1_phi_fu_16853_p6 = data_692_V_read706_1_reg_16849.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_692_V_read706_s_phi_fu_27152_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_692_V_read706_s_phi_fu_27152_p4 = ap_phi_mux_data_692_V_read706_1_phi_fu_16853_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_692_V_read706_s_phi_fu_27152_p4 = data_692_V_read.read();
    } else {
        ap_phi_mux_data_692_V_read706_s_phi_fu_27152_p4 = ap_phi_reg_pp0_iter0_data_692_V_read706_s_reg_27148.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_693_V_read707_1_phi_fu_16867_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_693_V_read707_1_phi_fu_16867_p6 = data_693_V_read707_s_reg_27161.read();
    } else {
        ap_phi_mux_data_693_V_read707_1_phi_fu_16867_p6 = data_693_V_read707_1_reg_16863.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_693_V_read707_s_phi_fu_27165_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_693_V_read707_s_phi_fu_27165_p4 = ap_phi_mux_data_693_V_read707_1_phi_fu_16867_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_693_V_read707_s_phi_fu_27165_p4 = data_693_V_read.read();
    } else {
        ap_phi_mux_data_693_V_read707_s_phi_fu_27165_p4 = ap_phi_reg_pp0_iter0_data_693_V_read707_s_reg_27161.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_694_V_read708_1_phi_fu_16881_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_694_V_read708_1_phi_fu_16881_p6 = data_694_V_read708_s_reg_27174.read();
    } else {
        ap_phi_mux_data_694_V_read708_1_phi_fu_16881_p6 = data_694_V_read708_1_reg_16877.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_694_V_read708_s_phi_fu_27178_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_694_V_read708_s_phi_fu_27178_p4 = ap_phi_mux_data_694_V_read708_1_phi_fu_16881_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_694_V_read708_s_phi_fu_27178_p4 = data_694_V_read.read();
    } else {
        ap_phi_mux_data_694_V_read708_s_phi_fu_27178_p4 = ap_phi_reg_pp0_iter0_data_694_V_read708_s_reg_27174.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_695_V_read709_1_phi_fu_16895_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_695_V_read709_1_phi_fu_16895_p6 = data_695_V_read709_s_reg_27187.read();
    } else {
        ap_phi_mux_data_695_V_read709_1_phi_fu_16895_p6 = data_695_V_read709_1_reg_16891.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_695_V_read709_s_phi_fu_27191_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_695_V_read709_s_phi_fu_27191_p4 = ap_phi_mux_data_695_V_read709_1_phi_fu_16895_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_695_V_read709_s_phi_fu_27191_p4 = data_695_V_read.read();
    } else {
        ap_phi_mux_data_695_V_read709_s_phi_fu_27191_p4 = ap_phi_reg_pp0_iter0_data_695_V_read709_s_reg_27187.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_696_V_read710_1_phi_fu_16909_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_696_V_read710_1_phi_fu_16909_p6 = data_696_V_read710_s_reg_27200.read();
    } else {
        ap_phi_mux_data_696_V_read710_1_phi_fu_16909_p6 = data_696_V_read710_1_reg_16905.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_696_V_read710_s_phi_fu_27204_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_696_V_read710_s_phi_fu_27204_p4 = ap_phi_mux_data_696_V_read710_1_phi_fu_16909_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_696_V_read710_s_phi_fu_27204_p4 = data_696_V_read.read();
    } else {
        ap_phi_mux_data_696_V_read710_s_phi_fu_27204_p4 = ap_phi_reg_pp0_iter0_data_696_V_read710_s_reg_27200.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_697_V_read711_1_phi_fu_16923_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_697_V_read711_1_phi_fu_16923_p6 = data_697_V_read711_s_reg_27213.read();
    } else {
        ap_phi_mux_data_697_V_read711_1_phi_fu_16923_p6 = data_697_V_read711_1_reg_16919.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_697_V_read711_s_phi_fu_27217_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_697_V_read711_s_phi_fu_27217_p4 = ap_phi_mux_data_697_V_read711_1_phi_fu_16923_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_697_V_read711_s_phi_fu_27217_p4 = data_697_V_read.read();
    } else {
        ap_phi_mux_data_697_V_read711_s_phi_fu_27217_p4 = ap_phi_reg_pp0_iter0_data_697_V_read711_s_reg_27213.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_698_V_read712_1_phi_fu_16937_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_698_V_read712_1_phi_fu_16937_p6 = data_698_V_read712_s_reg_27226.read();
    } else {
        ap_phi_mux_data_698_V_read712_1_phi_fu_16937_p6 = data_698_V_read712_1_reg_16933.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_698_V_read712_s_phi_fu_27230_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_698_V_read712_s_phi_fu_27230_p4 = ap_phi_mux_data_698_V_read712_1_phi_fu_16937_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_698_V_read712_s_phi_fu_27230_p4 = data_698_V_read.read();
    } else {
        ap_phi_mux_data_698_V_read712_s_phi_fu_27230_p4 = ap_phi_reg_pp0_iter0_data_698_V_read712_s_reg_27226.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_699_V_read713_1_phi_fu_16951_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_699_V_read713_1_phi_fu_16951_p6 = data_699_V_read713_s_reg_27239.read();
    } else {
        ap_phi_mux_data_699_V_read713_1_phi_fu_16951_p6 = data_699_V_read713_1_reg_16947.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_699_V_read713_s_phi_fu_27243_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_699_V_read713_s_phi_fu_27243_p4 = ap_phi_mux_data_699_V_read713_1_phi_fu_16951_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_699_V_read713_s_phi_fu_27243_p4 = data_699_V_read.read();
    } else {
        ap_phi_mux_data_699_V_read713_s_phi_fu_27243_p4 = ap_phi_reg_pp0_iter0_data_699_V_read713_s_reg_27239.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_69_V_read83_ph_phi_fu_19053_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_69_V_read83_ph_phi_fu_19053_p4 = ap_phi_mux_data_69_V_read83_re_phi_fu_8131_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_69_V_read83_ph_phi_fu_19053_p4 = data_69_V_read.read();
    } else {
        ap_phi_mux_data_69_V_read83_ph_phi_fu_19053_p4 = ap_phi_reg_pp0_iter0_data_69_V_read83_ph_reg_19049.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_69_V_read83_re_phi_fu_8131_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_69_V_read83_re_phi_fu_8131_p6 = data_69_V_read83_ph_reg_19049.read();
    } else {
        ap_phi_mux_data_69_V_read83_re_phi_fu_8131_p6 = data_69_V_read83_re_reg_8127.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_6_V_read20_phi_phi_fu_18234_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_6_V_read20_phi_phi_fu_18234_p4 = ap_phi_mux_data_6_V_read20_rew_phi_fu_7249_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_6_V_read20_phi_phi_fu_18234_p4 = data_6_V_read.read();
    } else {
        ap_phi_mux_data_6_V_read20_phi_phi_fu_18234_p4 = ap_phi_reg_pp0_iter0_data_6_V_read20_phi_reg_18230.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_6_V_read20_rew_phi_fu_7249_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_6_V_read20_rew_phi_fu_7249_p6 = data_6_V_read20_phi_reg_18230.read();
    } else {
        ap_phi_mux_data_6_V_read20_rew_phi_fu_7249_p6 = data_6_V_read20_rew_reg_7245.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_700_V_read714_1_phi_fu_16965_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_700_V_read714_1_phi_fu_16965_p6 = data_700_V_read714_s_reg_27252.read();
    } else {
        ap_phi_mux_data_700_V_read714_1_phi_fu_16965_p6 = data_700_V_read714_1_reg_16961.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_700_V_read714_s_phi_fu_27256_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_700_V_read714_s_phi_fu_27256_p4 = ap_phi_mux_data_700_V_read714_1_phi_fu_16965_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_700_V_read714_s_phi_fu_27256_p4 = data_700_V_read.read();
    } else {
        ap_phi_mux_data_700_V_read714_s_phi_fu_27256_p4 = ap_phi_reg_pp0_iter0_data_700_V_read714_s_reg_27252.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_701_V_read715_1_phi_fu_16979_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_701_V_read715_1_phi_fu_16979_p6 = data_701_V_read715_s_reg_27265.read();
    } else {
        ap_phi_mux_data_701_V_read715_1_phi_fu_16979_p6 = data_701_V_read715_1_reg_16975.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_701_V_read715_s_phi_fu_27269_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_701_V_read715_s_phi_fu_27269_p4 = ap_phi_mux_data_701_V_read715_1_phi_fu_16979_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_701_V_read715_s_phi_fu_27269_p4 = data_701_V_read.read();
    } else {
        ap_phi_mux_data_701_V_read715_s_phi_fu_27269_p4 = ap_phi_reg_pp0_iter0_data_701_V_read715_s_reg_27265.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_702_V_read716_1_phi_fu_16993_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_702_V_read716_1_phi_fu_16993_p6 = data_702_V_read716_s_reg_27278.read();
    } else {
        ap_phi_mux_data_702_V_read716_1_phi_fu_16993_p6 = data_702_V_read716_1_reg_16989.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_702_V_read716_s_phi_fu_27282_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_702_V_read716_s_phi_fu_27282_p4 = ap_phi_mux_data_702_V_read716_1_phi_fu_16993_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_702_V_read716_s_phi_fu_27282_p4 = data_702_V_read.read();
    } else {
        ap_phi_mux_data_702_V_read716_s_phi_fu_27282_p4 = ap_phi_reg_pp0_iter0_data_702_V_read716_s_reg_27278.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_703_V_read717_1_phi_fu_17007_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_703_V_read717_1_phi_fu_17007_p6 = data_703_V_read717_s_reg_27291.read();
    } else {
        ap_phi_mux_data_703_V_read717_1_phi_fu_17007_p6 = data_703_V_read717_1_reg_17003.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_703_V_read717_s_phi_fu_27295_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_703_V_read717_s_phi_fu_27295_p4 = ap_phi_mux_data_703_V_read717_1_phi_fu_17007_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_703_V_read717_s_phi_fu_27295_p4 = data_703_V_read.read();
    } else {
        ap_phi_mux_data_703_V_read717_s_phi_fu_27295_p4 = ap_phi_reg_pp0_iter0_data_703_V_read717_s_reg_27291.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_704_V_read718_1_phi_fu_17021_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_704_V_read718_1_phi_fu_17021_p6 = data_704_V_read718_s_reg_27304.read();
    } else {
        ap_phi_mux_data_704_V_read718_1_phi_fu_17021_p6 = data_704_V_read718_1_reg_17017.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_704_V_read718_s_phi_fu_27308_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_704_V_read718_s_phi_fu_27308_p4 = ap_phi_mux_data_704_V_read718_1_phi_fu_17021_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_704_V_read718_s_phi_fu_27308_p4 = data_704_V_read.read();
    } else {
        ap_phi_mux_data_704_V_read718_s_phi_fu_27308_p4 = ap_phi_reg_pp0_iter0_data_704_V_read718_s_reg_27304.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_705_V_read719_1_phi_fu_17035_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_705_V_read719_1_phi_fu_17035_p6 = data_705_V_read719_s_reg_27317.read();
    } else {
        ap_phi_mux_data_705_V_read719_1_phi_fu_17035_p6 = data_705_V_read719_1_reg_17031.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_705_V_read719_s_phi_fu_27321_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_705_V_read719_s_phi_fu_27321_p4 = ap_phi_mux_data_705_V_read719_1_phi_fu_17035_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_705_V_read719_s_phi_fu_27321_p4 = data_705_V_read.read();
    } else {
        ap_phi_mux_data_705_V_read719_s_phi_fu_27321_p4 = ap_phi_reg_pp0_iter0_data_705_V_read719_s_reg_27317.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_706_V_read720_1_phi_fu_17049_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_706_V_read720_1_phi_fu_17049_p6 = data_706_V_read720_s_reg_27330.read();
    } else {
        ap_phi_mux_data_706_V_read720_1_phi_fu_17049_p6 = data_706_V_read720_1_reg_17045.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_706_V_read720_s_phi_fu_27334_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_706_V_read720_s_phi_fu_27334_p4 = ap_phi_mux_data_706_V_read720_1_phi_fu_17049_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_706_V_read720_s_phi_fu_27334_p4 = data_706_V_read.read();
    } else {
        ap_phi_mux_data_706_V_read720_s_phi_fu_27334_p4 = ap_phi_reg_pp0_iter0_data_706_V_read720_s_reg_27330.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_707_V_read721_1_phi_fu_17063_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_707_V_read721_1_phi_fu_17063_p6 = data_707_V_read721_s_reg_27343.read();
    } else {
        ap_phi_mux_data_707_V_read721_1_phi_fu_17063_p6 = data_707_V_read721_1_reg_17059.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_707_V_read721_s_phi_fu_27347_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_707_V_read721_s_phi_fu_27347_p4 = ap_phi_mux_data_707_V_read721_1_phi_fu_17063_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_707_V_read721_s_phi_fu_27347_p4 = data_707_V_read.read();
    } else {
        ap_phi_mux_data_707_V_read721_s_phi_fu_27347_p4 = ap_phi_reg_pp0_iter0_data_707_V_read721_s_reg_27343.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_708_V_read722_1_phi_fu_17077_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_708_V_read722_1_phi_fu_17077_p6 = data_708_V_read722_s_reg_27356.read();
    } else {
        ap_phi_mux_data_708_V_read722_1_phi_fu_17077_p6 = data_708_V_read722_1_reg_17073.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_708_V_read722_s_phi_fu_27360_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_708_V_read722_s_phi_fu_27360_p4 = ap_phi_mux_data_708_V_read722_1_phi_fu_17077_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_708_V_read722_s_phi_fu_27360_p4 = data_708_V_read.read();
    } else {
        ap_phi_mux_data_708_V_read722_s_phi_fu_27360_p4 = ap_phi_reg_pp0_iter0_data_708_V_read722_s_reg_27356.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_709_V_read723_1_phi_fu_17091_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_709_V_read723_1_phi_fu_17091_p6 = data_709_V_read723_s_reg_27369.read();
    } else {
        ap_phi_mux_data_709_V_read723_1_phi_fu_17091_p6 = data_709_V_read723_1_reg_17087.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_709_V_read723_s_phi_fu_27373_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_709_V_read723_s_phi_fu_27373_p4 = ap_phi_mux_data_709_V_read723_1_phi_fu_17091_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_709_V_read723_s_phi_fu_27373_p4 = data_709_V_read.read();
    } else {
        ap_phi_mux_data_709_V_read723_s_phi_fu_27373_p4 = ap_phi_reg_pp0_iter0_data_709_V_read723_s_reg_27369.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_70_V_read84_ph_phi_fu_19066_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_70_V_read84_ph_phi_fu_19066_p4 = ap_phi_mux_data_70_V_read84_re_phi_fu_8145_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_70_V_read84_ph_phi_fu_19066_p4 = data_70_V_read.read();
    } else {
        ap_phi_mux_data_70_V_read84_ph_phi_fu_19066_p4 = ap_phi_reg_pp0_iter0_data_70_V_read84_ph_reg_19062.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_70_V_read84_re_phi_fu_8145_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_70_V_read84_re_phi_fu_8145_p6 = data_70_V_read84_ph_reg_19062.read();
    } else {
        ap_phi_mux_data_70_V_read84_re_phi_fu_8145_p6 = data_70_V_read84_re_reg_8141.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_710_V_read724_1_phi_fu_17105_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_710_V_read724_1_phi_fu_17105_p6 = data_710_V_read724_s_reg_27382.read();
    } else {
        ap_phi_mux_data_710_V_read724_1_phi_fu_17105_p6 = data_710_V_read724_1_reg_17101.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_710_V_read724_s_phi_fu_27386_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_710_V_read724_s_phi_fu_27386_p4 = ap_phi_mux_data_710_V_read724_1_phi_fu_17105_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_710_V_read724_s_phi_fu_27386_p4 = data_710_V_read.read();
    } else {
        ap_phi_mux_data_710_V_read724_s_phi_fu_27386_p4 = ap_phi_reg_pp0_iter0_data_710_V_read724_s_reg_27382.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_711_V_read725_1_phi_fu_17119_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_711_V_read725_1_phi_fu_17119_p6 = data_711_V_read725_s_reg_27395.read();
    } else {
        ap_phi_mux_data_711_V_read725_1_phi_fu_17119_p6 = data_711_V_read725_1_reg_17115.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_711_V_read725_s_phi_fu_27399_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_711_V_read725_s_phi_fu_27399_p4 = ap_phi_mux_data_711_V_read725_1_phi_fu_17119_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_711_V_read725_s_phi_fu_27399_p4 = data_711_V_read.read();
    } else {
        ap_phi_mux_data_711_V_read725_s_phi_fu_27399_p4 = ap_phi_reg_pp0_iter0_data_711_V_read725_s_reg_27395.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_712_V_read726_1_phi_fu_17133_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_712_V_read726_1_phi_fu_17133_p6 = data_712_V_read726_s_reg_27408.read();
    } else {
        ap_phi_mux_data_712_V_read726_1_phi_fu_17133_p6 = data_712_V_read726_1_reg_17129.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_712_V_read726_s_phi_fu_27412_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_712_V_read726_s_phi_fu_27412_p4 = ap_phi_mux_data_712_V_read726_1_phi_fu_17133_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_712_V_read726_s_phi_fu_27412_p4 = data_712_V_read.read();
    } else {
        ap_phi_mux_data_712_V_read726_s_phi_fu_27412_p4 = ap_phi_reg_pp0_iter0_data_712_V_read726_s_reg_27408.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_713_V_read727_1_phi_fu_17147_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_713_V_read727_1_phi_fu_17147_p6 = data_713_V_read727_s_reg_27421.read();
    } else {
        ap_phi_mux_data_713_V_read727_1_phi_fu_17147_p6 = data_713_V_read727_1_reg_17143.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_713_V_read727_s_phi_fu_27425_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_713_V_read727_s_phi_fu_27425_p4 = ap_phi_mux_data_713_V_read727_1_phi_fu_17147_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_713_V_read727_s_phi_fu_27425_p4 = data_713_V_read.read();
    } else {
        ap_phi_mux_data_713_V_read727_s_phi_fu_27425_p4 = ap_phi_reg_pp0_iter0_data_713_V_read727_s_reg_27421.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_714_V_read728_1_phi_fu_17161_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_714_V_read728_1_phi_fu_17161_p6 = data_714_V_read728_s_reg_27434.read();
    } else {
        ap_phi_mux_data_714_V_read728_1_phi_fu_17161_p6 = data_714_V_read728_1_reg_17157.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_714_V_read728_s_phi_fu_27438_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_714_V_read728_s_phi_fu_27438_p4 = ap_phi_mux_data_714_V_read728_1_phi_fu_17161_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_714_V_read728_s_phi_fu_27438_p4 = data_714_V_read.read();
    } else {
        ap_phi_mux_data_714_V_read728_s_phi_fu_27438_p4 = ap_phi_reg_pp0_iter0_data_714_V_read728_s_reg_27434.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_715_V_read729_1_phi_fu_17175_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_715_V_read729_1_phi_fu_17175_p6 = data_715_V_read729_s_reg_27447.read();
    } else {
        ap_phi_mux_data_715_V_read729_1_phi_fu_17175_p6 = data_715_V_read729_1_reg_17171.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_715_V_read729_s_phi_fu_27451_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_715_V_read729_s_phi_fu_27451_p4 = ap_phi_mux_data_715_V_read729_1_phi_fu_17175_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_715_V_read729_s_phi_fu_27451_p4 = data_715_V_read.read();
    } else {
        ap_phi_mux_data_715_V_read729_s_phi_fu_27451_p4 = ap_phi_reg_pp0_iter0_data_715_V_read729_s_reg_27447.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_716_V_read730_1_phi_fu_17189_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_716_V_read730_1_phi_fu_17189_p6 = data_716_V_read730_s_reg_27460.read();
    } else {
        ap_phi_mux_data_716_V_read730_1_phi_fu_17189_p6 = data_716_V_read730_1_reg_17185.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_716_V_read730_s_phi_fu_27464_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_716_V_read730_s_phi_fu_27464_p4 = ap_phi_mux_data_716_V_read730_1_phi_fu_17189_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_716_V_read730_s_phi_fu_27464_p4 = data_716_V_read.read();
    } else {
        ap_phi_mux_data_716_V_read730_s_phi_fu_27464_p4 = ap_phi_reg_pp0_iter0_data_716_V_read730_s_reg_27460.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_717_V_read731_1_phi_fu_17203_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_717_V_read731_1_phi_fu_17203_p6 = data_717_V_read731_s_reg_27473.read();
    } else {
        ap_phi_mux_data_717_V_read731_1_phi_fu_17203_p6 = data_717_V_read731_1_reg_17199.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_717_V_read731_s_phi_fu_27477_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_717_V_read731_s_phi_fu_27477_p4 = ap_phi_mux_data_717_V_read731_1_phi_fu_17203_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_717_V_read731_s_phi_fu_27477_p4 = data_717_V_read.read();
    } else {
        ap_phi_mux_data_717_V_read731_s_phi_fu_27477_p4 = ap_phi_reg_pp0_iter0_data_717_V_read731_s_reg_27473.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_718_V_read732_1_phi_fu_17217_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_718_V_read732_1_phi_fu_17217_p6 = data_718_V_read732_s_reg_27486.read();
    } else {
        ap_phi_mux_data_718_V_read732_1_phi_fu_17217_p6 = data_718_V_read732_1_reg_17213.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_718_V_read732_s_phi_fu_27490_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_718_V_read732_s_phi_fu_27490_p4 = ap_phi_mux_data_718_V_read732_1_phi_fu_17217_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_718_V_read732_s_phi_fu_27490_p4 = data_718_V_read.read();
    } else {
        ap_phi_mux_data_718_V_read732_s_phi_fu_27490_p4 = ap_phi_reg_pp0_iter0_data_718_V_read732_s_reg_27486.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_719_V_read733_1_phi_fu_17231_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_719_V_read733_1_phi_fu_17231_p6 = data_719_V_read733_s_reg_27499.read();
    } else {
        ap_phi_mux_data_719_V_read733_1_phi_fu_17231_p6 = data_719_V_read733_1_reg_17227.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_719_V_read733_s_phi_fu_27503_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_719_V_read733_s_phi_fu_27503_p4 = ap_phi_mux_data_719_V_read733_1_phi_fu_17231_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_719_V_read733_s_phi_fu_27503_p4 = data_719_V_read.read();
    } else {
        ap_phi_mux_data_719_V_read733_s_phi_fu_27503_p4 = ap_phi_reg_pp0_iter0_data_719_V_read733_s_reg_27499.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_71_V_read85_ph_phi_fu_19079_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_71_V_read85_ph_phi_fu_19079_p4 = ap_phi_mux_data_71_V_read85_re_phi_fu_8159_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_71_V_read85_ph_phi_fu_19079_p4 = data_71_V_read.read();
    } else {
        ap_phi_mux_data_71_V_read85_ph_phi_fu_19079_p4 = ap_phi_reg_pp0_iter0_data_71_V_read85_ph_reg_19075.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_71_V_read85_re_phi_fu_8159_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_71_V_read85_re_phi_fu_8159_p6 = data_71_V_read85_ph_reg_19075.read();
    } else {
        ap_phi_mux_data_71_V_read85_re_phi_fu_8159_p6 = data_71_V_read85_re_reg_8155.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_720_V_read734_1_phi_fu_17245_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_720_V_read734_1_phi_fu_17245_p6 = data_720_V_read734_s_reg_27512.read();
    } else {
        ap_phi_mux_data_720_V_read734_1_phi_fu_17245_p6 = data_720_V_read734_1_reg_17241.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_720_V_read734_s_phi_fu_27516_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_720_V_read734_s_phi_fu_27516_p4 = ap_phi_mux_data_720_V_read734_1_phi_fu_17245_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_720_V_read734_s_phi_fu_27516_p4 = data_720_V_read.read();
    } else {
        ap_phi_mux_data_720_V_read734_s_phi_fu_27516_p4 = ap_phi_reg_pp0_iter0_data_720_V_read734_s_reg_27512.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_721_V_read735_1_phi_fu_17259_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_721_V_read735_1_phi_fu_17259_p6 = data_721_V_read735_s_reg_27525.read();
    } else {
        ap_phi_mux_data_721_V_read735_1_phi_fu_17259_p6 = data_721_V_read735_1_reg_17255.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_721_V_read735_s_phi_fu_27529_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_721_V_read735_s_phi_fu_27529_p4 = ap_phi_mux_data_721_V_read735_1_phi_fu_17259_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_721_V_read735_s_phi_fu_27529_p4 = data_721_V_read.read();
    } else {
        ap_phi_mux_data_721_V_read735_s_phi_fu_27529_p4 = ap_phi_reg_pp0_iter0_data_721_V_read735_s_reg_27525.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_722_V_read736_1_phi_fu_17273_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_722_V_read736_1_phi_fu_17273_p6 = data_722_V_read736_s_reg_27538.read();
    } else {
        ap_phi_mux_data_722_V_read736_1_phi_fu_17273_p6 = data_722_V_read736_1_reg_17269.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_722_V_read736_s_phi_fu_27542_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_722_V_read736_s_phi_fu_27542_p4 = ap_phi_mux_data_722_V_read736_1_phi_fu_17273_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_722_V_read736_s_phi_fu_27542_p4 = data_722_V_read.read();
    } else {
        ap_phi_mux_data_722_V_read736_s_phi_fu_27542_p4 = ap_phi_reg_pp0_iter0_data_722_V_read736_s_reg_27538.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_723_V_read737_1_phi_fu_17287_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_723_V_read737_1_phi_fu_17287_p6 = data_723_V_read737_s_reg_27551.read();
    } else {
        ap_phi_mux_data_723_V_read737_1_phi_fu_17287_p6 = data_723_V_read737_1_reg_17283.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_723_V_read737_s_phi_fu_27555_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_723_V_read737_s_phi_fu_27555_p4 = ap_phi_mux_data_723_V_read737_1_phi_fu_17287_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_723_V_read737_s_phi_fu_27555_p4 = data_723_V_read.read();
    } else {
        ap_phi_mux_data_723_V_read737_s_phi_fu_27555_p4 = ap_phi_reg_pp0_iter0_data_723_V_read737_s_reg_27551.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_724_V_read738_1_phi_fu_17301_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_724_V_read738_1_phi_fu_17301_p6 = data_724_V_read738_s_reg_27564.read();
    } else {
        ap_phi_mux_data_724_V_read738_1_phi_fu_17301_p6 = data_724_V_read738_1_reg_17297.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_724_V_read738_s_phi_fu_27568_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_724_V_read738_s_phi_fu_27568_p4 = ap_phi_mux_data_724_V_read738_1_phi_fu_17301_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_724_V_read738_s_phi_fu_27568_p4 = data_724_V_read.read();
    } else {
        ap_phi_mux_data_724_V_read738_s_phi_fu_27568_p4 = ap_phi_reg_pp0_iter0_data_724_V_read738_s_reg_27564.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_725_V_read739_1_phi_fu_17315_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_725_V_read739_1_phi_fu_17315_p6 = data_725_V_read739_s_reg_27577.read();
    } else {
        ap_phi_mux_data_725_V_read739_1_phi_fu_17315_p6 = data_725_V_read739_1_reg_17311.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_725_V_read739_s_phi_fu_27581_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_725_V_read739_s_phi_fu_27581_p4 = ap_phi_mux_data_725_V_read739_1_phi_fu_17315_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_725_V_read739_s_phi_fu_27581_p4 = data_725_V_read.read();
    } else {
        ap_phi_mux_data_725_V_read739_s_phi_fu_27581_p4 = ap_phi_reg_pp0_iter0_data_725_V_read739_s_reg_27577.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_726_V_read740_1_phi_fu_17329_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_726_V_read740_1_phi_fu_17329_p6 = data_726_V_read740_s_reg_27590.read();
    } else {
        ap_phi_mux_data_726_V_read740_1_phi_fu_17329_p6 = data_726_V_read740_1_reg_17325.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_726_V_read740_s_phi_fu_27594_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_726_V_read740_s_phi_fu_27594_p4 = ap_phi_mux_data_726_V_read740_1_phi_fu_17329_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_726_V_read740_s_phi_fu_27594_p4 = data_726_V_read.read();
    } else {
        ap_phi_mux_data_726_V_read740_s_phi_fu_27594_p4 = ap_phi_reg_pp0_iter0_data_726_V_read740_s_reg_27590.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_727_V_read741_1_phi_fu_17343_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_727_V_read741_1_phi_fu_17343_p6 = data_727_V_read741_s_reg_27603.read();
    } else {
        ap_phi_mux_data_727_V_read741_1_phi_fu_17343_p6 = data_727_V_read741_1_reg_17339.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_727_V_read741_s_phi_fu_27607_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_727_V_read741_s_phi_fu_27607_p4 = ap_phi_mux_data_727_V_read741_1_phi_fu_17343_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_727_V_read741_s_phi_fu_27607_p4 = data_727_V_read.read();
    } else {
        ap_phi_mux_data_727_V_read741_s_phi_fu_27607_p4 = ap_phi_reg_pp0_iter0_data_727_V_read741_s_reg_27603.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_728_V_read742_1_phi_fu_17357_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_728_V_read742_1_phi_fu_17357_p6 = data_728_V_read742_s_reg_27616.read();
    } else {
        ap_phi_mux_data_728_V_read742_1_phi_fu_17357_p6 = data_728_V_read742_1_reg_17353.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_728_V_read742_s_phi_fu_27620_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_728_V_read742_s_phi_fu_27620_p4 = ap_phi_mux_data_728_V_read742_1_phi_fu_17357_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_728_V_read742_s_phi_fu_27620_p4 = data_728_V_read.read();
    } else {
        ap_phi_mux_data_728_V_read742_s_phi_fu_27620_p4 = ap_phi_reg_pp0_iter0_data_728_V_read742_s_reg_27616.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_729_V_read743_1_phi_fu_17371_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_729_V_read743_1_phi_fu_17371_p6 = data_729_V_read743_s_reg_27629.read();
    } else {
        ap_phi_mux_data_729_V_read743_1_phi_fu_17371_p6 = data_729_V_read743_1_reg_17367.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_729_V_read743_s_phi_fu_27633_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_729_V_read743_s_phi_fu_27633_p4 = ap_phi_mux_data_729_V_read743_1_phi_fu_17371_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_729_V_read743_s_phi_fu_27633_p4 = data_729_V_read.read();
    } else {
        ap_phi_mux_data_729_V_read743_s_phi_fu_27633_p4 = ap_phi_reg_pp0_iter0_data_729_V_read743_s_reg_27629.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_72_V_read86_ph_phi_fu_19092_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_72_V_read86_ph_phi_fu_19092_p4 = ap_phi_mux_data_72_V_read86_re_phi_fu_8173_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_72_V_read86_ph_phi_fu_19092_p4 = data_72_V_read.read();
    } else {
        ap_phi_mux_data_72_V_read86_ph_phi_fu_19092_p4 = ap_phi_reg_pp0_iter0_data_72_V_read86_ph_reg_19088.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_72_V_read86_re_phi_fu_8173_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_72_V_read86_re_phi_fu_8173_p6 = data_72_V_read86_ph_reg_19088.read();
    } else {
        ap_phi_mux_data_72_V_read86_re_phi_fu_8173_p6 = data_72_V_read86_re_reg_8169.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_730_V_read744_1_phi_fu_17385_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_730_V_read744_1_phi_fu_17385_p6 = data_730_V_read744_s_reg_27642.read();
    } else {
        ap_phi_mux_data_730_V_read744_1_phi_fu_17385_p6 = data_730_V_read744_1_reg_17381.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_730_V_read744_s_phi_fu_27646_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_730_V_read744_s_phi_fu_27646_p4 = ap_phi_mux_data_730_V_read744_1_phi_fu_17385_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_730_V_read744_s_phi_fu_27646_p4 = data_730_V_read.read();
    } else {
        ap_phi_mux_data_730_V_read744_s_phi_fu_27646_p4 = ap_phi_reg_pp0_iter0_data_730_V_read744_s_reg_27642.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_731_V_read745_1_phi_fu_17399_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_731_V_read745_1_phi_fu_17399_p6 = data_731_V_read745_s_reg_27655.read();
    } else {
        ap_phi_mux_data_731_V_read745_1_phi_fu_17399_p6 = data_731_V_read745_1_reg_17395.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_731_V_read745_s_phi_fu_27659_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_731_V_read745_s_phi_fu_27659_p4 = ap_phi_mux_data_731_V_read745_1_phi_fu_17399_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_731_V_read745_s_phi_fu_27659_p4 = data_731_V_read.read();
    } else {
        ap_phi_mux_data_731_V_read745_s_phi_fu_27659_p4 = ap_phi_reg_pp0_iter0_data_731_V_read745_s_reg_27655.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_732_V_read746_1_phi_fu_17413_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_732_V_read746_1_phi_fu_17413_p6 = data_732_V_read746_s_reg_27668.read();
    } else {
        ap_phi_mux_data_732_V_read746_1_phi_fu_17413_p6 = data_732_V_read746_1_reg_17409.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_732_V_read746_s_phi_fu_27672_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_732_V_read746_s_phi_fu_27672_p4 = ap_phi_mux_data_732_V_read746_1_phi_fu_17413_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_732_V_read746_s_phi_fu_27672_p4 = data_732_V_read.read();
    } else {
        ap_phi_mux_data_732_V_read746_s_phi_fu_27672_p4 = ap_phi_reg_pp0_iter0_data_732_V_read746_s_reg_27668.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_733_V_read747_1_phi_fu_17427_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_733_V_read747_1_phi_fu_17427_p6 = data_733_V_read747_s_reg_27681.read();
    } else {
        ap_phi_mux_data_733_V_read747_1_phi_fu_17427_p6 = data_733_V_read747_1_reg_17423.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_733_V_read747_s_phi_fu_27685_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_733_V_read747_s_phi_fu_27685_p4 = ap_phi_mux_data_733_V_read747_1_phi_fu_17427_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_733_V_read747_s_phi_fu_27685_p4 = data_733_V_read.read();
    } else {
        ap_phi_mux_data_733_V_read747_s_phi_fu_27685_p4 = ap_phi_reg_pp0_iter0_data_733_V_read747_s_reg_27681.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_734_V_read748_1_phi_fu_17441_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_734_V_read748_1_phi_fu_17441_p6 = data_734_V_read748_s_reg_27694.read();
    } else {
        ap_phi_mux_data_734_V_read748_1_phi_fu_17441_p6 = data_734_V_read748_1_reg_17437.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_734_V_read748_s_phi_fu_27698_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_734_V_read748_s_phi_fu_27698_p4 = ap_phi_mux_data_734_V_read748_1_phi_fu_17441_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_734_V_read748_s_phi_fu_27698_p4 = data_734_V_read.read();
    } else {
        ap_phi_mux_data_734_V_read748_s_phi_fu_27698_p4 = ap_phi_reg_pp0_iter0_data_734_V_read748_s_reg_27694.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_735_V_read749_1_phi_fu_17455_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_735_V_read749_1_phi_fu_17455_p6 = data_735_V_read749_s_reg_27707.read();
    } else {
        ap_phi_mux_data_735_V_read749_1_phi_fu_17455_p6 = data_735_V_read749_1_reg_17451.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_735_V_read749_s_phi_fu_27711_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_735_V_read749_s_phi_fu_27711_p4 = ap_phi_mux_data_735_V_read749_1_phi_fu_17455_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_735_V_read749_s_phi_fu_27711_p4 = data_735_V_read.read();
    } else {
        ap_phi_mux_data_735_V_read749_s_phi_fu_27711_p4 = ap_phi_reg_pp0_iter0_data_735_V_read749_s_reg_27707.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_736_V_read750_1_phi_fu_17469_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_736_V_read750_1_phi_fu_17469_p6 = data_736_V_read750_s_reg_27720.read();
    } else {
        ap_phi_mux_data_736_V_read750_1_phi_fu_17469_p6 = data_736_V_read750_1_reg_17465.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_736_V_read750_s_phi_fu_27724_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_736_V_read750_s_phi_fu_27724_p4 = ap_phi_mux_data_736_V_read750_1_phi_fu_17469_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_736_V_read750_s_phi_fu_27724_p4 = data_736_V_read.read();
    } else {
        ap_phi_mux_data_736_V_read750_s_phi_fu_27724_p4 = ap_phi_reg_pp0_iter0_data_736_V_read750_s_reg_27720.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_737_V_read751_1_phi_fu_17483_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_737_V_read751_1_phi_fu_17483_p6 = data_737_V_read751_s_reg_27733.read();
    } else {
        ap_phi_mux_data_737_V_read751_1_phi_fu_17483_p6 = data_737_V_read751_1_reg_17479.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_737_V_read751_s_phi_fu_27737_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_737_V_read751_s_phi_fu_27737_p4 = ap_phi_mux_data_737_V_read751_1_phi_fu_17483_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_737_V_read751_s_phi_fu_27737_p4 = data_737_V_read.read();
    } else {
        ap_phi_mux_data_737_V_read751_s_phi_fu_27737_p4 = ap_phi_reg_pp0_iter0_data_737_V_read751_s_reg_27733.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_738_V_read752_1_phi_fu_17497_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_738_V_read752_1_phi_fu_17497_p6 = data_738_V_read752_s_reg_27746.read();
    } else {
        ap_phi_mux_data_738_V_read752_1_phi_fu_17497_p6 = data_738_V_read752_1_reg_17493.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_738_V_read752_s_phi_fu_27750_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_738_V_read752_s_phi_fu_27750_p4 = ap_phi_mux_data_738_V_read752_1_phi_fu_17497_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_738_V_read752_s_phi_fu_27750_p4 = data_738_V_read.read();
    } else {
        ap_phi_mux_data_738_V_read752_s_phi_fu_27750_p4 = ap_phi_reg_pp0_iter0_data_738_V_read752_s_reg_27746.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_739_V_read753_1_phi_fu_17511_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_739_V_read753_1_phi_fu_17511_p6 = data_739_V_read753_s_reg_27759.read();
    } else {
        ap_phi_mux_data_739_V_read753_1_phi_fu_17511_p6 = data_739_V_read753_1_reg_17507.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_739_V_read753_s_phi_fu_27763_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_739_V_read753_s_phi_fu_27763_p4 = ap_phi_mux_data_739_V_read753_1_phi_fu_17511_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_739_V_read753_s_phi_fu_27763_p4 = data_739_V_read.read();
    } else {
        ap_phi_mux_data_739_V_read753_s_phi_fu_27763_p4 = ap_phi_reg_pp0_iter0_data_739_V_read753_s_reg_27759.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_73_V_read87_ph_phi_fu_19105_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_73_V_read87_ph_phi_fu_19105_p4 = ap_phi_mux_data_73_V_read87_re_phi_fu_8187_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_73_V_read87_ph_phi_fu_19105_p4 = data_73_V_read.read();
    } else {
        ap_phi_mux_data_73_V_read87_ph_phi_fu_19105_p4 = ap_phi_reg_pp0_iter0_data_73_V_read87_ph_reg_19101.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_73_V_read87_re_phi_fu_8187_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_73_V_read87_re_phi_fu_8187_p6 = data_73_V_read87_ph_reg_19101.read();
    } else {
        ap_phi_mux_data_73_V_read87_re_phi_fu_8187_p6 = data_73_V_read87_re_reg_8183.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_740_V_read754_1_phi_fu_17525_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_740_V_read754_1_phi_fu_17525_p6 = data_740_V_read754_s_reg_27772.read();
    } else {
        ap_phi_mux_data_740_V_read754_1_phi_fu_17525_p6 = data_740_V_read754_1_reg_17521.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_740_V_read754_s_phi_fu_27776_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_740_V_read754_s_phi_fu_27776_p4 = ap_phi_mux_data_740_V_read754_1_phi_fu_17525_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_740_V_read754_s_phi_fu_27776_p4 = data_740_V_read.read();
    } else {
        ap_phi_mux_data_740_V_read754_s_phi_fu_27776_p4 = ap_phi_reg_pp0_iter0_data_740_V_read754_s_reg_27772.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_741_V_read755_1_phi_fu_17539_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_741_V_read755_1_phi_fu_17539_p6 = data_741_V_read755_s_reg_27785.read();
    } else {
        ap_phi_mux_data_741_V_read755_1_phi_fu_17539_p6 = data_741_V_read755_1_reg_17535.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_741_V_read755_s_phi_fu_27789_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_741_V_read755_s_phi_fu_27789_p4 = ap_phi_mux_data_741_V_read755_1_phi_fu_17539_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_741_V_read755_s_phi_fu_27789_p4 = data_741_V_read.read();
    } else {
        ap_phi_mux_data_741_V_read755_s_phi_fu_27789_p4 = ap_phi_reg_pp0_iter0_data_741_V_read755_s_reg_27785.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_742_V_read756_1_phi_fu_17553_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_742_V_read756_1_phi_fu_17553_p6 = data_742_V_read756_s_reg_27798.read();
    } else {
        ap_phi_mux_data_742_V_read756_1_phi_fu_17553_p6 = data_742_V_read756_1_reg_17549.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_742_V_read756_s_phi_fu_27802_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_742_V_read756_s_phi_fu_27802_p4 = ap_phi_mux_data_742_V_read756_1_phi_fu_17553_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_742_V_read756_s_phi_fu_27802_p4 = data_742_V_read.read();
    } else {
        ap_phi_mux_data_742_V_read756_s_phi_fu_27802_p4 = ap_phi_reg_pp0_iter0_data_742_V_read756_s_reg_27798.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_743_V_read757_1_phi_fu_17567_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_743_V_read757_1_phi_fu_17567_p6 = data_743_V_read757_s_reg_27811.read();
    } else {
        ap_phi_mux_data_743_V_read757_1_phi_fu_17567_p6 = data_743_V_read757_1_reg_17563.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_743_V_read757_s_phi_fu_27815_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_743_V_read757_s_phi_fu_27815_p4 = ap_phi_mux_data_743_V_read757_1_phi_fu_17567_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_743_V_read757_s_phi_fu_27815_p4 = data_743_V_read.read();
    } else {
        ap_phi_mux_data_743_V_read757_s_phi_fu_27815_p4 = ap_phi_reg_pp0_iter0_data_743_V_read757_s_reg_27811.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_744_V_read758_1_phi_fu_17581_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_744_V_read758_1_phi_fu_17581_p6 = data_744_V_read758_s_reg_27824.read();
    } else {
        ap_phi_mux_data_744_V_read758_1_phi_fu_17581_p6 = data_744_V_read758_1_reg_17577.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_744_V_read758_s_phi_fu_27828_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_744_V_read758_s_phi_fu_27828_p4 = ap_phi_mux_data_744_V_read758_1_phi_fu_17581_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_744_V_read758_s_phi_fu_27828_p4 = data_744_V_read.read();
    } else {
        ap_phi_mux_data_744_V_read758_s_phi_fu_27828_p4 = ap_phi_reg_pp0_iter0_data_744_V_read758_s_reg_27824.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_745_V_read759_1_phi_fu_17595_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_745_V_read759_1_phi_fu_17595_p6 = data_745_V_read759_s_reg_27837.read();
    } else {
        ap_phi_mux_data_745_V_read759_1_phi_fu_17595_p6 = data_745_V_read759_1_reg_17591.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_745_V_read759_s_phi_fu_27841_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_745_V_read759_s_phi_fu_27841_p4 = ap_phi_mux_data_745_V_read759_1_phi_fu_17595_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_745_V_read759_s_phi_fu_27841_p4 = data_745_V_read.read();
    } else {
        ap_phi_mux_data_745_V_read759_s_phi_fu_27841_p4 = ap_phi_reg_pp0_iter0_data_745_V_read759_s_reg_27837.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_746_V_read760_1_phi_fu_17609_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_746_V_read760_1_phi_fu_17609_p6 = data_746_V_read760_s_reg_27850.read();
    } else {
        ap_phi_mux_data_746_V_read760_1_phi_fu_17609_p6 = data_746_V_read760_1_reg_17605.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_746_V_read760_s_phi_fu_27854_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_746_V_read760_s_phi_fu_27854_p4 = ap_phi_mux_data_746_V_read760_1_phi_fu_17609_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_746_V_read760_s_phi_fu_27854_p4 = data_746_V_read.read();
    } else {
        ap_phi_mux_data_746_V_read760_s_phi_fu_27854_p4 = ap_phi_reg_pp0_iter0_data_746_V_read760_s_reg_27850.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_747_V_read761_1_phi_fu_17623_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_747_V_read761_1_phi_fu_17623_p6 = data_747_V_read761_s_reg_27863.read();
    } else {
        ap_phi_mux_data_747_V_read761_1_phi_fu_17623_p6 = data_747_V_read761_1_reg_17619.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_747_V_read761_s_phi_fu_27867_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_747_V_read761_s_phi_fu_27867_p4 = ap_phi_mux_data_747_V_read761_1_phi_fu_17623_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_747_V_read761_s_phi_fu_27867_p4 = data_747_V_read.read();
    } else {
        ap_phi_mux_data_747_V_read761_s_phi_fu_27867_p4 = ap_phi_reg_pp0_iter0_data_747_V_read761_s_reg_27863.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_748_V_read762_1_phi_fu_17637_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_748_V_read762_1_phi_fu_17637_p6 = data_748_V_read762_s_reg_27876.read();
    } else {
        ap_phi_mux_data_748_V_read762_1_phi_fu_17637_p6 = data_748_V_read762_1_reg_17633.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_748_V_read762_s_phi_fu_27880_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_748_V_read762_s_phi_fu_27880_p4 = ap_phi_mux_data_748_V_read762_1_phi_fu_17637_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_748_V_read762_s_phi_fu_27880_p4 = data_748_V_read.read();
    } else {
        ap_phi_mux_data_748_V_read762_s_phi_fu_27880_p4 = ap_phi_reg_pp0_iter0_data_748_V_read762_s_reg_27876.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_749_V_read763_1_phi_fu_17651_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_749_V_read763_1_phi_fu_17651_p6 = data_749_V_read763_s_reg_27889.read();
    } else {
        ap_phi_mux_data_749_V_read763_1_phi_fu_17651_p6 = data_749_V_read763_1_reg_17647.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_749_V_read763_s_phi_fu_27893_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_749_V_read763_s_phi_fu_27893_p4 = ap_phi_mux_data_749_V_read763_1_phi_fu_17651_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_749_V_read763_s_phi_fu_27893_p4 = data_749_V_read.read();
    } else {
        ap_phi_mux_data_749_V_read763_s_phi_fu_27893_p4 = ap_phi_reg_pp0_iter0_data_749_V_read763_s_reg_27889.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_74_V_read88_ph_phi_fu_19118_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_74_V_read88_ph_phi_fu_19118_p4 = ap_phi_mux_data_74_V_read88_re_phi_fu_8201_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_74_V_read88_ph_phi_fu_19118_p4 = data_74_V_read.read();
    } else {
        ap_phi_mux_data_74_V_read88_ph_phi_fu_19118_p4 = ap_phi_reg_pp0_iter0_data_74_V_read88_ph_reg_19114.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_74_V_read88_re_phi_fu_8201_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_74_V_read88_re_phi_fu_8201_p6 = data_74_V_read88_ph_reg_19114.read();
    } else {
        ap_phi_mux_data_74_V_read88_re_phi_fu_8201_p6 = data_74_V_read88_re_reg_8197.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_750_V_read764_1_phi_fu_17665_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_750_V_read764_1_phi_fu_17665_p6 = data_750_V_read764_s_reg_27902.read();
    } else {
        ap_phi_mux_data_750_V_read764_1_phi_fu_17665_p6 = data_750_V_read764_1_reg_17661.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_750_V_read764_s_phi_fu_27906_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_750_V_read764_s_phi_fu_27906_p4 = ap_phi_mux_data_750_V_read764_1_phi_fu_17665_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_750_V_read764_s_phi_fu_27906_p4 = data_750_V_read.read();
    } else {
        ap_phi_mux_data_750_V_read764_s_phi_fu_27906_p4 = ap_phi_reg_pp0_iter0_data_750_V_read764_s_reg_27902.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_751_V_read765_1_phi_fu_17679_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_751_V_read765_1_phi_fu_17679_p6 = data_751_V_read765_s_reg_27915.read();
    } else {
        ap_phi_mux_data_751_V_read765_1_phi_fu_17679_p6 = data_751_V_read765_1_reg_17675.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_751_V_read765_s_phi_fu_27919_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_751_V_read765_s_phi_fu_27919_p4 = ap_phi_mux_data_751_V_read765_1_phi_fu_17679_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_751_V_read765_s_phi_fu_27919_p4 = data_751_V_read.read();
    } else {
        ap_phi_mux_data_751_V_read765_s_phi_fu_27919_p4 = ap_phi_reg_pp0_iter0_data_751_V_read765_s_reg_27915.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_752_V_read766_1_phi_fu_17693_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_752_V_read766_1_phi_fu_17693_p6 = data_752_V_read766_s_reg_27928.read();
    } else {
        ap_phi_mux_data_752_V_read766_1_phi_fu_17693_p6 = data_752_V_read766_1_reg_17689.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_752_V_read766_s_phi_fu_27932_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_752_V_read766_s_phi_fu_27932_p4 = ap_phi_mux_data_752_V_read766_1_phi_fu_17693_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_752_V_read766_s_phi_fu_27932_p4 = data_752_V_read.read();
    } else {
        ap_phi_mux_data_752_V_read766_s_phi_fu_27932_p4 = ap_phi_reg_pp0_iter0_data_752_V_read766_s_reg_27928.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_753_V_read767_1_phi_fu_17707_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_753_V_read767_1_phi_fu_17707_p6 = data_753_V_read767_s_reg_27941.read();
    } else {
        ap_phi_mux_data_753_V_read767_1_phi_fu_17707_p6 = data_753_V_read767_1_reg_17703.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_753_V_read767_s_phi_fu_27945_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_753_V_read767_s_phi_fu_27945_p4 = ap_phi_mux_data_753_V_read767_1_phi_fu_17707_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_753_V_read767_s_phi_fu_27945_p4 = data_753_V_read.read();
    } else {
        ap_phi_mux_data_753_V_read767_s_phi_fu_27945_p4 = ap_phi_reg_pp0_iter0_data_753_V_read767_s_reg_27941.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_754_V_read768_1_phi_fu_17721_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_754_V_read768_1_phi_fu_17721_p6 = data_754_V_read768_s_reg_27954.read();
    } else {
        ap_phi_mux_data_754_V_read768_1_phi_fu_17721_p6 = data_754_V_read768_1_reg_17717.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_754_V_read768_s_phi_fu_27958_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_754_V_read768_s_phi_fu_27958_p4 = ap_phi_mux_data_754_V_read768_1_phi_fu_17721_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_754_V_read768_s_phi_fu_27958_p4 = data_754_V_read.read();
    } else {
        ap_phi_mux_data_754_V_read768_s_phi_fu_27958_p4 = ap_phi_reg_pp0_iter0_data_754_V_read768_s_reg_27954.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_755_V_read769_1_phi_fu_17735_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_755_V_read769_1_phi_fu_17735_p6 = data_755_V_read769_s_reg_27967.read();
    } else {
        ap_phi_mux_data_755_V_read769_1_phi_fu_17735_p6 = data_755_V_read769_1_reg_17731.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_755_V_read769_s_phi_fu_27971_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_755_V_read769_s_phi_fu_27971_p4 = ap_phi_mux_data_755_V_read769_1_phi_fu_17735_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_755_V_read769_s_phi_fu_27971_p4 = data_755_V_read.read();
    } else {
        ap_phi_mux_data_755_V_read769_s_phi_fu_27971_p4 = ap_phi_reg_pp0_iter0_data_755_V_read769_s_reg_27967.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_756_V_read770_1_phi_fu_17749_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_756_V_read770_1_phi_fu_17749_p6 = data_756_V_read770_s_reg_27980.read();
    } else {
        ap_phi_mux_data_756_V_read770_1_phi_fu_17749_p6 = data_756_V_read770_1_reg_17745.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_756_V_read770_s_phi_fu_27984_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_756_V_read770_s_phi_fu_27984_p4 = ap_phi_mux_data_756_V_read770_1_phi_fu_17749_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_756_V_read770_s_phi_fu_27984_p4 = data_756_V_read.read();
    } else {
        ap_phi_mux_data_756_V_read770_s_phi_fu_27984_p4 = ap_phi_reg_pp0_iter0_data_756_V_read770_s_reg_27980.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_757_V_read771_1_phi_fu_17763_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_757_V_read771_1_phi_fu_17763_p6 = data_757_V_read771_s_reg_27993.read();
    } else {
        ap_phi_mux_data_757_V_read771_1_phi_fu_17763_p6 = data_757_V_read771_1_reg_17759.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_757_V_read771_s_phi_fu_27997_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_757_V_read771_s_phi_fu_27997_p4 = ap_phi_mux_data_757_V_read771_1_phi_fu_17763_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_757_V_read771_s_phi_fu_27997_p4 = data_757_V_read.read();
    } else {
        ap_phi_mux_data_757_V_read771_s_phi_fu_27997_p4 = ap_phi_reg_pp0_iter0_data_757_V_read771_s_reg_27993.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_758_V_read772_1_phi_fu_17777_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_758_V_read772_1_phi_fu_17777_p6 = data_758_V_read772_s_reg_28006.read();
    } else {
        ap_phi_mux_data_758_V_read772_1_phi_fu_17777_p6 = data_758_V_read772_1_reg_17773.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_758_V_read772_s_phi_fu_28010_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_758_V_read772_s_phi_fu_28010_p4 = ap_phi_mux_data_758_V_read772_1_phi_fu_17777_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_758_V_read772_s_phi_fu_28010_p4 = data_758_V_read.read();
    } else {
        ap_phi_mux_data_758_V_read772_s_phi_fu_28010_p4 = ap_phi_reg_pp0_iter0_data_758_V_read772_s_reg_28006.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_759_V_read773_1_phi_fu_17791_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_759_V_read773_1_phi_fu_17791_p6 = data_759_V_read773_s_reg_28019.read();
    } else {
        ap_phi_mux_data_759_V_read773_1_phi_fu_17791_p6 = data_759_V_read773_1_reg_17787.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_759_V_read773_s_phi_fu_28023_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_759_V_read773_s_phi_fu_28023_p4 = ap_phi_mux_data_759_V_read773_1_phi_fu_17791_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_759_V_read773_s_phi_fu_28023_p4 = data_759_V_read.read();
    } else {
        ap_phi_mux_data_759_V_read773_s_phi_fu_28023_p4 = ap_phi_reg_pp0_iter0_data_759_V_read773_s_reg_28019.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_75_V_read89_ph_phi_fu_19131_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_75_V_read89_ph_phi_fu_19131_p4 = ap_phi_mux_data_75_V_read89_re_phi_fu_8215_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_75_V_read89_ph_phi_fu_19131_p4 = data_75_V_read.read();
    } else {
        ap_phi_mux_data_75_V_read89_ph_phi_fu_19131_p4 = ap_phi_reg_pp0_iter0_data_75_V_read89_ph_reg_19127.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_75_V_read89_re_phi_fu_8215_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_75_V_read89_re_phi_fu_8215_p6 = data_75_V_read89_ph_reg_19127.read();
    } else {
        ap_phi_mux_data_75_V_read89_re_phi_fu_8215_p6 = data_75_V_read89_re_reg_8211.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_760_V_read774_1_phi_fu_17805_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_760_V_read774_1_phi_fu_17805_p6 = data_760_V_read774_s_reg_28032.read();
    } else {
        ap_phi_mux_data_760_V_read774_1_phi_fu_17805_p6 = data_760_V_read774_1_reg_17801.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_760_V_read774_s_phi_fu_28036_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_760_V_read774_s_phi_fu_28036_p4 = ap_phi_mux_data_760_V_read774_1_phi_fu_17805_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_760_V_read774_s_phi_fu_28036_p4 = data_760_V_read.read();
    } else {
        ap_phi_mux_data_760_V_read774_s_phi_fu_28036_p4 = ap_phi_reg_pp0_iter0_data_760_V_read774_s_reg_28032.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_761_V_read775_1_phi_fu_17819_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_761_V_read775_1_phi_fu_17819_p6 = data_761_V_read775_s_reg_28045.read();
    } else {
        ap_phi_mux_data_761_V_read775_1_phi_fu_17819_p6 = data_761_V_read775_1_reg_17815.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_761_V_read775_s_phi_fu_28049_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_761_V_read775_s_phi_fu_28049_p4 = ap_phi_mux_data_761_V_read775_1_phi_fu_17819_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_761_V_read775_s_phi_fu_28049_p4 = data_761_V_read.read();
    } else {
        ap_phi_mux_data_761_V_read775_s_phi_fu_28049_p4 = ap_phi_reg_pp0_iter0_data_761_V_read775_s_reg_28045.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_762_V_read776_1_phi_fu_17833_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_762_V_read776_1_phi_fu_17833_p6 = data_762_V_read776_s_reg_28058.read();
    } else {
        ap_phi_mux_data_762_V_read776_1_phi_fu_17833_p6 = data_762_V_read776_1_reg_17829.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_762_V_read776_s_phi_fu_28062_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_762_V_read776_s_phi_fu_28062_p4 = ap_phi_mux_data_762_V_read776_1_phi_fu_17833_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_762_V_read776_s_phi_fu_28062_p4 = data_762_V_read.read();
    } else {
        ap_phi_mux_data_762_V_read776_s_phi_fu_28062_p4 = ap_phi_reg_pp0_iter0_data_762_V_read776_s_reg_28058.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_763_V_read777_1_phi_fu_17847_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_763_V_read777_1_phi_fu_17847_p6 = data_763_V_read777_s_reg_28071.read();
    } else {
        ap_phi_mux_data_763_V_read777_1_phi_fu_17847_p6 = data_763_V_read777_1_reg_17843.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_763_V_read777_s_phi_fu_28075_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_763_V_read777_s_phi_fu_28075_p4 = ap_phi_mux_data_763_V_read777_1_phi_fu_17847_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_763_V_read777_s_phi_fu_28075_p4 = data_763_V_read.read();
    } else {
        ap_phi_mux_data_763_V_read777_s_phi_fu_28075_p4 = ap_phi_reg_pp0_iter0_data_763_V_read777_s_reg_28071.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_764_V_read778_1_phi_fu_17861_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_764_V_read778_1_phi_fu_17861_p6 = data_764_V_read778_s_reg_28084.read();
    } else {
        ap_phi_mux_data_764_V_read778_1_phi_fu_17861_p6 = data_764_V_read778_1_reg_17857.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_764_V_read778_s_phi_fu_28088_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_764_V_read778_s_phi_fu_28088_p4 = ap_phi_mux_data_764_V_read778_1_phi_fu_17861_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_764_V_read778_s_phi_fu_28088_p4 = data_764_V_read.read();
    } else {
        ap_phi_mux_data_764_V_read778_s_phi_fu_28088_p4 = ap_phi_reg_pp0_iter0_data_764_V_read778_s_reg_28084.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_765_V_read779_1_phi_fu_17875_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_765_V_read779_1_phi_fu_17875_p6 = data_765_V_read779_s_reg_28097.read();
    } else {
        ap_phi_mux_data_765_V_read779_1_phi_fu_17875_p6 = data_765_V_read779_1_reg_17871.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_765_V_read779_s_phi_fu_28101_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_765_V_read779_s_phi_fu_28101_p4 = ap_phi_mux_data_765_V_read779_1_phi_fu_17875_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_765_V_read779_s_phi_fu_28101_p4 = data_765_V_read.read();
    } else {
        ap_phi_mux_data_765_V_read779_s_phi_fu_28101_p4 = ap_phi_reg_pp0_iter0_data_765_V_read779_s_reg_28097.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_766_V_read780_1_phi_fu_17889_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_766_V_read780_1_phi_fu_17889_p6 = data_766_V_read780_s_reg_28110.read();
    } else {
        ap_phi_mux_data_766_V_read780_1_phi_fu_17889_p6 = data_766_V_read780_1_reg_17885.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_766_V_read780_s_phi_fu_28114_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_766_V_read780_s_phi_fu_28114_p4 = ap_phi_mux_data_766_V_read780_1_phi_fu_17889_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_766_V_read780_s_phi_fu_28114_p4 = data_766_V_read.read();
    } else {
        ap_phi_mux_data_766_V_read780_s_phi_fu_28114_p4 = ap_phi_reg_pp0_iter0_data_766_V_read780_s_reg_28110.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_767_V_read781_1_phi_fu_17903_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_767_V_read781_1_phi_fu_17903_p6 = data_767_V_read781_s_reg_28123.read();
    } else {
        ap_phi_mux_data_767_V_read781_1_phi_fu_17903_p6 = data_767_V_read781_1_reg_17899.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_767_V_read781_s_phi_fu_28127_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_767_V_read781_s_phi_fu_28127_p4 = ap_phi_mux_data_767_V_read781_1_phi_fu_17903_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_767_V_read781_s_phi_fu_28127_p4 = data_767_V_read.read();
    } else {
        ap_phi_mux_data_767_V_read781_s_phi_fu_28127_p4 = ap_phi_reg_pp0_iter0_data_767_V_read781_s_reg_28123.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_768_V_read782_1_phi_fu_17917_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_768_V_read782_1_phi_fu_17917_p6 = data_768_V_read782_s_reg_28136.read();
    } else {
        ap_phi_mux_data_768_V_read782_1_phi_fu_17917_p6 = data_768_V_read782_1_reg_17913.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_768_V_read782_s_phi_fu_28140_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_768_V_read782_s_phi_fu_28140_p4 = ap_phi_mux_data_768_V_read782_1_phi_fu_17917_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_768_V_read782_s_phi_fu_28140_p4 = data_768_V_read.read();
    } else {
        ap_phi_mux_data_768_V_read782_s_phi_fu_28140_p4 = ap_phi_reg_pp0_iter0_data_768_V_read782_s_reg_28136.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_769_V_read783_1_phi_fu_17931_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_769_V_read783_1_phi_fu_17931_p6 = data_769_V_read783_s_reg_28149.read();
    } else {
        ap_phi_mux_data_769_V_read783_1_phi_fu_17931_p6 = data_769_V_read783_1_reg_17927.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_769_V_read783_s_phi_fu_28153_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_769_V_read783_s_phi_fu_28153_p4 = ap_phi_mux_data_769_V_read783_1_phi_fu_17931_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_769_V_read783_s_phi_fu_28153_p4 = data_769_V_read.read();
    } else {
        ap_phi_mux_data_769_V_read783_s_phi_fu_28153_p4 = ap_phi_reg_pp0_iter0_data_769_V_read783_s_reg_28149.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_76_V_read90_ph_phi_fu_19144_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_76_V_read90_ph_phi_fu_19144_p4 = ap_phi_mux_data_76_V_read90_re_phi_fu_8229_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_76_V_read90_ph_phi_fu_19144_p4 = data_76_V_read.read();
    } else {
        ap_phi_mux_data_76_V_read90_ph_phi_fu_19144_p4 = ap_phi_reg_pp0_iter0_data_76_V_read90_ph_reg_19140.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_76_V_read90_re_phi_fu_8229_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_76_V_read90_re_phi_fu_8229_p6 = data_76_V_read90_ph_reg_19140.read();
    } else {
        ap_phi_mux_data_76_V_read90_re_phi_fu_8229_p6 = data_76_V_read90_re_reg_8225.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_770_V_read784_1_phi_fu_17945_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_770_V_read784_1_phi_fu_17945_p6 = data_770_V_read784_s_reg_28162.read();
    } else {
        ap_phi_mux_data_770_V_read784_1_phi_fu_17945_p6 = data_770_V_read784_1_reg_17941.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_770_V_read784_s_phi_fu_28166_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_770_V_read784_s_phi_fu_28166_p4 = ap_phi_mux_data_770_V_read784_1_phi_fu_17945_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_770_V_read784_s_phi_fu_28166_p4 = data_770_V_read.read();
    } else {
        ap_phi_mux_data_770_V_read784_s_phi_fu_28166_p4 = ap_phi_reg_pp0_iter0_data_770_V_read784_s_reg_28162.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_771_V_read785_1_phi_fu_17959_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_771_V_read785_1_phi_fu_17959_p6 = data_771_V_read785_s_reg_28175.read();
    } else {
        ap_phi_mux_data_771_V_read785_1_phi_fu_17959_p6 = data_771_V_read785_1_reg_17955.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_771_V_read785_s_phi_fu_28179_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_771_V_read785_s_phi_fu_28179_p4 = ap_phi_mux_data_771_V_read785_1_phi_fu_17959_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_771_V_read785_s_phi_fu_28179_p4 = data_771_V_read.read();
    } else {
        ap_phi_mux_data_771_V_read785_s_phi_fu_28179_p4 = ap_phi_reg_pp0_iter0_data_771_V_read785_s_reg_28175.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_772_V_read786_1_phi_fu_17973_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_772_V_read786_1_phi_fu_17973_p6 = data_772_V_read786_s_reg_28188.read();
    } else {
        ap_phi_mux_data_772_V_read786_1_phi_fu_17973_p6 = data_772_V_read786_1_reg_17969.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_772_V_read786_s_phi_fu_28192_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_772_V_read786_s_phi_fu_28192_p4 = ap_phi_mux_data_772_V_read786_1_phi_fu_17973_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_772_V_read786_s_phi_fu_28192_p4 = data_772_V_read.read();
    } else {
        ap_phi_mux_data_772_V_read786_s_phi_fu_28192_p4 = ap_phi_reg_pp0_iter0_data_772_V_read786_s_reg_28188.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_773_V_read787_1_phi_fu_17987_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_773_V_read787_1_phi_fu_17987_p6 = data_773_V_read787_s_reg_28201.read();
    } else {
        ap_phi_mux_data_773_V_read787_1_phi_fu_17987_p6 = data_773_V_read787_1_reg_17983.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_773_V_read787_s_phi_fu_28205_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_773_V_read787_s_phi_fu_28205_p4 = ap_phi_mux_data_773_V_read787_1_phi_fu_17987_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_773_V_read787_s_phi_fu_28205_p4 = data_773_V_read.read();
    } else {
        ap_phi_mux_data_773_V_read787_s_phi_fu_28205_p4 = ap_phi_reg_pp0_iter0_data_773_V_read787_s_reg_28201.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_774_V_read788_1_phi_fu_18001_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_774_V_read788_1_phi_fu_18001_p6 = data_774_V_read788_s_reg_28214.read();
    } else {
        ap_phi_mux_data_774_V_read788_1_phi_fu_18001_p6 = data_774_V_read788_1_reg_17997.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_774_V_read788_s_phi_fu_28218_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_774_V_read788_s_phi_fu_28218_p4 = ap_phi_mux_data_774_V_read788_1_phi_fu_18001_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_774_V_read788_s_phi_fu_28218_p4 = data_774_V_read.read();
    } else {
        ap_phi_mux_data_774_V_read788_s_phi_fu_28218_p4 = ap_phi_reg_pp0_iter0_data_774_V_read788_s_reg_28214.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_775_V_read789_1_phi_fu_18015_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_775_V_read789_1_phi_fu_18015_p6 = data_775_V_read789_s_reg_28227.read();
    } else {
        ap_phi_mux_data_775_V_read789_1_phi_fu_18015_p6 = data_775_V_read789_1_reg_18011.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_775_V_read789_s_phi_fu_28231_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_775_V_read789_s_phi_fu_28231_p4 = ap_phi_mux_data_775_V_read789_1_phi_fu_18015_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_775_V_read789_s_phi_fu_28231_p4 = data_775_V_read.read();
    } else {
        ap_phi_mux_data_775_V_read789_s_phi_fu_28231_p4 = ap_phi_reg_pp0_iter0_data_775_V_read789_s_reg_28227.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_776_V_read790_1_phi_fu_18029_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_776_V_read790_1_phi_fu_18029_p6 = data_776_V_read790_s_reg_28240.read();
    } else {
        ap_phi_mux_data_776_V_read790_1_phi_fu_18029_p6 = data_776_V_read790_1_reg_18025.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_776_V_read790_s_phi_fu_28244_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_776_V_read790_s_phi_fu_28244_p4 = ap_phi_mux_data_776_V_read790_1_phi_fu_18029_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_776_V_read790_s_phi_fu_28244_p4 = data_776_V_read.read();
    } else {
        ap_phi_mux_data_776_V_read790_s_phi_fu_28244_p4 = ap_phi_reg_pp0_iter0_data_776_V_read790_s_reg_28240.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_777_V_read791_1_phi_fu_18043_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_777_V_read791_1_phi_fu_18043_p6 = data_777_V_read791_s_reg_28253.read();
    } else {
        ap_phi_mux_data_777_V_read791_1_phi_fu_18043_p6 = data_777_V_read791_1_reg_18039.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_777_V_read791_s_phi_fu_28257_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_777_V_read791_s_phi_fu_28257_p4 = ap_phi_mux_data_777_V_read791_1_phi_fu_18043_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_777_V_read791_s_phi_fu_28257_p4 = data_777_V_read.read();
    } else {
        ap_phi_mux_data_777_V_read791_s_phi_fu_28257_p4 = ap_phi_reg_pp0_iter0_data_777_V_read791_s_reg_28253.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_778_V_read792_1_phi_fu_18057_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_778_V_read792_1_phi_fu_18057_p6 = data_778_V_read792_s_reg_28266.read();
    } else {
        ap_phi_mux_data_778_V_read792_1_phi_fu_18057_p6 = data_778_V_read792_1_reg_18053.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_778_V_read792_s_phi_fu_28270_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_778_V_read792_s_phi_fu_28270_p4 = ap_phi_mux_data_778_V_read792_1_phi_fu_18057_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_778_V_read792_s_phi_fu_28270_p4 = data_778_V_read.read();
    } else {
        ap_phi_mux_data_778_V_read792_s_phi_fu_28270_p4 = ap_phi_reg_pp0_iter0_data_778_V_read792_s_reg_28266.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_779_V_read793_1_phi_fu_18071_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_779_V_read793_1_phi_fu_18071_p6 = data_779_V_read793_s_reg_28279.read();
    } else {
        ap_phi_mux_data_779_V_read793_1_phi_fu_18071_p6 = data_779_V_read793_1_reg_18067.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_779_V_read793_s_phi_fu_28283_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_779_V_read793_s_phi_fu_28283_p4 = ap_phi_mux_data_779_V_read793_1_phi_fu_18071_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_779_V_read793_s_phi_fu_28283_p4 = data_779_V_read.read();
    } else {
        ap_phi_mux_data_779_V_read793_s_phi_fu_28283_p4 = ap_phi_reg_pp0_iter0_data_779_V_read793_s_reg_28279.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_77_V_read91_ph_phi_fu_19157_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_77_V_read91_ph_phi_fu_19157_p4 = ap_phi_mux_data_77_V_read91_re_phi_fu_8243_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_77_V_read91_ph_phi_fu_19157_p4 = data_77_V_read.read();
    } else {
        ap_phi_mux_data_77_V_read91_ph_phi_fu_19157_p4 = ap_phi_reg_pp0_iter0_data_77_V_read91_ph_reg_19153.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_77_V_read91_re_phi_fu_8243_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_77_V_read91_re_phi_fu_8243_p6 = data_77_V_read91_ph_reg_19153.read();
    } else {
        ap_phi_mux_data_77_V_read91_re_phi_fu_8243_p6 = data_77_V_read91_re_reg_8239.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_780_V_read794_1_phi_fu_18085_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_780_V_read794_1_phi_fu_18085_p6 = data_780_V_read794_s_reg_28292.read();
    } else {
        ap_phi_mux_data_780_V_read794_1_phi_fu_18085_p6 = data_780_V_read794_1_reg_18081.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_780_V_read794_s_phi_fu_28296_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_780_V_read794_s_phi_fu_28296_p4 = ap_phi_mux_data_780_V_read794_1_phi_fu_18085_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_780_V_read794_s_phi_fu_28296_p4 = data_780_V_read.read();
    } else {
        ap_phi_mux_data_780_V_read794_s_phi_fu_28296_p4 = ap_phi_reg_pp0_iter0_data_780_V_read794_s_reg_28292.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_781_V_read795_1_phi_fu_18099_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_781_V_read795_1_phi_fu_18099_p6 = data_781_V_read795_s_reg_28305.read();
    } else {
        ap_phi_mux_data_781_V_read795_1_phi_fu_18099_p6 = data_781_V_read795_1_reg_18095.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_781_V_read795_s_phi_fu_28309_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_781_V_read795_s_phi_fu_28309_p4 = ap_phi_mux_data_781_V_read795_1_phi_fu_18099_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_781_V_read795_s_phi_fu_28309_p4 = data_781_V_read.read();
    } else {
        ap_phi_mux_data_781_V_read795_s_phi_fu_28309_p4 = ap_phi_reg_pp0_iter0_data_781_V_read795_s_reg_28305.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_782_V_read796_1_phi_fu_18113_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_782_V_read796_1_phi_fu_18113_p6 = data_782_V_read796_s_reg_28318.read();
    } else {
        ap_phi_mux_data_782_V_read796_1_phi_fu_18113_p6 = data_782_V_read796_1_reg_18109.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_782_V_read796_s_phi_fu_28322_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_782_V_read796_s_phi_fu_28322_p4 = ap_phi_mux_data_782_V_read796_1_phi_fu_18113_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_782_V_read796_s_phi_fu_28322_p4 = data_782_V_read.read();
    } else {
        ap_phi_mux_data_782_V_read796_s_phi_fu_28322_p4 = ap_phi_reg_pp0_iter0_data_782_V_read796_s_reg_28318.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_783_V_read797_1_phi_fu_18127_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_783_V_read797_1_phi_fu_18127_p6 = data_783_V_read797_s_reg_28331.read();
    } else {
        ap_phi_mux_data_783_V_read797_1_phi_fu_18127_p6 = data_783_V_read797_1_reg_18123.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_783_V_read797_s_phi_fu_28335_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_783_V_read797_s_phi_fu_28335_p4 = ap_phi_mux_data_783_V_read797_1_phi_fu_18127_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_783_V_read797_s_phi_fu_28335_p4 = data_783_V_read.read();
    } else {
        ap_phi_mux_data_783_V_read797_s_phi_fu_28335_p4 = ap_phi_reg_pp0_iter0_data_783_V_read797_s_reg_28331.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_78_V_read92_ph_phi_fu_19170_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_78_V_read92_ph_phi_fu_19170_p4 = ap_phi_mux_data_78_V_read92_re_phi_fu_8257_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_78_V_read92_ph_phi_fu_19170_p4 = data_78_V_read.read();
    } else {
        ap_phi_mux_data_78_V_read92_ph_phi_fu_19170_p4 = ap_phi_reg_pp0_iter0_data_78_V_read92_ph_reg_19166.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_78_V_read92_re_phi_fu_8257_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_78_V_read92_re_phi_fu_8257_p6 = data_78_V_read92_ph_reg_19166.read();
    } else {
        ap_phi_mux_data_78_V_read92_re_phi_fu_8257_p6 = data_78_V_read92_re_reg_8253.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_79_V_read93_ph_phi_fu_19183_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_79_V_read93_ph_phi_fu_19183_p4 = ap_phi_mux_data_79_V_read93_re_phi_fu_8271_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_79_V_read93_ph_phi_fu_19183_p4 = data_79_V_read.read();
    } else {
        ap_phi_mux_data_79_V_read93_ph_phi_fu_19183_p4 = ap_phi_reg_pp0_iter0_data_79_V_read93_ph_reg_19179.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_79_V_read93_re_phi_fu_8271_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_79_V_read93_re_phi_fu_8271_p6 = data_79_V_read93_ph_reg_19179.read();
    } else {
        ap_phi_mux_data_79_V_read93_re_phi_fu_8271_p6 = data_79_V_read93_re_reg_8267.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_7_V_read21_phi_phi_fu_18247_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_7_V_read21_phi_phi_fu_18247_p4 = ap_phi_mux_data_7_V_read21_rew_phi_fu_7263_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_7_V_read21_phi_phi_fu_18247_p4 = data_7_V_read.read();
    } else {
        ap_phi_mux_data_7_V_read21_phi_phi_fu_18247_p4 = ap_phi_reg_pp0_iter0_data_7_V_read21_phi_reg_18243.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_7_V_read21_rew_phi_fu_7263_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_7_V_read21_rew_phi_fu_7263_p6 = data_7_V_read21_phi_reg_18243.read();
    } else {
        ap_phi_mux_data_7_V_read21_rew_phi_fu_7263_p6 = data_7_V_read21_rew_reg_7259.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_80_V_read94_ph_phi_fu_19196_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_80_V_read94_ph_phi_fu_19196_p4 = ap_phi_mux_data_80_V_read94_re_phi_fu_8285_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_80_V_read94_ph_phi_fu_19196_p4 = data_80_V_read.read();
    } else {
        ap_phi_mux_data_80_V_read94_ph_phi_fu_19196_p4 = ap_phi_reg_pp0_iter0_data_80_V_read94_ph_reg_19192.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_80_V_read94_re_phi_fu_8285_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_80_V_read94_re_phi_fu_8285_p6 = data_80_V_read94_ph_reg_19192.read();
    } else {
        ap_phi_mux_data_80_V_read94_re_phi_fu_8285_p6 = data_80_V_read94_re_reg_8281.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_81_V_read95_ph_phi_fu_19209_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_81_V_read95_ph_phi_fu_19209_p4 = ap_phi_mux_data_81_V_read95_re_phi_fu_8299_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_81_V_read95_ph_phi_fu_19209_p4 = data_81_V_read.read();
    } else {
        ap_phi_mux_data_81_V_read95_ph_phi_fu_19209_p4 = ap_phi_reg_pp0_iter0_data_81_V_read95_ph_reg_19205.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_81_V_read95_re_phi_fu_8299_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_81_V_read95_re_phi_fu_8299_p6 = data_81_V_read95_ph_reg_19205.read();
    } else {
        ap_phi_mux_data_81_V_read95_re_phi_fu_8299_p6 = data_81_V_read95_re_reg_8295.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_82_V_read96_ph_phi_fu_19222_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_82_V_read96_ph_phi_fu_19222_p4 = ap_phi_mux_data_82_V_read96_re_phi_fu_8313_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_82_V_read96_ph_phi_fu_19222_p4 = data_82_V_read.read();
    } else {
        ap_phi_mux_data_82_V_read96_ph_phi_fu_19222_p4 = ap_phi_reg_pp0_iter0_data_82_V_read96_ph_reg_19218.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_82_V_read96_re_phi_fu_8313_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_82_V_read96_re_phi_fu_8313_p6 = data_82_V_read96_ph_reg_19218.read();
    } else {
        ap_phi_mux_data_82_V_read96_re_phi_fu_8313_p6 = data_82_V_read96_re_reg_8309.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_83_V_read97_ph_phi_fu_19235_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_83_V_read97_ph_phi_fu_19235_p4 = ap_phi_mux_data_83_V_read97_re_phi_fu_8327_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_83_V_read97_ph_phi_fu_19235_p4 = data_83_V_read.read();
    } else {
        ap_phi_mux_data_83_V_read97_ph_phi_fu_19235_p4 = ap_phi_reg_pp0_iter0_data_83_V_read97_ph_reg_19231.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_83_V_read97_re_phi_fu_8327_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_83_V_read97_re_phi_fu_8327_p6 = data_83_V_read97_ph_reg_19231.read();
    } else {
        ap_phi_mux_data_83_V_read97_re_phi_fu_8327_p6 = data_83_V_read97_re_reg_8323.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_84_V_read98_ph_phi_fu_19248_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_84_V_read98_ph_phi_fu_19248_p4 = ap_phi_mux_data_84_V_read98_re_phi_fu_8341_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_84_V_read98_ph_phi_fu_19248_p4 = data_84_V_read.read();
    } else {
        ap_phi_mux_data_84_V_read98_ph_phi_fu_19248_p4 = ap_phi_reg_pp0_iter0_data_84_V_read98_ph_reg_19244.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_84_V_read98_re_phi_fu_8341_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_84_V_read98_re_phi_fu_8341_p6 = data_84_V_read98_ph_reg_19244.read();
    } else {
        ap_phi_mux_data_84_V_read98_re_phi_fu_8341_p6 = data_84_V_read98_re_reg_8337.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_85_V_read99_ph_phi_fu_19261_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_85_V_read99_ph_phi_fu_19261_p4 = ap_phi_mux_data_85_V_read99_re_phi_fu_8355_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_85_V_read99_ph_phi_fu_19261_p4 = data_85_V_read.read();
    } else {
        ap_phi_mux_data_85_V_read99_ph_phi_fu_19261_p4 = ap_phi_reg_pp0_iter0_data_85_V_read99_ph_reg_19257.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_85_V_read99_re_phi_fu_8355_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_85_V_read99_re_phi_fu_8355_p6 = data_85_V_read99_ph_reg_19257.read();
    } else {
        ap_phi_mux_data_85_V_read99_re_phi_fu_8355_p6 = data_85_V_read99_re_reg_8351.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_86_V_read100_p_phi_fu_19274_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_86_V_read100_p_phi_fu_19274_p4 = ap_phi_mux_data_86_V_read100_r_phi_fu_8369_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_86_V_read100_p_phi_fu_19274_p4 = data_86_V_read.read();
    } else {
        ap_phi_mux_data_86_V_read100_p_phi_fu_19274_p4 = ap_phi_reg_pp0_iter0_data_86_V_read100_p_reg_19270.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_86_V_read100_r_phi_fu_8369_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_86_V_read100_r_phi_fu_8369_p6 = data_86_V_read100_p_reg_19270.read();
    } else {
        ap_phi_mux_data_86_V_read100_r_phi_fu_8369_p6 = data_86_V_read100_r_reg_8365.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_87_V_read101_p_phi_fu_19287_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_87_V_read101_p_phi_fu_19287_p4 = ap_phi_mux_data_87_V_read101_r_phi_fu_8383_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_87_V_read101_p_phi_fu_19287_p4 = data_87_V_read.read();
    } else {
        ap_phi_mux_data_87_V_read101_p_phi_fu_19287_p4 = ap_phi_reg_pp0_iter0_data_87_V_read101_p_reg_19283.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_87_V_read101_r_phi_fu_8383_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_87_V_read101_r_phi_fu_8383_p6 = data_87_V_read101_p_reg_19283.read();
    } else {
        ap_phi_mux_data_87_V_read101_r_phi_fu_8383_p6 = data_87_V_read101_r_reg_8379.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_88_V_read102_p_phi_fu_19300_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_88_V_read102_p_phi_fu_19300_p4 = ap_phi_mux_data_88_V_read102_r_phi_fu_8397_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_88_V_read102_p_phi_fu_19300_p4 = data_88_V_read.read();
    } else {
        ap_phi_mux_data_88_V_read102_p_phi_fu_19300_p4 = ap_phi_reg_pp0_iter0_data_88_V_read102_p_reg_19296.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_88_V_read102_r_phi_fu_8397_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_88_V_read102_r_phi_fu_8397_p6 = data_88_V_read102_p_reg_19296.read();
    } else {
        ap_phi_mux_data_88_V_read102_r_phi_fu_8397_p6 = data_88_V_read102_r_reg_8393.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_89_V_read103_p_phi_fu_19313_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_89_V_read103_p_phi_fu_19313_p4 = ap_phi_mux_data_89_V_read103_r_phi_fu_8411_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_89_V_read103_p_phi_fu_19313_p4 = data_89_V_read.read();
    } else {
        ap_phi_mux_data_89_V_read103_p_phi_fu_19313_p4 = ap_phi_reg_pp0_iter0_data_89_V_read103_p_reg_19309.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_89_V_read103_r_phi_fu_8411_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_89_V_read103_r_phi_fu_8411_p6 = data_89_V_read103_p_reg_19309.read();
    } else {
        ap_phi_mux_data_89_V_read103_r_phi_fu_8411_p6 = data_89_V_read103_r_reg_8407.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_8_V_read22_phi_phi_fu_18260_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_8_V_read22_phi_phi_fu_18260_p4 = ap_phi_mux_data_8_V_read22_rew_phi_fu_7277_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_8_V_read22_phi_phi_fu_18260_p4 = data_8_V_read.read();
    } else {
        ap_phi_mux_data_8_V_read22_phi_phi_fu_18260_p4 = ap_phi_reg_pp0_iter0_data_8_V_read22_phi_reg_18256.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_8_V_read22_rew_phi_fu_7277_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_8_V_read22_rew_phi_fu_7277_p6 = data_8_V_read22_phi_reg_18256.read();
    } else {
        ap_phi_mux_data_8_V_read22_rew_phi_fu_7277_p6 = data_8_V_read22_rew_reg_7273.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_90_V_read104_p_phi_fu_19326_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_90_V_read104_p_phi_fu_19326_p4 = ap_phi_mux_data_90_V_read104_r_phi_fu_8425_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_90_V_read104_p_phi_fu_19326_p4 = data_90_V_read.read();
    } else {
        ap_phi_mux_data_90_V_read104_p_phi_fu_19326_p4 = ap_phi_reg_pp0_iter0_data_90_V_read104_p_reg_19322.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_90_V_read104_r_phi_fu_8425_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_90_V_read104_r_phi_fu_8425_p6 = data_90_V_read104_p_reg_19322.read();
    } else {
        ap_phi_mux_data_90_V_read104_r_phi_fu_8425_p6 = data_90_V_read104_r_reg_8421.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_91_V_read105_p_phi_fu_19339_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_91_V_read105_p_phi_fu_19339_p4 = ap_phi_mux_data_91_V_read105_r_phi_fu_8439_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_91_V_read105_p_phi_fu_19339_p4 = data_91_V_read.read();
    } else {
        ap_phi_mux_data_91_V_read105_p_phi_fu_19339_p4 = ap_phi_reg_pp0_iter0_data_91_V_read105_p_reg_19335.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_91_V_read105_r_phi_fu_8439_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_91_V_read105_r_phi_fu_8439_p6 = data_91_V_read105_p_reg_19335.read();
    } else {
        ap_phi_mux_data_91_V_read105_r_phi_fu_8439_p6 = data_91_V_read105_r_reg_8435.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_92_V_read106_p_phi_fu_19352_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_92_V_read106_p_phi_fu_19352_p4 = ap_phi_mux_data_92_V_read106_r_phi_fu_8453_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_92_V_read106_p_phi_fu_19352_p4 = data_92_V_read.read();
    } else {
        ap_phi_mux_data_92_V_read106_p_phi_fu_19352_p4 = ap_phi_reg_pp0_iter0_data_92_V_read106_p_reg_19348.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_92_V_read106_r_phi_fu_8453_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_92_V_read106_r_phi_fu_8453_p6 = data_92_V_read106_p_reg_19348.read();
    } else {
        ap_phi_mux_data_92_V_read106_r_phi_fu_8453_p6 = data_92_V_read106_r_reg_8449.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_93_V_read107_p_phi_fu_19365_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_93_V_read107_p_phi_fu_19365_p4 = ap_phi_mux_data_93_V_read107_r_phi_fu_8467_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_93_V_read107_p_phi_fu_19365_p4 = data_93_V_read.read();
    } else {
        ap_phi_mux_data_93_V_read107_p_phi_fu_19365_p4 = ap_phi_reg_pp0_iter0_data_93_V_read107_p_reg_19361.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_93_V_read107_r_phi_fu_8467_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_93_V_read107_r_phi_fu_8467_p6 = data_93_V_read107_p_reg_19361.read();
    } else {
        ap_phi_mux_data_93_V_read107_r_phi_fu_8467_p6 = data_93_V_read107_r_reg_8463.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_94_V_read108_p_phi_fu_19378_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_94_V_read108_p_phi_fu_19378_p4 = ap_phi_mux_data_94_V_read108_r_phi_fu_8481_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_94_V_read108_p_phi_fu_19378_p4 = data_94_V_read.read();
    } else {
        ap_phi_mux_data_94_V_read108_p_phi_fu_19378_p4 = ap_phi_reg_pp0_iter0_data_94_V_read108_p_reg_19374.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_94_V_read108_r_phi_fu_8481_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_94_V_read108_r_phi_fu_8481_p6 = data_94_V_read108_p_reg_19374.read();
    } else {
        ap_phi_mux_data_94_V_read108_r_phi_fu_8481_p6 = data_94_V_read108_r_reg_8477.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_95_V_read109_p_phi_fu_19391_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_95_V_read109_p_phi_fu_19391_p4 = ap_phi_mux_data_95_V_read109_r_phi_fu_8495_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_95_V_read109_p_phi_fu_19391_p4 = data_95_V_read.read();
    } else {
        ap_phi_mux_data_95_V_read109_p_phi_fu_19391_p4 = ap_phi_reg_pp0_iter0_data_95_V_read109_p_reg_19387.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_95_V_read109_r_phi_fu_8495_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_95_V_read109_r_phi_fu_8495_p6 = data_95_V_read109_p_reg_19387.read();
    } else {
        ap_phi_mux_data_95_V_read109_r_phi_fu_8495_p6 = data_95_V_read109_r_reg_8491.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_96_V_read110_p_phi_fu_19404_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_96_V_read110_p_phi_fu_19404_p4 = ap_phi_mux_data_96_V_read110_r_phi_fu_8509_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_96_V_read110_p_phi_fu_19404_p4 = data_96_V_read.read();
    } else {
        ap_phi_mux_data_96_V_read110_p_phi_fu_19404_p4 = ap_phi_reg_pp0_iter0_data_96_V_read110_p_reg_19400.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_96_V_read110_r_phi_fu_8509_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_96_V_read110_r_phi_fu_8509_p6 = data_96_V_read110_p_reg_19400.read();
    } else {
        ap_phi_mux_data_96_V_read110_r_phi_fu_8509_p6 = data_96_V_read110_r_reg_8505.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_97_V_read111_p_phi_fu_19417_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_97_V_read111_p_phi_fu_19417_p4 = ap_phi_mux_data_97_V_read111_r_phi_fu_8523_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_97_V_read111_p_phi_fu_19417_p4 = data_97_V_read.read();
    } else {
        ap_phi_mux_data_97_V_read111_p_phi_fu_19417_p4 = ap_phi_reg_pp0_iter0_data_97_V_read111_p_reg_19413.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_97_V_read111_r_phi_fu_8523_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_97_V_read111_r_phi_fu_8523_p6 = data_97_V_read111_p_reg_19413.read();
    } else {
        ap_phi_mux_data_97_V_read111_r_phi_fu_8523_p6 = data_97_V_read111_r_reg_8519.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_98_V_read112_p_phi_fu_19430_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_98_V_read112_p_phi_fu_19430_p4 = ap_phi_mux_data_98_V_read112_r_phi_fu_8537_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_98_V_read112_p_phi_fu_19430_p4 = data_98_V_read.read();
    } else {
        ap_phi_mux_data_98_V_read112_p_phi_fu_19430_p4 = ap_phi_reg_pp0_iter0_data_98_V_read112_p_reg_19426.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_98_V_read112_r_phi_fu_8537_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_98_V_read112_r_phi_fu_8537_p6 = data_98_V_read112_p_reg_19426.read();
    } else {
        ap_phi_mux_data_98_V_read112_r_phi_fu_8537_p6 = data_98_V_read112_r_reg_8533.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_99_V_read113_p_phi_fu_19443_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_99_V_read113_p_phi_fu_19443_p4 = ap_phi_mux_data_99_V_read113_r_phi_fu_8551_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_99_V_read113_p_phi_fu_19443_p4 = data_99_V_read.read();
    } else {
        ap_phi_mux_data_99_V_read113_p_phi_fu_19443_p4 = ap_phi_reg_pp0_iter0_data_99_V_read113_p_reg_19439.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_99_V_read113_r_phi_fu_8551_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_99_V_read113_r_phi_fu_8551_p6 = data_99_V_read113_p_reg_19439.read();
    } else {
        ap_phi_mux_data_99_V_read113_r_phi_fu_8551_p6 = data_99_V_read113_r_reg_8547.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_9_V_read23_phi_phi_fu_18273_p4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_0, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_9_V_read23_phi_phi_fu_18273_p4 = ap_phi_mux_data_9_V_read23_rew_phi_fu_7291_p6.read();
    } else if (esl_seteq<1,1,1>(ap_const_lv1_1, ap_phi_mux_do_init_phi_fu_7149_p6.read())) {
        ap_phi_mux_data_9_V_read23_phi_phi_fu_18273_p4 = data_9_V_read.read();
    } else {
        ap_phi_mux_data_9_V_read23_phi_phi_fu_18273_p4 = ap_phi_reg_pp0_iter0_data_9_V_read23_phi_reg_18269.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_data_9_V_read23_rew_phi_fu_7291_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_9_V_read23_rew_phi_fu_7291_p6 = data_9_V_read23_phi_reg_18269.read();
    } else {
        ap_phi_mux_data_9_V_read23_rew_phi_fu_7291_p6 = data_9_V_read23_rew_reg_7287.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_do_init_phi_fu_7149_p6() {
    if (esl_seteq<1,1,1>(ap_condition_16208.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln43_reg_44442.read())) {
            ap_phi_mux_do_init_phi_fu_7149_p6 = ap_const_lv1_1;
        } else if (esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0)) {
            ap_phi_mux_do_init_phi_fu_7149_p6 = ap_const_lv1_0;
        } else {
            ap_phi_mux_do_init_phi_fu_7149_p6 = do_init_reg_7145.read();
        }
    } else {
        ap_phi_mux_do_init_phi_fu_7149_p6 = do_init_reg_7145.read();
    }
}

void dense_wrapper::thread_ap_phi_mux_w_index13_phi_fu_18141_p6() {
    if (esl_seteq<1,1,1>(ap_condition_16208.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln43_reg_44442.read())) {
            ap_phi_mux_w_index13_phi_fu_18141_p6 = ap_const_lv9_0;
        } else if (esl_seteq<1,1,1>(icmp_ln43_reg_44442.read(), ap_const_lv1_0)) {
            ap_phi_mux_w_index13_phi_fu_18141_p6 = w_index_reg_42552.read();
        } else {
            ap_phi_mux_w_index13_phi_fu_18141_p6 = w_index13_reg_18137.read();
        }
    } else {
        ap_phi_mux_w_index13_phi_fu_18141_p6 = w_index13_reg_18137.read();
    }
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_0_V_read14_phi_reg_18152() {
    ap_phi_reg_pp0_iter0_data_0_V_read14_phi_reg_18152 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_100_V_read114_s_reg_19452() {
    ap_phi_reg_pp0_iter0_data_100_V_read114_s_reg_19452 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_101_V_read115_s_reg_19465() {
    ap_phi_reg_pp0_iter0_data_101_V_read115_s_reg_19465 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_102_V_read116_s_reg_19478() {
    ap_phi_reg_pp0_iter0_data_102_V_read116_s_reg_19478 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_103_V_read117_s_reg_19491() {
    ap_phi_reg_pp0_iter0_data_103_V_read117_s_reg_19491 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_104_V_read118_s_reg_19504() {
    ap_phi_reg_pp0_iter0_data_104_V_read118_s_reg_19504 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_105_V_read119_s_reg_19517() {
    ap_phi_reg_pp0_iter0_data_105_V_read119_s_reg_19517 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_106_V_read120_s_reg_19530() {
    ap_phi_reg_pp0_iter0_data_106_V_read120_s_reg_19530 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_107_V_read121_s_reg_19543() {
    ap_phi_reg_pp0_iter0_data_107_V_read121_s_reg_19543 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_108_V_read122_s_reg_19556() {
    ap_phi_reg_pp0_iter0_data_108_V_read122_s_reg_19556 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_109_V_read123_s_reg_19569() {
    ap_phi_reg_pp0_iter0_data_109_V_read123_s_reg_19569 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_10_V_read24_ph_reg_18282() {
    ap_phi_reg_pp0_iter0_data_10_V_read24_ph_reg_18282 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_110_V_read124_s_reg_19582() {
    ap_phi_reg_pp0_iter0_data_110_V_read124_s_reg_19582 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_111_V_read125_s_reg_19595() {
    ap_phi_reg_pp0_iter0_data_111_V_read125_s_reg_19595 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_112_V_read126_s_reg_19608() {
    ap_phi_reg_pp0_iter0_data_112_V_read126_s_reg_19608 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_113_V_read127_s_reg_19621() {
    ap_phi_reg_pp0_iter0_data_113_V_read127_s_reg_19621 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_114_V_read128_s_reg_19634() {
    ap_phi_reg_pp0_iter0_data_114_V_read128_s_reg_19634 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_115_V_read129_s_reg_19647() {
    ap_phi_reg_pp0_iter0_data_115_V_read129_s_reg_19647 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_116_V_read130_s_reg_19660() {
    ap_phi_reg_pp0_iter0_data_116_V_read130_s_reg_19660 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_117_V_read131_s_reg_19673() {
    ap_phi_reg_pp0_iter0_data_117_V_read131_s_reg_19673 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_118_V_read132_s_reg_19686() {
    ap_phi_reg_pp0_iter0_data_118_V_read132_s_reg_19686 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_119_V_read133_s_reg_19699() {
    ap_phi_reg_pp0_iter0_data_119_V_read133_s_reg_19699 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_11_V_read25_ph_reg_18295() {
    ap_phi_reg_pp0_iter0_data_11_V_read25_ph_reg_18295 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_120_V_read134_s_reg_19712() {
    ap_phi_reg_pp0_iter0_data_120_V_read134_s_reg_19712 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_121_V_read135_s_reg_19725() {
    ap_phi_reg_pp0_iter0_data_121_V_read135_s_reg_19725 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_122_V_read136_s_reg_19738() {
    ap_phi_reg_pp0_iter0_data_122_V_read136_s_reg_19738 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_123_V_read137_s_reg_19751() {
    ap_phi_reg_pp0_iter0_data_123_V_read137_s_reg_19751 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_124_V_read138_s_reg_19764() {
    ap_phi_reg_pp0_iter0_data_124_V_read138_s_reg_19764 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_125_V_read139_s_reg_19777() {
    ap_phi_reg_pp0_iter0_data_125_V_read139_s_reg_19777 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_126_V_read140_s_reg_19790() {
    ap_phi_reg_pp0_iter0_data_126_V_read140_s_reg_19790 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_127_V_read141_s_reg_19803() {
    ap_phi_reg_pp0_iter0_data_127_V_read141_s_reg_19803 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_128_V_read142_s_reg_19816() {
    ap_phi_reg_pp0_iter0_data_128_V_read142_s_reg_19816 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_129_V_read143_s_reg_19829() {
    ap_phi_reg_pp0_iter0_data_129_V_read143_s_reg_19829 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_12_V_read26_ph_reg_18308() {
    ap_phi_reg_pp0_iter0_data_12_V_read26_ph_reg_18308 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_130_V_read144_s_reg_19842() {
    ap_phi_reg_pp0_iter0_data_130_V_read144_s_reg_19842 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_131_V_read145_s_reg_19855() {
    ap_phi_reg_pp0_iter0_data_131_V_read145_s_reg_19855 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_132_V_read146_s_reg_19868() {
    ap_phi_reg_pp0_iter0_data_132_V_read146_s_reg_19868 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_133_V_read147_s_reg_19881() {
    ap_phi_reg_pp0_iter0_data_133_V_read147_s_reg_19881 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_134_V_read148_s_reg_19894() {
    ap_phi_reg_pp0_iter0_data_134_V_read148_s_reg_19894 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_135_V_read149_s_reg_19907() {
    ap_phi_reg_pp0_iter0_data_135_V_read149_s_reg_19907 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_136_V_read150_s_reg_19920() {
    ap_phi_reg_pp0_iter0_data_136_V_read150_s_reg_19920 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_137_V_read151_s_reg_19933() {
    ap_phi_reg_pp0_iter0_data_137_V_read151_s_reg_19933 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_138_V_read152_s_reg_19946() {
    ap_phi_reg_pp0_iter0_data_138_V_read152_s_reg_19946 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_139_V_read153_s_reg_19959() {
    ap_phi_reg_pp0_iter0_data_139_V_read153_s_reg_19959 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_13_V_read27_ph_reg_18321() {
    ap_phi_reg_pp0_iter0_data_13_V_read27_ph_reg_18321 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_140_V_read154_s_reg_19972() {
    ap_phi_reg_pp0_iter0_data_140_V_read154_s_reg_19972 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_141_V_read155_s_reg_19985() {
    ap_phi_reg_pp0_iter0_data_141_V_read155_s_reg_19985 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_142_V_read156_s_reg_19998() {
    ap_phi_reg_pp0_iter0_data_142_V_read156_s_reg_19998 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_143_V_read157_s_reg_20011() {
    ap_phi_reg_pp0_iter0_data_143_V_read157_s_reg_20011 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_144_V_read158_s_reg_20024() {
    ap_phi_reg_pp0_iter0_data_144_V_read158_s_reg_20024 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_145_V_read159_s_reg_20037() {
    ap_phi_reg_pp0_iter0_data_145_V_read159_s_reg_20037 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_146_V_read160_s_reg_20050() {
    ap_phi_reg_pp0_iter0_data_146_V_read160_s_reg_20050 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_147_V_read161_s_reg_20063() {
    ap_phi_reg_pp0_iter0_data_147_V_read161_s_reg_20063 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_148_V_read162_s_reg_20076() {
    ap_phi_reg_pp0_iter0_data_148_V_read162_s_reg_20076 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_149_V_read163_s_reg_20089() {
    ap_phi_reg_pp0_iter0_data_149_V_read163_s_reg_20089 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_14_V_read28_ph_reg_18334() {
    ap_phi_reg_pp0_iter0_data_14_V_read28_ph_reg_18334 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_150_V_read164_s_reg_20102() {
    ap_phi_reg_pp0_iter0_data_150_V_read164_s_reg_20102 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_151_V_read165_s_reg_20115() {
    ap_phi_reg_pp0_iter0_data_151_V_read165_s_reg_20115 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_152_V_read166_s_reg_20128() {
    ap_phi_reg_pp0_iter0_data_152_V_read166_s_reg_20128 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_153_V_read167_s_reg_20141() {
    ap_phi_reg_pp0_iter0_data_153_V_read167_s_reg_20141 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_154_V_read168_s_reg_20154() {
    ap_phi_reg_pp0_iter0_data_154_V_read168_s_reg_20154 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_155_V_read169_s_reg_20167() {
    ap_phi_reg_pp0_iter0_data_155_V_read169_s_reg_20167 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_156_V_read170_s_reg_20180() {
    ap_phi_reg_pp0_iter0_data_156_V_read170_s_reg_20180 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_157_V_read171_s_reg_20193() {
    ap_phi_reg_pp0_iter0_data_157_V_read171_s_reg_20193 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_158_V_read172_s_reg_20206() {
    ap_phi_reg_pp0_iter0_data_158_V_read172_s_reg_20206 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_159_V_read173_s_reg_20219() {
    ap_phi_reg_pp0_iter0_data_159_V_read173_s_reg_20219 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_15_V_read29_ph_reg_18347() {
    ap_phi_reg_pp0_iter0_data_15_V_read29_ph_reg_18347 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_160_V_read174_s_reg_20232() {
    ap_phi_reg_pp0_iter0_data_160_V_read174_s_reg_20232 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_161_V_read175_s_reg_20245() {
    ap_phi_reg_pp0_iter0_data_161_V_read175_s_reg_20245 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_162_V_read176_s_reg_20258() {
    ap_phi_reg_pp0_iter0_data_162_V_read176_s_reg_20258 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_163_V_read177_s_reg_20271() {
    ap_phi_reg_pp0_iter0_data_163_V_read177_s_reg_20271 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_164_V_read178_s_reg_20284() {
    ap_phi_reg_pp0_iter0_data_164_V_read178_s_reg_20284 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_165_V_read179_s_reg_20297() {
    ap_phi_reg_pp0_iter0_data_165_V_read179_s_reg_20297 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_166_V_read180_s_reg_20310() {
    ap_phi_reg_pp0_iter0_data_166_V_read180_s_reg_20310 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_167_V_read181_s_reg_20323() {
    ap_phi_reg_pp0_iter0_data_167_V_read181_s_reg_20323 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_168_V_read182_s_reg_20336() {
    ap_phi_reg_pp0_iter0_data_168_V_read182_s_reg_20336 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_169_V_read183_s_reg_20349() {
    ap_phi_reg_pp0_iter0_data_169_V_read183_s_reg_20349 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_16_V_read30_ph_reg_18360() {
    ap_phi_reg_pp0_iter0_data_16_V_read30_ph_reg_18360 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_170_V_read184_s_reg_20362() {
    ap_phi_reg_pp0_iter0_data_170_V_read184_s_reg_20362 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_171_V_read185_s_reg_20375() {
    ap_phi_reg_pp0_iter0_data_171_V_read185_s_reg_20375 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_172_V_read186_s_reg_20388() {
    ap_phi_reg_pp0_iter0_data_172_V_read186_s_reg_20388 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_173_V_read187_s_reg_20401() {
    ap_phi_reg_pp0_iter0_data_173_V_read187_s_reg_20401 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_174_V_read188_s_reg_20414() {
    ap_phi_reg_pp0_iter0_data_174_V_read188_s_reg_20414 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_175_V_read189_s_reg_20427() {
    ap_phi_reg_pp0_iter0_data_175_V_read189_s_reg_20427 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_176_V_read190_s_reg_20440() {
    ap_phi_reg_pp0_iter0_data_176_V_read190_s_reg_20440 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_177_V_read191_s_reg_20453() {
    ap_phi_reg_pp0_iter0_data_177_V_read191_s_reg_20453 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_178_V_read192_s_reg_20466() {
    ap_phi_reg_pp0_iter0_data_178_V_read192_s_reg_20466 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_179_V_read193_s_reg_20479() {
    ap_phi_reg_pp0_iter0_data_179_V_read193_s_reg_20479 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_17_V_read31_ph_reg_18373() {
    ap_phi_reg_pp0_iter0_data_17_V_read31_ph_reg_18373 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_180_V_read194_s_reg_20492() {
    ap_phi_reg_pp0_iter0_data_180_V_read194_s_reg_20492 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_181_V_read195_s_reg_20505() {
    ap_phi_reg_pp0_iter0_data_181_V_read195_s_reg_20505 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_182_V_read196_s_reg_20518() {
    ap_phi_reg_pp0_iter0_data_182_V_read196_s_reg_20518 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_183_V_read197_s_reg_20531() {
    ap_phi_reg_pp0_iter0_data_183_V_read197_s_reg_20531 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_184_V_read198_s_reg_20544() {
    ap_phi_reg_pp0_iter0_data_184_V_read198_s_reg_20544 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_185_V_read199_s_reg_20557() {
    ap_phi_reg_pp0_iter0_data_185_V_read199_s_reg_20557 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_186_V_read200_s_reg_20570() {
    ap_phi_reg_pp0_iter0_data_186_V_read200_s_reg_20570 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_187_V_read201_s_reg_20583() {
    ap_phi_reg_pp0_iter0_data_187_V_read201_s_reg_20583 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_188_V_read202_s_reg_20596() {
    ap_phi_reg_pp0_iter0_data_188_V_read202_s_reg_20596 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_189_V_read203_s_reg_20609() {
    ap_phi_reg_pp0_iter0_data_189_V_read203_s_reg_20609 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_18_V_read32_ph_reg_18386() {
    ap_phi_reg_pp0_iter0_data_18_V_read32_ph_reg_18386 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_190_V_read204_s_reg_20622() {
    ap_phi_reg_pp0_iter0_data_190_V_read204_s_reg_20622 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_191_V_read205_s_reg_20635() {
    ap_phi_reg_pp0_iter0_data_191_V_read205_s_reg_20635 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_192_V_read206_s_reg_20648() {
    ap_phi_reg_pp0_iter0_data_192_V_read206_s_reg_20648 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_193_V_read207_s_reg_20661() {
    ap_phi_reg_pp0_iter0_data_193_V_read207_s_reg_20661 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_194_V_read208_s_reg_20674() {
    ap_phi_reg_pp0_iter0_data_194_V_read208_s_reg_20674 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_195_V_read209_s_reg_20687() {
    ap_phi_reg_pp0_iter0_data_195_V_read209_s_reg_20687 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_196_V_read210_s_reg_20700() {
    ap_phi_reg_pp0_iter0_data_196_V_read210_s_reg_20700 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_197_V_read211_s_reg_20713() {
    ap_phi_reg_pp0_iter0_data_197_V_read211_s_reg_20713 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_198_V_read212_s_reg_20726() {
    ap_phi_reg_pp0_iter0_data_198_V_read212_s_reg_20726 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_199_V_read213_s_reg_20739() {
    ap_phi_reg_pp0_iter0_data_199_V_read213_s_reg_20739 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_19_V_read33_ph_reg_18399() {
    ap_phi_reg_pp0_iter0_data_19_V_read33_ph_reg_18399 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_1_V_read15_phi_reg_18165() {
    ap_phi_reg_pp0_iter0_data_1_V_read15_phi_reg_18165 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_200_V_read214_s_reg_20752() {
    ap_phi_reg_pp0_iter0_data_200_V_read214_s_reg_20752 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_201_V_read215_s_reg_20765() {
    ap_phi_reg_pp0_iter0_data_201_V_read215_s_reg_20765 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_202_V_read216_s_reg_20778() {
    ap_phi_reg_pp0_iter0_data_202_V_read216_s_reg_20778 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_203_V_read217_s_reg_20791() {
    ap_phi_reg_pp0_iter0_data_203_V_read217_s_reg_20791 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_204_V_read218_s_reg_20804() {
    ap_phi_reg_pp0_iter0_data_204_V_read218_s_reg_20804 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_205_V_read219_s_reg_20817() {
    ap_phi_reg_pp0_iter0_data_205_V_read219_s_reg_20817 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_206_V_read220_s_reg_20830() {
    ap_phi_reg_pp0_iter0_data_206_V_read220_s_reg_20830 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_207_V_read221_s_reg_20843() {
    ap_phi_reg_pp0_iter0_data_207_V_read221_s_reg_20843 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_208_V_read222_s_reg_20856() {
    ap_phi_reg_pp0_iter0_data_208_V_read222_s_reg_20856 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_209_V_read223_s_reg_20869() {
    ap_phi_reg_pp0_iter0_data_209_V_read223_s_reg_20869 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_20_V_read34_ph_reg_18412() {
    ap_phi_reg_pp0_iter0_data_20_V_read34_ph_reg_18412 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_210_V_read224_s_reg_20882() {
    ap_phi_reg_pp0_iter0_data_210_V_read224_s_reg_20882 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_211_V_read225_s_reg_20895() {
    ap_phi_reg_pp0_iter0_data_211_V_read225_s_reg_20895 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_212_V_read226_s_reg_20908() {
    ap_phi_reg_pp0_iter0_data_212_V_read226_s_reg_20908 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_213_V_read227_s_reg_20921() {
    ap_phi_reg_pp0_iter0_data_213_V_read227_s_reg_20921 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_214_V_read228_s_reg_20934() {
    ap_phi_reg_pp0_iter0_data_214_V_read228_s_reg_20934 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_215_V_read229_s_reg_20947() {
    ap_phi_reg_pp0_iter0_data_215_V_read229_s_reg_20947 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_216_V_read230_s_reg_20960() {
    ap_phi_reg_pp0_iter0_data_216_V_read230_s_reg_20960 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_217_V_read231_s_reg_20973() {
    ap_phi_reg_pp0_iter0_data_217_V_read231_s_reg_20973 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_218_V_read232_s_reg_20986() {
    ap_phi_reg_pp0_iter0_data_218_V_read232_s_reg_20986 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_219_V_read233_s_reg_20999() {
    ap_phi_reg_pp0_iter0_data_219_V_read233_s_reg_20999 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_21_V_read35_ph_reg_18425() {
    ap_phi_reg_pp0_iter0_data_21_V_read35_ph_reg_18425 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_220_V_read234_s_reg_21012() {
    ap_phi_reg_pp0_iter0_data_220_V_read234_s_reg_21012 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_221_V_read235_s_reg_21025() {
    ap_phi_reg_pp0_iter0_data_221_V_read235_s_reg_21025 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_222_V_read236_s_reg_21038() {
    ap_phi_reg_pp0_iter0_data_222_V_read236_s_reg_21038 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_223_V_read237_s_reg_21051() {
    ap_phi_reg_pp0_iter0_data_223_V_read237_s_reg_21051 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_224_V_read238_s_reg_21064() {
    ap_phi_reg_pp0_iter0_data_224_V_read238_s_reg_21064 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_225_V_read239_s_reg_21077() {
    ap_phi_reg_pp0_iter0_data_225_V_read239_s_reg_21077 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_226_V_read240_s_reg_21090() {
    ap_phi_reg_pp0_iter0_data_226_V_read240_s_reg_21090 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_227_V_read241_s_reg_21103() {
    ap_phi_reg_pp0_iter0_data_227_V_read241_s_reg_21103 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_228_V_read242_s_reg_21116() {
    ap_phi_reg_pp0_iter0_data_228_V_read242_s_reg_21116 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_229_V_read243_s_reg_21129() {
    ap_phi_reg_pp0_iter0_data_229_V_read243_s_reg_21129 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_22_V_read36_ph_reg_18438() {
    ap_phi_reg_pp0_iter0_data_22_V_read36_ph_reg_18438 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_230_V_read244_s_reg_21142() {
    ap_phi_reg_pp0_iter0_data_230_V_read244_s_reg_21142 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_231_V_read245_s_reg_21155() {
    ap_phi_reg_pp0_iter0_data_231_V_read245_s_reg_21155 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_232_V_read246_s_reg_21168() {
    ap_phi_reg_pp0_iter0_data_232_V_read246_s_reg_21168 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_233_V_read247_s_reg_21181() {
    ap_phi_reg_pp0_iter0_data_233_V_read247_s_reg_21181 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_234_V_read248_s_reg_21194() {
    ap_phi_reg_pp0_iter0_data_234_V_read248_s_reg_21194 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_235_V_read249_s_reg_21207() {
    ap_phi_reg_pp0_iter0_data_235_V_read249_s_reg_21207 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_236_V_read250_s_reg_21220() {
    ap_phi_reg_pp0_iter0_data_236_V_read250_s_reg_21220 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_237_V_read251_s_reg_21233() {
    ap_phi_reg_pp0_iter0_data_237_V_read251_s_reg_21233 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_238_V_read252_s_reg_21246() {
    ap_phi_reg_pp0_iter0_data_238_V_read252_s_reg_21246 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_239_V_read253_s_reg_21259() {
    ap_phi_reg_pp0_iter0_data_239_V_read253_s_reg_21259 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_23_V_read37_ph_reg_18451() {
    ap_phi_reg_pp0_iter0_data_23_V_read37_ph_reg_18451 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_240_V_read254_s_reg_21272() {
    ap_phi_reg_pp0_iter0_data_240_V_read254_s_reg_21272 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_241_V_read255_s_reg_21285() {
    ap_phi_reg_pp0_iter0_data_241_V_read255_s_reg_21285 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_242_V_read256_s_reg_21298() {
    ap_phi_reg_pp0_iter0_data_242_V_read256_s_reg_21298 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_243_V_read257_s_reg_21311() {
    ap_phi_reg_pp0_iter0_data_243_V_read257_s_reg_21311 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_244_V_read258_s_reg_21324() {
    ap_phi_reg_pp0_iter0_data_244_V_read258_s_reg_21324 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_245_V_read259_s_reg_21337() {
    ap_phi_reg_pp0_iter0_data_245_V_read259_s_reg_21337 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_246_V_read260_s_reg_21350() {
    ap_phi_reg_pp0_iter0_data_246_V_read260_s_reg_21350 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_247_V_read261_s_reg_21363() {
    ap_phi_reg_pp0_iter0_data_247_V_read261_s_reg_21363 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_248_V_read262_s_reg_21376() {
    ap_phi_reg_pp0_iter0_data_248_V_read262_s_reg_21376 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_249_V_read263_s_reg_21389() {
    ap_phi_reg_pp0_iter0_data_249_V_read263_s_reg_21389 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_24_V_read38_ph_reg_18464() {
    ap_phi_reg_pp0_iter0_data_24_V_read38_ph_reg_18464 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_250_V_read264_s_reg_21402() {
    ap_phi_reg_pp0_iter0_data_250_V_read264_s_reg_21402 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_251_V_read265_s_reg_21415() {
    ap_phi_reg_pp0_iter0_data_251_V_read265_s_reg_21415 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_252_V_read266_s_reg_21428() {
    ap_phi_reg_pp0_iter0_data_252_V_read266_s_reg_21428 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_253_V_read267_s_reg_21441() {
    ap_phi_reg_pp0_iter0_data_253_V_read267_s_reg_21441 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_254_V_read268_s_reg_21454() {
    ap_phi_reg_pp0_iter0_data_254_V_read268_s_reg_21454 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_255_V_read269_s_reg_21467() {
    ap_phi_reg_pp0_iter0_data_255_V_read269_s_reg_21467 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_256_V_read270_s_reg_21480() {
    ap_phi_reg_pp0_iter0_data_256_V_read270_s_reg_21480 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_257_V_read271_s_reg_21493() {
    ap_phi_reg_pp0_iter0_data_257_V_read271_s_reg_21493 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_258_V_read272_s_reg_21506() {
    ap_phi_reg_pp0_iter0_data_258_V_read272_s_reg_21506 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_259_V_read273_s_reg_21519() {
    ap_phi_reg_pp0_iter0_data_259_V_read273_s_reg_21519 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_25_V_read39_ph_reg_18477() {
    ap_phi_reg_pp0_iter0_data_25_V_read39_ph_reg_18477 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_260_V_read274_s_reg_21532() {
    ap_phi_reg_pp0_iter0_data_260_V_read274_s_reg_21532 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_261_V_read275_s_reg_21545() {
    ap_phi_reg_pp0_iter0_data_261_V_read275_s_reg_21545 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_262_V_read276_s_reg_21558() {
    ap_phi_reg_pp0_iter0_data_262_V_read276_s_reg_21558 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_263_V_read277_s_reg_21571() {
    ap_phi_reg_pp0_iter0_data_263_V_read277_s_reg_21571 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_264_V_read278_s_reg_21584() {
    ap_phi_reg_pp0_iter0_data_264_V_read278_s_reg_21584 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_265_V_read279_s_reg_21597() {
    ap_phi_reg_pp0_iter0_data_265_V_read279_s_reg_21597 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_266_V_read280_s_reg_21610() {
    ap_phi_reg_pp0_iter0_data_266_V_read280_s_reg_21610 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_267_V_read281_s_reg_21623() {
    ap_phi_reg_pp0_iter0_data_267_V_read281_s_reg_21623 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_268_V_read282_s_reg_21636() {
    ap_phi_reg_pp0_iter0_data_268_V_read282_s_reg_21636 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_269_V_read283_s_reg_21649() {
    ap_phi_reg_pp0_iter0_data_269_V_read283_s_reg_21649 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_26_V_read40_ph_reg_18490() {
    ap_phi_reg_pp0_iter0_data_26_V_read40_ph_reg_18490 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_270_V_read284_s_reg_21662() {
    ap_phi_reg_pp0_iter0_data_270_V_read284_s_reg_21662 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_271_V_read285_s_reg_21675() {
    ap_phi_reg_pp0_iter0_data_271_V_read285_s_reg_21675 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_272_V_read286_s_reg_21688() {
    ap_phi_reg_pp0_iter0_data_272_V_read286_s_reg_21688 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_273_V_read287_s_reg_21701() {
    ap_phi_reg_pp0_iter0_data_273_V_read287_s_reg_21701 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_274_V_read288_s_reg_21714() {
    ap_phi_reg_pp0_iter0_data_274_V_read288_s_reg_21714 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_275_V_read289_s_reg_21727() {
    ap_phi_reg_pp0_iter0_data_275_V_read289_s_reg_21727 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_276_V_read290_s_reg_21740() {
    ap_phi_reg_pp0_iter0_data_276_V_read290_s_reg_21740 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_277_V_read291_s_reg_21753() {
    ap_phi_reg_pp0_iter0_data_277_V_read291_s_reg_21753 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_278_V_read292_s_reg_21766() {
    ap_phi_reg_pp0_iter0_data_278_V_read292_s_reg_21766 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_279_V_read293_s_reg_21779() {
    ap_phi_reg_pp0_iter0_data_279_V_read293_s_reg_21779 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_27_V_read41_ph_reg_18503() {
    ap_phi_reg_pp0_iter0_data_27_V_read41_ph_reg_18503 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_280_V_read294_s_reg_21792() {
    ap_phi_reg_pp0_iter0_data_280_V_read294_s_reg_21792 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_281_V_read295_s_reg_21805() {
    ap_phi_reg_pp0_iter0_data_281_V_read295_s_reg_21805 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_282_V_read296_s_reg_21818() {
    ap_phi_reg_pp0_iter0_data_282_V_read296_s_reg_21818 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_283_V_read297_s_reg_21831() {
    ap_phi_reg_pp0_iter0_data_283_V_read297_s_reg_21831 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_284_V_read298_s_reg_21844() {
    ap_phi_reg_pp0_iter0_data_284_V_read298_s_reg_21844 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_285_V_read299_s_reg_21857() {
    ap_phi_reg_pp0_iter0_data_285_V_read299_s_reg_21857 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_286_V_read300_s_reg_21870() {
    ap_phi_reg_pp0_iter0_data_286_V_read300_s_reg_21870 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_287_V_read301_s_reg_21883() {
    ap_phi_reg_pp0_iter0_data_287_V_read301_s_reg_21883 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_288_V_read302_s_reg_21896() {
    ap_phi_reg_pp0_iter0_data_288_V_read302_s_reg_21896 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_289_V_read303_s_reg_21909() {
    ap_phi_reg_pp0_iter0_data_289_V_read303_s_reg_21909 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_28_V_read42_ph_reg_18516() {
    ap_phi_reg_pp0_iter0_data_28_V_read42_ph_reg_18516 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_290_V_read304_s_reg_21922() {
    ap_phi_reg_pp0_iter0_data_290_V_read304_s_reg_21922 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_291_V_read305_s_reg_21935() {
    ap_phi_reg_pp0_iter0_data_291_V_read305_s_reg_21935 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_292_V_read306_s_reg_21948() {
    ap_phi_reg_pp0_iter0_data_292_V_read306_s_reg_21948 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_293_V_read307_s_reg_21961() {
    ap_phi_reg_pp0_iter0_data_293_V_read307_s_reg_21961 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_294_V_read308_s_reg_21974() {
    ap_phi_reg_pp0_iter0_data_294_V_read308_s_reg_21974 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_295_V_read309_s_reg_21987() {
    ap_phi_reg_pp0_iter0_data_295_V_read309_s_reg_21987 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_296_V_read310_s_reg_22000() {
    ap_phi_reg_pp0_iter0_data_296_V_read310_s_reg_22000 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_297_V_read311_s_reg_22013() {
    ap_phi_reg_pp0_iter0_data_297_V_read311_s_reg_22013 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_298_V_read312_s_reg_22026() {
    ap_phi_reg_pp0_iter0_data_298_V_read312_s_reg_22026 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_299_V_read313_s_reg_22039() {
    ap_phi_reg_pp0_iter0_data_299_V_read313_s_reg_22039 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_29_V_read43_ph_reg_18529() {
    ap_phi_reg_pp0_iter0_data_29_V_read43_ph_reg_18529 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_2_V_read16_phi_reg_18178() {
    ap_phi_reg_pp0_iter0_data_2_V_read16_phi_reg_18178 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_300_V_read314_s_reg_22052() {
    ap_phi_reg_pp0_iter0_data_300_V_read314_s_reg_22052 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_301_V_read315_s_reg_22065() {
    ap_phi_reg_pp0_iter0_data_301_V_read315_s_reg_22065 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_302_V_read316_s_reg_22078() {
    ap_phi_reg_pp0_iter0_data_302_V_read316_s_reg_22078 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_303_V_read317_s_reg_22091() {
    ap_phi_reg_pp0_iter0_data_303_V_read317_s_reg_22091 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_304_V_read318_s_reg_22104() {
    ap_phi_reg_pp0_iter0_data_304_V_read318_s_reg_22104 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_305_V_read319_s_reg_22117() {
    ap_phi_reg_pp0_iter0_data_305_V_read319_s_reg_22117 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_306_V_read320_s_reg_22130() {
    ap_phi_reg_pp0_iter0_data_306_V_read320_s_reg_22130 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_307_V_read321_s_reg_22143() {
    ap_phi_reg_pp0_iter0_data_307_V_read321_s_reg_22143 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_308_V_read322_s_reg_22156() {
    ap_phi_reg_pp0_iter0_data_308_V_read322_s_reg_22156 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_309_V_read323_s_reg_22169() {
    ap_phi_reg_pp0_iter0_data_309_V_read323_s_reg_22169 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_30_V_read44_ph_reg_18542() {
    ap_phi_reg_pp0_iter0_data_30_V_read44_ph_reg_18542 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_310_V_read324_s_reg_22182() {
    ap_phi_reg_pp0_iter0_data_310_V_read324_s_reg_22182 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_311_V_read325_s_reg_22195() {
    ap_phi_reg_pp0_iter0_data_311_V_read325_s_reg_22195 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_312_V_read326_s_reg_22208() {
    ap_phi_reg_pp0_iter0_data_312_V_read326_s_reg_22208 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_313_V_read327_s_reg_22221() {
    ap_phi_reg_pp0_iter0_data_313_V_read327_s_reg_22221 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_314_V_read328_s_reg_22234() {
    ap_phi_reg_pp0_iter0_data_314_V_read328_s_reg_22234 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_315_V_read329_s_reg_22247() {
    ap_phi_reg_pp0_iter0_data_315_V_read329_s_reg_22247 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_316_V_read330_s_reg_22260() {
    ap_phi_reg_pp0_iter0_data_316_V_read330_s_reg_22260 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_317_V_read331_s_reg_22273() {
    ap_phi_reg_pp0_iter0_data_317_V_read331_s_reg_22273 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_318_V_read332_s_reg_22286() {
    ap_phi_reg_pp0_iter0_data_318_V_read332_s_reg_22286 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_319_V_read333_s_reg_22299() {
    ap_phi_reg_pp0_iter0_data_319_V_read333_s_reg_22299 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_31_V_read45_ph_reg_18555() {
    ap_phi_reg_pp0_iter0_data_31_V_read45_ph_reg_18555 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_320_V_read334_s_reg_22312() {
    ap_phi_reg_pp0_iter0_data_320_V_read334_s_reg_22312 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_321_V_read335_s_reg_22325() {
    ap_phi_reg_pp0_iter0_data_321_V_read335_s_reg_22325 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_322_V_read336_s_reg_22338() {
    ap_phi_reg_pp0_iter0_data_322_V_read336_s_reg_22338 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_323_V_read337_s_reg_22351() {
    ap_phi_reg_pp0_iter0_data_323_V_read337_s_reg_22351 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_324_V_read338_s_reg_22364() {
    ap_phi_reg_pp0_iter0_data_324_V_read338_s_reg_22364 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_325_V_read339_s_reg_22377() {
    ap_phi_reg_pp0_iter0_data_325_V_read339_s_reg_22377 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_326_V_read340_s_reg_22390() {
    ap_phi_reg_pp0_iter0_data_326_V_read340_s_reg_22390 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_327_V_read341_s_reg_22403() {
    ap_phi_reg_pp0_iter0_data_327_V_read341_s_reg_22403 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_328_V_read342_s_reg_22416() {
    ap_phi_reg_pp0_iter0_data_328_V_read342_s_reg_22416 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_329_V_read343_s_reg_22429() {
    ap_phi_reg_pp0_iter0_data_329_V_read343_s_reg_22429 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_32_V_read46_ph_reg_18568() {
    ap_phi_reg_pp0_iter0_data_32_V_read46_ph_reg_18568 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_330_V_read344_s_reg_22442() {
    ap_phi_reg_pp0_iter0_data_330_V_read344_s_reg_22442 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_331_V_read345_s_reg_22455() {
    ap_phi_reg_pp0_iter0_data_331_V_read345_s_reg_22455 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_332_V_read346_s_reg_22468() {
    ap_phi_reg_pp0_iter0_data_332_V_read346_s_reg_22468 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_333_V_read347_s_reg_22481() {
    ap_phi_reg_pp0_iter0_data_333_V_read347_s_reg_22481 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_334_V_read348_s_reg_22494() {
    ap_phi_reg_pp0_iter0_data_334_V_read348_s_reg_22494 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_335_V_read349_s_reg_22507() {
    ap_phi_reg_pp0_iter0_data_335_V_read349_s_reg_22507 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_336_V_read350_s_reg_22520() {
    ap_phi_reg_pp0_iter0_data_336_V_read350_s_reg_22520 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_337_V_read351_s_reg_22533() {
    ap_phi_reg_pp0_iter0_data_337_V_read351_s_reg_22533 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_338_V_read352_s_reg_22546() {
    ap_phi_reg_pp0_iter0_data_338_V_read352_s_reg_22546 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_339_V_read353_s_reg_22559() {
    ap_phi_reg_pp0_iter0_data_339_V_read353_s_reg_22559 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_33_V_read47_ph_reg_18581() {
    ap_phi_reg_pp0_iter0_data_33_V_read47_ph_reg_18581 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_340_V_read354_s_reg_22572() {
    ap_phi_reg_pp0_iter0_data_340_V_read354_s_reg_22572 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_341_V_read355_s_reg_22585() {
    ap_phi_reg_pp0_iter0_data_341_V_read355_s_reg_22585 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_342_V_read356_s_reg_22598() {
    ap_phi_reg_pp0_iter0_data_342_V_read356_s_reg_22598 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_343_V_read357_s_reg_22611() {
    ap_phi_reg_pp0_iter0_data_343_V_read357_s_reg_22611 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_344_V_read358_s_reg_22624() {
    ap_phi_reg_pp0_iter0_data_344_V_read358_s_reg_22624 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_345_V_read359_s_reg_22637() {
    ap_phi_reg_pp0_iter0_data_345_V_read359_s_reg_22637 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_346_V_read360_s_reg_22650() {
    ap_phi_reg_pp0_iter0_data_346_V_read360_s_reg_22650 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_347_V_read361_s_reg_22663() {
    ap_phi_reg_pp0_iter0_data_347_V_read361_s_reg_22663 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_348_V_read362_s_reg_22676() {
    ap_phi_reg_pp0_iter0_data_348_V_read362_s_reg_22676 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_349_V_read363_s_reg_22689() {
    ap_phi_reg_pp0_iter0_data_349_V_read363_s_reg_22689 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_34_V_read48_ph_reg_18594() {
    ap_phi_reg_pp0_iter0_data_34_V_read48_ph_reg_18594 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_350_V_read364_s_reg_22702() {
    ap_phi_reg_pp0_iter0_data_350_V_read364_s_reg_22702 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_351_V_read365_s_reg_22715() {
    ap_phi_reg_pp0_iter0_data_351_V_read365_s_reg_22715 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_352_V_read366_s_reg_22728() {
    ap_phi_reg_pp0_iter0_data_352_V_read366_s_reg_22728 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_353_V_read367_s_reg_22741() {
    ap_phi_reg_pp0_iter0_data_353_V_read367_s_reg_22741 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_354_V_read368_s_reg_22754() {
    ap_phi_reg_pp0_iter0_data_354_V_read368_s_reg_22754 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_355_V_read369_s_reg_22767() {
    ap_phi_reg_pp0_iter0_data_355_V_read369_s_reg_22767 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_356_V_read370_s_reg_22780() {
    ap_phi_reg_pp0_iter0_data_356_V_read370_s_reg_22780 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_357_V_read371_s_reg_22793() {
    ap_phi_reg_pp0_iter0_data_357_V_read371_s_reg_22793 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_358_V_read372_s_reg_22806() {
    ap_phi_reg_pp0_iter0_data_358_V_read372_s_reg_22806 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_359_V_read373_s_reg_22819() {
    ap_phi_reg_pp0_iter0_data_359_V_read373_s_reg_22819 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_35_V_read49_ph_reg_18607() {
    ap_phi_reg_pp0_iter0_data_35_V_read49_ph_reg_18607 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_360_V_read374_s_reg_22832() {
    ap_phi_reg_pp0_iter0_data_360_V_read374_s_reg_22832 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_361_V_read375_s_reg_22845() {
    ap_phi_reg_pp0_iter0_data_361_V_read375_s_reg_22845 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_362_V_read376_s_reg_22858() {
    ap_phi_reg_pp0_iter0_data_362_V_read376_s_reg_22858 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_363_V_read377_s_reg_22871() {
    ap_phi_reg_pp0_iter0_data_363_V_read377_s_reg_22871 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_364_V_read378_s_reg_22884() {
    ap_phi_reg_pp0_iter0_data_364_V_read378_s_reg_22884 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_365_V_read379_s_reg_22897() {
    ap_phi_reg_pp0_iter0_data_365_V_read379_s_reg_22897 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_366_V_read380_s_reg_22910() {
    ap_phi_reg_pp0_iter0_data_366_V_read380_s_reg_22910 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_367_V_read381_s_reg_22923() {
    ap_phi_reg_pp0_iter0_data_367_V_read381_s_reg_22923 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_368_V_read382_s_reg_22936() {
    ap_phi_reg_pp0_iter0_data_368_V_read382_s_reg_22936 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_369_V_read383_s_reg_22949() {
    ap_phi_reg_pp0_iter0_data_369_V_read383_s_reg_22949 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_36_V_read50_ph_reg_18620() {
    ap_phi_reg_pp0_iter0_data_36_V_read50_ph_reg_18620 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_370_V_read384_s_reg_22962() {
    ap_phi_reg_pp0_iter0_data_370_V_read384_s_reg_22962 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_371_V_read385_s_reg_22975() {
    ap_phi_reg_pp0_iter0_data_371_V_read385_s_reg_22975 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_372_V_read386_s_reg_22988() {
    ap_phi_reg_pp0_iter0_data_372_V_read386_s_reg_22988 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_373_V_read387_s_reg_23001() {
    ap_phi_reg_pp0_iter0_data_373_V_read387_s_reg_23001 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_374_V_read388_s_reg_23014() {
    ap_phi_reg_pp0_iter0_data_374_V_read388_s_reg_23014 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_375_V_read389_s_reg_23027() {
    ap_phi_reg_pp0_iter0_data_375_V_read389_s_reg_23027 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_376_V_read390_s_reg_23040() {
    ap_phi_reg_pp0_iter0_data_376_V_read390_s_reg_23040 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_377_V_read391_s_reg_23053() {
    ap_phi_reg_pp0_iter0_data_377_V_read391_s_reg_23053 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_378_V_read392_s_reg_23066() {
    ap_phi_reg_pp0_iter0_data_378_V_read392_s_reg_23066 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_379_V_read393_s_reg_23079() {
    ap_phi_reg_pp0_iter0_data_379_V_read393_s_reg_23079 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_37_V_read51_ph_reg_18633() {
    ap_phi_reg_pp0_iter0_data_37_V_read51_ph_reg_18633 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_380_V_read394_s_reg_23092() {
    ap_phi_reg_pp0_iter0_data_380_V_read394_s_reg_23092 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_381_V_read395_s_reg_23105() {
    ap_phi_reg_pp0_iter0_data_381_V_read395_s_reg_23105 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_382_V_read396_s_reg_23118() {
    ap_phi_reg_pp0_iter0_data_382_V_read396_s_reg_23118 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_383_V_read397_s_reg_23131() {
    ap_phi_reg_pp0_iter0_data_383_V_read397_s_reg_23131 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_384_V_read398_s_reg_23144() {
    ap_phi_reg_pp0_iter0_data_384_V_read398_s_reg_23144 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_385_V_read399_s_reg_23157() {
    ap_phi_reg_pp0_iter0_data_385_V_read399_s_reg_23157 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_386_V_read400_s_reg_23170() {
    ap_phi_reg_pp0_iter0_data_386_V_read400_s_reg_23170 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_387_V_read401_s_reg_23183() {
    ap_phi_reg_pp0_iter0_data_387_V_read401_s_reg_23183 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_388_V_read402_s_reg_23196() {
    ap_phi_reg_pp0_iter0_data_388_V_read402_s_reg_23196 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_389_V_read403_s_reg_23209() {
    ap_phi_reg_pp0_iter0_data_389_V_read403_s_reg_23209 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_38_V_read52_ph_reg_18646() {
    ap_phi_reg_pp0_iter0_data_38_V_read52_ph_reg_18646 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_390_V_read404_s_reg_23222() {
    ap_phi_reg_pp0_iter0_data_390_V_read404_s_reg_23222 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_391_V_read405_s_reg_23235() {
    ap_phi_reg_pp0_iter0_data_391_V_read405_s_reg_23235 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_392_V_read406_s_reg_23248() {
    ap_phi_reg_pp0_iter0_data_392_V_read406_s_reg_23248 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_393_V_read407_s_reg_23261() {
    ap_phi_reg_pp0_iter0_data_393_V_read407_s_reg_23261 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_394_V_read408_s_reg_23274() {
    ap_phi_reg_pp0_iter0_data_394_V_read408_s_reg_23274 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_395_V_read409_s_reg_23287() {
    ap_phi_reg_pp0_iter0_data_395_V_read409_s_reg_23287 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_396_V_read410_s_reg_23300() {
    ap_phi_reg_pp0_iter0_data_396_V_read410_s_reg_23300 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_397_V_read411_s_reg_23313() {
    ap_phi_reg_pp0_iter0_data_397_V_read411_s_reg_23313 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_398_V_read412_s_reg_23326() {
    ap_phi_reg_pp0_iter0_data_398_V_read412_s_reg_23326 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_399_V_read413_s_reg_23339() {
    ap_phi_reg_pp0_iter0_data_399_V_read413_s_reg_23339 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_39_V_read53_ph_reg_18659() {
    ap_phi_reg_pp0_iter0_data_39_V_read53_ph_reg_18659 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_3_V_read17_phi_reg_18191() {
    ap_phi_reg_pp0_iter0_data_3_V_read17_phi_reg_18191 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_400_V_read414_s_reg_23352() {
    ap_phi_reg_pp0_iter0_data_400_V_read414_s_reg_23352 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_401_V_read415_s_reg_23365() {
    ap_phi_reg_pp0_iter0_data_401_V_read415_s_reg_23365 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_402_V_read416_s_reg_23378() {
    ap_phi_reg_pp0_iter0_data_402_V_read416_s_reg_23378 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_403_V_read417_s_reg_23391() {
    ap_phi_reg_pp0_iter0_data_403_V_read417_s_reg_23391 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_404_V_read418_s_reg_23404() {
    ap_phi_reg_pp0_iter0_data_404_V_read418_s_reg_23404 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_405_V_read419_s_reg_23417() {
    ap_phi_reg_pp0_iter0_data_405_V_read419_s_reg_23417 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_406_V_read420_s_reg_23430() {
    ap_phi_reg_pp0_iter0_data_406_V_read420_s_reg_23430 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_407_V_read421_s_reg_23443() {
    ap_phi_reg_pp0_iter0_data_407_V_read421_s_reg_23443 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_408_V_read422_s_reg_23456() {
    ap_phi_reg_pp0_iter0_data_408_V_read422_s_reg_23456 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_409_V_read423_s_reg_23469() {
    ap_phi_reg_pp0_iter0_data_409_V_read423_s_reg_23469 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_40_V_read54_ph_reg_18672() {
    ap_phi_reg_pp0_iter0_data_40_V_read54_ph_reg_18672 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_410_V_read424_s_reg_23482() {
    ap_phi_reg_pp0_iter0_data_410_V_read424_s_reg_23482 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_411_V_read425_s_reg_23495() {
    ap_phi_reg_pp0_iter0_data_411_V_read425_s_reg_23495 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_412_V_read426_s_reg_23508() {
    ap_phi_reg_pp0_iter0_data_412_V_read426_s_reg_23508 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_413_V_read427_s_reg_23521() {
    ap_phi_reg_pp0_iter0_data_413_V_read427_s_reg_23521 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_414_V_read428_s_reg_23534() {
    ap_phi_reg_pp0_iter0_data_414_V_read428_s_reg_23534 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_415_V_read429_s_reg_23547() {
    ap_phi_reg_pp0_iter0_data_415_V_read429_s_reg_23547 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_416_V_read430_s_reg_23560() {
    ap_phi_reg_pp0_iter0_data_416_V_read430_s_reg_23560 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_417_V_read431_s_reg_23573() {
    ap_phi_reg_pp0_iter0_data_417_V_read431_s_reg_23573 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_418_V_read432_s_reg_23586() {
    ap_phi_reg_pp0_iter0_data_418_V_read432_s_reg_23586 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_419_V_read433_s_reg_23599() {
    ap_phi_reg_pp0_iter0_data_419_V_read433_s_reg_23599 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_41_V_read55_ph_reg_18685() {
    ap_phi_reg_pp0_iter0_data_41_V_read55_ph_reg_18685 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_420_V_read434_s_reg_23612() {
    ap_phi_reg_pp0_iter0_data_420_V_read434_s_reg_23612 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_421_V_read435_s_reg_23625() {
    ap_phi_reg_pp0_iter0_data_421_V_read435_s_reg_23625 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_422_V_read436_s_reg_23638() {
    ap_phi_reg_pp0_iter0_data_422_V_read436_s_reg_23638 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_423_V_read437_s_reg_23651() {
    ap_phi_reg_pp0_iter0_data_423_V_read437_s_reg_23651 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_424_V_read438_s_reg_23664() {
    ap_phi_reg_pp0_iter0_data_424_V_read438_s_reg_23664 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_425_V_read439_s_reg_23677() {
    ap_phi_reg_pp0_iter0_data_425_V_read439_s_reg_23677 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_426_V_read440_s_reg_23690() {
    ap_phi_reg_pp0_iter0_data_426_V_read440_s_reg_23690 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_427_V_read441_s_reg_23703() {
    ap_phi_reg_pp0_iter0_data_427_V_read441_s_reg_23703 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_428_V_read442_s_reg_23716() {
    ap_phi_reg_pp0_iter0_data_428_V_read442_s_reg_23716 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_429_V_read443_s_reg_23729() {
    ap_phi_reg_pp0_iter0_data_429_V_read443_s_reg_23729 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_42_V_read56_ph_reg_18698() {
    ap_phi_reg_pp0_iter0_data_42_V_read56_ph_reg_18698 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_430_V_read444_s_reg_23742() {
    ap_phi_reg_pp0_iter0_data_430_V_read444_s_reg_23742 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_431_V_read445_s_reg_23755() {
    ap_phi_reg_pp0_iter0_data_431_V_read445_s_reg_23755 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_432_V_read446_s_reg_23768() {
    ap_phi_reg_pp0_iter0_data_432_V_read446_s_reg_23768 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_433_V_read447_s_reg_23781() {
    ap_phi_reg_pp0_iter0_data_433_V_read447_s_reg_23781 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_434_V_read448_s_reg_23794() {
    ap_phi_reg_pp0_iter0_data_434_V_read448_s_reg_23794 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_435_V_read449_s_reg_23807() {
    ap_phi_reg_pp0_iter0_data_435_V_read449_s_reg_23807 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_436_V_read450_s_reg_23820() {
    ap_phi_reg_pp0_iter0_data_436_V_read450_s_reg_23820 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_437_V_read451_s_reg_23833() {
    ap_phi_reg_pp0_iter0_data_437_V_read451_s_reg_23833 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_438_V_read452_s_reg_23846() {
    ap_phi_reg_pp0_iter0_data_438_V_read452_s_reg_23846 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_439_V_read453_s_reg_23859() {
    ap_phi_reg_pp0_iter0_data_439_V_read453_s_reg_23859 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_43_V_read57_ph_reg_18711() {
    ap_phi_reg_pp0_iter0_data_43_V_read57_ph_reg_18711 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_440_V_read454_s_reg_23872() {
    ap_phi_reg_pp0_iter0_data_440_V_read454_s_reg_23872 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_441_V_read455_s_reg_23885() {
    ap_phi_reg_pp0_iter0_data_441_V_read455_s_reg_23885 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_442_V_read456_s_reg_23898() {
    ap_phi_reg_pp0_iter0_data_442_V_read456_s_reg_23898 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper::thread_ap_phi_reg_pp0_iter0_data_443_V_read457_s_reg_23911() {
    ap_phi_reg_pp0_iter0_data_443_V_read457_s_reg_23911 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

}

