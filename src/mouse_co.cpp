#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include <iostream>
#include <string>
#include <limits.h>
#include <unistd.h>

#define IMAGE_WIDTH 1024
#define IMAGE_HEIGHT 768


std::string getexepath()
{
  char result[ PATH_MAX ];
  ssize_t count = readlink( "/proc/self/exe", result, PATH_MAX );
  return std::string( result, (count > 0) ? count : 0 );
}

int main(int argc, char **argv) {
    (void)argc, (void)argv;

    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window *window = NULL;
    window = SDL_CreateWindow("WarmingUp",
            SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
            IMAGE_WIDTH, IMAGE_HEIGHT, 0);
    if(window == NULL){
        printf("Error creating window\n");
        exit(EXIT_FAILURE);
    }

    SDL_Renderer *renderer = NULL;
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL){
        printf("Error creating render\n");
        exit(EXIT_FAILURE);
    }

    SDL_Surface *jpgSurface = NULL;
    const char* filename = "../src/map.jpeg";
    jpgSurface = IMG_Load(filename);
    if(jpgSurface == NULL){
        printf("Error sourcing image\n");
        exit(EXIT_FAILURE);
    }
    SDL_Texture *jpgTexture = NULL;
    jpgTexture = SDL_CreateTextureFromSurface(renderer, jpgSurface);
    if(jpgTexture == NULL){
        printf("Error texture\n");
        exit(EXIT_FAILURE);
    }
    SDL_FreeSurface(jpgSurface);
    bool quit = false;
    SDL_Event e;
    int xMouse, yMouse;
    Uint32 button_co;

    while(quit == false)
    {
        while(SDL_PollEvent(&e) != 0)
        {
            if(e.type == SDL_MOUSEMOTION)
            {
                button_co = SDL_GetGlobalMouseState(&xMouse,&yMouse);
                std::cout << xMouse << std::endl;
            }
        }
    }
}