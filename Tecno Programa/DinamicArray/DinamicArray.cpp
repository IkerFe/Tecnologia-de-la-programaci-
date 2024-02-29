#include <iostream>



//dynamicArray -> Pointer to array
//capacity -> Size to dynamicArray

int* resizeToDoubleCapacityArray(int* dynamicArray, int capacity)
{
	//Crete new array
	int* newArray = new int[capacity * 2];

	//Copy values to new
	for (int i = 0; i < capacity * 2; i++)
	{
		if (i < capacity)
		{
			newArray[i] = dynamicArray[i];
		}
		else
		{
			//More
			newArray[i] = 7;
		}
	}
	delete[] dynamicArray;
	dynamicArray = nullptr;

	return newArray;
}


int main()
{
	int dynamicSize;
	std::cout << "Enter array size!" << std::endl;
	std::cin >> dynamicSize;

	int* dynamicArray1D = new int[dynamicSize];
	for (int i = 0; i < dynamicSize; i++)
	{
		dynamicArray1D[i] = i;
	}
	for (int i = 0; i < dynamicSize; i++)
	{
		std::cout << dynamicArray1D[i] << " ";
	}
	int oldDynamicSize = dynamicSize;
	std::cout << std::endl;
	std::cout << "Enter New Size!" << std::endl;
	std::cin >> dynamicSize;
	std::cout << dynamicSize << std::endl;

	int* newArray = resizeToDoubleCapacityArray(dynamicArray1D, oldDynamicSize);
	for (int i = 0; i < dynamicSize; i++)
	{
		std::cout << newArray[i] << " ";
	}


	//TEST
	/*for (int i = 0; i < dynamicSize; i++)
	{
			dynamicArray1D[i] = i;
			std::cout << dynamicArray1D[i] << " ";
	}*/

	//Delete originak array
	//Enemy

	//delete[] dynamicArray1D;
	//dynamicArray1D = nullptr;
}