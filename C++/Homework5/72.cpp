// Մուտքագրել զանգվածի տարրերի արժեքները։ Տպել զանգվածի առավելագույն եւ նվազագույն արժեքների գումարը։
// With function

#include <iostream>

int sum(int* arr, int size)
{
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
	return max + min;
}

int main()
{
	const int size = 5;
	int arr[size];
	std::cout << "Enter array elements" << std::endl;
	for (int i = 0; i < size; ++i)	
	{
		std::cin >> arr[i];
	}
	std::cout << "Sum of the max and min element = " << sum(arr, size) << std::endl;
}
