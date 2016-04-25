#ifndef LINE_H_
#define LINE_H_

#include "adt/vector2.h"
#include "adt/vector3.h"

struct _linei2D{
  Clim_vector2i base; // position where the line begins
  Clim_vector2i direction; //direction line is pointing
}

struct _lineu2D{
  Clim_vector2u base;
  Clim_vector2u direction;
}
struct _linef2D{
  Clim_vector2f base;
  Clim_vector2f direction;
}

struct _linei3D{
  Clim_vector3i base;
  Clim_vector3i direction;
}
struct _lineu3D{
  Clim_vector3u base;
  Clim_vector3u direction;
}
struct _linef3D{
  Clim_vector3f base;
  Clim_vector3f direction;
}

typedef struct _linei2D Clim_Linei2D;
typedef struct _lineu2D Clim_Lineu2D;
typedef struct _linef2D Clim_Linef2D;

typedef struct _linei3D Clim_Linei3D;
typedef struct _lineu3D Clim_Lineu3D;
typedef struct _linef3D Clim_Linef3D;

#endif //line.h
