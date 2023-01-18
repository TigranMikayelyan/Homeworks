// Իրականացնել ֆունկցիա, որը հաշվում և վերադարձնում է քառակուսային մատրիցի գլխավոր անկյունագծի վերև գտնվող տարրերի գումարը անկյոնագծի էլեմենտները ներառյալ։

#include <iostream>

int matrix(int**, int);

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
	std::cout << "The sum of the elements above the main diagonal elements of the matrix = " << matrix(arr, size) << std::endl; 
	for (int i = 0; i < size; ++i)
	{
		delete[] arr[i];
	}
	delete[] arr;
	arr = nullptr;
}

int matrix(int** arr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if (j > i)
			{
				sum += arr[i][j];
			}
		}
	}
	return sum;
}
