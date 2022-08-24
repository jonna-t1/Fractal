#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#define IMAGE_WIDTH 1024
#define IMAGE_HEIGHT 768

#include <iostream>
#include <string>
#include <limits.h>
#include <unistd.h>

std::string getexepath()
{
  char result[ PATH_MAX ];
  ssize_t count = readlink( "/proc/self/exe", result, PATH_MAX );
  return std::string( result, (count > 0) ? count : 0 );
}

int main(int argc, char **argv) {
    (void)argc, (void)argv;


    int quit = 0;

    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window *window = NULL;
    window = SDL_CreateWindow("WarmingUp",
            SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
            IMAGE_WIDTH, IMAGE_HEIGHT, 0);
    if(window == NULL){
        printf("Erro a abrir janela gráfica\n");
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
    SDL_Event e;

    // rectangle to upscale in second window
    const SDL_Rect srcrect = {200, 500, 250, 250};
    SDL_Window *second_window = NULL;
    SDL_Renderer *second_renderer = NULL;
    SDL_Texture *magnified_fragment_texture = NULL;
    int x, y;
    Uint32 buttons;

    while(!quit){
        while(SDL_PollEvent(&e)){
            if(e.type == SDL_QUIT ||
                    (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_ESCAPE)) {
                quit = 1;
            } else if(e.type == SDL_MOUSEBUTTONDOWN && e.button.clicks &&
            // key.keysym.sym == SDLK_z &&
                    !second_window) {
                // create empty surface of adequate size
                
                buttons = SDL_GetMouseState(&x, &y);
                // srcrect

                SDL_Surface *const surf = SDL_CreateRGBSurface(0, srcrect.w, srcrect.h, 32,
                        0xff000000, 0xff0000, 0xff00, 0xff);
                SDL_FillRect(surf, NULL, 0);

                // copy pixels
                SDL_RenderReadPixels(renderer, &srcrect, SDL_PIXELFORMAT_RGBA8888,
                        surf->pixels, surf->pitch);

                // error checking should be done...
                second_window = SDL_CreateWindow("mag",
                        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                        srcrect.w*2, srcrect.h*2, 0);
                second_renderer = SDL_CreateRenderer(second_window, -1, SDL_RENDERER_ACCELERATED);
                magnified_fragment_texture = SDL_CreateTextureFromSurface(second_renderer, surf);
                SDL_FreeSurface(surf);
            }
        }

        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, jpgTexture, NULL, NULL);    
        SDL_RenderPresent(renderer);

        if(second_renderer) {
            const SDL_Rect dstrect = {0, 0, srcrect.w*2, srcrect.h*2};
            SDL_RenderClear(second_renderer);

            // RenderCopy scales texture to destination rect
            SDL_RenderCopy(second_renderer, magnified_fragment_texture, NULL, &dstrect);
            SDL_RenderPresent(second_renderer);
        }

        SDL_Delay(15);
    }

    SDL_DestroyTexture(jpgTexture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}