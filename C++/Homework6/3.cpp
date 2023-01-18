// Իրականացնել ռեկուրսիվ ֆունկցիա, որը վերցնում է զանգվածը և դրա չափը և էկրանին տպում զանգվածի տարրերը:

#include <iostream>

void rec(int arr[], int size)
{	
	if (size <= 0)
	{	
		return;
	}
	rec(arr, size - 1);
	std::cout << arr[size - 1] << " ";
}


int main()
{
	const int size = 5;
	int arr[size];
	std::cout << "Enter array elements " << std::endl;	
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}
	std::cout << "Array elements = ";
	rec(arr, size);
	std::cout << std::endl;
}

