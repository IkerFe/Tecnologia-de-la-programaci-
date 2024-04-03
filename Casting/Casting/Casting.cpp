// Casting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

enum class CarType
{
    MOTOROLA,
    TOYOTA
};
int main()
{
    //C_style casting -> Not recommended
    float myFloat = 1.5476f;
    int myInt = (int)myFloat;
    int myInt2 = int(myFloat);
    //static_cast
    float myFloat2 = 1.5476f;
    int myInt3 = static_cast<int>(myFloat);

    int i = static_cast<int>(CarType::TOYOTA);
    int i2 = (int)(CarType::TOYOTA);
    //const_cast
    //reinterpret_cast
}

