#ifndef PHYSICSINTERSECTDATA_H_
#define PHYSICSINTERSECTDATA_H_
#include "utility/common.h"


struct _physicsIntersectData{
  const cbool doesInteract;
  const float distance;
};

typedef struct _physicsIntersectData Clim_physicsIntersectData;

#endif //Physics Intersect data
