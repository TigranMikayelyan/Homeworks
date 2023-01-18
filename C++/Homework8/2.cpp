// Իրականացնել ֆունկցիա, որը  թույլ կտա օգտվողին մուտքագրել նախորդ խնդրում ստեղծված դինամիկ զանգվածի արժեքները։

#include <iostream>

int* func(int* arr, int size)
{
	arr = new int[size];
	std::cout << "Enter array elements" << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}
	return arr;
}
int main()
{
	int size = 0;
	std::cout << "Enter the size" << std::endl;
	std::cin >> size;
	int* arr = func(arr,size);
	std::cout << arr << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << " ";
	}
	delete[] arr;
	arr = nullptr;
}
