// Մուտքագրել զանգվածի տարրերի արժեքները։ Տպել զանգվածի տարրերը հակառակ հերթականությամբ։

#include <iostream>

int main()
{
	const int size = 5;
	int arr[size];	
	std::cout << "Enter array elements and i will reverse entered array " << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}
	std::cout << "Reversed array = ";
	for (int i = size - 1; i >= 0; --i)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
