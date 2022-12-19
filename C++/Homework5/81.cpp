// Տպել զանգվածի կենտ թվերի քանակը։

#include <iostream>

int main()
{
	const int size = 5;
	int count = 0;
	int arr[size];
	std::cout << "Enter array elements" << std::endl;
	for (int i = 0; i < size; ++i)	
	{
		std::cin >> arr[i];
	}
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] % 2 == 1)
		{
			++count;
		}
	}
	std::cout << "Quantity of the array odd elements = " << count << std::endl;
}
