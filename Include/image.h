#ifndef IMAGE_H_
#define IMAGE_H_


struct _imageRaw{
	unsigned int height;
	unsigned int width;
	unsigned char* pixels; //should this be a char* ?

	};

typedef struct _imageRaw Clim_imageRaw;





#endif //IMAGE_H_
