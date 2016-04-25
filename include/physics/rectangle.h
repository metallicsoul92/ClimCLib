#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "adt/vector2.h"
#include "adt/vector3.h"

struct _rectangle2i{
  Clim_vector2i origin;
  Clim_vector2i size;
}
struct _rectangle2u{
  Clim_vector2u origin;
  Clim_vector2u size;
}
struct _rectangle2f{
  Clim_vector2f origin;
  Clim_vector2f size;
}
struct _rectangle3i{
  Clim_vector3i origin;
  Clim_vector3i size;
}
struct _rectangle3u{
  Clim_vector3u origin;
  Clim_vector3u size;
}
struct _rectangle3f{
  Clim_vector3f origin;
  Clim_vector3f size;
}


#endif //rectangle.h
