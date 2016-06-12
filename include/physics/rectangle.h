#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "adt/vector2.h"
#include "adt/vector3.h"

#include "utility/common.h"

struct _rectangle2i{
  Clim_vector2i origin;
  Clim_vector2i size;
};
struct _rectangle2u{
  Clim_vector2u origin;
  Clim_vector2u size;
};
struct _rectangle2f{
  Clim_vector2f origin;
  Clim_vector2f size;
};
struct _rectangle3i{
  Clim_vector3i origin;
  Clim_vector3i size;
};
struct _rectangle3u{
  Clim_vector3u origin;
  Clim_vector3u size;
};
struct _rectangle3f{
  Clim_vector3f origin;
  Clim_vector3f size;
};

typedef struct _rectangle2i Clim_rectangle2i;
typedef struct _rectangle2u Clim_rectangle2u;
typedef struct _rectangle2f Clim_rectangle2f;
typedef struct _rectangle3i Clim_rectangle3i;
typedef struct _rectangle3u Clim_rectangle3u;
typedef struct _rectangle3f Clim_rectangle3f;

Clim_vector2i recCorner2i(const Clim_rectangle2i rect,const int nr);
Clim_vector2u recCorner2u(const Clim_rectangle2u rect,const int nr);
Clim_vector2f recCorner2f(const Clim_rectangle2f rect,const int nr);
Clim_vector3i recCorner3i(const Clim_rectangle3i rect,const int nr);
Clim_vector3u recCorner3u(const Clim_rectangle3u rect,const int nr);
Clim_vector3f recCorner3f(const  Clim_rectangle3f rect,const int nr);




#endif //rectangle.h
