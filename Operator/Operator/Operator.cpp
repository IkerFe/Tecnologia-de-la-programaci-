// Operator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

enum class EnemyType
{
    WARRIOR,
    SORCERER,
    GELATINA,
    COUNT,
    INVALID
};
struct Enemy
{
    int m_health;
    EnemyType type;
    int m_numLegs;
};

//Caso 1: Functions -> 2 Enemies -> Sobrecargar == operator
bool operator ==(const Enemy& enemy1, const Enemy& enemy2 )
{
    return enemy1.type == enemy2.type && enemy1.m_health == enemy2.m_health && enemy1.m_numLegs == enemy2.m_numLegs;
}

bool compareEnemies(const Enemy& enemy1, const Enemy& enemy2)
{
    return enemy1.type == enemy2.type && enemy1.m_health == enemy2.m_health && enemy1.m_numLegs == enemy2.m_numLegs;
}
Enemy operator+(const Enemy& enemy1, const Enemy& enemy2)
{
    bool inEnemy1Gelatina = (enemy1.type == EnemyType::GELATINA);
    bool inEnemy2Gelatina = (enemy2.type == EnemyType::GELATINA);
    Enemy result;
    result.type = EnemyType::INVALID;
    result.m_health = 100;
    result.m_numLegs = 0;
    if(enemy1.type == enemy2.type)
    {
        std::cout << "Suma health y num legs" << std::endl;
        result.type = EnemyType::GELATINA;
        result.m_health = enemy1.m_health + enemy2.m_health;
        result.m_numLegs = enemy1.m_numLegs + enemy2.m_numLegs;
    }
    return result;
}

int main()
{
    Enemy e1;
    e1.m_health = 10;
    e1.type = EnemyType::GELATINA;
    e1.m_numLegs = 15;
    Enemy e2;
    e2.m_health = 10;
    e2.type = EnemyType::GELATINA;
    e2.m_numLegs = 15;

    bool isEqual = e1 == e2;
    std::cout << isEqual << std::endl;
    std::cout << "Enemy is equal" << std::endl;

    Enemy e3 = e1 + e2;
    std::cout << e3.m_health << "  " << e3.m_numLegs << "  " << static_cast<int>(e3.type) << std::endl;

}
