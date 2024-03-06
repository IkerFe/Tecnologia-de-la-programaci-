#include <iostream>
#include <vector>

int posMin(std::vector<int>& v, int left, int right) 
{
	int minIndex = left;
	for (int i = left + 1; i <= right; i++) 
	{
		if (v[i] < v[minIndex])
			minIndex = i;
	}
	return minIndex;
}

void swap(int& a, int& b)
{
	int c;
	c = a;
	a = b;
	b = c;
}

void selectionSort(std::vector<int>& v)
{
	int last = v.size() - 1;
	for (int i = 0; i < last; i++)
	{
		int minIndex = posMin(v, i, last);
		swap(v[minIndex], v[i]);
	}
}


int main()
{
	//SORTING ALGORITHMS
	// 3 10 7 -1 0
	std::vector<int> v = { 3, -1,10, 200 };
	selectionSort(v);
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << " ";
	}
	 std::cout<<std::endl;
}
