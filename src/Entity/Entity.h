#include "Math/Vector.h"

struct Entity
{
    Vector Position;
    float Radius;

    virtual ~Entity() = default;
    virtual void update(float deltaTime) = NULL;
    virtual void draw(SDL_Renderer *) = NULL;
};