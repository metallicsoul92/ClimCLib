#include "adt/vector3.h"
#include <stdlib.h>

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
Clim_vector3i *addVec3i(Clim_vector3i *a,Clim_vector3i *b){
	return mallocVec3i((a->x + b->x), (a->y +b->y), (a->z + b->z));
}
Clim_vector3u *addVec3u(Clim_vector3u *a,Clim_vector3u *b){
	return mallocVec3u((a->x + b->x), (a->y + b->y), (a->z + b->z));
}
Clim_vector3f *addVec3f(Clim_vector3f *a,Clim_vector3f *b){
	return mallocVec3f((a->x + b->x), (a->y + b->y), (a->z + b->z));
}

//Subtractive functions//
Clim_vector3i *subVec3i(Clim_vector3i *a,Clim_vector3i *b){
	return mallocVec3i((a->x - b->x), (a->y - b->y), (a->z - b->z));
}
Clim_vector3u *subVec3u(Clim_vector3u *a,Clim_vector3u *b){
	return mallocVec3u((a->x - b->x), (a->y - b->y), (a->z - b->z));
}
Clim_vector3f *subVec3f(Clim_vector3f *a,Clim_vector3f *b){
	return mallocVec3f((a->x - b->x), (a->y - b->y), (a->z - b->z));
}

//Multiplicative functions//
Clim_vector3i *multiplyVec3i(Clim_vector3i *a,Clim_vector3i *b){
	return mallocVec3i((a->x * b->x), (a->y * b->y), (a->z * b->z));
}
Clim_vector3u *multiplyVec3u(Clim_vector3u *a,Clim_vector3u *b){
	return mallocVec3u((a->x * b->x), (a->y * b->y), (a->z * b->z));
}
Clim_vector3f *multiplyVec3f(Clim_vector3f *a,Clim_vector3f *b){
	return mallocVec3f((a->x * b->x), (a->y * b->y), (a->z * b->z));
}

//Division functions//
//Caution, all disolve into a vector3f, since dividing usually turns into decimal places.//
Clim_vector3f *divideVec3i(Clim_vector3i *a,Clim_vector3i *b){
	return mallocVec3f((a->x / b->x), (a->y / b->y), (a->z / b->z));
}
Clim_vector3f *divideVec3u(Clim_vector3u *a,Clim_vector3u *b){
	return mallocVec3f((a->x / b->x), (a->y / b->y), (a->z / b->z));
}
Clim_vector3f *divideVec3f(Clim_vector3f *a,Clim_vector3f *b){
	return mallocVec3f((a->x / b->x), (a->y / b->y), (a->z / b->z));
}
