#include <iostream>
#include <vector>

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
	std::vector<int>myIntVector = { 10,5,10,10 };
	std::vector<float> myFloatVector(10, -3.4f);
	std::vector<int>myIntVector3(myIntVector);

	std::vector<Student>myStudent;
	Student s1(233543);
	myStudent.push_back(s1);
	//READ
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
}