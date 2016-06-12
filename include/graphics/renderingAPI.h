#ifndef RENDERINGAPI_H_
#define RENDERINGAPI_H_

#include "shapes.h"
#include "texture.h"
#include <SDL.h>
#include <stdio.h>
SDL_Rect *createRectFromTexture(Clim_texture *texture);

int Clim_renderDrawRectangle2i(Clim_renderer *renderer, Clim_rectangle2i *rectangle, Clim_colorui8 *color);
int Clim_renderDrawRFilledectangle2i(Clim_renderer *renderer, Clim_rectangle2i *rectangle, Clim_colorui8 *color);
int Clim_renderTexture(Clim_renderer *renderer, Clim_texture* ctexture,Clim_rectangle2i* src,Clim_rectangle2i* dest);
int Clim_renderTextureX(Clim_renderer *renderer, Clim_texture* ctexture,Clim_rectangle2i* src,Clim_rectangle2i* dest,
                        const double angle, const SDL_RendererFlip flip);
int Clim_renderTextureByPosition(Clim_renderer *renderer, Clim_texture* ctexture,Clim_rectangle2i* src,Clim_vector2i* dest);
#endif //renderingapi.h
