#ifndef SHAPES_H_
#define SHAPES_H_

#include <stdlib.h>

#include "graphics_common.h"
#include "physics/rectangle.h"
#include "renderer.h"
/*Structures */

struct _trianglei{
  Clim_vector2i point[3];
};
struct _trianglef{
  Clim_vector2f point[3];
};


/*Shapes will be used for shapes with more then 3 points */
struct _shapei{
  size_t vertexCount;
  Clim_vector2i *verticies;
};
struct _shapef{
  size_t vertexCount;
  Clim_vector2f *verticies;
};
/*Type Defines*/

typedef struct _trianglei Clim_trianglei;
typedef struct _trianglef Clim_trianglef;
typedef struct _shapei Clim_shapei;
typedef struct _shapef Clim_shapef;
/*Functions*/


#endif
