//Numpy array shape [8]
//Min -0.156250000000
//Max 0.062500000000
//Number of zeros 1

#ifndef B17_H_
#define B17_H_

#ifndef __SYNTHESIS__
bias17_t b17[8];
#else
bias17_t b17[8] = {0.03125, -0.03125, -0.06250, -0.03125, -0.06250, -0.15625, 0.00000, 0.06250};
#endif

#endif
