// Մուտքագրել զանգվածի տարրերի արժեքները։ Գտնել եւ տպել նվազագույն արժեքով տարրի ինդեքսը։

#include <iostream>

int main()
{
	const int size = 5;
	int arr[size];
	std::cout << "Enter array elements" << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}
	int min = arr[0];
	int index = 0;
	for (int i = 0; i < size; ++i)
	{
		if (min > arr[i])
		{
			index = i;
		}
	}
	std::cout << "Min element's index = " << index << std::endl;
}
	
