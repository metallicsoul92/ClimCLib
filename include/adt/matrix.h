#ifndef MATRIX_H_
#define MATRIX_H_

#include "vector2.h"
#include "vector3.h"
#include "vector4.h"

struct _matrixi{
  int columns;
  int rows;
  int *data;
};

struct _matrixu{
  int columns;
  int rows;
  unsigned int *data;
};

struct _matrixf{
  int columns;
  int rows;
  float *data;
};

struct _matrixc{
  int columns;
  int rows;
  char *data;
};

struct _matrixg{
  int columns;
  int rows;
  void **data;
};

typedef struct _matrixi Clim_matrixi;
typedef struct _matrixf Clim_matrixf;
typedef struct _matrixg Clim_matrixg;
typedef struct _matrixc Clim_matrixc;
typedef struct _matrixu Clim_matrixu;

//Memory Allocation
Clim_matrixi *mallocMatrixi(const int h,const int w);
Clim_matrixf *mallocMatrixf(const int h,const int w);
Clim_matrixg *mallocMatrixg(const int h,const int w);
Clim_matrixc *mallocMatrixc(const int h,const int w);
Clim_matrixu *mallocMatrixu(const int h,const int w);

//insert functions
void insertMatrixi(Clim_matrixi *out,const unsigned int index,int data);
void insertMatrixf(Clim_matrixf *out,const unsigned int index,float data);
void insertMatrixc(Clim_matrixc *out,const unsigned int index,char data);
void insertMatrixu(Clim_matrixu *out,const unsigned int index,unsigned int data);
void insertMatrixg(Clim_matrixg *out,const unsigned int index,void *data);

//Remove functions
void removeMatrixi(Clim_matrixi *out,const unsigned int index);
void removeMatrixf(Clim_matrixf *out,const unsigned int index);
void removeMatrixc(Clim_matrixc *out,const unsigned int index);
void removeMatrixu(Clim_matrixu *out,const unsigned int index);
void removeMatrixg(Clim_matrixg *out,const unsigned int index);

//Addition functions
void addMatrixi(Clim_matrixi *out, const Clim_matrixi *a, const Clim_matrixi *b);
void addMatrixu(Clim_matrixu *out, const Clim_matrixu *a, const Clim_matrixu *b);
void addMatrixf(Clim_matrixf *out, const Clim_matrixf *a, const Clim_matrixf *b);

//Subtraction functions
void subMatrixi(Clim_matrixi *out, const Clim_matrixi *a, const Clim_matrixi *b);
void subMatrixu(Clim_matrixu *out, const Clim_matrixu *a, const Clim_matrixu *b);
void subMatrixf(Clim_matrixf *out, const Clim_matrixf *a, const Clim_matrixf *b);

//Multiply functions
void multMatrixi(Clim_matrixi *out, const Clim_matrixi *a, const Clim_matrixi *b);
void multMatrixu(Clim_matrixu *out, const Clim_matrixu *a, const Clim_matrixu *b);
void multMatrixf(Clim_matrixf *out, const Clim_matrixf *a, const Clim_matrixf *b);

//Division functions
void divMatrixi(Clim_matrixi *out, const Clim_matrixi *a, const Clim_matrixi *b);
void divMatrixu(Clim_matrixu *out, const Clim_matrixu *a, const Clim_matrixu *b);
void divMatrixf(Clim_matrixf *out, const Clim_matrixf *a, const Clim_matrixf *b);


//Identy functions
void identityI(Clim_matrixi *mat);
void identityF(Clim_matrixf *mat);
void identityU(Clim_matrixu *mat);

//Graphics based functions//
//WARNING: THESE ARE USED UNDER THE ASSUMPTION THAT THE MATRIX YOU USE HAS ONE
//         MORE ROW THEN THE VECTOR SPECIFIED
////////////////////////////
//TODO: figure out how to implement these better
////////////////////////////
void translateMatrixIBy2(Clim_matrixi *out, const Clim_vector2i v);
void translateMatrixUBy2(Clim_matrixu *out, const Clim_vector2u v);
void translateMatrixFBy2(Clim_matrixf *out, const Clim_vector2f v);

void translateMatrixIBy3(Clim_matrixi *out, const Clim_vector3i v);
void translateMatrixUBy3(Clim_matrixu *out, const Clim_vector3u v);
void translateMatrixFBy3(Clim_matrixf *out, const Clim_vector3f v);

void translateMatrixIBy4(Clim_matrixi *out, const Clim_vector4i v);
void translateMatrixUBy4(Clim_matrixu *out, const Clim_vector4u v);
void translateMatrixFBy4(Clim_matrixf *out, const Clim_vector4f v);

void rotate(Clim_matrixf *out, const Clim_matrixf *in,const float angle, const Clim_vector3f axis);

void scale2i(Clim_matrixi *out, const Clim_matrixi *in,const int scale);
void scale2u(Clim_matrixu *out, const Clim_matrixu *in,const unsigned int scale);
void scale2f(Clim_matrixf *out, const Clim_matrixf *in,const float scale);

void scale3i(Clim_matrixi *out, const Clim_matrixi *in,const int scale);
void scale3u(Clim_matrixu *out, const Clim_matrixu *in,const unsigned int scale);
void scale3f(Clim_matrixf *out, const Clim_matrixf *in,const float scale);

void scale4i(Clim_matrixi *out, const Clim_matrixi *in,const int scale);
void scale4u(Clim_matrixu *out, const Clim_matrixu *in,const unsigned int scale);
void scale4f(Clim_matrixf *out, const Clim_matrixf *in,const float scale);


//Invert. At the moment i can only think of using this on float matricies...
//WILL ONLY WORK ON 2x2, 3x3 , and 4x4!!
Clim_matrixf invert(Clim_matrixf *mat);

//Misc functions
Clim_matrixf orthographic(const float left, const float right, const float bottom,
                          const float top, const float near, const float far);
Clim_matrixf perspective(const float fov, const float aspectRatio,const float near,const float far);



#endif //Matrix.h
