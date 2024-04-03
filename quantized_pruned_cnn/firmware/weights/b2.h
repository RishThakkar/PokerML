//Numpy array shape [16]
//Min -0.218750000000
//Max 0.093750000000
//Number of zeros 2

#ifndef B2_H_
#define B2_H_

#ifndef __SYNTHESIS__
bias2_t b2[16];
#else
bias2_t b2[16] = {0.96875, 0.18750, -0.68750, 0.96875, -0.56250, -1.00000, 0.75000, -0.43750, 0.09375, -0.68750, 0.96875, 0.53125, -1.00000, 0.53125, 0.96875, -0.25000};
#endif

#endif
