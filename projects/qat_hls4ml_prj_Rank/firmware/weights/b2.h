//Numpy array shape [4]
//Min -0.218750000000
//Max 0.187500000000
//Number of zeros 0

#ifndef B2_H_
#define B2_H_

#ifndef __SYNTHESIS__
bias2_t b2[4];
#else
bias2_t b2[4] = {0.18750, 0.03125, 0.09375, -0.21875};
#endif

#endif
