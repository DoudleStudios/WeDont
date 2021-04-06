#include "Math/Vector.h"

struct Entity
{
    Vector Position;
    float Radius;

    virtual ~Entity() = default;
    virtual void Update(float deltaTime) = NULL;
};