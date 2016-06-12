#include "../include/ClimCLib.h"
#include <SDL.h>
#include "../dep/SDL2-2.0.4/include/SDL.h"
#include "../dep/SDL2-2.0.4/include/SDL_events.h"
#include <SDL_image.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>





int main(int argc, char*argv[]){
  sdlIsInit = FALSE;

  Clim_window *test = NULL;
  test = (Clim_window*) malloc(sizeof(Clim_window));
  Clim_texture *sprite = NULL;
  sprite = (Clim_texture*)malloc(sizeof(Clim_texture));

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
    createTexture(sprite,"tests/sprite.png",render1->context.asSDL,10,10,32,32);


Clim_rectangle2i *rect = (Clim_rectangle2i*)malloc(sizeof(Clim_rectangle2i*));
rect->origin.x = 10;
rect->origin.y = 10;
rect->size.x = 90;
rect->size.y = 90;

  printf("Rectangles Origin: %i,%i\n",rect->origin.x,rect->origin.y);
  printf("Rectangles Size: %i,%i\n",rect->size.x,rect->size.y);

  SDL_Rect *check = ClimtoSDLRect2Ptr(rect);
  printf("SDLRect Origin: %i, %i\n", check->x,check->y);
  printf("SDLRect Size: %i, %i\n", check->w,check->h);


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
      Clim_colorui8 green = createColor(0,255,0,0);

      Clim_renderDrawRectangle2i(render1,rect,&green);

     if(Clim_renderTextureByPosition(render1,sprite,NULL,&sprite->position) != 0){
       printf("There is an error with Clim_renderTexture\n");
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
        printf("We Got a key Event! \n");
        switch(testev.key.keysym.sym){
          case SDLK_a:
          sprite->position.x -= 1;

          break;
          case SDLK_d:
          sprite->position.x += 1;

          break;
          case SDLK_s:
        sprite->position.y += 1;

          break;
          case SDLK_w:
          sprite->position.y -= 1;

          break;
          case SDLK_j:
          x->pointA.x -= 1;
          break;
          case SDLK_l:
          x->pointA.x += 1;
          break;
          case SDLK_i:
          x->pointA.y -= 1;
          break;
          case SDLK_k:
          x->pointA.y += 1;
          break;
        }
        break;
        case SDL_QUIT:
          SDL_Quit();
        default:
        //  printf("Unhandled Event!\n");
          break;
  }
      SDL_RenderPresent(render1->context.asSDL);
      //printf("Event queue empty.\n");
    }
}

    SDL_Quit();




    return 0;
}
