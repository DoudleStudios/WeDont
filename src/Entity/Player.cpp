#include "Entity/Player.h"

#include <SDL.h>
#include <cstdio>

void Player::update(float deltaTime)
{
    decltype(auto) keys = SDL_GetKeyboardState(NULL);
    if (keys[SDL_SCANCODE_LEFT])
    {}
}

void Player::draw(SDL_Renderer *renderer)
{
    SDL_RenderDrawRect(renderer, {  });
}