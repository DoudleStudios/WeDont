#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <cstdio>

int main()
{
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
        return 1;
    
    SDL_Window *wnd = SDL_CreateWindow("We Don't", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 0, 0, SDL_WINDOW_SHOWN | SDL_WINDOW_FULLSCREEN);
    SDL_Surface *surface = SDL_GetWindowSurface(wnd);

    SDL_FillRect(surface, NULL, SDL_MapRGB(surface->format, 0x00, 0xFF, 0x00));
    SDL_UpdateWindowSurface(wnd);

    bool running = true;
    while (running)
    {
        SDL_Event e;
        while (SDL_PollEvent(&e))
            switch (e.type)
            {
            case SDL_QUIT:
                running = false;
                break;
            case SDL_KEYDOWN:
                if (e.key.keysym.sym == SDLK_ESCAPE)
                    running = false;
                break;
            }
    }
    
    SDL_DestroyWindow(wnd);
    SDL_Quit();
}