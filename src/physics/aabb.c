#include "physics/aabb.h"

int checkBoundsf(Clim_AABBf a,Clim_AABBf b){
if(a.max.x < b.min.x  || a.min.x > b.max.x)
  return -1;
if(a.max.y < b.min.y  || a.min.y > b.max.y)
  return -1;

return 1;
}
int checkBoundsi(Clim_AABBi ia,Clim_AABBi ib){
if(ia.max.x < ib.min.x  || ia.min.x > ib.max.x) return -1;
if(ia.max.y < ib.min.y  || ia.min.y > ib.max.y) return -1;

return 1;
}
int checkBoundsu(Clim_AABBu ua,Clim_AABBu ub){
if(ua.max.x < ub.min.x  || ua.min.x > ub.max.x) return -1;
if(ua.max.y < ub.min.y  || ua.min.y > ub.max.y) return -1;

return 1;
}
