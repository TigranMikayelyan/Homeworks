// Իրականացնել ֆունկցիա, որը ստանում է դինամիկ զանգվածի առաջին էլեմենտի հասցեն և չափսը: Ֆունկցիան վերադարձնում է զանգվածի նվազգույն էլեմենտի ինդեքսը։

#include <iostream>

int dyn(int* arr, int size)
{
	int min = arr[0];
	int index = 0;
	for (int i = 0; i < size; ++i)
	{
		if (min > arr[i])
		{
			index = i;
		}
	}
	return index;
}

int main()
{
	const int size = 5;
	int* arr = new int[size];
	std::cout << "Enter array elements" << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}
	std::cout << dyn(arr, size) << std::endl;
	delete[] arr;
	arr = nullptr;
}
