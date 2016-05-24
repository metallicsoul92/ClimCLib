#ifndef RENDERINGAPI_H_
#define RENDERINGAPI_H_

#include "shapes.h"


int Clim_renderDrawRectangle2i(Clim_renderer *renderer, Clim_rectangle2i *rectangle, Clim_colorui8 *color);
int Clim_renderDrawRectangle2f(Clim_renderer *renderer, Clim_rectangle2f *rectangle, Clim_colorui8 *color);


#endif //renderingapi.h
