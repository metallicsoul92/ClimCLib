#include "physics/circle.h"

#include <math.h>

int C2ivsC2i(Clim_Circlei2D a,Clim_Circlei2D b){
  float r = a.radius + b.radius;
  r *= r;
  return r < pow(a.pos.x + b.pos.x,2) +pow(a.pos.y + b.pos.y,2);
}
int C2uvsC2u(Clim_Circleu2D a,Clim_Circleu2D b){
  float r = a.radius + b.radius;
  r *= r;
  return r < pow(a.pos.x + b.pos.x,2) +pow(a.pos.y + b.pos.y,2);
}
int C2fvsC2f(Clim_Circlef2D a,Clim_Circlef2D b){
  float r = a.radius + b.radius;
  r *= r;
  return r < pow(a.pos.x + b.pos.x,2) +pow(a.pos.y + b.pos.y,2);
}

  int C3ivsC3i(Clim_Circlei3D a,Clim_Circlei3D b){
    float r = a.radius + b.radius;
    r *= r;
    return r < pow(a.pos.x + b.pos.x,2) + pow(a.pos.y + b.pos.y,2) + pow(a.pos.z + b.pos.z,2);
  }

  int C3uvsC3u(Clim_Circleu3D a,Clim_Circleu3D b){
    float r = a.radius + b.radius;
    r *= r;
    return r < pow(a.pos.x + b.pos.x,2) +pow(a.pos.y + b.pos.y,2) + pow(a.pos.z + b.pos.z,2);
  }
  int C3fvsC3f(Clim_Circlef3D a,Clim_Circlef3D b){
    float r = a.radius + b.radius;
    r *= r;
    return r < pow(a.pos.x + b.pos.x,2) +pow(a.pos.y + b.pos.y,2) + pow(a.pos.z + b.pos.z,2);
  }

Clim_physicsIntersectData intersectC2i(Clim_Circlei2D a, Clim_Circlei2D b){
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
  Clim_physicsIntersectData intersectC2u(Clim_Circleu2D a,Clim_Circleu2D b){
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
  Clim_physicsIntersectData intersectC2f(Clim_Circlef2D a,Clim_Circlef2D b){
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


    Clim_physicsIntersectData intersectC3i(Clim_Circlei3D a, Clim_Circlei3D b){
      float rDist = a.radius + b.radius;
      Clim_vector3i temp;
      addVec3i(&temp,&a.pos,&b.pos);

      float cDist = magnitude3i(temp);

        if(cDist < rDist){
          Clim_physicsIntersectData d = { .doesInteract = TRUE, .distance = cDist - rDist};
    	return d;
        }else{
     	Clim_physicsIntersectData d=  { .doesInteract = FALSE, .distance = cDist - rDist};
    	return d;
        }
      }
      Clim_physicsIntersectData intersectC3u(Clim_Circleu3D a,Clim_Circleu3D b){
     	    float rDist = a.radius + b.radius;
          Clim_vector3u temp;
          addVec3u(&temp,&a.pos,&b.pos);

        	float cDist = magnitude3u(temp);

        	if(cDist < rDist){
          		Clim_physicsIntersectData d = { .doesInteract = TRUE, .distance = cDist - rDist};
    		return d;
        	}else{
     		Clim_physicsIntersectData d=  { .doesInteract = FALSE, .distance = cDist - rDist};
    		return d;
    		}
    	}
      Clim_physicsIntersectData intersectC3f(Clim_Circlef3D a,Clim_Circlef3D b){
        float rDist = a.radius + b.radius;
        Clim_vector3f temp;
        addVec3f(&temp,&a.pos,&b.pos);

        float cDist = magnitude3f(temp);

        	if(cDist < rDist){
          		Clim_physicsIntersectData d = { .doesInteract = TRUE, .distance = cDist - rDist};
    		return d;
        	}else{
     		Clim_physicsIntersectData d=  { .doesInteract = FALSE, .distance = cDist - rDist};
    		return d;
    		}
        }
