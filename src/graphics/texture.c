#include "graphics/texture.h"




void createTexture(Clim_texture *out,const char * filename, SDL_Renderer *renderer, int x, int y, int w, int h){
  out->position.x = x;
  out->position.y = y;
  out->size.x = w;
  out->size.y = h;

  out->texture = IMG_LoadTexture(renderer,filename);

  if(!out->texture){
    logSDLError("LoadTexture");
  }

}
void createTexturewithVec2(Clim_texture *out,const char * filename, SDL_Renderer *renderer, Clim_vector2i position, Clim_vector2i size){
  out->position = position;
  out->size = size;
  out->texture = IMG_LoadTexture(renderer,filename);

  if(!out->texture){
    logSDLError("LoadTexture");
  }
}
