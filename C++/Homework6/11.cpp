// Իրականացնել cstring գրադարանային ֆայլի կողմից տրամադրվող strlen() ֆունկցիային համարժեք ֆունկցիա:

#include <iostream>

int str(char* arr)
{
	int count = 0;
	for (int i = 0; arr[i] != '\0'; ++i)
	{
		++count;
	}	
	return count;
}

int main()
{
	const int size = 30;
	char arr[size];	
	std::cout << "Enter a string and i will return number of characters " << std::endl;
	std::cin >> arr;
	std::cout << "Number of characters = " << str(arr) << std::endl;
}
