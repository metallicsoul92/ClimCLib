#include "graphics/window.h"
#include <stdio.h>
#include <string.h>

void createWindow(Clim_window *out, const char * t,int width, int height){
  if(sdlIsInit != TRUE){
    //TODO:Fix This Somehow
    initializeSDLWithEverything();
  }

  out->size.x = width;
  out->size.y = height;
  strcpy(out->title,t);
  out->surface = (SDL_Surface*)SDL_CreateWindow(out->title,SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                                  out->size.x, out->size.y, SDL_WINDOW_SHOWN);

}
void createWindowWithVec2(Clim_window *out , const char *t,const Clim_vector2u size){
  if(sdlIsInit != TRUE){
    //TODO:Fix This Somehow
    initializeSDLWithEverything();
  }

  out->size.x = size.x;
  out->size.y = size.y;
  strcpy(out->title,t);

  out->surface = (SDL_Surface*)SDL_CreateWindow(out->title,SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                                  out->size.x, out->size.y, SDL_WINDOW_SHOWN);

}
