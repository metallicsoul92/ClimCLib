#ifndef MAT_H_
#define MAT_H_

struct _matg{
	int height;
	int width;
	void **data;
}

struct _matf{
	int height;
	int width;
	float *data;
}
struct _mati{
	int height;
	int width;
	int *data;
}
struct _matu{
	int height;
	int width;
	unsigned int *data;
}


typedef struct _matg Clim_matg;
typedef struct _matf Clim_matf;
typedef struct _mati Clim_mati;
typedef struct _matu Clim_matu;

//Step 1. Create a matrix based on height and width variables.
Clim_matg *newMatg(int h, int w); 
Clim_matg *newMatf(int h, int w);
Clim_matg *newMati(int h, int w);
Clim_matg *newMatu(int h, int w);

//Step 2. assign data depending on index:
void assignDataMatg(Clim_matg *mat, unsigned int index,void *data);
void assignDataMatf(Clim_matf *mat, unsigned int index,float *data);
void assignDataMati(Clim_mati *mat, unsigned int index,int *data);
void assignDataMatu(Clim_matu *mat, unsigned int index,unsigned int *data);

//Step 3. get data from struct based off of index:
void *getMatgElement(Clim_matg *mat, unsigned int index);
float *getMatfElement(Clim_matf *mat, unsigned int index);
int *getMatiElement(Clim_mati *mat, unsigned int index);
unsigned int *getMatuElement(Clim_matu *mat, unsigned int index);

/*
	TODO:
		Create functions for addition, subtraction, multiplication, division.
		Create a function which sets up an identity matrix as long as height and width are the same.
		Create an Orthographic function, and a Perspective function.

*/


#endif //MAT_H_

