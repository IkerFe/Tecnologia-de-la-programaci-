/*#include <iostream>
#include <vector>
#include <algorithm>

struct Student
{
	int m_DNI;
	std::string m_name;
	Student(int DNI)
	{
		m_DNI = DNI;
		m_name = "DUMMY";
	}
	Student(int DNI, std::string name)
	{
		m_DNI = DNI;
		m_name = name;
	}



};

void createEnemies(int n) 
{
	//we use new to create n elements internally
	std::vector<int> enemies(n);
	//Apply logic enemies
	//We delete vector, we use delete[] operator
}

////Lo que hace vector
//struct vector
//{
//	int* pointer;
//	//constructor de vector
//	vector(int n)
//	{
//		pointer = new int[n];
//	}
//
//};

int main()
{
	//CREATE
	std::vector<int>myIntVector = { 10,99,7,3 };
	std::vector<float> myFloatVector(10, -3.4f);
	std::vector<int>myIntVector3(myIntVector);

	std::vector<Student>myStudent;
	Student s1(233543);
	myStudent.push_back(s1);

	//READ
	//Iterate using iterators
	std::cout << "Printing iterators" << std::endl;
	std::vector<int>::iterator it = myIntVector.begin();
	it++;
	it = myIntVector.insert(it,5);
	std::sort(myIntVector.begin(), myIntVector.end()
	);
	for (;it < myIntVector.end(); it++) 
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << "---------------------" << std::endl;

	for (int elem : myIntVector) 
	{
		std::cout << elem << " ";
	}
	for (int i = 0; i < myStudent.size(); ++i)
	{
		std::cout << myStudent[i].m_DNI << " " << myStudent[i].m_name;
	
	}
	std::cout << std::endl;

	for (int i = 0; i < myFloatVector.size(); ++i)
	{
		std::cout << myFloatVector[i] << " ";

	}
	std::cout << std::endl;

	std::cout << myIntVector.size() << std::endl;

	//UPDATE
	myIntVector[3] = -57;
	for (int elem : myIntVector) // for range-based, no indices
	{
		std::cout << elem << " "; 
	}
	std::cout << std::endl;

	//DELETE
	myFloatVector.pop_back();
}*/

#include <iostream>

#define A 10
#define B 5
#define max(a,b) ((a>b) ? a:b)

int maxWithoutDefine(int a, int b)
{
	return(a > b) ? a : b;
}

/*int foo()
{
	//int A = 90;
}*/


int main()
{
	const int C = 3;
	int result = A + B;
	std::cout << result << std::endl;

	result = B * A;

	result = C * A;

	int x = 7;
	int y = 3;
	std::cout << ++max(x, y) << std::endl;
	std::cout << maxWithoutDefine(++x, ++y) << std::endl;
}