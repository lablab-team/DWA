#include "utils.h"
#include "vector2.h"
#include "List.h"

void Hoge(Vector2 vec)
{
    Serial.println((int)vec.v);
}

void setup()
{
    Serial.begin(19200);

    Serial.println(Utils::Add(1, 2));

    Vector2 vecA(1.0f, 2.0f);
    // Vector2 vecB(3.0f, 4.0f);
    // Serial.println((vecA + vecB).v[0]);

    // vecA = vecB;

    // Serial.println((int)vecA.v);
    // vecB.v[0] = 9.0f;

    // Serial.println((int)vecB.v);
    Serial.println(vecA.x);

    List<int> list;
    list.Add(1);
    list.Add(2);
    list.Add(3);
    list.Add(4);
    list.Add(5);

    for (int i = 0; i < list.Count(); i++)
    {
        Serial.println(list[i]);
    }
}

void loop()
{
}
