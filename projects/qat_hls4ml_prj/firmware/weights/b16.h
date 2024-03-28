//Numpy array shape [4]
//Min 0.000000000000
//Max 0.312500000000
//Number of zeros 2

#ifndef B16_H_
#define B16_H_

#ifndef __SYNTHESIS__
bias16_t b16[4];
#else
bias16_t b16[4] = {0.00000, 0.06250, 0.31250, 0.00000};
#endif

#endif
