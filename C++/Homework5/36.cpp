// Տպել քառակուսային մատրիցի գլխավոր անկյունագծի տարրերը։

#include <iostream>

int main()
{
	const int size = 3;
	int matrix[size][size];	
	std::cout << "Enter array elements " << std::endl;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			std::cin >> matrix[i][j];
		}
	}
	std::cout << "Principal diagonal of the matrix = ";
	for (int i = 0; i < size; ++i)	
	{
		for (int j = 0; j < size; ++j)
		{
			if (i == j)
			{
				std::cout << matrix[i][j] << " ";
			}
		}
	}
	std::cout << std::endl;
}
