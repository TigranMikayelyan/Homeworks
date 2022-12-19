// Մուտքագրել զանգվածի տարրերի արժեքները։ Գտնել եւ տպել առավելագույն արժեքով տարրի ինդեքսը։

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
	int index = 0;
	int max = arr[0];
	for (int i = 0; i < size; ++i)
	{
		if (max < arr[i])
		{
			index = i;
		}
	}
	std::cout << "Max element's index = " << index << std::endl;
}
