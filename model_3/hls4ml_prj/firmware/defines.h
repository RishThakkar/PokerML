#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

// hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 64
#define N_INPUT_2_1 64
#define N_INPUT_3_1 3
#define OUT_HEIGHT_2 62
#define OUT_WIDTH_2 62
#define N_FILT_2 4
#define OUT_HEIGHT_2 62
#define OUT_WIDTH_2 62
#define N_FILT_2 4
#define OUT_HEIGHT_5 31
#define OUT_WIDTH_5 31
#define N_FILT_5 4
#define OUT_HEIGHT_6 29
#define OUT_WIDTH_6 29
#define N_FILT_6 8
#define OUT_HEIGHT_6 29
#define OUT_WIDTH_6 29
#define N_FILT_6 8
#define OUT_HEIGHT_9 14
#define OUT_WIDTH_9 14
#define N_FILT_9 8
#define N_SIZE_0_10 1568
#define N_LAYER_11 32
#define N_LAYER_11 32
#define N_LAYER_14 52
#define N_LAYER_14 52

// hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<16,6> input_t;
typedef ap_fixed<16,6> model_default_t;
typedef ap_fixed<16,6> layer2_t;
typedef ap_fixed<16,6> conv1_weight_t;
typedef ap_fixed<16,6> conv1_bias_t;
typedef ap_ufixed<6,0,AP_RND_CONV,AP_SAT> layer4_t;
typedef ap_fixed<18,8> relu1_table_t;
typedef ap_fixed<16,6> layer5_t;
typedef ap_fixed<16,6> layer6_t;
typedef ap_fixed<16,6> conv2_weight_t;
typedef ap_fixed<16,6> conv2_bias_t;
typedef ap_ufixed<6,0,AP_RND_CONV,AP_SAT> layer8_t;
typedef ap_fixed<18,8> relu2_table_t;
typedef ap_fixed<16,6> layer9_t;
typedef ap_fixed<16,6> layer11_t;
typedef ap_fixed<16,6> dense1_weight_t;
typedef ap_fixed<16,6> dense1_bias_t;
typedef ap_uint<1> layer11_index;
typedef ap_ufixed<6,0,AP_RND_CONV,AP_SAT> layer13_t;
typedef ap_fixed<18,8> relu3_table_t;
typedef ap_fixed<18,8> output_exp_table_t;
typedef ap_fixed<18,4> output_inv_table_t;
typedef ap_fixed<16,6> layer14_t;
typedef ap_fixed<16,6> output_weight_t;
typedef ap_fixed<16,6> output_bias_t;
typedef ap_uint<1> layer14_index;
typedef ap_fixed<16,6> result_t;
typedef ap_fixed<18,8> output_softmax_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT> output_softmax_exp_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT> output_softmax_inv_table_t;

#endif
