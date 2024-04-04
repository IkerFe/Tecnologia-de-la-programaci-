// Casting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

enum class CarType
{
    MOTOROLA,
    TOYOTA
};

struct Fruit {
    std::string name;
    int size;

    Fruit() 
    {
        name = "Invalid";
        size = 0;
    }
};

struct Vegetables {
    std::string name;
    int size;
    int calories;

    Vegetables()
    {
        name = "Invalid Vegetables";
        size = 0;
        calories = 0;
    }
};
int main()
{
    //C_style casting -> Not recommended
    float myFloat = 1.5476f;
    int myInt = (int)myFloat;
    int myInt2 = int(myFloat);

    //C ++ static_cast
    float myFloat2 = 1.5476f;
    int myInt3 = static_cast<int>(myFloat);

    int i = static_cast<int>(CarType::TOYOTA);//C++
    int i2 = (int)(CarType::TOYOTA);//C
    //C-style cast vs static_cast
    char c = 'a';// 1 byte
    //int* p = static_cast<int*>(&c);
    //const_cast
    Fruit f;//Stack

    const Fruit* f1 = new Fruit();//Heap
    //f1->name = "Peru";
    Fruit* nonConstFruit = const_cast<Fruit*>(f1);
    nonConstFruit->name = "Peru";

    //reinterpret_cast
    int* pointer = nullptr;// Se guardan direcciones de memoria
    int value = 5; //Se guardan enteros
    pointer = &value;
    std::cout << *pointer<< std::endl;

    Fruit* fruta1 = new Fruit();
    Vegetables* vegetables1 = new Vegetables();

}
