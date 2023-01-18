// Իրականացնել ֆունկցիա, որը հաշվարկում և տպում է դինամիկ զանգվածի միջին թվաբանականը:

#include <iostream>

int mid(int* arr, int size)
{
	int sum = 0;
	int i = 0;
	for (i = 0; i < size; ++i)
	{
		sum += arr[i];
	}
	return sum / i;
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
	std::cout << mid(arr, size) << std::endl;
	delete[] arr;
	arr = nullptr;
}
