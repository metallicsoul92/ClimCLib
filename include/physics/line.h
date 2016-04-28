#ifndef LINE_H_
#define LINE_H_

#include "adt/vector2.h"
#include "adt/vector3.h"

#include "utility/common.h"

struct _linei2D{
  Clim_vector2i base; // position where the line begins
  Clim_vector2i direction; //direction line is pointing
};

struct _lineu2D{
  Clim_vector2u base;
  Clim_vector2u direction;
};
struct _linef2D{
  Clim_vector2f base;
  Clim_vector2f direction;
};

struct _linei3D{
  Clim_vector3i base;
  Clim_vector3i direction;
};
struct _lineu3D{
  Clim_vector3u base;
  Clim_vector3u direction;
};
struct _linef3D{
  Clim_vector3f base;
  Clim_vector3f direction;
};

typedef struct _linei2D Clim_linei2D;
typedef struct _lineu2D Clim_lineu2D;
typedef struct _linef2D Clim_linef2D;

typedef struct _linei3D Clim_linei3D;
typedef struct _lineu3D Clim_lineu3D;
typedef struct _linef3D Clim_linef3D;

cbool perpendicular2i(const Clim_linei2D *a,const Clim_linei2D *b);
cbool perpendicular2u(const Clim_lineu2D *a,const Clim_lineu2D *b);
cbool perpendicular2f(const Clim_linef2D *a,const Clim_linef2D *b);

cbool perpendicular3i(const Clim_linei3D *a,const Clim_linei3D *b);
cbool perpendicular3u(const Clim_lineu3D *a,const Clim_lineu3D *b);
cbool perpendicular3f(const Clim_linef3D *a,const Clim_linef3D *b);

cbool parallel2i(const Clim_linei2D *a,const Clim_linei2D *b);
cbool parallel2u(const Clim_lineu2D *a,const Clim_lineu2D *b);
cbool parallel2f(const Clim_linef2D *a,const Clim_linef2D *b);

cbool parallel3i(const Clim_linei3D *a,const Clim_linei3D *b);
cbool parallel3u(const Clim_lineu3D *a,const Clim_lineu3D *b);
cbool parallel3f(const Clim_linef3D *a,const Clim_linef3D *b);

#endif //line.h
