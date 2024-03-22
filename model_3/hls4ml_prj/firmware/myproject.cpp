#include <iostream>

#include "myproject.h"
#include "parameters.h"

void myproject(
    input_t conv1_input[N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1],
    result_t layer15_out[N_LAYER_14]
) {

    // hls-fpga-machine-learning insert IO
    #pragma HLS ARRAY_RESHAPE variable=conv1_input complete dim=0
    #pragma HLS ARRAY_PARTITION variable=layer15_out complete dim=0
    #pragma HLS INTERFACE ap_vld port=conv1_input,layer15_out 
    #pragma HLS DATAFLOW 

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        // hls-fpga-machine-learning insert load weights
        nnet::load_weights_from_txt<conv1_weight_t, 108>(w2, "w2.txt");
        nnet::load_weights_from_txt<conv1_bias_t, 4>(b2, "b2.txt");
        nnet::load_weights_from_txt<conv2_weight_t, 288>(w6, "w6.txt");
        nnet::load_weights_from_txt<conv2_bias_t, 8>(b6, "b6.txt");
        nnet::load_weights_from_txt<dense1_weight_t, 50176>(w11, "w11.txt");
        nnet::load_weights_from_txt<dense1_bias_t, 32>(b11, "b11.txt");
        nnet::load_weights_from_txt<output_weight_t, 1664>(w14, "w14.txt");
        nnet::load_weights_from_txt<output_bias_t, 52>(b14, "b14.txt");
        loaded_weights = true;
    }
#endif

    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    // hls-fpga-machine-learning insert layers

    layer2_t layer2_out[OUT_HEIGHT_2*OUT_WIDTH_2*N_FILT_2];
    #pragma HLS ARRAY_PARTITION variable=layer2_out complete dim=0
    nnet::conv_2d_cl<input_t, layer2_t, config2>(conv1_input, layer2_out, w2, b2); // conv1

    layer4_t layer4_out[OUT_HEIGHT_2*OUT_WIDTH_2*N_FILT_2];
    #pragma HLS ARRAY_PARTITION variable=layer4_out complete dim=0
    nnet::relu<layer2_t, layer4_t, relu_config4>(layer2_out, layer4_out); // relu1

    layer5_t layer5_out[OUT_HEIGHT_5*OUT_WIDTH_5*N_FILT_5];
    #pragma HLS ARRAY_PARTITION variable=layer5_out complete dim=0
    nnet::pooling2d_cl<layer4_t, layer5_t, config5>(layer4_out, layer5_out); // maxpool1

    layer6_t layer6_out[OUT_HEIGHT_6*OUT_WIDTH_6*N_FILT_6];
    #pragma HLS ARRAY_PARTITION variable=layer6_out complete dim=0
    nnet::conv_2d_cl<layer5_t, layer6_t, config6>(layer5_out, layer6_out, w6, b6); // conv2

    layer8_t layer8_out[OUT_HEIGHT_6*OUT_WIDTH_6*N_FILT_6];
    #pragma HLS ARRAY_PARTITION variable=layer8_out complete dim=0
    nnet::relu<layer6_t, layer8_t, relu_config8>(layer6_out, layer8_out); // relu2

    layer9_t layer9_out[OUT_HEIGHT_9*OUT_WIDTH_9*N_FILT_9];
    #pragma HLS ARRAY_PARTITION variable=layer9_out complete dim=0
    nnet::pooling2d_cl<layer8_t, layer9_t, config9>(layer8_out, layer9_out); // maxpool2

    auto& layer10_out = layer9_out;
    layer11_t layer11_out[N_LAYER_11];
    #pragma HLS ARRAY_PARTITION variable=layer11_out complete dim=0
    nnet::dense<layer9_t, layer11_t, config11>(layer10_out, layer11_out, w11, b11); // dense1

    layer13_t layer13_out[N_LAYER_11];
    #pragma HLS ARRAY_PARTITION variable=layer13_out complete dim=0
    nnet::relu<layer11_t, layer13_t, relu_config13>(layer11_out, layer13_out); // relu3

    layer14_t layer14_out[N_LAYER_14];
    #pragma HLS ARRAY_PARTITION variable=layer14_out complete dim=0
    nnet::dense<layer13_t, layer14_t, config14>(layer13_out, layer14_out, w14, b14); // output

    nnet::softmax<layer14_t, result_t, softmax_config15>(layer14_out, layer15_out); // output_softmax

}