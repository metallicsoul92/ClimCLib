#ifndef VECTOR2_H_
#define VECTOR2_H_

//Structure Definitions//
struct _vector2i{
	int x;
	int y;
};

struct _vector2u{
	unsigned int x;
	unsigned int y;
};
struct _vector2f{
	float x;
	float y;
};

struct _vector2c{
	char x;
	char y;
};

struct _vector2g{
	void *x;
	void *y;
};
//Typedef structures for show//
typedef struct _vector2i Clim_vector2i;
typedef struct _vector2u Clim_vector2u;
typedef struct _vector2f Clim_vector2f;
typedef struct _vector2c Clim_vector2c;
typedef struct _vector2g Clim_vector2g;

//MallocFunctions//
Clim_vector2i *mallocVec2i(int ox, int oy);
Clim_vector2u *mallocVec2u(unsigned int ox, unsigned int oy);
Clim_vector2f *mallocVec2f(float ox,float oy);
Clim_vector2c *mallocVec2c(char ox,char oy);
Clim_vector2g *mallocVec2g(void *ox, void *oy);

//Addition functions//
void addVec2i(Clim_vector2i *out, const Clim_vector2i *a, const Clim_vector2i *b);
void addVec2u(Clim_vector2u *out, const Clim_vector2u *a, const Clim_vector2u *b);
void addVec2f(Clim_vector2f *out, const Clim_vector2f *a, const Clim_vector2f *b);

//Subtractive functions//
void subVec2i(Clim_vector2i *out, const Clim_vector2i *a, const Clim_vector2i *b);
void subVec2u(Clim_vector2u *out, const Clim_vector2u *a, const Clim_vector2u *b);
void subVec2f(Clim_vector2f *out, const Clim_vector2f *a, const Clim_vector2f *b);

//Multiplicative functions//
void multVec2i(Clim_vector2i *out, const Clim_vector2i *a, const Clim_vector2i *b);
void multVec2u(Clim_vector2u *out, const Clim_vector2u *a, const Clim_vector2u *b);
void multVec2f(Clim_vector2f *out, const Clim_vector2f *a, const Clim_vector2f *b);

//Division functions//
//Caution, all disolve into a Vector2f, since dividing usually turns into decimal places.
//Caution, if you try to divide by zero, it will automatically set b to 1,1 and output
//				 will return a.
void divVec2i(Clim_vector2i *out, const Clim_vector2i *a, const Clim_vector2i *b);
void divVec2u(Clim_vector2u *out, const Clim_vector2u *a, const Clim_vector2u *b);
void divVec2f(Clim_vector2f *out, const Clim_vector2f *a, const Clim_vector2f *b);

//length functions//
//All disolve into a float//
float magnitude2i(Clim_vector2i a);
float magnitude2u(Clim_vector2u a);
float magnitude2f(Clim_vector2f a);

//lerp functions//
void lerp2i(Clim_vector2i *out,const Clim_vector2i *a, const Clim_vector2i *b,const float percent);
void lerp2f(Clim_vector2f* out, const Clim_vector2f *a,const Clim_vector2f *b,const float percent);


//Min/Max Functions//

Clim_vector2i *Max2i(Clim_vector2i *a,Clim_vector2i *b);
Clim_vector2u *Max2u(Clim_vector2u *a,Clim_vector2u *b);
Clim_vector2f *Max2f(Clim_vector2f *a,Clim_vector2f *b);
Clim_vector2i *Min2i(Clim_vector2i *a,Clim_vector2i *b);
Clim_vector2u *Min2u(Clim_vector2u *a,Clim_vector2u *b);
Clim_vector2f *Min2f(Clim_vector2f *a,Clim_vector2f *b);

//Misc Functions//
void Rotate2f(Clim_vector2f *out, const Clim_vector2f *vec,float degree);

inline float dotProduct2i(const Clim_vector2i *a,const Clim_vector2i *b){
	return a->x * b->x + a->y * b->y;
}
inline float dotProduct2u(const Clim_vector2u *a,const Clim_vector2u *b){
	return a->x * b->x + a->y * b->y;
}
inline float dotProduct2f(const Clim_vector2f *a,const Clim_vector2f *b){
	return a->x * b->x + a->y * b->y;
}

void projectVector2i(Clim_vector2i *out, const Clim_vector2i *project,
                    const Clim_vector2i *onto);

void projectVector2u(Clim_vector2u *out, const Clim_vector2u *project,
                    const Clim_vector2u *onto);

void projectVector2f(Clim_vector2f *out, const Clim_vector2f *project,
                    const Clim_vector2f *onto);



#endif
