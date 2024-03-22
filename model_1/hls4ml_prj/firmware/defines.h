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
#define OUT_HEIGHT_4 31
#define OUT_WIDTH_4 31
#define N_FILT_4 4
#define OUT_HEIGHT_5 29
#define OUT_WIDTH_5 29
#define N_FILT_5 8
#define OUT_HEIGHT_5 29
#define OUT_WIDTH_5 29
#define N_FILT_5 8
#define OUT_HEIGHT_7 14
#define OUT_WIDTH_7 14
#define N_FILT_7 8
#define N_SIZE_0_8 1568
#define N_LAYER_9 32
#define N_LAYER_9 32
#define N_LAYER_11 52
#define N_LAYER_11 52

// hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<16,6> input_t;
typedef ap_fixed<16,6> model_default_t;
typedef ap_fixed<16,6> layer2_t;
typedef ap_fixed<16,6> layer3_t;
typedef ap_fixed<18,8> conv1_relu_table_t;
typedef ap_fixed<16,6> layer4_t;
typedef ap_fixed<16,6> layer5_t;
typedef ap_fixed<16,6> layer6_t;
typedef ap_fixed<18,8> conv2_relu_table_t;
typedef ap_fixed<16,6> layer7_t;
typedef ap_fixed<16,6> layer9_t;
typedef ap_uint<1> layer9_index;
typedef ap_fixed<16,6> layer10_t;
typedef ap_fixed<18,8> dense1_relu_table_t;
typedef ap_fixed<16,6> layer11_t;
typedef ap_uint<1> layer11_index;
typedef ap_fixed<16,6> result_t;
typedef ap_fixed<18,8> output_softmax_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT> output_softmax_exp_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT> output_softmax_inv_table_t;

#endif
