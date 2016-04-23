#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "adt/vector2.h"
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

typedef struct _circlei2d Clim_Circlei2D;
typedef struct _circlef2d Clim_Circlef2D;
typedef struct _circleu2d Clim_Circleu2D;



int CivsCi(Clim_Circlei2D a,Clim_Circlei2D b);
int CuvsCu(Clim_Circleu2D a,Clim_Circleu2D b);
int CfvsCf(Clim_Circlef2D a,Clim_Circlef2D b);

Clim_physicsIntersectData intersectCi(Clim_Circlei2D a, Clim_Circlei2D b);
Clim_physicsIntersectData intersectCu(Clim_Circleu2D a, Clim_Circleu2D b);
Clim_physicsIntersectData intersectCf(Clim_Circlef2D a, Clim_Circlef2D b);

#endif //CIRCLE_H_
