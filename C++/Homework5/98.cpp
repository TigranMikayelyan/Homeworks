// Գրել ֆունկցիա, որը ստանում է զանգված եւ ինդեքսի համար։ Ֆունկցիան հեռացնում է զանգվածի տրված ինդեքսով տարրը եւ վերադարձնում նոր զանգվածը որպես արդյունք։

#include <iostream>

int* erase(int* arr, int ind, int size)
{
	int arr2[size];
	for (int i = 0; i < size; ++i)
	{
		if (i < ind)
		{
			arr2[i] = arr[i];
		}
		if (i >= ind)
		{
			arr2[i] = arr[i + 1];
		}
	}
	return arr2;
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
	int ind = 0;
	std::cout << "Enter the index" << std::endl;
	std::cin >> ind;
	if (ind >= size || ind < 0)
	{
		std::cout << "There isn't this index in this array" << std::endl;
		return 0;
	}
	std::cout << "New array = ";
	for (int i = 0; i < size - 1; ++i)
	{
		std::cout << *(erase(arr, ind, size) + i) << " ";
	}
	std::cout << std::endl;
}


/*
#include <iostream>

char* dele(char* arr, int ind, int size)
{
	char arr2[size];
	for (int i = 0; arr[i] != '\0'; ++i)
	{
		if (i < ind)
		{
			arr2[i] = arr[i];
		}
		else if (i >= ind)
		{
			arr2[i] = arr[i + 1];
		}
	}
	return arr2;
}

int main()
{
	const int size = 20;
	char arr[size];
	std::cout << "Enter array elements" << std::endl;
	std::cin >> arr;
	int ind = 0;
	std::cout << "Enter the index" << std::endl;
	std::cin >> ind;
	if (ind >= size || ind < 0)
	{
		std::cout << "There isn't this index in this array" << std::endl;
		return 0;
	}
	std::cout << dele(arr, ind, size) << std::endl;
}



#include <iostream>

void erase(int* arr, int ind, int size)
{
	int arr2[size];
	for (int i = 0; i < size; ++i)
	{
		if (i < ind)
		{
			arr2[i] = arr[i];
		}
		if (i >= ind)
		{
			arr2[i] = arr[i + 1];
		}
	}
	for (int j = 0; j < size - 1; ++j)
	{
		std::cout << arr2[j] << " ";
	}
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
	int ind = 0;
	std::cout << "Enter the index" << std::endl;
	std::cin >> ind;
	if (ind >= size || ind < 0)
	{
		std::cout << "There isn't this index in this array" << std::endl;
		return 0;
	}
	erase(arr, ind, size);
}

*/
