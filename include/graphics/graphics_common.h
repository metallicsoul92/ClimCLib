#ifndef GRAPHICS_COMMON_H_
#define GRAPHICS_COMMON_H_

#include <stdint.h>

#include "adt/vector2.h"
#include "adt/vector3.h"
#include "adt/vector4.h"
#include "utility/common.h"
#include "SDL.h"

//TYPES OF RENDERING
//VULKAN WONT BE USED IN C API BUT EXTENDED INTO C++
typedef enum { CLIM_OPENGL = 1,
               CLIM_OPENGLES = 2,
               CLIM_SDL = 4,
               CLIM_DIRECTX = 8,
               CLIM_VULKAN = 16 } renderingType;

 static cbool sdlIsInit;
  //static Clim_vector2u Clim_Static_DisplayResolutions[19];
  void initializeSDL(uint32_t flags);
  void initializeSDLWithEverything();


#endif //Graphics_Common.h
