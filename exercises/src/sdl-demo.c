#include <SDL2/SDL.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    SDL_Window* window = NULL;
    SDL_Renderer* renderer = NULL;
    
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return 1;
    }

    window = SDL_CreateWindow("SDL2 Canvas",
                              SDL_WINDOWPOS_UNDEFINED,
                              SDL_WINDOWPOS_UNDEFINED,
                              640, 480,
                              SDL_WINDOW_SHOWN);
    if (window == NULL) {
        printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    if (renderer == NULL) {
        printf("Renderer could not be created! SDL_Error: %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    // Set render color to red (background will be rendered in this color)
    SDL_SetRenderDrawColor(renderer, 122, 0, 122, 255);

    // Clear the entire screen to our selected color
    SDL_RenderClear(renderer);

    // Update the screen
    SDL_RenderPresent(renderer);

    // Wait for 3 seconds
    SDL_Delay(3000);

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    printf("successful\n");

    return 0;
}
