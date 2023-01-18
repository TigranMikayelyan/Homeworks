// Իրականացնել ռեկուրսիվ ֆունկցիա, որը ստանում է զանգվածը և դրա չափը և վերադարձնում զանգվածի նվազագույն տարրի արժեքը։

#include <iostream>

int min_um(int* arr, int size)
{
	int min = arr[0];
	if (size == 0 || size == 1)
	{
		return min;
	}
	return arr[size - 1] < min_um(arr, size - 1) ? arr[size - 1] : min_um(arr, size - 1);
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
	std::cout << "Minimum element = " << min_um(arr, size) << std::endl;
}
