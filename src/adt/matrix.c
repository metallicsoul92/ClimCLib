#include "adt/matrix.h"
#include "utility/common.h"
#include <stdlib.h>
#include <math.h>
//Memory Allocation
Clim_matrixi *mallocMatrixi(const int h,const int w){
  Clim_matrixi *obj = (Clim_matrixi*)malloc(sizeof(Clim_matrixi*)+sizeof(int)*2);
  obj->columns = w;
  obj->rows = h;
  obj->data = (int*)malloc(sizeof(int)*h*w);
  return obj;
}

Clim_matrixf *mallocMatrixf(const int h,const int w){
  Clim_matrixf *obj = (Clim_matrixf*)malloc(sizeof(Clim_matrixf*)+sizeof(int)*2);
  obj->columns = w;
  obj->rows = h;
  obj->data = (float*)malloc(sizeof(float)*h*w);
  return obj;
}
Clim_matrixg *mallocMatrixg(const int h,const int w){
  Clim_matrixg *obj = (Clim_matrixg*)malloc(sizeof(Clim_matrixg*)+sizeof(int)*2);
  obj->columns = w;
  obj->rows = h;
  obj->data = malloc(sizeof(void*)*h*w);
  return obj;
}
Clim_matrixc *mallocMatrixc(const int h,const int w){
  Clim_matrixc *obj = (Clim_matrixc*)malloc(sizeof(Clim_matrixc*)+sizeof(int)*2);
  obj->columns = w;
  obj->rows = h;
  obj->data = (char*)malloc(sizeof(char)*h*w);
  return obj;
}
Clim_matrixu *mallocMatrixu(const int h,const int w){
  Clim_matrixu *obj = (Clim_matrixu*)malloc(sizeof(Clim_matrixu*)+sizeof(int)*2);
  obj->columns = w;
  obj->rows = h;
  obj->data = (unsigned int*)malloc(sizeof(unsigned int)*h*w);
  return obj;
}

//insert functions
void insertMatrixi(Clim_matrixi *out,const unsigned int index,int data){
      out->data[index] = data;
}
void insertMatrixf(Clim_matrixf *out,const unsigned int index,float data){
      out->data[index] = data;
}
void insertMatrixc(Clim_matrixc *out,const unsigned int index,char data){
      out->data[index] = data;
}
void insertMatrixu(Clim_matrixu *out,const unsigned int index,unsigned int data){
      out->data[index] = data;
}
void insertMatrixg(Clim_matrixg *out,const unsigned int index,void *data){
      out->data[index] = data;
}

//Remove functions
void removeMatrixi(Clim_matrixi *out,const unsigned int index){
      out->data[index] = 0;
}
void removeMatrixf(Clim_matrixf *out,const unsigned int index){
      out->data[index] = 0.0f;
}
void removeMatrixc(Clim_matrixc *out,const unsigned int index){
      out->data[index] = 0;
}
void removeMatrixu(Clim_matrixu *out,const unsigned int index){
      out->data[index] = 0;
}
void removeMatrixg(Clim_matrixg *out,const unsigned int index){
      out->data[index] = 0;
}

//Addition functions
void addMatrixi(Clim_matrixi *out, const Clim_matrixi *a, const Clim_matrixi *b){
  int as = a->columns * a->rows;
  int bs = b->columns * b->rows;

  if(as < bs){
    for(int i=0; i<as;i++){
      out->data[i] = a->data[i] + b->data[i];
    }}else{
      for(int i=0; i<bs;i++){
        out->data[i] = a->data[i] + b->data[i];
      }
  }
}
void addMatrixu(Clim_matrixu *out, const Clim_matrixu *a, const Clim_matrixu *b){
  int as = a->columns * a->rows;
  int bs = b->columns * b->rows;

  if(as < bs){
    for(int i=0; i<as;i++){
      out->data[i] = a->data[i] + b->data[i];
    }}else{
      for(int i=0; i<bs;i++){
        out->data[i] = a->data[i] + b->data[i];
      }
  }
}
void addMatrixf(Clim_matrixf *out, const Clim_matrixf *a, const Clim_matrixf *b){
  int as = a->columns * a->rows;
  int bs = b->columns * b->rows;

  if(as < bs){
    for(int i=0; i<as;i++){
      out->data[i] = a->data[i] + b->data[i];
    }}else{
      for(int i=0; i<bs;i++){
        out->data[i] = a->data[i] + b->data[i];
      }
  }
}

//Subtraction functions
void subMatrixi(Clim_matrixi *out, const Clim_matrixi *a, const Clim_matrixi *b){
  int as = a->columns * a->rows;
  int bs = b->columns * b->rows;

  if(as < bs){
    for(int i=0; i<as;i++){
      out->data[i] = a->data[i] - b->data[i];
    }}else{
      for(int i=0; i<bs;i++){
        out->data[i] = a->data[i] - b->data[i];
      }
  }
}
void subMatrixu(Clim_matrixu *out, const Clim_matrixu *a, const Clim_matrixu *b){
  int as = a->columns * a->rows;
  int bs = b->columns * b->rows;

  if(as < bs){
    for(int i=0; i<as;i++){
      out->data[i] = a->data[i] - b->data[i];
    }}else{
      for(int i=0; i<bs;i++){
        out->data[i] = a->data[i] - b->data[i];
      }
  }
}
void subMatrixf(Clim_matrixf *out, const Clim_matrixf *a, const Clim_matrixf *b){
  int as = a->columns * a->rows;
  int bs = b->columns * b->rows;

  if(as < bs){
    for(int i=0; i<as;i++){
      out->data[i] = a->data[i] - b->data[i];
    }}else{
      for(int i=0; i<bs;i++){
        out->data[i] = a->data[i] - b->data[i];
      }
  }
}

//Multiply functions
void multMatrixi(Clim_matrixi *out, const Clim_matrixi *a, const Clim_matrixi *b){
  int as = a->columns * a->rows;
  int bs = b->columns * b->rows;

  if(as < bs){
    for(int i=0; i<as;i++){
      out->data[i] = a->data[i] * b->data[i];
    }}else{
      for(int i=0; i<bs;i++){
        out->data[i] = a->data[i] * b->data[i];
      }
  }
}
void multMatrixu(Clim_matrixu *out, const Clim_matrixu *a, const Clim_matrixu *b){
  int as = a->columns * a->rows;
  int bs = b->columns * b->rows;

  if(as < bs){
    for(int i=0; i<as;i++){
      out->data[i] = a->data[i] * b->data[i];
    }}else{
      for(int i=0; i<bs;i++){
        out->data[i] = a->data[i] * b->data[i];
      }
  }
}
void multMatrixf(Clim_matrixf *out, const Clim_matrixf *a, const Clim_matrixf *b){
  int as = a->columns * a->rows;
  int bs = b->columns * b->rows;

  if(as < bs){
    for(int i=0; i<as;i++){
      out->data[i] = a->data[i] - b->data[i];
    }}else{
      for(int i=0; i<bs;i++){
        out->data[i] = a->data[i] - b->data[i];
      }
  }
}

//Division functions
void divMatrixi(Clim_matrixi *out, const Clim_matrixi *a, const Clim_matrixi *b){
  int as = a->columns * a->rows;
  int bs = b->columns * b->rows;


  if(as < bs){
    for(int i=0; i<as;i++){
      if(b->data[i]==0){
        out->data[i] = a->data[i] / (b->data[i]+1);
      }else{
      out->data[i] = a->data[i] / b->data[i];
    }
  }
}else{
      for(int i=0; i<bs;i++){
        if(b->data[i]==0){
          out->data[i] = a->data[i] / (b->data[i]+1);
        }else{
        out->data[i] = a->data[i] / b->data[i];
      }
      }
  }
}
void divMatrixu(Clim_matrixu *out, const Clim_matrixu *a, const Clim_matrixu *b){
  int as = a->columns * a->rows;
  int bs = b->columns * b->rows;


  if(as < bs){
    for(int i=0; i<as;i++){
      if(b->data[i]==0){
        out->data[i] = a->data[i] / (b->data[i]+1);
      }else{
      out->data[i] = a->data[i] / b->data[i];
    }
  }
}else{
      for(int i=0; i<bs;i++){
        if(b->data[i]==0){
          out->data[i] = a->data[i] / (b->data[i]+1);
        }else{
        out->data[i] = a->data[i] / b->data[i];
      }
      }
  }
}
void divMatrixf(Clim_matrixf *out, const Clim_matrixf *a, const Clim_matrixf *b){
  int as = a->columns * a->rows;
  int bs = b->columns * b->rows;


  if(as < bs){
    for(int i=0; i<as;i++){
      if(b->data[i]==0){
        out->data[i] = a->data[i] / (b->data[i]+1);
      }else{
      out->data[i] = a->data[i] / b->data[i];
    }
  }
}else{
      for(int i=0; i<bs;i++){
        if(b->data[i]==0){
          out->data[i] = a->data[i] / (b->data[i]+1);
        }else{
        out->data[i] = a->data[i] / b->data[i];
      }
      }
  }
}

void identityI(Clim_matrixi *mat){
  if(mat->columns == mat->rows){
    for(int i = 0; i < mat->columns * mat->rows;i++){
      mat->data[i] = 0;
    }
    for(int j =1;j< mat->columns+1;j++){
      mat->data[j*j-1] =1;
    }
  }
}
void identityF(Clim_matrixf *mat){
  if(mat->columns == mat->rows){
    for(int i = 0; i < mat->columns * mat->rows;i++){
      mat->data[i] = 0.0f;
    }
    for(int j =1;j< mat->columns+1;j++){
      mat->data[j*j-1] =1.0f;
    }
  }
}
void identityU(Clim_matrixu *mat){
  if(mat->columns == mat->rows){
    for(int i = 0; i < mat->columns * mat->rows;i++){
      mat->data[i] = 0;
    }
    for(int j =1;j< mat->columns+1;j++){
      mat->data[j*j-1] =1;
    }
  }
}
//Graphics based functions//
//WARNING: THESE ARE USED UNDER THE ASSUMPTION THAT THE MATRIX YOU USE HAS ONE
//         MORE ROW THEN THE VECTOR SPECIFIED
////////////////////////////
//TODO: figure out how to implement these better
////////////////////////////
void translateMatrixIBy2(Clim_matrixi *out, const Clim_vector2i v){
  identityI(out);
  out->data[3+0*4] = v.x;
  out->data[3+1*4] = v.y;
}
void translateMatrixUBy2(Clim_matrixu *out, const Clim_vector2u v){
  identityU(out);
  out->data[3+0*4] = v.x;
  out->data[3+1*4] = v.y;
}
void translateMatrixFBy2(Clim_matrixf *out, const Clim_vector2f v){
  identityF(out);
  out->data[3+0*4] = v.x;
  out->data[3+1*4] = v.y;
}

void translateMatrixIBy3(Clim_matrixi *out, const Clim_vector3i v){
  identityI(out);
  out->data[3+0*4] = v.x;
  out->data[3+1*4] = v.y;
  out->data[3+2*4] = v.z;
}
void translateMatrixUBy3(Clim_matrixu *out, const Clim_vector3u v){
  identityU(out);
  out->data[3+0*4] = v.x;
  out->data[3+1*4] = v.y;
  out->data[3+2*4] = v.z;
}
void translateMatrixFBy3(Clim_matrixf *out, const Clim_vector3f v){
  identityF(out);
  out->data[3+0*4] = v.x;
  out->data[3+1*4] = v.y;
  out->data[3+2*4] = v.z;
}

void translateMatrixIBy4(Clim_matrixi *out, const Clim_vector4i v){
  identityI(out);
  out->data[4+0*4] = v.x;
  out->data[4+1*4] = v.y;
  out->data[4+2*4] = v.z;
  out->data[4+2*4] = v.w;
}
void translateMatrixUBy4(Clim_matrixu *out, const Clim_vector4u v){
  identityU(out);
  out->data[4+0*4] = v.x;
  out->data[4+1*4] = v.y;
  out->data[4+2*4] = v.z;
  out->data[4+2*4] = v.w;
}
void translateMatrixFBy4(Clim_matrixf *out, const Clim_vector4f v){
  identityF(out);
  out->data[4+0*4] = v.x;
  out->data[4+1*4] = v.y;
  out->data[4+2*4] = v.z;
  out->data[4+2*4] = v.w;
}

void rotate(Clim_matrixf *out, const Clim_matrixf *in,const float angle, const Clim_vector3f axis);

void scale2i(Clim_matrixi *out, const Clim_matrixi *in,const int scale){
  identityI(out);
  out->data[0] = in->data[0] * scale;
  out->data[3] = in->data[3] * scale;
}
void scale2u(Clim_matrixu *out, const Clim_matrixu *in,const unsigned int scale){
  identityU(out);
  out->data[0] = in->data[0] * scale;
  out->data[3] = in->data[3] * scale;
}
void scale2f(Clim_matrixf *out, const Clim_matrixf *in,const float scale){
  identityF(out);
  out->data[0] = in->data[0] * scale;
  out->data[3] = in->data[3] * scale;
}

void scale3i(Clim_matrixi *out, const Clim_matrixi *in,const int scale){
  identityI(out);
  out->data[0] = in->data[0] * scale;
  out->data[3] = in->data[3] * scale;
  out->data[8] = in->data[8] * scale;
}
void scale3u(Clim_matrixu *out, const Clim_matrixu *in,const unsigned int scale){
  identityU(out);
  out->data[0] = in->data[0] * scale;
  out->data[3] = in->data[3] * scale;
  out->data[8] = in->data[8] * scale;
}
void scale3f(Clim_matrixf *out, const Clim_matrixf *in,const float scale){
  identityF(out);
  out->data[0] = in->data[0] * scale;
  out->data[3] = in->data[3] * scale;
  out->data[8] = in->data[8] * scale;
}

void scale4i(Clim_matrixi *out, const Clim_matrixi *in,const int scale){
  identityI(out);
  out->data[0] = in->data[0] * scale;
  out->data[3] = in->data[3] * scale;
  out->data[8] = in->data[8] * scale;
  out->data[15] = in->data[15] * scale;
}
void scale4u(Clim_matrixu *out, const Clim_matrixu *in,const unsigned int scale){
  identityU(out);
  out->data[0] = in->data[0] * scale;
  out->data[3] = in->data[3] * scale;
  out->data[8] = in->data[8] * scale;
  out->data[15] = in->data[15] * scale;
}
void scale4f(Clim_matrixf *out, const Clim_matrixf *in,const float scale){
  identityF(out);
  out->data[0] = in->data[0] * scale;
  out->data[3] = in->data[3] * scale;
  out->data[8] = in->data[8] * scale;
  out->data[15] = in->data[15] * scale;
}

//Invert. At the moment i can only think of using this on float matricies...
Clim_matrixf invert(Clim_matrixf *mat);

//Misc functions
Clim_matrixf orthographic(const float left, const float right, const float bottom,
                          const float top, const float near, const float far){
        Clim_matrixf result;
        identityF(&result);
        result.data[0+0*4] = 2.0f/ (right-left);
        result.data[1+1*4] = 2.0f/ (top-bottom);
        result.data[2+2*4] = 2.0f/ (near-far);
        result.data[3+0*4] =(left+right)/ (left-right);
        result.data[3+1*4] =(bottom+top)/(bottom-top);
        result.data[3+2*4] =(far+near)/(far-near);

        return result;
  }
Clim_matrixf perspective(const float fov, const float aspectRatio,const float near,const float far){
    Clim_matrixf result;
    identityF(&result);

    float x,y,z,w;
    x = 1.0f/ tan(toRadians(0.5f*fov));
    y = x/ aspectRatio;
    z = (near+far)/(near-far);
    w = (2.0f*near*far)/(near-far);

    result.data[0+0*4]=x;
    result.data[1+1*4]=y;
    result.data[2+2*4]=z;
    result.data[2+3*4]= -1.0f;
    result.data[3+2*4]=w;



    return result;
}
