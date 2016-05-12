#ifndef GRAPHICS_COMMON_H_
#define GRAPHICS_COMMON_H_

#include <stdint.h>

#include "adt/vector2.h"
#include "adt/vector3.h"
#include "adt/vector4.h"
#include "utility/common.h"
#include "SDL.h"


 extern cbool sdlIsInit;
  //static Clim_vector2u Clim_Static_DisplayResolutions[19];
  void initializeSDL(uint32_t flags);
  void initializeSDLWithEverything();




#endif //Graphics_Common.h
