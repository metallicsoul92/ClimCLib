#ifndef SHAPES_H_
#define SHAPES_H_

#include <stdlib.h>

#include "graphics_common.h"
#include "physics/rectangle.h"
#include "renderer.h"
/*Structures */

struct _triangle2i{
  Clim_vector2i point[3];
};
struct _triangle2f{
  Clim_vector2f point[3];
};


/*Shapes will be used for shapes with more then 3 points */
struct _shape2i{
  size_t vertexCount;
  Clim_vector2i *verticies;
};
struct _shape2f{
  size_t vertexCount;
  Clim_vector2f *verticies;
};
struct _shape3i{
  size_t vertexCount;
  Clim_vector3i *verticies;
};
struct _shape3f{
  size_t vertexCount;
  Clim_vector3f *verticies;
};
/*Type Defines*/

typedef struct _triangle2i Clim_triangle2i;
typedef struct _triangle2f Clim_triangle2f;
typedef struct _shape2i Clim_shape2i;
typedef struct _shape2f Clim_shape2f;
typedef struct _shape3i Clim_shape3i;
typedef struct _shape3f Clim_shape3f;
/*Functions*/

void createTriangle2i(Clim_triangle2i *out, Clim_vector2i first, Clim_vector2i second, Clim_vector2i third);
void createTriangle2f(Clim_triangle2f *out, Clim_vector2f first, Clim_vector2f second, Clim_vector2f third);


void createShape2i(Clim_shape2i *out, size_t vcount, Clim_vector2i *v);
void createShape2f(Clim_shape2f *out, size_t vcount, Clim_vector2f *v);
void createShape3i(Clim_shape3i *out, size_t vcount, Clim_vector3i *v);
void createShape3f(Clim_shape3f *out, size_t vcount, Clim_vector3f *v);

SDL_Rect ClimtoSDLRect2(Clim_rectangle2i clim);
SDL_Rect *ClimtoSDLRect2Ptr(Clim_rectangle2i *clim);

Clim_rectangle2i SDLtoClimRect2(SDL_Rect sdl);
Clim_rectangle2i *SDLtoClimRect2Ptr(SDL_Rect *sdl);


#endif
