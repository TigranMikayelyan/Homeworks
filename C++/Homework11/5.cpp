// Իրականացնել ֆունկցիա, որը քառակուսային մատրիցի գլխավոր և օժանդակ անկյունագծի էլեմենտների արժեքները տեղերով կփոխի։

#include <iostream>

void matrix(int**, int);

int main()
{
	const int size = 3;
	int** arr = new int*[size];
	for (int i = 0; i < size; ++i)
	{
		arr[i] = new int [size];
	}
	std::cout << "Enter the matrix" << std::endl;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			std::cin >> arr[i][j];
		}
	}
	std::cout << "Swapped diagonals = ";
	matrix(arr, size);
	std::cout << std::endl;
	for (int i = 0; i < size; ++i)
	{
		delete[] arr[i];
	}
	delete[] arr;
	arr = nullptr;
}

void matrix(int** arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if (i == j) 
			{
				int tmp = arr[i][j];
				arr[i][j] = arr[size - i - 1][j];
				arr[size - i - 1][j] = tmp;
				std::cout << arr[i][j] << " ";
			}
		}
	}
}
