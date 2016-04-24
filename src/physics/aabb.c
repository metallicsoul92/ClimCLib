#include "physics/aabb.h"

int checkBounds2f(Clim_AABB2f a,Clim_AABB2f b){
if(a.max.x < b.min.x  || a.min.x > b.max.x)
  return -1;
if(a.max.y < b.min.y  || a.min.y > b.max.y)
  return -1;

return 1;
}
int checkBounds2i(Clim_AABB2i a,Clim_AABB2i b){
if(a.max.x < b.min.x  || a.min.x > b.max.x) return -1;
if(a.max.y < b.min.y  || a.min.y > b.max.y) return -1;

return 1;
}
int checkBounds2u(Clim_AABB2u a,Clim_AABB2u b){
if(a.max.x < b.min.x  || a.min.x > b.max.x) return -1;
if(a.max.y < b.min.y  || a.min.y > b.max.y) return -1;

return 1;
}

int checkBounds3i(Clim_AABB3i a,Clim_AABB3i b){
if(a.max.x < b.min.x  || a.min.x > b.max.x) return -1;
if(a.max.y < b.min.y  || a.min.y > b.max.y) return -1;

return 1;
}
int checkBounds3u(Clim_AABB3u a,Clim_AABB3u b){
if(a.max.x < b.min.x  || a.min.x > b.max.x) return -1;
if(a.max.y < b.min.y  || a.min.y > b.max.y) return -1;

return 1;
}

int checkBounds3f(Clim_AABB3f a,Clim_AABB3f b){
if(a.max.x < b.min.x  || a.min.x > b.max.x) return -1;
if(a.max.y < b.min.y  || a.min.y > b.max.y) return -1;

return 1;
}
