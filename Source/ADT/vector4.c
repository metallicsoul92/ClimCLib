#include "../../Include/vector4.h"
#include <stdlib.h>
#include <math.h>

Clim_vector4i *mallocvec4i(Clim_vector4i *obj,int ox, int oy, int oz, int ow){
	obj = (Clim_vector4i*)malloc(sizeof(Clim_vector4i));
	obj->x = ox;
	obj->y = oy;
	obj->z = oz;
	obj->w = ow;
	return obj;
}
Clim_vector4u *mallocvec4u(Clim_vector4u *obj,unsigned int ox, unsigned int oy,unsigned int oz,unsigned int ow){
	obj = (Clim_vector4u*)malloc(sizeof(Clim_vector4u));
	obj->x = ox;
	obj->y = oy;
	obj->z = oz;
	obj->w = ow;
	return obj;
}
Clim_vector4f *mallocvec4f(Clim_vector4f *obj,float ox,float oy, float oz, float ow){
	obj = (Clim_vector4f*)malloc(sizeof(Clim_vector4f));
	obj->x = ox;
	obj->y = oy;
	obj->z = oz;
	obj->w = ow;
	return obj;
}
Clim_vector4c *mallocvec4c(Clim_vector4c *obj,char ox,char oy,char oz, char ow){
	obj = (Clim_vector4c*)malloc(sizeof(Clim_vector4c));
	obj->x = ox;
	obj->y = oy;
	obj->z = oz;
	obj->w = ow;
	return obj;
}
Clim_vector4g *mallocvec4g(Clim_vector4g *obj,void *ox, void *oy, void *oz, void *ow){
	obj = (Clim_vector4g*)malloc(sizeof(Clim_vector4g));
	obj->x = ox;
	obj->y = oy;
	obj->z = oz;
	obj->w = ow;
	return obj;
}

//Addition functions//
Clim_vector4i *addvec4i(Clim_vector4i *a,Clim_vector4i *b){
	Clim_vector4i *temp;
	return mallocvec4i(temp, (a->x + b->x), (a->y +b->y),(a->z +b->z),(a->w +b->w));
}
Clim_vector4u *addvec4u(Clim_vector4u *a,Clim_vector4u *b){
	Clim_vector4u *temp;
	return mallocvec4u(temp, (a->x + b->x), (a->y + b->y),(a->z +b->z),(a->w +b->w));
}
Clim_vector4f *addvec4f(Clim_vector4f *a,Clim_vector4f *b){
	Clim_vector4f *temp;
	return mallocvec4f(temp, (a->x + b->x), (a->y + b->y),(a->z +b->z),(a->w +b->w));
}

//Subtractive functions//
Clim_vector4i *subvec4i(Clim_vector4i *a,Clim_vector4i *b){
	Clim_vector4i *temp;
	return mallocvec4i(temp, (a->x - b->x), (a->y - b->y), (a->z - b->z), (a->w - b->w));
}
Clim_vector4u *subvec4u(Clim_vector4u *a,Clim_vector4u *b){
	Clim_vector4u *temp;
	return mallocvec4u(temp, (a->x - b->x), (a->y - b->y), (a->z - b->z), (a->w - b->w));
}
Clim_vector4f *subvec4f(Clim_vector4f *a,Clim_vector4f *b){
	Clim_vector4f *temp;
	return mallocvec4f(temp, (a->x - b->x), (a->y - b->y), (a->z - b->z), (a->w - b->w));
}

//Multiplicative functions//
Clim_vector4i *multiplyvec4i(Clim_vector4i *a,Clim_vector4i *b){
	Clim_vector4i *temp;
	return mallocvec4i(temp, (a->x * b->x), (a->y * b->y), (a->z * b->z), (a->w * b->w));
}
Clim_vector4u *multiplyvec4u(Clim_vector4u *a,Clim_vector4u *b){
	Clim_vector4u *temp;
	return mallocvec4u(temp, (a->x * b->x), (a->y * b->y), (a->z * b->z), (a->w * b->w));
}
Clim_vector4f *multiplyvec4f(Clim_vector4f *a,Clim_vector4f *b){
	Clim_vector4f *temp;
	return mallocvec4f(temp, (a->x * b->x), (a->y * b->y), (a->z * b->z), (a->w * b->w));
}

//Division functions//
//Caution, all disolve into a vector4f, since dividing usually turns into decimal places.//
Clim_vector4f *dividevec4i(Clim_vector4i *a,Clim_vector4i *b){
	Clim_vector4f *temp;
	return mallocvec4f(temp, (a->x / b->x), (a->y / b->y), (a->z / b->z), (a->w / b->w));
}
Clim_vector4f *dividevec4u(Clim_vector4u *a,Clim_vector4u *b){
	Clim_vector4f *temp;
	return mallocvec4f(temp, (a->x / b->x), (a->y / b->y), (a->z / b->z), (a->w / b->w));
}
Clim_vector4f *dividevec4f(Clim_vector4f *a,Clim_vector4f *b){
	Clim_vector4f *temp;
	return mallocvec4f(temp, (a->x / b->x), (a->y / b->y), (a->z / b->z), (a->w / b->w));
}


float magnitude4i(Clim_vector4i a){

	return pow(pow(a.x,4)+pow(a.y,4)+pow(a.z,4)+pow(a.w,4),.25f);
}
float magnitude4u(Clim_vector4u a){
	return pow(pow(a.x,4)+pow(a.y,4)+pow(a.z,4)+pow(a.w,4),.25f);
}
float magnitude4f(Clim_vector4f a){
	return pow(pow(a.x,4)+pow(a.y,4)+pow(a.z,4)+pow(a.w,4),.25f);
}
