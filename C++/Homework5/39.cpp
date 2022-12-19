// Քառակուսային մատրիցի գլխավոր եւ օժանդակ անկյունագծերի տարրերի արժեքները տեղերով փոխել։

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
	std::cout << "Swaped diagonals = ";
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if (i == j)
			{
				int tmp = matrix[i][j];
				matrix[i][j] = matrix[i][size - j - 1];
				matrix[i][size - j - 1] = tmp; 
				std::cout << matrix[i][j] << " ";
			}
		}
	}
	std::cout << std::endl;
}
