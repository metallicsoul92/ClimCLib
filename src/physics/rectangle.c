#include "physics/rectangle.h"


Clim_vector2i recCorner2i(const Clim_rectangle2i rect,const int nr){
  Clim_vector2i corner = rect.origin;
  switch(nr % 4){
    case 0:
      corner.x += rect.size.x;
      break;
    case 1:
      addVec2i(&corner,&rect.origin, &rect.size);
      break;
    case 2:
      corner.y += rect.size.y;
      break;
    default:
      //When it is the origin//
      break;
  }
  return corner;
}
Clim_vector2u recCorner2u(const Clim_rectangle2u rect,const int nr){
  Clim_vector2u corner = rect.origin;
  switch(nr % 4){
    case 0:
      corner.x += rect.size.x;
      break;
    case 1:
      addVec2u(&corner,&rect.origin, &rect.size);
      break;
    case 2:
      corner.y += rect.size.y;
      break;
    default:
      //When it is the origin//
      break;
  }
  return corner;
}
Clim_vector2f recCorner2f(const Clim_rectangle2f rect,const int nr){
  Clim_vector2f corner = rect.origin;
  switch(nr % 4){
    case 0:
      corner.x = rect.size.x;
      break;
    case 1:
      addVec2f(&corner,&rect.origin, &rect.size);
      break;
    case 2:
      corner.y += rect.size.y;
      break;
    default:
      //When it is the origin//
      break;
  }
  return corner;
}

Clim_vector3i recCorner3i(const Clim_rectangle3i rect,const int nr){
  Clim_vector3i corner = rect.origin;
  switch(nr % 8){
    case 0:
      corner.x += rect.size.x;
      break;
    case 1:
      addVec3i(&corner,&rect.origin, &rect.size);
      corner.z -= rect.size.z;
      break;
    case 2:
      corner.y += rect.size.y;
      break;
    case 3:
        corner.x += rect.size.x;
        corner.z += rect.size.z;
        break;
    case 4:
        addVec3i(&corner,&rect.origin, &rect.size);
        break;
    case 5:
        corner.y += rect.size.y;
        corner.z += rect.size.z;
        break;
    case 6:
        corner.z += rect.size.z;
        break;
    default:
      //When it is the origin//
      break;
  }
  return corner;
}
Clim_vector3u recCorner3u(const Clim_rectangle3u rect,const int nr){
  Clim_vector3u corner = rect.origin;
  switch(nr % 8){
    case 0:
      corner.x += rect.size.x;
      break;
    case 1:
      addVec3u(&corner,&rect.origin, &rect.size);
      corner.z -= rect.size.z;
      break;
    case 2:
      corner.y += rect.size.y;
      break;
    case 3:
        corner.x += rect.size.x;
        corner.z += rect.size.z;
        break;
    case 4:
        addVec3u(&corner,&rect.origin, &rect.size);
        break;
    case 5:
        corner.y += rect.size.y;
        corner.z += rect.size.z;
        break;
    case 6:
        corner.z += rect.size.z;
        break;
    default:
      //When it is the origin//
      break;
  }
  return corner;
}
Clim_vector3f recCorner3f(const  Clim_rectangle3f rect,const int nr){
  Clim_vector3f corner = rect.origin;
  switch(nr % 8){
    case 0:
      corner.x += rect.size.x;
      break;
    case 1:
      addVec3f(&corner,&rect.origin, &rect.size);
      corner.z -= rect.size.z;
      break;
    case 2:
      corner.y += rect.size.y;
      break;
    case 3:
        corner.x += rect.size.x;
        corner.z += rect.size.z;
        break;
    case 4:
        addVec3f(&corner,&rect.origin, &rect.size);
        break;
    case 5:
        corner.y += rect.size.y;
        corner.z += rect.size.z;
        break;
    case 6:
        corner.z += rect.size.z;
        break;
    default:
      //When it is the origin//
      break;
  }
  return corner;
}
