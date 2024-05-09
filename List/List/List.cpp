// List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>

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
}

