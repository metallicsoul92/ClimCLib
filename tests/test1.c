#include "../include/ClimCLib.h"
#include <SDL.h>
#include "../dep/SDL2-2.0.4/include/SDL.h"
#include "../dep/SDL2-2.0.4/include/SDL_events.h"

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>





int main(int argc, char*argv[]){
  sdlIsInit = FALSE;

  Clim_window *test = NULL;
  test = (Clim_window*) malloc(sizeof(Clim_window));

  //Clim_window *test2 = NULL;
  //test2 = (Clim_window*) malloc(sizeof(Clim_window));

  Clim_renderer *render1;
  //Clim_renderer *render2;

  render1 = (Clim_renderer*)malloc(sizeof(Clim_renderer*));
  //render2 =  (Clim_renderer*)malloc(sizeof(Clim_renderer*));

   Clim_vector2u Clim_Static_DisplayResolutions[19] = {
    {800,600},{1024,600},{1024,768},
    {1152,865},{1280,720},{1280,800},
    {1280,1024},{1360,768},{1366,768},
    {1440,900},{1600,900},{1680,1050},
    {1920,1080},{1920,1200},{2560,1440},
    {2560,1600},{3840,2160},{1536,864},
  };

    Clim_segment2i a= {{10,10},{100,100}};;

    Clim_segment2i *x;
    x = &a;


    Clim_vector2u resolution;
    resolution = Clim_Static_DisplayResolutions[1];


    //createWindow(test2, "Clim Third Test",resolution.x, resolution.y);
    createWindowWithVec2(test,"Clim Fourth test",resolution);
    createRenderer(render1,test,CLIM_2D);
    //createRenderer(render2,test2,CLIM_3D);
    printf("Running...\n");



      SDL_Event testev;
    while(testev.type != SDL_QUIT){
    //  printf("Clearing color of background to blue\n");
        if(SDL_SetRenderDrawColor(render1->context.asSDL,0,0,255,255) != 0){
        printf("There is an error with SDL_SetRenderDrawColor! \n");
        printf("%s\n",SDL_GetError());
      }
      if(SDL_RenderClear(render1->context.asSDL) !=0){
      printf("There is an error with SDL_RenderClear \n");
      printf("%s\n",SDL_GetError());
    }
    //  printf("Reverting to red to draw line\n");
      if(SDL_SetRenderDrawColor(render1->context.asSDL,255,0,0,255) != 0){
        printf("There is an error with SDL_SetRenderDrawColor! \n");
        printf("%s\n",SDL_GetError());
      }

      if(SDL_RenderDrawLine(render1->context.asSDL,x->pointA.x,x->pointA.y,x->pointB.x,x->pointB.y) !=0){
        printf("There is an error with SDL_RenderDrawLine\n");
        printf("%s\n",SDL_GetError());
      }




    while(SDL_PollEvent(&testev)){
      switch(testev.type){
        case SDL_MOUSEMOTION:
          printf("We got a motion event.\n");
          Clim_vector2i mouse;
          mouse.x = testev.motion.x;
          mouse.y = testev.motion.y;
          printf("Current mouse position is: (%d, %d)\n", mouse.x, mouse.y);
          break;
        case SDL_KEYDOWN:
        switch(testev.key.keysym.sym){
          case SDLK_a:
          x->pointA.x -= 1;
          x->pointB.x -= 1;
          break;
          case SDLK_d:
          x->pointA.x += 1;
          x->pointB.x += 1;
          break;
          case SDLK_s:
          x->pointA.y += 1;
          x->pointB.y += 1;
          break;
          case SDLK_w:
          x->pointA.y -= 1;
          x->pointB.y -= 1;
          break;
        }
        break;
        case SDL_QUIT:
          SDL_Quit();
        default:
          printf("Unhandled Event!\n");
          break;
  }
      SDL_RenderPresent(render1->context.asSDL);
printf("Event queue empty.\n");
    }
}

    SDL_Quit();




    return 0;
}
