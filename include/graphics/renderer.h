#ifndef RENDERER_H_
#define RENDERER_H_

#include "graphics_common.h"
#include "window.h"
/*
  enum Rendering Style represents whether or not you will be using openGL.
  for now i will have SDL rendering 2D and OpenGL rendering 3D
*/
typedef enum {CLIM_2D , CLIM_3D} renderingStyle;


struct _renderer{
  union _context{
  SDL_Renderer *asSDL;
  SDL_GLContext *asOGL;
} context;
renderingStyle style;
Clim_window *window;
};

typedef struct _renderer Clim_renderer;

void createRenderer(Clim_renderer *out, Clim_window* win,renderingStyle style);

#endif // renderer.h
