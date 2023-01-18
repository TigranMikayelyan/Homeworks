// Տպել քառակուսային մատրիցի գլխավոր եւ օժանդակ անկյունագծերի տարրերի գումարները։
// With function

#include <iostream>

void matrix_sum(int arr[3][3], int size)
{
	int sum_pr = 0;
	int sum_aux = 0;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)	
		{
			if (i == j)
			{
				sum_pr += arr[i][j];
			}
			if ((i + j) == size - 1)
			{
				sum_aux += arr[i][j];
			}
		}
	}
	std::cout << "Sum of the principal diagonal elements = " << sum_pr << std::endl;
	std::cout << "Sum of the auxiliary diagonal elements = " << sum_aux << std::endl;	
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
	matrix_sum(arr, size);
}
