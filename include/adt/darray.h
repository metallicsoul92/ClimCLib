#ifndef DARRAY_H_
#define DARRAY_H_

#include <stdlib.h>

struct _darrayi{
	int *data;
	size_t limit;
	size_t current;
	};

struct _darrayf{
	float *data;
	size_t limit;
	size_t current;
	};

struct _darrayc{
	char *data;
	size_t limit;
	size_t current;
	};

struct _darrayg{
	void **data;
	size_t size;
	size_t limit;
	size_t current;
	};

struct _darrayu{
	unsigned int *data;
	size_t limit;
	size_t current;
	};

//typedefs//
typedef struct _darrayi Clim_darrayi;
typedef struct _darrayu Clim_darrayu;
typedef struct _darrayf Clim_darrayf;
typedef struct _darrayc Clim_darrayc;
typedef struct _darrayg Clim_darrayg;

//vector allocation//
int vecIniti(Clim_darrayi *v,size_t initialCapacity);
int vecInitu(Clim_darrayu *v,size_t initialCapacity);
int vecInitf(Clim_darrayf *v,size_t initialCapacity);
int vecInitc(Clim_darrayc *v,size_t initialCapacity);
int vecInitg(Clim_darrayg *v,size_t initialCapacity);

//vector copying//
/*
	Returns integer.  If:
		return 0 : Everything went fine, no errors.
		return !0 : The source vector doesnt match up to destination vector;
*/
int vecCopyi(Clim_darrayi *source,Clim_darrayi *destination);
int vecCopyu(Clim_darrayu *source,Clim_darrayu *destination);
int vecCopyf(Clim_darrayf *source,Clim_darrayf *destination);
int vecCopyc(Clim_darrayc *source,Clim_darrayc *destination);
int vecCopyg(Clim_darrayg *source,Clim_darrayg *destination);

//vector push/pop
//Doesnt Return//

void vecPushi(Clim_darrayi *source,int data);
void vecPushu(Clim_darrayu *source,unsigned int data);
void vecPushf(Clim_darrayf *source,float data);
void vecPushc(Clim_darrayc *source,char data);
void vecPushg(Clim_darrayg *source,void **data);

int vecPopi(Clim_darrayi *source);
unsigned int vecPopu(Clim_darrayu *source);
float vecPopf(Clim_darrayf *source);
char vecPopc(Clim_darrayc *source);
void *vecPopg(Clim_darrayg *source);



#endif //darray.h
