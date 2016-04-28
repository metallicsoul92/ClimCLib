#include "physics/line.h"

cbool perpendicular2i(const Clim_,linei2D *a,const Clim_,linei2D *b){
    if(dotProduct2i(a->direction,b->direction) == 0){
      return TRUE;
    }else
    return FALSE;
}

cbool perpendicular2u(const Clim_,lineu2D *a,const Clim_,lineu2D *b){
    if(dotProduct2i(a->direction,b->direction) == 0){
      return TRUE;
    }else
    return FALSE;
}
cbool perpendicular2f(const Clim_,linef2D *a,const Clim_,linef2D *b){
    if(dotProduct2i(a->direction,b->direction) == 0){
      return TRUE;
    }else
    return FALSE;
}

cbool perpendicular3i(const Clim_,linei3D *a,const Clim_,linei3D *b);
cbool perpendicular3u(const Clim_,lineu3D *a,const Clim_,lineu3D *b);
cbool perpendicular3f(const Clim_,linef3D *a,const Clim_,linef3D *b);

cbool parallel2i(const Clim_,linei2D *a,const Clim_,linei2D *b){
   float temp1;
   float temp2;
   temp1 = a->direction.x/a->direction.y;
   temp2 = b->direction.x/b->direction.y;

   if(temp1 == temp2){
     return TRUE;
   }else
   return FALSE;

}
cbool parallel2u(const Clim_,lineu2D *a,const Clim_,lineu2D *b){
   float temp1;
   float temp2;
   temp1 = a->direction.x/a->direction.y;
   temp2 = b->direction.x/b->direction.y;

   if(temp1 == temp2){
     return TRUE;
   }else
   return FALSE;

}
cbool parallel2f(const Clim_,linef2D *a,const Clim_,linef2D *b){
   float temp1;
   float temp2;
   temp1 = a->direction.x/a->direction.y;
   temp2 = b->direction.x/b->direction.y;

   if(temp1 == temp2){
     return TRUE;
   }else
   return FALSE;

}

cbool parallel3i(const Clim_,linei3D *a,const Clim_,linei3D *b);
cbool parallel3u(const Clim_,lineu3D *a,const Clim_,lineu3D *b);
cbool parallel3f(const Clim_,linef3D *a,const Clim_,linef3D *b);
