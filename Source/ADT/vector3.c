#include "../../Include/vector3.h"
#include <stdlib.h>

//MallocFunctions//
Clim_vector3i *mallocVec3i(Clim_vector3i *obj,int ox, int oy,int oz){
	obj = (Clim_vector3i*)malloc(sizeof(Clim_vector3i));
	obj->x = ox;
	obj->y = oy;
	obj->z = oz;
	return obj;
}
Clim_vector3u *mallocVec3u(Clim_vector3u *obj,unsigned int ox, unsigned int oy, unsigned int oz){
	obj = (Clim_vector3u*)malloc(sizeof(Clim_vector3u));
	obj->x = ox;
	obj->y = oy;
	obj->z = oz;
	return obj;
}
Clim_vector3f *mallocVec3f(Clim_vector3f *obj,float ox,float oy, float oz){
	obj = (Clim_vector3f*)malloc(sizeof(Clim_vector3f));
	obj->x = ox;
	obj->y = oy;
	obj->z = oz;
	return obj;
}
Clim_vector3c *mallocVec3c(Clim_vector3c *obj,char ox,char oy, char oz){
	obj = (Clim_vector3c*)malloc(sizeof(Clim_vector3c));
	obj->x = ox;
	obj->y = oy;
	obj->z = oz;
	return obj;
}
Clim_vector3g *mallocVec3g(Clim_vector3g *obj,void *ox, void *oy, void *oz){
	obj = (Clim_vector3g*)malloc(sizeof(Clim_vector3g));
	obj->x = ox;
	obj->y = oy;
	obj->z = oz;
	return obj;
}

//Addition functions//
Clim_vector3i *addVec3i(Clim_vector3i *a,Clim_vector3i *b){
	Clim_vector3i *temp;
	return mallocVec3i(temp, (a->x + b->x), (a->y +b->y), (a->z + b->z));
}
Clim_vector3u *addVec3u(Clim_vector3u *a,Clim_vector3u *b){
	Clim_vector3u *temp;
	return mallocVec3u(temp, (a->x + b->x), (a->y + b->y), (a->z + b->z));
}
Clim_vector3f *addVec3f(Clim_vector3f *a,Clim_vector3f *b){
	Clim_vector3f *temp;
	return mallocVec3f(temp, (a->x + b->x), (a->y + b->y), (a->z + b->z));
}

//Subtractive functions//
Clim_vector3i *subVec3i(Clim_vector3i *a,Clim_vector3i *b){
	Clim_vector3i *temp;
	return mallocVec3i(temp, (a->x - b->x), (a->y - b->y), (a->z - b->z));
}
Clim_vector3u *subVec3u(Clim_vector3u *a,Clim_vector3u *b){
	Clim_vector3u *temp;
	return mallocVec3u(temp, (a->x - b->x), (a->y - b->y), (a->z - b->z));
}
Clim_vector3f *subVec3f(Clim_vector3f *a,Clim_vector3f *b){
	Clim_vector3f *temp;
	return mallocVec3f(temp, (a->x - b->x), (a->y - b->y), (a->z - b->z));
}

//Multiplicative functions//
Clim_vector3i *multiplyVec3i(Clim_vector3i *a,Clim_vector3i *b){
	Clim_vector3i *temp;
	return mallocVec3i(temp, (a->x * b->x), (a->y * b->y), (a->z * b->z));
}
Clim_vector3u *multiplyVec3u(Clim_vector3u *a,Clim_vector3u *b){
	Clim_vector3u *temp;
	return mallocVec3u(temp, (a->x * b->x), (a->y * b->y), (a->z * b->z));
}
Clim_vector3f *multiplyVec3f(Clim_vector3f *a,Clim_vector3f *b){
	Clim_vector3f *temp;
	return mallocVec3f(temp, (a->x * b->x), (a->y * b->y), (a->z * b->z));
}

//Division functions//
//Caution, all disolve into a vector3f, since dividing usually turns into decimal places.//
Clim_vector3f *divideVec3i(Clim_vector3i *a,Clim_vector3i *b){
	Clim_vector3f *temp;
	return mallocVec3f(temp, (a->x / b->x), (a->y / b->y), (a->z / b->z));
}
Clim_vector3f *divideVec3u(Clim_vector3u *a,Clim_vector3u *b){
	Clim_vector3f *temp;
	return mallocVec3f(temp, (a->x / b->x), (a->y / b->y), (a->z / b->z));
}
Clim_vector3f *divideVec3f(Clim_vector3f *a,Clim_vector3f *b){
	Clim_vector3f *temp;
	return mallocVec3f(temp, (a->x / b->x), (a->y / b->y), (a->z / b->z));
}
