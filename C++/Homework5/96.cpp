// Գրել ֆունկցիա, որը ստանում է զանգված եւ տպում է զանգվածի տարրերը էկրանին ռեկուրսիվ տարբերակով։

#include <iostream>

void rec(int* arr, int size, int i = 0)
{
	if (i == size)
	{
		return;
	}	
	std::cout << arr[i] << " ";
	rec(arr, size, i + 1);	 
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
	std::cout << "Array elements = ";
	rec(arr, size);
	std::cout << std::endl;
}
