// Գրեք ռեկուրսիվ ֆունկցիա, որը վերցնում է զանգվածը և դրա չափը և տպում զանգվածի տարրերը հակառակ հերթականությամ:

#include <iostream>

void ver(int* arr, int size)
{	
	if (size < 1)
	{	
		return;
	}	
	std::cout << arr[size - 1] << " ";
	ver(arr, size - 1);		
}

int main()
{
	const int size = 5;
	int arr[size];
	std::cout << "Enter array elements " << std::endl;
	for (int j = 0; j < size; ++j)
	{
		std::cin >> arr[j];
	}
	std::cout << "Reversed array = ";	
	ver(arr, size);
	std::cout << std::endl;
}
