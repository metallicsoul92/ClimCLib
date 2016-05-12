#include "graphics/renderer.h"


void createRenderer(Clim_renderer *out, Clim_window* win,renderingStyle style){
  switch(style){
    case CLIM_2D:
    out->style = CLIM_2D;
    out->window = win;
    out->context.asSDL = SDL_CreateRenderer(out->window->window,-1, SDL_RENDERER_ACCELERATED);
    break;

    case CLIM_3D:
    out->style = CLIM_3D;
    out->window = win;
    out->context.asOGL = SDL_GL_CreateContext(out->window->window);
    break;
  }

}
