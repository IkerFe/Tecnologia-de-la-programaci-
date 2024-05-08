// Queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>

int main()
{
    std::queue<float> q1;
    std::queue<float> q2;

    q1.push(3.7f);
    q1.push(5.1f);
    q1.push(777.0f);
    q1.push(9.9f);
    q1.push(21.0f);
    q1.push(53.1f);
    q1.push(757.3f);
    q2 = q1;

    while(!q1.empty())
    {
        
        std::cout << q1.front();
        q1.pop();
        if (q1.size() != 0)
        {
            std::cout << "-";
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
