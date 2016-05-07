#ifndef COMMON_H_
#define COMMON_H_
#include <math.h>

#define CLIM_PI 3.1415926353f

#ifndef M_PI
#define M_PI CLIM_PI
#endif //Pi definition

typedef enum {FALSE = 0,TRUE=1} cbool;


//TODO:Figure out if i need this, maybe a macro of if __builtin_inf() is null? idk
inline float Clim_Infinity(){
  static const int value = 0x7f800000;
  return *(float*)&value;
}

inline float toRadians(float degrees){
  return (float)(degrees * (M_PI /180.0f));
}
inline float toDegrees(float radians){
  return (float)(radians * (180.0f/M_PI));
}
inline float clampf(float *variable, const float min, const float max){
    if(*variable < min){
      return min;
    }else if(*variable > max){
      return max;
    }else
    return *variable;
}

inline float clampi(int *variable, const int min, const int max){
    if(*variable < min){
      return min;
    }else if(*variable > max){
      return max;
    }else
    return *variable;
}
inline unsigned int clampu(unsigned int *variable, const unsigned int min, const unsigned int max){
    if(*variable < min){
      return min;
    }else if(*variable > max){
      return max;
    }else
    return *variable;
}

inline void swapPointers(void *a,void *b){
	void *temp;
	temp = a;
	a = b;
	b = temp;
	}


#endif //common.h
