//Numpy array shape [1, 1, 1]
//Min 0.500000000000
//Max 1.000000000000
//Number of zeros 0

#ifndef S16_H_
#define S16_H_

#ifndef __SYNTHESIS__
exponent_scale16_t s16[4];
#else
exponent_scale16_t s16[4] = {{1.0, -1}, {1.0, -1}, {1.0, -1}, {1.0, 0}};
#endif

#endif
