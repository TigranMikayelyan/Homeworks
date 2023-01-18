// Իրականացնել ֆունկցիա, որը հաշվարկում և վերադարձնում է դինամիկ զանգվածի տարրերի գումարը:

#include <iostream>

int dyn(int* arr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum += arr[i];
	}
	return sum;
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
