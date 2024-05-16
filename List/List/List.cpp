// List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
#include "MyList.h"

int main()
{
	std::list<float> l1;

	l1.push_front(10.0f);
	l1.push_front(80.0f);
	l1.push_front(66.6f);

	auto it2 = l1.rbegin();
	*it2 = 27.3f;

	auto it3 = l1.begin();
	++it3;
	it3= l1.erase(it3);

	std::list<float>::iterator it = l1.begin();
	for (; it != l1.end(); ++it)
	{
		std::cout << *it << "<->";
	}

	std::cout << std::endl;

	MyList myL1;


	myL1.Insert(myL1.Front(), 7);
	myL1.Insert(myL1.Front(), 10);
	myL1.Insert(myL1.Front(), 15);

	//Advance
	Node* node = myL1.Advance(2);
	std::cout << node->m_value << std::endl;
	//Erase
	myL1.Erase(myL1.Back());


	myL1.Print();
	myL1.ReversePrint();
}

