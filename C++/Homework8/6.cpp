// Իրականացնել ֆունկցիա, որը ստանում է ցանկացած հիշողության տիրույթում ստեղծված զանգված և նրա չափսը։ Ֆունկցիան վերադարձնում է փոխանցված զանգվածի միայն դրական էլեմենտներից բաղակացած դինամիկ զանգվածի հասցեն:

#include <iostream>

int new_size(int* arr, int size) 
{
	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] >= 0)
		{
			++count;
		}
	}
	return count;
}

int* dyn(int* arr, int size)
{
	int* ptr = new int[new_size(arr, size)];
	int j = 0;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > 0)
		{
			ptr[j++] = arr[i];
		}
	}
	return ptr;
}

int main()
{
	const int size = 5;
	int arr[size];
	std::cout << "Enter array elements" << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}
	int* ptr = dyn(arr, size);
	std::cout << ptr << std::endl;
	for (int i = 0; i < new_size(arr, size); ++i) 
	{ 
		std::cout << ptr[i] << std::endl;
	}
	delete[] ptr;
	ptr = nullptr;
}
