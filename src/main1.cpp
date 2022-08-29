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

    SDL_Rect srcrect = {200, 500, 100, 100};
    SDL_Window *second_window = NULL;
    SDL_Renderer *second_renderer = NULL;
    SDL_Texture *magnified_fragment_texture = NULL;

    while(quit == false)
    {
        while(SDL_PollEvent(&e) != 0)
        {
            if(e.type == SDL_MOUSEMOTION)
            {
                button_co = SDL_GetGlobalMouseState(&xMouse,&yMouse);
                std::cout << "(" << xMouse << ", " << yMouse << ")" << std::endl;

                srcrect.x = xMouse;
                srcrect.y = yMouse;
                SDL_Surface *const surf = SDL_CreateRGBSurface(0, srcrect.w, srcrect.h, 32,
                0xff000000, 0xff0000, 0xff00, 0xff);
                SDL_FillRect(surf, NULL, 0);
                // copy pixels
                SDL_RenderReadPixels(renderer, &srcrect, SDL_PIXELFORMAT_RGBA8888,
                        surf->pixels, surf->pitch);
                
                // error checking should be done...
                second_window = SDL_CreateWindow("mag",
                        xMouse, yMouse,
                        srcrect.w*2, srcrect.h*2, 0);
                second_renderer = SDL_CreateRenderer(second_window, -1, SDL_RENDERER_ACCELERATED);
                magnified_fragment_texture = SDL_CreateTextureFromSurface(second_renderer, surf);
                SDL_FreeSurface(surf);
                
            }
            
        }
        SDL_DestroyWindow(second_window);
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, jpgTexture, NULL, NULL);    
        SDL_RenderPresent(renderer);

        if(second_renderer) {
            
            SDL_Rect dstrect = {0, 0, srcrect.w*2, srcrect.h*2};
            SDL_RenderClear(second_renderer);

            // RenderCopy scales texture to destination rect
            SDL_RenderCopy(second_renderer, magnified_fragment_texture, NULL, &dstrect);
            SDL_RenderPresent(second_renderer);
            
        }
        
        SDL_Delay(15);
        // SDL_DestroyTexture(magnified_fragment_texture);
        // SDL_DestroyRenderer(second_renderer);
        // SDL_DestroyWindow(second_window);
    }
    // SDL_DestroyTexture(jpgTexture);
    // SDL_DestroyRenderer(renderer);
    // SDL_DestroyWindow(window);
    // SDL_Quit();
    return 0;
}