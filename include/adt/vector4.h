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
Clim_vector4i *mallocvec4i(int ox, int oy,int oz, int ow);
Clim_vector4u *mallocvec4u(unsigned int ox, unsigned int oy, unsigned int oz, unsigned int ow);
Clim_vector4f *mallocvec4f(float ox,float oy, float oz, float ow);
Clim_vector4c *mallocvec4c(char ox,char oy, char oz, char ow);
Clim_vector4g *mallocvec4g(void *ox, void *oy, void *oz, void *ow);

//Addition functions//
void addVec4i(Clim_vector4i *out, const Clim_vector4i *a, const Clim_vector4i *b);
void addVec4u(Clim_vector4u *out, const Clim_vector4u *a, const Clim_vector4u *b);
void addVec4f(Clim_vector4f *out, const Clim_vector4f *a, const Clim_vector4f *b);

//Subtractive functions//
void subVec4i(Clim_vector4i *out, const Clim_vector4i *a, const Clim_vector4i *b);
void subVec4u(Clim_vector4u *out, const Clim_vector4u *a, const Clim_vector4u *b);
void subVec4f(Clim_vector4f *out, const Clim_vector4f *a, const Clim_vector4f *b);

//Multiplicative functions//
void multVec4i(Clim_vector4i *out, const Clim_vector4i *a, const Clim_vector4i *b);
void multVec4u(Clim_vector4u *out, const Clim_vector4u *a, const Clim_vector4u *b);
void multVec4f(Clim_vector4f *out, const Clim_vector4f *a, const Clim_vector4f *b);

//Division functions//
//Caution, all disolve into a Vector4f, since dividing usually turns into decimal places.
//Caution, if you try to divide by zero, it will automatically set b to 1,1,1,1 and output
//				 will return a.
void divVec4i(Clim_vector4i *out, const Clim_vector4i *a, const Clim_vector4i *b);
void divVec4u(Clim_vector4u *out, const Clim_vector4u *a, const Clim_vector4u *b);
void divVec4f(Clim_vector4f *out, const Clim_vector4f *a, const Clim_vector4f *b);

//length functions//
//All disolve into a float//
float magnitude4i(Clim_vector4i a);
float magnitude4u(Clim_vector4u a);
float magnitude4f(Clim_vector4f a);

//lerp functions//
void lerp4i(Clim_vector4i *out,const Clim_vector4i *a,const Clim_vector4i *b, const float percent);
void lerp4f(Clim_vector4f *out,const Clim_vector4f *a,const Clim_vector4f *b, const float percent);


//Min/Max Functions//

Clim_vector4i *Max4i(Clim_vector4i *a,Clim_vector4i *b);
Clim_vector4u *Max4u(Clim_vector4u *a,Clim_vector4u *b);
Clim_vector4f *Max4f(Clim_vector4f *a,Clim_vector4f *b);
Clim_vector4i *Min4i(Clim_vector4i *a,Clim_vector4i *b);
Clim_vector4u *Min4u(Clim_vector4u *a,Clim_vector4u *b);
Clim_vector4f *Min4f(Clim_vector4f *a,Clim_vector4f *b);

//Misc Functions//
inline float dotProduct4i(const Clim_vector4i *a,const Clim_vector4i *b){
 return a->x * b->x + a->y * b->y + a->z * b->z + a->w * b->w;
}
inline float dotProduct4u(const Clim_vector4u *a,const Clim_vector4u *b){
 return a->x * b->x + a->y * b->y + a->z * b->z + a->w * b->w;
}
inline float dotProduct4f(const Clim_vector4f *a,const Clim_vector4f *b){
 return a->x * b->x + a->y * b->y + a->z * b->z + a->w * b->w;
}

#endif //Vector4
