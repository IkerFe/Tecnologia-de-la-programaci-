// String.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MyString.h"
#include <stack>

int main()
{
    MyString s1("manish");
    for (int i = 0; i < s1.GetSize(); ++i) 
    {
    
    }

    std::stack<int> stack1;
    stack1.push(10);
    stack1.push(25);
    stack1.push(35);

    std::cout << "TOP: " << stack1.top() << std::endl;

    stack1.pop();
    std::cout << "TOP: " << stack1.top() << std::endl;

    while (!stack1.empty())
    {
        std::cout << "TOP: " << stack1.top() << std::endl;
        stack1.pop();
    }
}


