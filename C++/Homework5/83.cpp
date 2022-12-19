// Մատրիցի բոլոր տարրերը արտագրել միաչափ զանգվածի մեջ։ Տպել արդյունքը։

#include <iostream>

int main()
{
	const int size = 3;
	int arr_2d[size][size];
	std::cout << "Enter 2D array elements" << std::endl;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)	
		{
			std::cin >> arr_2d[i][j];
		}
	}
	const int size_2 = size * size;
	int arr[size_2];
	int k = 0;
	std::cout << "2D array in 1D array = ";
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			k = i * size + j;
			arr[k] = arr_2d[i][j];
		}
	}
	for (int k = 0; k < size_2; ++k)
	{
		std::cout << arr[k] << " ";
	}
	std::cout << std::endl;
}
