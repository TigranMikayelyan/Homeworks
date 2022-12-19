// Տպել քառակուսային մատրիցի գլխավոր եւ օժանդակ անկյունագծերի տարրերի գումարները։

#include <iostream>

int main()
{
	const int size = 3;
	int sum_pr = 0;
	int sum_aux = 0;
	int matrix[size][size];
	std::cout << "Enter array elements " << std::endl;
	for (int i = 0; i < size; ++i)	
	{
		for (int j = 0; j < size; ++j)
		{
			std::cin >> matrix[i][j];
		}
	}
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if (i == j)
			{
				sum_pr += matrix[i][j];
			}
			if ((i + j) == size - 1)
			{
				sum_aux += matrix[i][j];
			}	
		}
	}
	std::cout << "Sum of the principal diagonal elements = " << sum_pr << std::endl;
	std::cout << "Sum of the auxiliary diagonal elements = " << sum_aux << std::endl;
}
