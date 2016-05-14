#ifndef TEXTURE_H_
#define TEXTURE_H_

#include "graphics_common.h"



struct _texture{
  Clim_vector2i position;
  Clim_vector2i size;
  SDL_Texture *texture;
};

typedef struct _texture Clim_texture;

void createTexture(Clim_texture *out,const char * filename, SDL_Renderer *renderer, int x, int y, int w, int h);
void createTexturewithVec2(Clim_texture *out,const char * filename, SDL_Renderer *renderer, Clim_vector2i position, Clim_vector2i size);




#endif //texture.h
