#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "adt/vector2.h"
#include "adt/vector3.h"
#include "physics/physicsIntersectData.h"

struct _circlei2d{
  float radius;
  Clim_vector2i pos;
};

struct _circlef2d{
  float radius;
  Clim_vector2f pos;
};
struct _circleu2d{
  float radius;
  Clim_vector2u pos;
};

struct _circlei3d{
  float radius;
  Clim_vector3i pos;
};

struct _circlef3d{
  float radius;
  Clim_vector3f pos;
};
struct _circleu3d{
  float radius;
  Clim_vector3u pos;
};


typedef struct _circlei2d Clim_Circlei2D;
typedef struct _circlef2d Clim_Circlef2D;
typedef struct _circleu2d Clim_Circleu2D;

typedef struct _circlei3d Clim_Circlei3D;
typedef struct _circlef3d Clim_Circlef3D;
typedef struct _circleu3d Clim_Circleu3D;

int C2ivsC2i(Clim_Circlei2D a,Clim_Circlei2D b);
int C2uvsC2u(Clim_Circleu2D a,Clim_Circleu2D b);
int C2fvsC2f(Clim_Circlef2D a,Clim_Circlef2D b);

int C3ivsC3i(Clim_Circlei3D a,Clim_Circlei3D b);
int C3uvsC3u(Clim_Circleu3D a,Clim_Circleu3D b);
int C3fvsC3f(Clim_Circlef3D a,Clim_Circlef3D b);

Clim_physicsIntersectData intersectC2i(Clim_Circlei2D a, Clim_Circlei2D b);
Clim_physicsIntersectData intersectC2u(Clim_Circleu2D a, Clim_Circleu2D b);
Clim_physicsIntersectData intersectC2f(Clim_Circlef2D a, Clim_Circlef2D b);

Clim_physicsIntersectData intersectC3i(Clim_Circlei3D a, Clim_Circlei3D b);
Clim_physicsIntersectData intersectC3u(Clim_Circleu3D a, Clim_Circleu3D b);
Clim_physicsIntersectData intersectC3f(Clim_Circlef3D a, Clim_Circlef3D b);

#endif //CIRCLE_H_
