// Մուտքագրել զանգվածի տարրերի արժեքները։ Գտնել եւ տպել առավելագույն արժեքով տարրի ինդեքսը։
// With function

#include <iostream>

int max_ind(int* arr, int size)
{
	int max = arr[0];
	int index = 0;
	for (int i = 0; i < size; ++i)
	{
		if (max < arr[i])
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
	std::cout << "Max value's index = " << max_ind(arr, size) << std::endl;
}
