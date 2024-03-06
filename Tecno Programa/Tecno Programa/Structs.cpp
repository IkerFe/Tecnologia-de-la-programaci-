// Tecno Programa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*#include <iostream>

enum class EnemyType {
    WARRIOR,
    SORCERER,
    WIZARD,
    INVALID
};

struct Enemy 
{
    int m_health = 1000;
    EnemyType m_enemyType = EnemyType::INVALID;

    //Metodo contstructor, 0 parametros, por defecto
    Enemy(int health, EnemyType enemyType) 
    {
        m_health = health;
        m_enemyType = enemyType;
    }
    int receiveDamage(int damageAmount) 
    {
        if (m_enemyType == EnemyType::WARRIOR) 
        {
            m_health -= damageAmount;
            std::cout << "Warrior's health is now " << m_health;
        }
        else
        {
            std::cout << "Wizard's health is now " << m_health;
        }
        return m_health;
    }
};




int main()
{
    Enemy e1(500, EnemyType::WARRIOR);
    e1.receiveDamage(2);
    Enemy e2(500, EnemyType::WIZARD);
    
    Enemy e3(e1); // Clonar e1
    //e1.m_health = 500;
    //e1.m_enemyType = EnemyType:: WARRIOR;
}


*/