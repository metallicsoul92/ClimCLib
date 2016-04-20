#ifndef VECTOR4_H_
#define VECTOR4_H_

//Structure Definitions//
struct _vector4i{
	int x;
	int y;
	int z;
	int w;

};

struct _vector4u{
	unsigned int x;
	unsigned int y;
	unsigned int z;
	unsigned int w;
};
struct _vector4f{
	float x;
	float y;
	float z;
	float w;
};

struct _vector4c{
	char x;
	char y;
	char z;
	char w;
};

struct _vector4g{
	void *x;
	void *y;
	void *z;
	void *w;
};
//Typedef structures for show//
typedef struct _vector4i Clim_vector4i;
typedef struct _vector4u Clim_vector4u;
typedef struct _vector4f Clim_vector4f;
typedef struct _vector4c Clim_vector4c;
typedef struct _vector4g Clim_vector4g;

//MallocFunctions//
Clim_vector4i *mallocvec4i(Clim_vector4i *obj,int ox, int oy,int oz, int ow);
Clim_vector4u *mallocvec4u(Clim_vector4u *obj,unsigned int ox, unsigned int oy, unsigned int oz, unsigned int ow);
Clim_vector4f *mallocvec4f(Clim_vector4f *obj,float ox,float oy, float oz, float ow);
Clim_vector4c *mallocvec4c(Clim_vector4c *obj,char ox,char oy, char oz, char ow);
Clim_vector4g *mallocvec4g(Clim_vector4g *obj,void *ox, void *oy, void *oz, void *ow);

//Addition functions//
Clim_vector4i *addvec4i(Clim_vector4i *a,Clim_vector4i *b);
Clim_vector4u *addvec4u(Clim_vector4u *a,Clim_vector4u *b);
Clim_vector4f *addvec4f(Clim_vector4f *a,Clim_vector4f *b);

//Subtractive functions//
Clim_vector4i *subvec4i(Clim_vector4i *a,Clim_vector4i *b);
Clim_vector4u *subvec4u(Clim_vector4u *a,Clim_vector4u *b);
Clim_vector4f *subvec4f(Clim_vector4f *a,Clim_vector4f *b);

//Multiplicative functions//
Clim_vector4i *multiplyvec4i(Clim_vector4i *a,Clim_vector4i *b);
Clim_vector4u *multiplyvec4u(Clim_vector4u *a,Clim_vector4u *b);
Clim_vector4f *multiplyvec4f(Clim_vector4f *a,Clim_vector4f *b);

//Division functions//
//Caution, all disolve into a vector4f, since dividing usually turns into decimal places.//
Clim_vector4f *dividevec4i(Clim_vector4i *a,Clim_vector4i *b);
Clim_vector4f *dividevec4u(Clim_vector4u *a,Clim_vector4u *b);
Clim_vector4f *dividevec4f(Clim_vector4f *a,Clim_vector4f *b);

//length functions//
//All disolve into a float//
float magnitude4i(Clim_vector4i a);
float magnitude4u(Clim_vector4u a);
float magnitude4f(Clim_vector4f a);

//lerp functions//
Clim_vector4i *lerp4i(Clim_vector4i *a, Clim_vector4i *b, float percent);
Clim_vector4f *lerp4f(Clim_vector4f *a, Clim_vector4f *b, float percent);


//Min/Max Functions//

Clim_vector4i *Max4i(Clim_vector4i *a,Clim_vector4i *b);
Clim_vector4u *Max4u(Clim_vector4u *a,Clim_vector4u *b);
Clim_vector4f *Max4f(Clim_vector4f *a,Clim_vector4f *b);
Clim_vector4i *Min4i(Clim_vector4i *a,Clim_vector4i *b);
Clim_vector4u *Min4u(Clim_vector4u *a,Clim_vector4u *b);
Clim_vector4f *Min4f(Clim_vector4f *a,Clim_vector4f *b);


#endif //Vector4
