#ifndef WINDOW_H_
#define WINDOW_H_

#include "graphics_common.h"

struct _window{

  char * title;
  SDL_Window *window;
  Clim_vector2u size;
};

typedef struct _window Clim_window;


void createWindow(Clim_window *out,char * t,int width, int height);
void createWindowWithVec2(Clim_window *out ,char *t,const Clim_vector2u size);


#endif
