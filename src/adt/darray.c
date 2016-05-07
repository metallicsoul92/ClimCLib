#include "adt/darray.h"
#include "utility/common.h"
#include <stdio.h>
#include <string.h>

//vector allocation//
int vecIniti(Clim_darrayi *v,size_t initialCapacity){
	v->data = (int*)malloc(initialCapacity * sizeof(int));
	if(!v->data) return -1;

	v->limit = initialCapacity;
	v->current = 0;
	return 0;

}
int vecInitu(Clim_darrayu *v,size_t initialCapacity){
	v->data = (unsigned int*)malloc(initialCapacity * sizeof(unsigned int));
	if(!v->data) return -1;

	v->limit = initialCapacity;
	v->current = 0;
	return 0;

}
int vecInitf(Clim_darrayf *v,size_t initialCapacity){
	v->data = (float*)malloc(initialCapacity * sizeof(float));
	if(!v->data) return -1;

	v->limit = initialCapacity;
	v->current = 0;
	return 0;

}
int vecInitc(Clim_darrayc *v,size_t initialCapacity){
	v->data = (char*)malloc(initialCapacity * sizeof(char));
	if(!v->data) return -1;

	v->limit = initialCapacity;
	v->current = 0;
	return 0;

}
int vecInitg(Clim_darrayg *v,size_t initialCapacity){
	v->data =(void**)malloc(initialCapacity * sizeof(void**));
	if(!v->data) return -1;

	v->limit = initialCapacity;
	v->current = 0;
	return 0;

}

//Vector Resizing default and custom//
int resizeDAi(Clim_darrayi *v){

	Clim_darrayi *temp = (Clim_darrayi*)malloc(sizeof(v->limit *2));
	temp->limit =v->limit * 2;
	if(vecCopyi(v,temp) != 0){
		return -1;
	}
	swapPointers(v,temp);
	free(temp);

	return 0;
	}
	int resizeDAu(Clim_darrayu *v){

		Clim_darrayu *temp = (Clim_darrayu*)malloc(sizeof(v->limit *2));
		temp->limit =v->limit * 2;
		if(vecCopyu(v,temp) != 0){
			return -1;
		}
		swapPointers(v,temp);
		free(temp);

		return 0;
		}
		int resizeDAf(Clim_darrayf *v){

			Clim_darrayf *temp = (Clim_darrayf*)malloc(sizeof(v->limit *2));
			temp->limit =v->limit * 2;
			if(vecCopyf(v,temp) != 0){
				return -1;
			}
			swapPointers(v,temp);
			free(temp);

			return 0;
			}
			int resizeDAc(Clim_darrayc *v){

				Clim_darrayc *temp = (Clim_darrayc*)malloc(sizeof(v->limit *2));
				temp->limit =v->limit * 2;
				if(vecCopyc(v,temp) != 0){
					return -1;
				}
				swapPointers(v,temp);
				free(temp);

				return 0;
				}

//vector copying//
/*
	Returns integer.  If:
		return 0 : Everything went fine, no errors.
		return -1 : Destination is smaller then source
		return -2 : The source vector doesnt match up to destination vector;
*/
int vecCopyi(Clim_darrayi *source,Clim_darrayi *destination){

	//first check if destinations size = source size;
	if(destination->limit < source->limit) return -1;

	//copying elements based off of sources size
	for(unsigned int i = 0; i <source->limit ; i++)
		{
			source->data[i] = destination->data[i];
		}
	// error checking .... maybe take this out if not necessary?
	for(unsigned int i = 0; i < source->limit ; i++)
		{
			if(source->data[i] != destination->data[i])
				return -2;
		}
	return 0;

	}

int vecCopyu(Clim_darrayu *source,Clim_darrayu *destination){

	//first check if destinations size = source size;
	if(destination->limit < source->limit) return -1;

	//copying elements based off of sources size
	for(unsigned int i = 0; i <source->limit ; i++)
		{
			source->data[i] = destination->data[i];
		}
	// error checking .... maybe take this out if not necessary?
	for(unsigned int i = 0; i < source->limit ; i++)
		{
			if(source->data[i] != destination->data[i])
				return -2;
		}
	return 0;

	}
int vecCopyf(Clim_darrayf *source,Clim_darrayf *destination){

	//first check if destinations size = source size;
	if(destination->limit < source->limit) return -1;

	//copying elements based off of sources size
	for(unsigned int i = 0; i <source->limit ; i++)
		{
			source->data[i] = destination->data[i];
		}
	// error checking .... maybe take this out if not necessary?
	for(unsigned int i = 0; i < source->limit ; i++)
		{
			if(source->data[i] != destination->data[i])
				return -2;
		}
	return 0;

	}
int vecCopyc(Clim_darrayc *source,Clim_darrayc *destination){

	//first check if destinations size = source size;
	if(destination->limit < source->limit) return -1;

	//copying elements based off of sources size
	for(unsigned int i = 0; i <source->limit ; i++)
		{
			source->data[i] = destination->data[i];
		}
	// error checking .... maybe take this out if not necessary?
	for(unsigned int i = 0; i < source->limit ; i++)
		{
			if(source->data[i] != destination->data[i])
				return -2;
		}
	return 0;

	}
int vecCopyg(Clim_darrayg *source,Clim_darrayg *destination){

	//first check if destinations size = source size;
	if(destination->limit < source->limit) return -1;


			swapPointers(source->data,destination->data);


	return 0;

	}

//vector push/pop
//Doesnt Return//

void vecPushi(Clim_darrayi *source,int data){
	if(source->current <source->limit){
		source->data[source->current + 1] = data;
		source->current++;
	}else{
		resizeDAi(source);
		if(source->current <source->limit){
			source->data[source->current + 1] = data;
			source->current++;
		}
	}
}
void vecPushu(Clim_darrayu *source,unsigned int data){
	if(source->current <source->limit){
		source->data[source->current + 1] = data;
		source->current++;
	}
}
void vecPushf(Clim_darrayf *source,float data){
	if(source->current <source->limit){
		source->data[source->current + 1] = data;
		source->current++;
	}else{

	}
}
void vecPushc(Clim_darrayc *source,char data){
	if(source->current <source->limit){
		source->data[source->current + 1] = data;
		source->current++;
	}
}
void vecPushg(Clim_darrayg *source,void **data){
	if(source->current <source->limit){
		source->data[source->current] =  data;
		source->current++;
	}
}
int vecPopi(Clim_darrayi *source){
	int element = source->data[source->current];
	source->data[source->current] = 0;
	source->current--;
	return element;
}
unsigned int vecPopu(Clim_darrayu *source){
	unsigned int element = source->data[source->current];
	source->data[source->current] = 0;
	source->current--;
	return element;
}
float vecPopf(Clim_darrayf *source){
  float element = source->data[source->current];
	source->data[source->current] = 0;
	source->current--;
		return element;
}
char vecPopc(Clim_darrayc *source){
	char element = source->data[source->current];
	source->data[source->current] = 0;
	source->current--;
	return element;
}
void *vecPopg(Clim_darrayg *source){
	void *element = source->data[source->current];
	source->data[source->current] = 0;
	source->current--;
	return element;
}
