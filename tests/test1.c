#include "../include/ClimCLib.h"
#include <SDL.h>
#include "../dep/SDL2-2.0.4/include/SDL.h"
#include "../dep/SDL2-2.0.4/include/SDL_events.h"

#include <stdio.h>
#include <assert.h>

int main(int argc, char*argv[]){

  Clim_window *test = NULL;

    Clim_vector2i a;
    a.x = Clim_Static_DisplayResolutions[0].x;
    a.y = Clim_Static_DisplayResolutions[0].y;
    Clim_vector2i b;
    b.x = 15;
    a.y = 25;
    Clim_vector2i c;

    Clim_vector2u resolution;
    resolution = Clim_Static_displayResolutions[1];
    addVec2i(&c,&a,&b);

    createWindowWithVec2(test,"Clim Second test",resolution);
    printf("Running...\n");
    SDL_Event testev;

    while(testev.type != SDL_QUIT){

    while(SDL_PollEvent(&testev)){
      switch(testev.type){
        case SDL_MOUSEMOTION:
          printf("We got a motion event.\n");
          Clim_vector2i mouse;
          mouse.x = testev.motion.x;
          mouse.y = testev.motion.y;
          printf("Current mouse position is: (%d, %d)\n", mouse.x, mouse.y);
          break;
        case SDL_QUIT:
          SDL_FreeSurface(test->surface);
          SDL_Quit();
        default:
          printf("Unhandled Event!\n");
          break;
  }
printf("Event queue empty.\n");
    }
}

    SDL_FreeSurface(test->surface);
    SDL_Quit();
    printf("C Equals: %d,%d\n", c.x, c.y);

    return 0;
}
