#include "adt/vector3.h"
#include <stdlib.h>
#include <math.h>

//MallocFunctions//
Clim_vector3i *mallocVec3i(int ox, int oy,int oz){
	Clim_vector3i* obj = (Clim_vector3i*)malloc(sizeof(Clim_vector3i));
	obj->x = ox;
	obj->y = oy;
	obj->z = oz;
	return obj;
}
Clim_vector3u *mallocVec3u(unsigned int ox, unsigned int oy, unsigned int oz){
	Clim_vector3u* obj = (Clim_vector3u*)malloc(sizeof(Clim_vector3u));
	obj->x = ox;
	obj->y = oy;
	obj->z = oz;
	return obj;
}
Clim_vector3f *mallocVec3f(float ox,float oy, float oz){
	Clim_vector3f* obj = (Clim_vector3f*)malloc(sizeof(Clim_vector3f));
	obj->x = ox;
	obj->y = oy;
	obj->z = oz;
	return obj;
}
Clim_vector3c *mallocVec3c(char ox,char oy, char oz){
	Clim_vector3c* obj = (Clim_vector3c*)malloc(sizeof(Clim_vector3c));
	obj->x = ox;
	obj->y = oy;
	obj->z = oz;
	return obj;
}
Clim_vector3g *mallocVec3g(void *ox, void *oy, void *oz){
	Clim_vector3g* obj = (Clim_vector3g*)malloc(sizeof(Clim_vector3g));
	obj->x = ox;
	obj->y = oy;
	obj->z = oz;
	return obj;
}

//Addition functions//
void addVec3i(Clim_vector3i *out, const Clim_vector3i *a, const Clim_vector3i *b){
    out->x = a->x + b->x;
    out->y = a->y + b->y;
    out->z = a->z + b->z;
}
void addVec3u(Clim_vector3u *out, const Clim_vector3u *a, const Clim_vector3u *b){
    out->x = a->x + b->x;
    out->y = a->y + b->y;
    out->z = a->z + b->z;
}
void addVec3f(Clim_vector3f *out, const Clim_vector3f *a, const Clim_vector3f *b){
    out->x = a->x + b->x;
    out->y = a->y + b->y;
    out->z = a->z + b->z;
}

//Subtractive functions//
void subVec3i(Clim_vector3i *out, const Clim_vector3i *a, const Clim_vector3i *b){
    out->x = a->x - b->x;
    out->y = a->y - b->y;
    out->z = a->z - b->z;
}
void subVec3u(Clim_vector3u *out, const Clim_vector3u *a, const Clim_vector3u *b){
    out->x = a->x - b->x;
    out->y = a->y - b->y;
    out->z = a->z - b->z;
}
void subVec3f(Clim_vector3f *out, const Clim_vector3f *a, const Clim_vector3f *b){
    out->x = a->x - b->x;
    out->y = a->y - b->y;
    out->z = a->z - b->z;
}

//Multiplicative functions//
void multVec3i(Clim_vector3i *out, const Clim_vector3i *a, const Clim_vector3i *b){
    out->x = a->x * b->x;
    out->y = a->y * b->y;
    out->z = a->z * b->z;
}
void multVec3u(Clim_vector3u *out, const Clim_vector3u *a, const Clim_vector3u *b){
    out->x = a->x * b->x;
    out->y = a->y * b->y;
    out->z = a->z * b->z;
}
void multVec3f(Clim_vector3f *out, const Clim_vector3f *a, const Clim_vector3f *b){
    out->x = a->x * b->x;
    out->y = a->y * b->y;
    out->z = a->z * b->z;
}

//Division functions//
//Caution, all disolve into a Vector3f, since dividing usually turns into decimal places.//
void divVec3i(Clim_vector3i *out, const Clim_vector3i *a, const Clim_vector3i *b){
  if(b->x ==0 || b->y ==0 || b->z == 0)
  {
    out->x = a->x / b->x+1;
    out->y = a->y / b->y+1;
    out->z = a->z / b->z+1;
  }else{
  out->x = a->x / b->x;
  out->y = a->y / b->y;
  out->z = a->z / b->z;
}
}
void divVec3u(Clim_vector3u *out, const Clim_vector3u *a, const Clim_vector3u *b){
  if(b->x ==0 || b->y ==0 || b->z == 0)
  {
    out->x = a->x / b->x+1;
    out->y = a->y / b->y+1;
    out->z = a->z / b->z+1;
  }else{
  out->x = a->x / b->x;
  out->y = a->y / b->y;
  out->z = a->z / b->z;
}
}
void divVec3f(Clim_vector3f *out, const Clim_vector3f *a, const Clim_vector3f *b){
    if(b->x ==0 || b->y ==0 || b->z == 0)
    {
      out->x = a->x / b->x+1;
      out->y = a->y / b->y+1;
      out->z = a->z / b->z+1;
    }else{
    out->x = a->x / b->x;
    out->y = a->y / b->y;
    out->z = a->z / b->z;
  }
}

//length functions//
//All disolve into a float//
float magnitude3i(Clim_vector3i a){
    float x = a.x * a.x;
    float y = a.y * a.y;
    float z = a.z * a.z;
    return sqrt(x+y+z);
}
float magnitude3u(Clim_vector3u a){
  float x = a.x * a.x;
  float y = a.y * a.y;
  float z = a.z * a.z;
  return sqrt(x+y+z);
}
float magnitude3f(Clim_vector3f a){
  float x = a.x * a.x;
  float y = a.y * a.y;
  float z = a.z * a.z;
  return sqrt(x+y+z);
}

void lerp3i(Clim_vector3i *out,const Clim_vector3i *a, const Clim_vector3i *b,const float percent){
  Clim_vector3i i, j,k;
  subVec3i(&i,b,a);
  j.x = percent/100;
  j.y = percent/100;
  j.z = percent/100;
  multVec3i(&k,&i,&j);
  addVec3i(out,a,&k);
}
void lerp3f(Clim_vector3f* out, const Clim_vector3f *a,const Clim_vector3f *b,const float percent){
  Clim_vector3f i, j,k;
  subVec3f(&i,b,a);
  j.x = percent/100.0f;
  j.y = percent/100.0f;
  j.z = percent/100.0f;
  multVec3f(&k,&i,&j);
  addVec3f(out,a,&k);
}

//Min/Max Functions//

Clim_vector3i *Max3i(Clim_vector3i *a,Clim_vector3i *b){
    if(magnitude3i(*a) > magnitude3i(*b))
      return a;

    return b;
}
Clim_vector3u *Max3u(Clim_vector3u *a,Clim_vector3u *b){
  if(magnitude3u(*a) > magnitude3u(*b))
    return a;

  return b;
}
Clim_vector3f *Max3f(Clim_vector3f *a,Clim_vector3f *b){
  if(magnitude3f(*a) > magnitude3f(*b))
    return a;

  return b;
}
Clim_vector3i *Min3i(Clim_vector3i *a,Clim_vector3i *b){
  if(magnitude3i(*a) < magnitude3i(*b))
    return a;

  return b;
}
Clim_vector3u *Min3u(Clim_vector3u *a,Clim_vector3u *b){
  if(magnitude3u(*a) > magnitude3u(*b))
    return a;

  return b;
}
Clim_vector3f *Min3f(Clim_vector3f *a,Clim_vector3f *b){
  if(magnitude3f(*a)< magnitude3f(*b))
    return a;

  return b;
}
