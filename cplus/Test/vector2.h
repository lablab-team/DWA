#ifndef INCLUDE_VECTOR2_H_
#define INCLUDE_VECTOR2_H_

class Vector2
{

private:
public:
    float v[2];
    float &x, &y;

    Vector2(float x, float y) : x(v[0]), y(v[1])
    {
        v[0] = x;
        v[1] = y;
    }

    Vector2() : Vector2(0.0f, 0.0f)
    {
    }

    ~Vector2()
    {
        Serial.println("dest");
    }

    Vector2(const Vector2 &a) : x(v[0]), y(v[1])
    {
        v[0] = a.v[0];
        v[1] = a.v[1];
    }

    Vector2 &operator=(const Vector2 &other)
    {
        if (this != &other)
        {
            v[0] = other.v[0];
            v[1] = other.v[1];
        }

        return *this;
    }

    friend Vector2 operator+(Vector2 &a, Vector2 &b)
    {
        return Vector2(a.v[0] + b.v[0], a.v[1] + b.v[1]);
    }
};

#endif