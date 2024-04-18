// Sorting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

bool compareFunc(int& a, int& b)
{
    return a > b;
}

bool compareSize(std::string& a, std::string& b)
{
    return a.size() < b.size();
}

struct Person
{
    std::string name;
    int age;
};

bool comparePersonNameAndAge(const Person &a, const Person &b)
{
    //caso 1: Por nombre
    if (a.name != b.name)
        return a.name < b.name;

    return a.age < b.age;

}



int main()
{
    std::cout << "Hello World!\n";
    std::vector<int> v = { 10,25,3,35 };
    std::sort(v.begin(), v.end(), compareFunc);

    std::vector<std::string> words = { "Zebra", "Patata", "Venezuela", "Ola" };
    std::sort(words.begin(), words.end(), compareSize);

    std::vector<Person> people = { {"A",30}, {"Ba", 25}, {"C",35}, {"Ba",5} };
    std::sort(people.begin(), people.end(), comparePersonNameAndAge);

    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < words.size(); i++)
    {
        std::cout << words[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < people.size(); i++)
    {
        std::cout << people[i].name << " " << people[i].age << " ";
    }
    std::cout << std::endl;
}

