#ifndef VECTOR3_H_
#define VECTOR3_H_

//Structure Definitions//
struct _vector3i{
	int x;
	int y;
	int z;
};

struct _vector3u{
	unsigned int x;
	unsigned int y;
	unsigned int z;
};
struct _vector3f{
	float x;
	float y;
	float z;
};

struct _vector3c{
	char x;
	char y;
	char z;
};

struct _vector3g{
	void *x;
	void *y;
	void *z;
};
//Typedef structures for show//
typedef struct _vector3i Clim_vector3i;
typedef struct _vector3u Clim_vector3u;
typedef struct _vector3f Clim_vector3f;
typedef struct _vector3c Clim_vector3c;
typedef struct _vector3g Clim_vector3g;

//MallocFunctions//
Clim_vector3i *mallocVec3i(int ox, int oy,int oz);
Clim_vector3u *mallocVec3u(unsigned int ox, unsigned int oy, unsigned int oz);
Clim_vector3f *mallocVec3f(float ox,float oy, float oz);
Clim_vector3c *mallocVec3c(char ox,char oy, char oz);
Clim_vector3g *mallocVec3g(void *ox, void *oy, void *oz);

//Addition functions//
void addVec3i(Clim_vector3i *out, const Clim_vector3i *a, const Clim_vector3i *b);
void addVec3u(Clim_vector3u *out, const Clim_vector3u *a, const Clim_vector3u *b);
void addVec3f(Clim_vector3f *out, const Clim_vector3f *a, const Clim_vector3f *b);

//Subtractive functions//
void subVec3i(Clim_vector3i *out, const Clim_vector3i *a, const Clim_vector3i *b);
void subVec3u(Clim_vector3u *out, const Clim_vector3u *a, const Clim_vector3u *b);
void subVec3f(Clim_vector3f *out, const Clim_vector3f *a, const Clim_vector3f *b);

//Multiplicative functions//
void multVec3i(Clim_vector3i *out, const Clim_vector3i *a, const Clim_vector3i *b);
void multVec3u(Clim_vector3u *out, const Clim_vector3u *a, const Clim_vector3u *b);
void multVec3f(Clim_vector3f *out, const Clim_vector3f *a, const Clim_vector3f *b);

//Division functions//
//Caution, all disolve into a Vector3f, since dividing usually turns into decimal places.
//Caution, if you try to divide by zero, it will automatically set b to 1,1,1 and output
//				 will return a.
void divVec3i(Clim_vector3i *out, const Clim_vector3i *a, const Clim_vector3i *b);
void divVec3u(Clim_vector3u *out, const Clim_vector3u *a, const Clim_vector3u *b);
void divVec3f(Clim_vector3f *out, const Clim_vector3f *a, const Clim_vector3f *b);

//length functions//
//All disolve into a float//
float magnitude3i(Clim_vector3i a);
float magnitude3u(Clim_vector3u a);
float magnitude3f(Clim_vector3f a);

//lerp functions//
void lerp3i(Clim_vector3i *out,const Clim_vector3i *a,const Clim_vector3i *b, const float percent);
void lerp3f(Clim_vector3f *out,const Clim_vector3f *a,const Clim_vector3f *b, const float percent);


//Min/Max Functions//

Clim_vector3i *Max3i(Clim_vector3i *a,Clim_vector3i *b);
Clim_vector3u *Max3u(Clim_vector3u *a,Clim_vector3u *b);
Clim_vector3f *Max3f(Clim_vector3f *a,Clim_vector3f *b);
Clim_vector3i *Min3i(Clim_vector3i *a,Clim_vector3i *b);
Clim_vector3u *Min3u(Clim_vector3u *a,Clim_vector3u *b);
Clim_vector3f *Min3f(Clim_vector3f *a,Clim_vector3f *b);

//Misc Functions//
inline float dotProduct3i(const Clim_vector3i *a,const Clim_vector3i *b){
	return a->x * b->x + a->y * b->y + a->z * b->z;
}
inline float dotProduct3u(const Clim_vector3u *a,const Clim_vector3u *b){
	return a->x * b->x + a->y * b->y + a->z * b->z;
}
inline float dotProduct3f(const Clim_vector3f *a,const Clim_vector3f *b){
	return a->x * b->x + a->y * b->y + a->z * b->z;
}


#endif
