#include "Car.h"
// :: -> resolution scope operator
Car::Car()
{
}

Car::Car(int numWheels)
{
    m_wheels = new Wheel[numWheels];
}

Car::Car(int numWheels, int color, std::string model, bool isElectric)
// Option 2
//: m_wheels(new Wheel[numWheels])
//, m_color(color)
//, m_model(model)
//, m_isElectric(isElectric)
{
    // Option 1
    m_wheels = new Wheel[numWheels];
    m_color = color;
    m_model = model;
    m_isElectric = isElectric;
}

int Car::GetColor()
{
    // Debugar codigo
    return m_color;
}

void Car::SetColor(int color)
{
    m_color = color;
}

Car::~Car()
{
    if (m_wheels != nullptr)
        delete m_wheels;
}

float Car::GetAverageFriction()
{
    float sumFriction = 0.0f;
    for (int i = 0; i < NUM_WHEELS; ++i)
    {
        sumFriction += m_wheels[i].friction;
    }
    return sumFriction / NUM_WHEELS;
}