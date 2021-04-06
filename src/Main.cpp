#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <cstdio>

#include "Entity/Player.h"

int main()
{
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
        return 1;
    
    SDL_Window *wnd = SDL_CreateWindow("We Don't", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, SDL_WINDOW_SHOWN);
    SDL_Surface *surface = SDL_GetWindowSurface(wnd);

    Player *player = new Player;
    uint8_t gray = 0;

    bool running = true;
    while (running)
    {
        player->Update(0);
        gray++;
        SDL_FillRect(surface, NULL, SDL_MapRGB(surface->format, gray, gray, gray));
        SDL_UpdateWindowSurface(wnd);

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

        SDL_Delay(50);
    }
    
    SDL_DestroyWindow(wnd);
    SDL_Quit();
}