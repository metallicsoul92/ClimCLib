#ifndef GRAPHICS_COMMON_H_
#define GRAPHICS_COMMON_H_

#include <stdint.h>

#include "adt/vector2.h"
#include "adt/vector3.h"
#include "adt/vector4.h"
#include "utility/common.h"
#include <SDL.h>
#include <SDL_image.h>


 extern cbool sdlIsInit;
  //static Clim_vector2u Clim_Static_DisplayResolutions[19];
  void initializeSDL(uint32_t flags);
  void initializeSDLWithEverything();

struct _colorui8{
  uint8_t r;
  uint8_t g;
  uint8_t b;
  uint8_t a;
};

  typedef struct _colorui8 Clim_colorui8;


uint32_t colorToUI32(Clim_colorui8 *color);

void logSDLError(const char * message);





#endif //Graphics_Common.h
