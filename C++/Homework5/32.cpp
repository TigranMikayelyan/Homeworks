// Մուտքագրել զանգվածի տարրերի արժեքները։ Տպել զանգվածի առավելագույն եւ նվազագույն արժեքների գումարը։

#include <iostream>

int main()
{
	const int size = 5;
	int arr[size];
	std::cout << "Enter array elements " << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}
	int max = arr[0];
	int min = arr[0];
	for (int i = 0; i < size; ++i)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	std::cout << "Max value + Min value = " << max + min << std::endl;  
}
