#include <time.h>
#include <SDL2/SDL.h>
#include "fruit.hpp"
#include "MainWindowsSDL.hpp"
#define FRUIT_SIZE 10
#define HEIGHT 600
#define WIDTH 600
#define RAND

fruit::fruit(int x, int y){
 apple();
}

void fruit::apple(){
   this->x = (rand() % WIDTH/20);
   this->y = (rand() % HEIGHT/20);
      
}

void fruit::draw(SDL_Renderer*renderer){
    SDL_Rect fruit;
    fruit.x =  this->x*30;
    fruit.y =  this->y*30;
    fruit.w = 30;
    fruit.h = 30;
    SDL_SetRenderDrawColor(renderer,255,255,255,SDL_ALPHA_OPAQUE);
    SDL_RenderDrawRect(renderer,&fruit);
    SDL_RenderPresent(renderer);
}
