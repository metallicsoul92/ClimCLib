#include "physics/line.h"


cbool perpendicular2i(const Clim_linei2D *a,const Clim_linei2D *b){
    if(dotProduct2i(&a->direction,&b->direction) == 0){
      return TRUE;
    }
    return FALSE;
}

cbool perpendicular2u(const Clim_lineu2D *a,const Clim_lineu2D *b){
    if(dotProduct2u(&a->direction,&b->direction) == 0){
      return TRUE;
    }
    return FALSE;
}
cbool perpendicular2f(const Clim_linef2D *a,const Clim_linef2D *b){
    if(dotProduct2f(&a->direction,&b->direction) == 0){
      return TRUE;
    }
    return FALSE;
}

cbool perpendicular3i(const Clim_linei3D *a,const Clim_linei3D *b);
cbool perpendicular3u(const Clim_lineu3D *a,const Clim_lineu3D *b);
cbool perpendicular3f(const Clim_linef3D *a,const Clim_linef3D *b);

cbool parallel2i(const Clim_linei2D *a,const Clim_linei2D *b){
   float temp1;
   float temp2;
   temp1 = a->direction.x/a->direction.y;
   temp2 = b->direction.x/b->direction.y;

   if(temp1 == temp2){
     return TRUE;
   }else
   return FALSE;

}
cbool parallel2u(const Clim_lineu2D *a,const Clim_lineu2D *b){
   float temp1;
   float temp2;
   temp1 = a->direction.x/a->direction.y;
   temp2 = b->direction.x/b->direction.y;

   if(temp1 == temp2){
     return TRUE;
   }else
   return FALSE;

}
cbool parallel2f(const Clim_linef2D *a,const Clim_linef2D *b){
   float temp1;
   float temp2;
   temp1 = a->direction.x/a->direction.y;
   temp2 = b->direction.x/b->direction.y;

   if(temp1 == temp2){
     return TRUE;
   }else
   return FALSE;

}

cbool parallel3i(const Clim_linei3D *a,const Clim_linei3D *b);
cbool parallel3u(const Clim_lineu3D *a,const Clim_lineu3D *b);
cbool parallel3f(const Clim_linef3D *a,const Clim_linef3D *b);
