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
        nnet::load_weights_from_txt<weight2_t, 108>(w2, "w2.txt");
        nnet::load_weights_from_txt<bias2_t, 4>(b2, "b2.txt");
        nnet::load_exponent_weights_from_txt<exponent_scale16_t, 4>(s16, "s16.txt");
        nnet::load_weights_from_txt<bias16_t, 4>(b16, "b16.txt");
        nnet::load_weights_from_txt<weight6_t, 288>(w6, "w6.txt");
        nnet::load_weights_from_txt<bias6_t, 8>(b6, "b6.txt");
        nnet::load_exponent_weights_from_txt<exponent_scale17_t, 8>(s17, "s17.txt");
        nnet::load_weights_from_txt<bias17_t, 8>(b17, "b17.txt");
        nnet::load_weights_from_txt<weight11_t, 50176>(w11, "w11.txt");
        nnet::load_weights_from_txt<bias11_t, 32>(b11, "b11.txt");
        nnet::load_exponent_weights_from_txt<exponent_scale18_t, 32>(s18, "s18.txt");
        nnet::load_weights_from_txt<bias18_t, 32>(b18, "b18.txt");
        nnet::load_weights_from_txt<weight14_t, 1664>(w14, "w14.txt");
        nnet::load_weights_from_txt<bias14_t, 52>(b14, "b14.txt");
        nnet::load_exponent_weights_from_txt<exponent_scale19_t, 52>(s19, "s19.txt");
        nnet::load_weights_from_txt<bias19_t, 52>(b19, "b19.txt");
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

    layer16_t layer16_out[OUT_HEIGHT_2*OUT_WIDTH_2*N_FILT_2];
    #pragma HLS ARRAY_PARTITION variable=layer16_out complete dim=0
    nnet::normalize<layer2_t, layer16_t, config16>(layer2_out, layer16_out, s16, b16); // conv1_alpha

    layer4_t layer4_out[OUT_HEIGHT_2*OUT_WIDTH_2*N_FILT_2];
    #pragma HLS ARRAY_PARTITION variable=layer4_out complete dim=0
    nnet::relu<layer16_t, layer4_t, relu_config4>(layer16_out, layer4_out); // relu1

    layer5_t layer5_out[OUT_HEIGHT_5*OUT_WIDTH_5*N_FILT_5];
    #pragma HLS ARRAY_PARTITION variable=layer5_out complete dim=0
    nnet::pooling2d_cl<layer4_t, layer5_t, config5>(layer4_out, layer5_out); // maxpool1

    layer6_t layer6_out[OUT_HEIGHT_6*OUT_WIDTH_6*N_FILT_6];
    #pragma HLS ARRAY_PARTITION variable=layer6_out complete dim=0
    nnet::conv_2d_cl<layer5_t, layer6_t, config6>(layer5_out, layer6_out, w6, b6); // conv2

    layer17_t layer17_out[OUT_HEIGHT_6*OUT_WIDTH_6*N_FILT_6];
    #pragma HLS ARRAY_PARTITION variable=layer17_out complete dim=0
    nnet::normalize<layer6_t, layer17_t, config17>(layer6_out, layer17_out, s17, b17); // conv2_alpha

    layer8_t layer8_out[OUT_HEIGHT_6*OUT_WIDTH_6*N_FILT_6];
    #pragma HLS ARRAY_PARTITION variable=layer8_out complete dim=0
    nnet::relu<layer17_t, layer8_t, relu_config8>(layer17_out, layer8_out); // relu2

    layer9_t layer9_out[OUT_HEIGHT_9*OUT_WIDTH_9*N_FILT_9];
    #pragma HLS ARRAY_PARTITION variable=layer9_out complete dim=0
    nnet::pooling2d_cl<layer8_t, layer9_t, config9>(layer8_out, layer9_out); // maxpool2

    auto& layer10_out = layer9_out;
    layer11_t layer11_out[N_LAYER_11];
    #pragma HLS ARRAY_PARTITION variable=layer11_out complete dim=0
    nnet::dense<layer9_t, layer11_t, config11>(layer10_out, layer11_out, w11, b11); // dense1

    layer18_t layer18_out[N_LAYER_11];
    #pragma HLS ARRAY_PARTITION variable=layer18_out complete dim=0
    nnet::normalize<layer11_t, layer18_t, config18>(layer11_out, layer18_out, s18, b18); // dense1_alpha

    layer13_t layer13_out[N_LAYER_11];
    #pragma HLS ARRAY_PARTITION variable=layer13_out complete dim=0
    nnet::relu<layer18_t, layer13_t, relu_config13>(layer18_out, layer13_out); // relu3

    layer14_t layer14_out[N_LAYER_14];
    #pragma HLS ARRAY_PARTITION variable=layer14_out complete dim=0
    nnet::dense<layer13_t, layer14_t, config14>(layer13_out, layer14_out, w14, b14); // output

    layer19_t layer19_out[N_LAYER_14];
    #pragma HLS ARRAY_PARTITION variable=layer19_out complete dim=0
    nnet::normalize<layer14_t, layer19_t, config19>(layer14_out, layer19_out, s19, b19); // output_alpha

    nnet::softmax<layer19_t, result_t, softmax_config15>(layer19_out, layer15_out); // output_softmax

}
