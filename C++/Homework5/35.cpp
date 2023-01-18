// Մուտքագրել երկու զանգվածներ, տպել դրանց գումարը։

#include <iostream>

int main()
{
	const int size = 5;
	int arr[size];	
	std::cout << "Enter the first array " << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}
	int arr2[size];	
	std::cout << "Enter the secomd array " << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr2[i];
	}
	std::cout << "Sum of the arrays = ";
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] + arr2[i] << " ";
	}
	std::cout << std::endl;
}
