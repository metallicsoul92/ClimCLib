#include "graphics/shapes.h"


void createTriangle2i(Clim_triangle2i *out, Clim_vector2i first, Clim_vector2i second, Clim_vector2i third){
  out = (Clim_triangle2i *)malloc(sizeof(Clim_triangle2i*));
  out->point[0] = first;
  out->point[1] = second;
  out->point[2] = third;
}
void createTriangle2f(Clim_triangle2f *out, Clim_vector2f first, Clim_vector2f second, Clim_vector2f third){
  out = (Clim_triangle2f *)malloc(sizeof(Clim_triangle2f*));
  out->point[0] = first;
  out->point[1] = second;
  out->point[2] = third;
}

void createShape2i(Clim_shape2i *out, size_t vcount, Clim_vector2i *v){
  out = (Clim_shape2i*)malloc(sizeof(v)*vcount+sizeof(size_t));
  out->vertexCount = vcount;
  out->verticies = v;
}
void createShape2f(Clim_shape2f *out, size_t vcount, Clim_vector2f *v){
  out = (Clim_shape2f*)malloc(sizeof(v)*vcount+sizeof(size_t));
  out->vertexCount = vcount;
  out->verticies = v;
}
void createShape3i(Clim_shape3i *out, size_t vcount, Clim_vector3i *v){
  out = (Clim_shape3i*)malloc(sizeof(v)*vcount+sizeof(size_t));
  out->vertexCount = vcount;
  out->verticies = v;
}
void createShape3f(Clim_shape3f *out, size_t vcount, Clim_vector3f *v){
  out = (Clim_shape3f*)malloc(sizeof(v)*vcount+sizeof(size_t));
  out->vertexCount = vcount;
  out->verticies = v;
}

SDL_Rect ClimtoSDLRect2(Clim_rectangle2i clim){
  SDL_Rect object;
  object.x = clim.origin.x;
  object.y = clim.origin.y + clim.size.y;
  object.w = clim.size.x ;
  object.h = clim.size.y ;

  return object;
}
SDL_Rect *ClimtoSDLRect2Ptr(Clim_rectangle2i *clim){
  SDL_Rect *object = (SDL_Rect*)malloc(sizeof(SDL_Rect*));
  object->x = clim->origin.x;
  object->y = clim->origin.y + clim->size.y;
  object->w = clim->size.x ;
  object->h = clim->size.y;

  return object;
}

Clim_rectangle2i SDLtoClimRect2(SDL_Rect sdl){
  Clim_rectangle2i object;
  object.origin.x = sdl.x;
  object.origin.y = sdl.y - sdl.h;
  object.size.x = sdl.w;
  object.size.y = sdl.h;

  return object;
}
Clim_rectangle2i *SDLtoClimRect2Ptr(SDL_Rect *sdl){
  Clim_rectangle2i *object = (Clim_rectangle2i*)malloc(sizeof(Clim_rectangle2i*));
  object->origin.x = sdl->x;
  object->origin.y = sdl->y - sdl->h;
  object->size.x = sdl->w;
  object->size.y = sdl->h;

  return object;
}
