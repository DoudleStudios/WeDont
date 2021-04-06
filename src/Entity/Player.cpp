#include "Entity/Player.h"

#include <SDL.h>
#include <cstdio>

void Player::Update(float deltaTime)
{
    decltype(auto) keys = SDL_GetKeyboardState(NULL);
    if (keys[SDL_SCANCODE_LEFT])
    {}
}