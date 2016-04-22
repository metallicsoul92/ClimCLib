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
Clim_vector3i *addVec3i(Clim_vector3i *a,Clim_vector3i *b);
Clim_vector3u *addVec3u(Clim_vector3u *a,Clim_vector3u *b);
Clim_vector3f *addVec3f(Clim_vector3f *a,Clim_vector3f *b);

//Subtractive functions//
Clim_vector3i *subVec3i(Clim_vector3i *a,Clim_vector3i *b);
Clim_vector3u *subVec3u(Clim_vector3u *a,Clim_vector3u *b);
Clim_vector3f *subVec3f(Clim_vector3f *a,Clim_vector3f *b);

//Multiplicative functions//
Clim_vector3i *multiplyVec3i(Clim_vector3i *a,Clim_vector3i *b);
Clim_vector3u *multiplyVec3u(Clim_vector3u *a,Clim_vector3u *b);
Clim_vector3f *multiplyVec3f(Clim_vector3f *a,Clim_vector3f *b);

//Division functions//
//Caution, all disolve into a vector3f, since dividing usually turns into decimal places.//
Clim_vector3f *divideVec3i(Clim_vector3i *a,Clim_vector3i *b);
Clim_vector3f *divideVec3u(Clim_vector3u *a,Clim_vector3u *b);
Clim_vector3f *divideVec3f(Clim_vector3f *a,Clim_vector3f *b);

//length functions//
//All disolve into a float//
float magnitude3i(Clim_vector3i a);
float magnitude3u(Clim_vector3u a);
float magnitude3f(Clim_vector3f a);

//lerp functions//
Clim_vector3i *lerp3i(Clim_vector3i *a, Clim_vector3i *b, float percent);
Clim_vector3f *lerp3f(Clim_vector3f *a, Clim_vector3f *b, float percent);


//Min/Max Functions//

Clim_vector3i *Max4i(Clim_vector3i *a,Clim_vector3i *b);
Clim_vector3u *Max4u(Clim_vector3u *a,Clim_vector3u *b);
Clim_vector3f *Max4f(Clim_vector3f *a,Clim_vector3f *b);
Clim_vector3i *Min4i(Clim_vector3i *a,Clim_vector3i *b);
Clim_vector3u *Min4u(Clim_vector3u *a,Clim_vector3u *b);
Clim_vector3f *Min4f(Clim_vector3f *a,Clim_vector3f *b);



#endif
