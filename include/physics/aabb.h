#ifndef AABB_H_
#define AABB_H_

#include "adt/vector2.h"

struct _AABBf{
  Clim_vector2f min;
  Clim_vector2f max;
};

struct _AABBi{
  Clim_vector2i min;
  Clim_vector2i max;
};

struct _AABBu{
  Clim_vector2u min;
  Clim_vector2u max;
};

typedef struct _AABBf Clim_AABBf;
typedef struct _AABBi Clim_AABBi;
typedef struct _AABBu Clim_AABBu;


#endif //AABB_H_
