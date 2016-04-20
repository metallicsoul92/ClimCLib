#include "../../Include/vector2.h"
#include <stdlib.h>
#include <math.h>
//MallocFunctions//
Clim_vector2i *mallocvec2i(Clim_vector2i *obj,int ox, int oy){
	obj = (Clim_vector2i*)malloc(sizeof(Clim_vector2i));
	obj->x = ox;
	obj->y = oy;
	return obj;
}
Clim_vector2u *mallocvec2u(Clim_vector2u *obj,unsigned int ox, unsigned int oy){
	obj = (Clim_vector2u*)malloc(sizeof(Clim_vector2u));
	obj->x = ox;
	obj->y = oy;
	return obj;
}
Clim_vector2f *mallocvec2f(Clim_vector2f *obj,float ox,float oy){
	obj = (Clim_vector2f*)malloc(sizeof(Clim_vector2f));
	obj->x = ox;
	obj->y = oy;
	return obj;
}
Clim_vector2c *mallocvec2c(Clim_vector2c *obj,char ox,char oy){
	obj = (Clim_vector2c*)malloc(sizeof(Clim_vector2c));
	obj->x = ox;
	obj->y = oy;
	return obj;
}
Clim_vector2g *mallocvec2g(Clim_vector2g *obj,void *ox, void *oy){
	obj = (Clim_vector2g*)malloc(sizeof(Clim_vector2g));
	obj->x = ox;
	obj->y = oy;
	return obj;
}

//Addition functions//
Clim_vector2i *addvec2i(Clim_vector2i *a,Clim_vector2i *b){
	Clim_vector2i *temp;
	return mallocvec2i(temp, (a->x + b->x), (a->y +b->y));
}
Clim_vector2u *addvec2u(Clim_vector2u *a,Clim_vector2u *b){
	Clim_vector2u *temp;
	return mallocvec2u(temp, (a->x + b->x), (a->y + b->y));
}
Clim_vector2f *addvec2f(Clim_vector2f *a,Clim_vector2f *b){
	Clim_vector2f *temp;
	return mallocvec2f(temp, (a->x + b->x), (a->y + b->y));
}

//Subtractive functions//
Clim_vector2i *subvec2i(Clim_vector2i *a,Clim_vector2i *b){
	Clim_vector2i *temp;
	return mallocvec2i(temp, (a->x - b->x), (a->y - b->y));
}
Clim_vector2u *subvec2u(Clim_vector2u *a,Clim_vector2u *b){
	Clim_vector2u *temp;
	return mallocvec2u(temp, (a->x - b->x), (a->y - b->y));
}
Clim_vector2f *subvec2f(Clim_vector2f *a,Clim_vector2f *b){
	Clim_vector2f *temp;
	return mallocvec2f(temp, (a->x - b->x), (a->y - b->y));
}

//Multiplicative functions//
Clim_vector2i *multiplyvec2i(Clim_vector2i *a,Clim_vector2i *b){
	Clim_vector2i *temp;
	return mallocvec2i(temp, (a->x * b->x), (a->y * b->y));
}
Clim_vector2u *multiplyvec2u(Clim_vector2u *a,Clim_vector2u *b){
	Clim_vector2u *temp;
	return mallocvec2u(temp, (a->x * b->x), (a->y * b->y));
}
Clim_vector2f *multiplyvec2f(Clim_vector2f *a,Clim_vector2f *b){
	Clim_vector2f *temp;
	return mallocvec2f(temp, (a->x * b->x), (a->y * b->y));
}

//Division functions//
//Caution, all disolve into a vector2f, since dividing usually turns into decimal places.//
Clim_vector2f *dividevec2i(Clim_vector2i *a,Clim_vector2i *b){
	Clim_vector2f *temp;
	return mallocvec2f(temp, (a->x / b->x), (a->y / b->y));
}
Clim_vector2f *dividevec2u(Clim_vector2u *a,Clim_vector2u *b){
	Clim_vector2f *temp;
	return mallocvec2f(temp, (a->x / b->x), (a->y / b->y));
}
Clim_vector2f *dividevec2f(Clim_vector2f *a,Clim_vector2f *b){
	Clim_vector2f *temp;
	return mallocvec2f(temp, (a->x / b->x), (a->y / b->y));
}


float magnitude2i(Clim_vector2i a){
	float x = a.x * a.x;
	float y = a.y * a.y;
	return sqrt(x+y);
}
float magnitude2u(Clim_vector2u a){
	float x = a.x * a.x;
	float y = a.y * a.y;
	return sqrt(x+y);
}
float magnitude2f(Clim_vector2f a){
	float x = a.x * a.x;
	float y = a.y * a.y;
	return sqrt(x+y);
}
