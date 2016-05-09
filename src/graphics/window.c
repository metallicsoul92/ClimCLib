#include "graphics/window.h"
#include <stdio.h>
#include <string.h>

void createWindow(Clim_window *out, char * t,int width, int height){
  if(sdlIsInit != TRUE){
    //TODO:Fix This Somehow
    initializeSDLWithEverything();
  }

  out->size.x = width;
  out->size.y = height;
  out->title = t;
  out->window = (SDL_Window*)SDL_CreateWindow(out->title,SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                                  out->size.x, out->size.y, SDL_WINDOW_SHOWN);

}
void createWindowWithVec2(Clim_window *out, char *t,const Clim_vector2u size){
  if(sdlIsInit != TRUE){
    //TODO:Fix This Somehow
    initializeSDLWithEverything();
  }

  out->size.x = size.x;
  out->size.y = size.y;
  out->title = t;
  out->window = (SDL_Window*)SDL_CreateWindow(out->title,SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                                  out->size.x, out->size.y, SDL_WINDOW_SHOWN);

}
