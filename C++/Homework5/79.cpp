// Քառակուսային մատրիցի գլխավոր եւ օժանդակ անկյունագծերի տարրերի արժեքները տեղերով փոխել։
// With function

#include <iostream>

void change(int arr[3][3], int size)
{
	std::cout << "Swaped diagonals = ";
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
	change(arr, size);	
	std::cout << std::endl;
}
