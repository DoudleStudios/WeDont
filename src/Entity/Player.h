#include "Entity/Entity.h"

struct Player: public Entity
{
    float Speed;

    virtual ~Player() = default;
    virtual void Update(float deltaTime) override;
};