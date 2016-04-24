#ifndef AABB2_H_
#define AABB2_H_

#include "adt/vector2.h"
#include "adt/vector3.h"
struct _AABB2f{
  Clim_vector2f min;
  Clim_vector2f max;
};

struct _AABB2i{
  Clim_vector2i min;
  Clim_vector2i max;
};

struct _AABB2u{
  Clim_vector2u min;
  Clim_vector2u max;
};
struct _AABB3f{
  Clim_vector3f min;
  Clim_vector3f max;
};

struct _AABB3i{
  Clim_vector3i min;
  Clim_vector3i max;
};

struct _AABB3u{
  Clim_vector3u min;
  Clim_vector3u max;
};

typedef struct _AABB2f Clim_AABB2f;
typedef struct _AABB2i Clim_AABB2i;
typedef struct _AABB2u Clim_AABB2u;

typedef struct _AABB3f Clim_AABB3f;
typedef struct _AABB3i Clim_AABB3i;
typedef struct _AABB3u Clim_AABB3u;

int checkBounds2i(Clim_AABB2i a,Clim_AABB2i b);
int checkBounds2u(Clim_AABB2u a,Clim_AABB2u b);
int checkBounds2f(Clim_AABB2f a,Clim_AABB2f b);

int checkBounds3i(Clim_AABB3i a,Clim_AABB3i b);
int checkBounds3u(Clim_AABB3u a,Clim_AABB3u b);
int checkBounds3f(Clim_AABB3f a,Clim_AABB3f b);


#endif //AABB2_H_
