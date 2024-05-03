#pragma once
namespace Mathf
{
    struct Vector2
    {
        float x = 0;
        float y = 0;

        Vector2() {}
        Vector2(float X, float Y) : x(X), y(Y) {}

        float getX() const
        {
            return x;
        }

        float getY() const
        {
            return y;
        }
    };
    struct Vector2i
    {
        int x = 0;
        int y = 0;

    public:
        Vector2i() {}
        Vector2i(int X, int Y) : x(X), y(Y) {}

        int getX() const {
            return x;
        }

        int getY() const
        {
            return y;
        }
    };

    struct Vector3
    {
        float x = 0;
        float y = 0;
        float z = 0;

    public:
        Vector3() {}
        Vector3(float X, float Y, float Z) : x(X), y(Y), z(Z) {}

        float getX() const
        {
            return x;
        }

        float getY() const
        {
            return y;
        }

        float getZ() const
        {
            return z;
        }
    };

    struct Vector4
    {
        float r = 0;
        float g = 0;
        float b = 0;
        float a = 0;

    public:
        Vector4() {}
        Vector4(float R, float G, float B, float A) : r(R), g(G), b(B), a(A) {}

    };
}