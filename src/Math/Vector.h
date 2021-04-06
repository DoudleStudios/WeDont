#include <cmath>

struct Vector
{
    float X = 0, Y = 0;

    Vector() = default;

    Vector(float scaler)
        : X(scaler), Y(scaler) {}

    Vector(float x, float y)
        : X(x), Y(y) {}


    float MagSquared()
    { return X * X + Y * Y; }
    
    float Magnitude()
    { return std::sqrtf(X * X + Y * Y); }

    Vector operator +(const Vector &other)
    { return { X + other.X, Y + other.Y }; }

    Vector operator -(const Vector &other)
    { return { X - other.X, Y - other.Y }; }

    Vector operator *(const Vector &other)
    { return { X * other.X, Y * other.Y }; }

    Vector operator /(const Vector &other)
    { return { X / other.X, Y / other.Y }; }
    

    Vector operator *(float scale)
    { return { X * scale, Y * scale }; }

    Vector operator /(float scale)
    { return { X / scale, Y / scale }; }
};