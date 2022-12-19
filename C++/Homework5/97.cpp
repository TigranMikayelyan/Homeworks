// Գրել ֆունկցիա, որը ստանում է տող եւ վերադարձնում տողի շրջված տարբերակը։

#include <iostream>

char* str(char* arr)
{
	int size = strlen(arr);
	for (int i = 0; i < size / 2; ++i)
	{
		int tmp = arr[i];
		arr[i] = arr[size - i - 1];	
		arr[size - i - 1] = tmp;
	}
	return arr;
}

int main()
{
	const int size = 20;
	char arr[size];
	std::cout << "Enter a string" << std::endl;
	std::cin >> arr;
	std::cout << "Reversed string = " << str(arr) << std::endl;
}
