// Իրականացնել strlen(str); ֆունկցիա, որը ստանում է C-ական տող և վերադարձնում է տողի սիմվոլների քանակը (մինչև \0)

#include <iostream>

int length(char* arr)
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
	const int size = 20;
	char arr[size];
	std::cout << "Type a string " << std::endl;
	std::cin >> arr;
	std::cout << "String's symbols quantity = " << length(arr) << std::endl;
}
