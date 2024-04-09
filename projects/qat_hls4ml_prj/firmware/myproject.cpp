#include <iostream>

#include "myproject.h"
#include "parameters.h"

void myproject(
    hls::stream<input_t> &conv1_input,
    hls::stream<result_t> &layer12_out
) {

    // hls-fpga-machine-learning insert IO
    #pragma HLS INTERFACE axis port=conv1_input,layer12_out 
    #pragma HLS DATAFLOW 

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        // hls-fpga-machine-learning insert load weights
        nnet::load_weights_from_txt<weight2_t, 108>(w2, "w2.txt");
        nnet::load_weights_from_txt<bias2_t, 4>(b2, "b2.txt");
        nnet::load_weights_from_txt<weight6_t, 144>(w6, "w6.txt");
        nnet::load_weights_from_txt<bias6_t, 4>(b6, "b6.txt");
        nnet::load_weights_from_txt<weight11_t, 10192>(w11, "w11.txt");
        nnet::load_weights_from_txt<bias11_t, 13>(b11, "b11.txt");
        loaded_weights = true;
    }
#endif

    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    // hls-fpga-machine-learning insert layers

    hls::stream<layer2_t> layer2_out("layer2_out");
    #pragma HLS STREAM variable=layer2_out depth=3844
    nnet::conv_2d_cl<input_t, layer2_t, config2>(conv1_input, layer2_out, w2, b2); // conv1

    hls::stream<layer4_t> layer4_out("layer4_out");
    #pragma HLS STREAM variable=layer4_out depth=3844
    nnet::relu<layer2_t, layer4_t, relu_config4>(layer2_out, layer4_out); // relu1

    hls::stream<layer5_t> layer5_out("layer5_out");
    #pragma HLS STREAM variable=layer5_out depth=961
    nnet::pooling2d_cl<layer4_t, layer5_t, config5>(layer4_out, layer5_out); // maxpool1

    hls::stream<layer6_t> layer6_out("layer6_out");
    #pragma HLS STREAM variable=layer6_out depth=841
    nnet::conv_2d_cl<layer5_t, layer6_t, config6>(layer5_out, layer6_out, w6, b6); // conv2

    hls::stream<layer8_t> layer8_out("layer8_out");
    #pragma HLS STREAM variable=layer8_out depth=841
    nnet::relu<layer6_t, layer8_t, relu_config8>(layer6_out, layer8_out); // relu2

    hls::stream<layer9_t> layer9_out("layer9_out");
    #pragma HLS STREAM variable=layer9_out depth=196
    nnet::pooling2d_cl<layer8_t, layer9_t, config9>(layer8_out, layer9_out); // maxpool2

    auto& layer10_out = layer9_out;
    hls::stream<layer11_t> layer11_out("layer11_out");
    #pragma HLS STREAM variable=layer11_out depth=1
    nnet::dense<layer9_t, layer11_t, config11>(layer10_out, layer11_out, w11, b11); // output

    nnet::softmax<layer11_t, result_t, softmax_config12>(layer11_out, layer12_out); // output_softmax

}