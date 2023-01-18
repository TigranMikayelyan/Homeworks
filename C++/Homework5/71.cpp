// Մուտքագրել զանգվածի տարրերի արժեքները։ Գտնել եւ տպել նվազագույն արժեքով տարրի ինդեքսը։
// With function

#include <iostream>

int min_ind(int* arr, int size)
{
	int min = arr[0];
	int index = 0;
	for (int i = 0; i < size; ++i)
	{
		if (min > arr[i])
		{
			index = i;
		}
	}
	return index;
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
	std::cout << "Min value's index = " << min_ind(arr, size) << std::endl;
}
