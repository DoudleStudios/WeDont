#include "Entity/Entity.h"

struct Player: public Entity
{
    float Speed;

    virtual ~Player() = default;
    virtual void update(float deltaTime) override;
    virtual void draw(SDL_Renderer *) override;
};