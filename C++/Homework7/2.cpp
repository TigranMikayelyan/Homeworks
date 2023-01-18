// իրականացնել ռեկուրսիվ ֆունկցիա, որը ստանում է զանգվածը և դրա չափը և վերադարձնում զանգվածի մեծագույն տարրի արժեքը։

#include <iostream>

int max_um(int* arr, int size);

int main()
{
	const int size = 5;
	int arr[size];	
	std::cout << "Enter array elements" << std::endl;
	for (int i = 0; i < size; ++i)	
	{
		std::cin >> arr[i];
	}
	std::cout << "Maximum element of the array = " << max_um(arr, size) << std::endl;
}

int max_um(int* arr, int size)
{
	int max = arr[0];
	if (size == 0 || size == 1)
	{
		return max;
	}
	return arr[size - 1] > max_um(arr, size - 1) ? arr[size - 1] : max_um(arr, size - 1);
}


