// Տպել քառակուսային մատրիցի օժանդակ անկյունագծի տարրերը։
// With function

#include <iostream>

void matrix(int arr[3][3], int size)
{
	std::cout << "Auxiliary diagonals of the matrix = ";
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)	
		{
			if ((i + j) == size - 1)
			{
				std::cout << arr[i][j] << " ";
			}
		}
	}
}

int main()
{
	const int size = 3;
	int arr[size][size];
	std::cout << "Enter array elements" << std::endl;
	for (int i = 0; i < size; ++i)	
	{
		for (int j = 0; j < size; ++j)	
		{
			std::cin >> arr[i][j];
		}
	}
	matrix(arr, size);
	std::cout << std::endl;
}
