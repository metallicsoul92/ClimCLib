#include "physics/circle.h"
#include "adt/vector2.h"
#include <math.h>

int CivsCi(Clim_Circlei2D a,Clim_Circlei2D b){
  float r = a.radius + b.radius;
  r *= r;
  return r < pow(a.pos.x + b.pos.x,2) +pow(a.pos.y + b.pos.y,2);
}
int CuvsCu(Clim_Circleu2D a,Clim_Circleu2D b){
  float r = a.radius + b.radius;
  r *= r;
  return r < pow(a.pos.x + b.pos.x,2) +pow(a.pos.y + b.pos.y,2);}
int CfvsCf(Clim_Circlef2D a,Clim_Circlef2D b){
  float r = a.radius + b.radius;
  r *= r;
  return r < pow(a.pos.x + b.pos.x,2) +pow(a.pos.y + b.pos.y,2);}


Clim_physicsIntersectData intersectCi(Clim_Circlei2D a, Clim_Circlei2D b){
  float rDist = a.radius + b.radius;
  Clim_vector2i temp;
  addVec2i(&temp,&a.pos,&b.pos);

  float cDist = magnitude2i(temp);

    if(cDist < rDist){
      Clim_physicsIntersectData d = { .doesInteract = TRUE, .distance = cDist - rDist};
	return d;
    }else{
 	Clim_physicsIntersectData d=  { .doesInteract = FALSE, .distance = cDist - rDist};
	return d;
    }
  }
  Clim_physicsIntersectData intersectCu(Clim_Circleu2D a,Clim_Circleu2D b){
 	    float rDist = a.radius + b.radius;
      Clim_vector2u temp;
      addVec2u(&temp,&a.pos,&b.pos);

    	float cDist = magnitude2u(temp);

    	if(cDist < rDist){
      		Clim_physicsIntersectData d = { .doesInteract = TRUE, .distance = cDist - rDist};
		return d;
    	}else{
 		Clim_physicsIntersectData d=  { .doesInteract = FALSE, .distance = cDist - rDist};
		return d;
		}
	}
  Clim_physicsIntersectData intersectCf(Clim_Circlef2D a,Clim_Circlef2D b){
    float rDist = a.radius + b.radius;
    Clim_vector2f temp;
    addVec2f(&temp,&a.pos,&b.pos);

    float cDist = magnitude2f(temp);

    	if(cDist < rDist){
      		Clim_physicsIntersectData d = { .doesInteract = TRUE, .distance = cDist - rDist};
		return d;
    	}else{
 		Clim_physicsIntersectData d=  { .doesInteract = FALSE, .distance = cDist - rDist};
		return d;
		}
    }
