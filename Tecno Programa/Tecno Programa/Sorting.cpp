/*#include <iostream>
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

void insertionSort(std::vector<int>& v2) 
{
	for (int i = 1; i < v2.size(); i++) 
	{
		//Element to evaluate
		int x = v2[i];
		//New index, used for comparing previous ordered elements
		int j = i;
		while (j > 0 && v2[j - 1]>x)
		{
			v2[j] = v2[j - 1];
			--j;
		}
		v2[j] = x;
	}
}

int main()
{
	//SORTING ALGORITHMS
	// 3 10 7 -1 0
	std::vector<int> v = { 3, -1,10, 5 };
	selectionSort(v);
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << " ";
	}
	 std::cout<<std::endl;

	 std::cout << "INSERTION SORT RESULT" << std::endl;
	 std::vector<int> v2 = { 999, -3,33,5,-25, 200 };
	 insertionSort(v2);
	 for (int i = 0; i < v2.size(); i++)
	 {
		 std::cout << v2[i] << " ";
	 }
	 std::cout << std::endl;
}
*/

