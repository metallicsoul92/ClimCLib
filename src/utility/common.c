#include "utility/common.h"

extern inline float Clim_Infinity();
extern inline float toRadians(float degrees);
extern inline float toDegrees(float radians);
extern inline float clampf(float *variable, const float min, const float max);
extern inline float clampi(int *variable, const int min, const int max);
extern inline unsigned int clampu(unsigned int *variable, const unsigned int min, const unsigned int max);
extern inline void swapPointers(void *a,void *b);
