// Մուտքագրել զանգվածի տարրերի արժեքները։ Տպել զանգվածի տարրերը հակառակ հերթականությամբ։
// With function

#include <iostream>

void rev(int* arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}
	std::cout << "Reversed array = ";
	for (int i = size - 1; i >= 0; --i)
	{
		std::cout << arr[i] << " ";
	}
}

int main()
{
	const int size = 5;
	int arr[size];
	std::cout << "Enter array elements" << std::endl;
	rev(arr, size);
	std::cout << std::endl;
}

