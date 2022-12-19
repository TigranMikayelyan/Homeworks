// Մուտքագրել երկու զանգվածներ, տպել դրանց արտադրյալը։
// With function

#include <iostream>

void mul(int* arr1, int* arr2, int size)
{
	std::cout << "Product of the arrays" << std::endl;
	for (int i = 0, j = 0; i < size; ++j, ++i)	
	{
		std::cout << "Product = " << arr1[i] * arr2[j] << std::endl;
	}
}

int main()
{
	const int size = 5;
	int arr1[size];	
	int arr2[size];
	std::cout << "Enter the first array" << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr1[i];
	}
	std::cout << "Enter the second array" << std::endl;
	for (int j = 0; j < size; ++j)	
	{
		std::cin >> arr2[j];
	}
	mul(arr1, arr2, size);
}
