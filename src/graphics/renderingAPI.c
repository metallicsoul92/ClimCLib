#include "graphics/renderingAPI.h"
#include <SDL.h>
#include <SDL_image.h>
#include <stdlib.h>


SDL_Rect *createRectFromTexture(Clim_texture *texture){
  SDL_Rect *rect = (SDL_Rect*)malloc(sizeof(SDL_Rect*));
  rect->x = texture->position.x;
  rect->y = texture->position.y;
  rect->w = texture->size.x;
  rect->h = texture->size.y;

  return rect;
}


int Clim_renderDrawRectangle2i(Clim_renderer *renderer, Clim_rectangle2i *rectangle, Clim_colorui8 *color){
  if(SDL_SetRenderDrawColor(renderer->context.asSDL,color->r,color->g,color->b,color->a) !=0){
    logSDLError("SetRenderDrawColor");
    return -1;
  }
    return SDL_RenderDrawRect(renderer->context.asSDL,ClimtoSDLRect2Ptr(rectangle));
}
int Clim_renderDrawRFilledectangle2i(Clim_renderer *renderer, Clim_rectangle2i *rectangle, Clim_colorui8 *color){
  if(SDL_SetRenderDrawColor(renderer->context.asSDL,color->r,color->g,color->b,color->a) !=0){
    logSDLError("SetRenderDrawColor");
    return -1;
  }
    return SDL_RenderFillRect(renderer->context.asSDL,ClimtoSDLRect2Ptr(rectangle));
}

int Clim_renderTexture(Clim_renderer *renderer, Clim_texture* ctexture,Clim_rectangle2i* src,Clim_rectangle2i* dest){
  return SDL_RenderCopy(renderer->context.asSDL,ctexture->texture,ClimtoSDLRect2Ptr(src),ClimtoSDLRect2Ptr(dest));
}
int Clim_renderTextureByPosition(Clim_renderer *renderer, Clim_texture* ctexture,Clim_rectangle2i* src,Clim_vector2i* dest){

  Clim_rectangle2i destination;
  destination.origin.x = dest->x;
  destination.origin.y = dest->y;
  destination.size.x = ctexture->size.x;
  destination.size.y = ctexture->size.y;

  if(src ==NULL){
    return SDL_RenderCopy(renderer->context.asSDL,ctexture->texture,NULL,ClimtoSDLRect2Ptr(&destination));

  }

  return SDL_RenderCopy(renderer->context.asSDL,ctexture->texture,ClimtoSDLRect2Ptr(src),ClimtoSDLRect2Ptr(&destination));
}

int Clim_renderTextureX(Clim_renderer *renderer, Clim_texture* ctexture,Clim_rectangle2i* src,Clim_rectangle2i* dest,
                        const double angle, const SDL_RendererFlip flip){
                          return SDL_RenderCopyEx(renderer->context.asSDL,ctexture->texture,ClimtoSDLRect2Ptr(src),
                                ClimtoSDLRect2Ptr(dest),angle,NULL,flip);
                        }
