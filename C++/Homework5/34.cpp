// Մուտքագրել երկու զանգվածներ, տպել դրանց արտադրյալը։

#include <iostream>

int main()
{
	const int size = 5;
	int arr[size];
	int arr2[size];
	std::cout << "Enter the first array " << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}
	std::cout << "Enter the second array " << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr2[i];
	}
	std::cout << "Arrays product = ";
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] * arr2[i] << " ";
	}
	std::cout << std::endl;
}
