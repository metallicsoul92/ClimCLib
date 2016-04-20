#ifndef COMMON_H_
#define COMMON_H_

typedef enum {FALSE,TRUE} cbool;

inline float Clim_Infinity(){
  static const int value = 0x7f800000;
  return *(float*)&value;
}


#endif
