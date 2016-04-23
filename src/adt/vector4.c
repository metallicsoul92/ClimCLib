#include "adt/vector4.h"
#include <stdlib.h>
#include <math.h>

Clim_vector4i *mallocvec4i(int ox, int oy, int oz, int ow){
	Clim_vector4i* obj = (Clim_vector4i*)malloc(sizeof(Clim_vector4i));
	obj->x = ox;
	obj->y = oy;
	obj->z = oz;
	obj->w = ow;
	return obj;
}
Clim_vector4u *mallocvec4u(unsigned int ox, unsigned int oy,unsigned int oz,unsigned int ow){
	Clim_vector4u* obj = (Clim_vector4u*)malloc(sizeof(Clim_vector4u));
	obj->x = ox;
	obj->y = oy;
	obj->z = oz;
	obj->w = ow;
	return obj;
}
Clim_vector4f *mallocvec4f(float ox,float oy, float oz, float ow){
	Clim_vector4f* obj = (Clim_vector4f*)malloc(sizeof(Clim_vector4f));
	obj->x = ox;
	obj->y = oy;
	obj->z = oz;
	obj->w = ow;
	return obj;
}
Clim_vector4c *mallocvec4c(char ox,char oy,char oz, char ow){
	Clim_vector4c* obj = (Clim_vector4c*)malloc(sizeof(Clim_vector4c));
	obj->x = ox;
	obj->y = oy;
	obj->z = oz;
	obj->w = ow;
	return obj;
}
Clim_vector4g *mallocvec4g(void *ox, void *oy, void *oz, void *ow){
	Clim_vector4g* obj = (Clim_vector4g*)malloc(sizeof(Clim_vector4g));
	obj->x = ox;
	obj->y = oy;
	obj->z = oz;
	obj->w = ow;
	return obj;
}

//Addition functions//
void addVec4i(Clim_vector4i *out, const Clim_vector4i *a, const Clim_vector4i *b){
    out->x = a->x + b->x;
    out->y = a->y + b->y;
    out->z = a->z + b->z;
		out->w = a->w + b->w;
}
void addVec4u(Clim_vector4u *out, const Clim_vector4u *a, const Clim_vector4u *b){
    out->x = a->x + b->x;
    out->y = a->y + b->y;
    out->z = a->z + b->z;
		out->w = a->w + b->w;
}
void addVec4f(Clim_vector4f *out, const Clim_vector4f *a, const Clim_vector4f *b){
    out->x = a->x + b->x;
    out->y = a->y + b->y;
    out->z = a->z + b->z;
		out->w = a->w + b->w;
}

//Subtractive functions//
void subVec4i(Clim_vector4i *out, const Clim_vector4i *a, const Clim_vector4i *b){
    out->x = a->x - b->x;
    out->y = a->y - b->y;
    out->z = a->z - b->z;
		out->w = a->w - b->w;
}
void subVec4u(Clim_vector4u *out, const Clim_vector4u *a, const Clim_vector4u *b){
    out->x = a->x - b->x;
    out->y = a->y - b->y;
    out->z = a->z - b->z;
		out->w = a->w - b->w;
}
void subVec4f(Clim_vector4f *out, const Clim_vector4f *a, const Clim_vector4f *b){
    out->x = a->x - b->x;
    out->y = a->y - b->y;
    out->z = a->z - b->z;
		out->w = a->w - b->w;
}

//Multiplicative functions//
void multVec4i(Clim_vector4i *out, const Clim_vector4i *a, const Clim_vector4i *b){
    out->x = a->x * b->x;
    out->y = a->y * b->y;
    out->z = a->z * b->z;
		out->w = a->w * b->w;
}
void multVec4u(Clim_vector4u *out, const Clim_vector4u *a, const Clim_vector4u *b){
    out->x = a->x * b->x;
    out->y = a->y * b->y;
    out->z = a->z * b->z;
		out->w = a->w * b->w;
}
void multVec4f(Clim_vector4f *out, const Clim_vector4f *a, const Clim_vector4f *b){
    out->x = a->x * b->x;
    out->y = a->y * b->y;
    out->z = a->z * b->z;
		out->w = a->w * b->w;
}

//Division functions//
//Caution, all disolve into a Vector4f, since dividing usually turns into decimal places.//
void divVec4i(Clim_vector4i *out, const Clim_vector4i *a, const Clim_vector4i *b){
    if(b->x ==0 || b->y ==0 || b->z == 0 || b->w ==0)
    {
			out->x = a->x / b->x+1;
	    out->y = a->y / b->y+1;
	    out->z = a->z / b->z+1;
			out->w = a->w / b->w+1;
    }else{
    out->x = a->x / b->x;
    out->y = a->y / b->y;
    out->z = a->z / b->z;
		out->w = a->w / b->w;
	}
}
void divVec4u(Clim_vector4u *out, const Clim_vector4u *a, const Clim_vector4u *b){
	if(b->x ==0 || b->y ==0 || b->z == 0 || b->w ==0)
	{
		out->x = a->x / b->x+1;
		out->y = a->y / b->y+1;
		out->z = a->z / b->z+1;
		out->w = a->w / b->w+1;
	}else{
	out->x = a->x / b->x;
	out->y = a->y / b->y;
	out->z = a->z / b->z;
	out->w = a->w / b->w;
}
}
void divVec4f(Clim_vector4f *out, const Clim_vector4f *a, const Clim_vector4f *b){
	if(b->x ==0 || b->y ==0 || b->z == 0 || b->w ==0)
	{
		out->x = a->x / b->x+1;
		out->y = a->y / b->y+1;
		out->z = a->z / b->z+1;
		out->w = a->w / b->w+1;
	}else{
	out->x = a->x / b->x;
	out->y = a->y / b->y;
	out->z = a->z / b->z;
	out->w = a->w / b->w;
}
}



float magnitude4i(Clim_vector4i a){
	float x = a.x * a.x;
	float y = a.y * a.y;
	float z = a.z * a.z;
	float w = a.w * a.w;
	return sqrt(x+y+z+w);
}
float magnitude4u(Clim_vector4u a){
	float x = a.x * a.x;
	float y = a.y * a.y;
	float z = a.z * a.z;
	float w = a.w * a.w;
	return sqrt(x+y+z+w);
}
float magnitude4f(Clim_vector4f a){
	float x = a.x * a.x;
	float y = a.y * a.y;
	float z = a.z * a.z;
	float w = a.w * a.w;
	return sqrt(x+y+z+w);
}

void lerp4i(Clim_vector4i *out,const Clim_vector4i *a, const Clim_vector4i *b,const float percent){
  Clim_vector4i i, j,k;
  subVec4i(&i,b,a);
  j.x = percent/100;
  j.y = percent/100;
  j.z = percent/100;
	j.z = percent/100;
  multVec4i(&k,&i,&j);
  addVec4i(out,a,&k);
}
void lerp4f(Clim_vector4f* out, const Clim_vector4f *a,const Clim_vector4f *b,const float percent){
  Clim_vector4f i, j,k;
  subVec4f(&i,b,a);
  j.x = percent/100.0f;
  j.y = percent/100.0f;
  j.z = percent/100.0f;
	j.w = percent/100.0f;
  multVec4f(&k,&i,&j);
  addVec4f(out,a,&k);
}

//Min/Max Functions//

Clim_vector4i *Max4i(Clim_vector4i *a,Clim_vector4i *b){
    if(magnitude4i(*a) > magnitude4i(*b))
      return a;

    return b;
}
Clim_vector4u *Max4u(Clim_vector4u *a,Clim_vector4u *b){
  if(magnitude4u(*a) > magnitude4u(*b))
    return a;

  return b;
}
Clim_vector4f *Max4f(Clim_vector4f *a,Clim_vector4f *b){
  if(magnitude4f(*a) > magnitude4f(*b))
    return a;

  return b;
}
Clim_vector4i *Min4i(Clim_vector4i *a,Clim_vector4i *b){
  if(magnitude4i(*a) < magnitude4i(*b))
    return a;

  return b;
}
Clim_vector4u *Min4u(Clim_vector4u *a,Clim_vector4u *b){
  if(magnitude4u(*a) > magnitude4u(*b))
    return a;

  return b;
}
Clim_vector4f *Min4f(Clim_vector4f *a,Clim_vector4f *b){
  if(magnitude4f(*a)< magnitude4f(*b))
    return a;

  return b;
}
