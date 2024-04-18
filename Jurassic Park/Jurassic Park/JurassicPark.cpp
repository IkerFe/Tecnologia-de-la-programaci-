// Jurassic Park.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Car.h"

int main()
{
    std::cout << "Hello World!\n";

    Car c1; // Objeto c1 de la Clase Car
    Car c2; // Objeto c2 de la Clase Car
    Car c3(5, 2, "Ferrari", false); // Abstraction principle
    Car c4(3);
    std::cout << c1.GetColor() << std::endl;
    c1.SetColor(10);

    //std::cout << c3.GetAverageFriction() << std::endl;
    //c1.m_color = 10;
    //std::cout << Car::NUM_WHEELS << std::endl;
}
// When main finishes: c1, c2, c3 y c4 are destroyed, and destructor is called

//When main finishes: c1,c2,c3 and c4 have to be destroyed