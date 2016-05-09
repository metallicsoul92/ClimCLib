#include "../include/ClimCLib.h"
#include <SDL.h>
#include "../dep/SDL2-2.0.4/include/SDL.h"
#include "../dep/SDL2-2.0.4/include/SDL_events.h"

#include <stdio.h>
#include <assert.h>





int main(int argc, char*argv[]){
  sdlIsInit = FALSE;

  /*Clim_window *test = NULL;
  test = (Clim_window*) malloc(sizeof(Clim_window));

  Clim_window *test2 = NULL;
  test2 = (Clim_window*) malloc(sizeof(Clim_window));

   Clim_vector2u Clim_Static_DisplayResolutions[19] = {
    {800,600},{1024,600},{1024,768},
    {1152,865},{1280,720},{1280,800},
    {1280,1024},{1360,768},{1366,768},
    {1440,900},{1600,900},{1680,1050},
    {1920,1080},{1920,1200},{2560,1440},
    {2560,1600},{3840,2160},{1536,864},
  };

    Clim_vector2i a;
    a.x = Clim_Static_DisplayResolutions[0].x;
    a.y = Clim_Static_DisplayResolutions[0].y;
    Clim_vector2i b;
    b.x = 15;
    a.y = 25;
    Clim_vector2i c;

    Clim_vector2u resolution;
    resolution = Clim_Static_DisplayResolutions[1];
    addVec2i(&c,&a,&b);

    createWindow(test2, "Clim Third Test",resolution.x, resolution.y);
    createWindowWithVec2(test,"Clim Fourth test",resolution);
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
          SDL_Quit();
        default:
          printf("Unhandled Event!\n");
          break;
  }
printf("Event queue empty.\n");
    }
}

    SDL_Quit();
    printf("C Equals: %d,%d\n", c.x, c.y);
*/


  Clim_linei2D x,y;
  x.base.x = 3;
  x.base.y = 3;

  x.direction.x  = 1;
  x.direction.y = 1;

  y.base.x = 5;
  y.base.y = 5;

  y.direction.x  = -1;
  y.direction.y = 1;

  if(perpendicular2i(&x,&y) == TRUE){
    printf("X and Y are Perpendicular");
  }else{
    printf("X and Y are not Perpendicular");
  }

    return 0;
}
