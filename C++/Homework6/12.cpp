// Իրականացնել cstring գրադարանային ֆայլի կողմից տրամադրվող strcpy() ֆունկցիային համարժեք ֆունկցիա։

#include <iostream>

char* strcp(char* dest, const char* source)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < source[i]; ++i)
	{
		for (j = 0; j < dest[j]; ++j)
		{
			dest[j] = source[i];
		}
		dest[j] = '\0';
	}
	return dest;
}

int main()
{
	const int size = 30;
	char source[size];
	std::cout << "Enter the source string " << std::endl;
	std::cin >> source;
	char dest[size];
	std::cout << "Enter the destination string " << std::endl;
	std::cin >> dest;
	std::cout << "Copied string = " << strcpy(dest, source) << std::endl;
}
