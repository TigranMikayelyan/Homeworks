// Իրականացնել cstring գրադարանային ֆայլի կողմից տրամադրվող strcat() ֆունկցիային համարժեք ֆունկցիա:

#include <iostream>

char* strca(char* dest, const char* src)
{
	int size = strlen(dest);
	int i = 0; 
	int j = 0;
	for (i = 0; i < dest[i]; ++i){}
	for (j = 0; j < src[j]; ++j, ++i)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return dest;
}

int main()
{
	const int size = 30;
	char src[size];
	std::cout << "Enter the first string " << std::endl;	
	std::cin >> src;	
	char dest[size];	
	std::cout << "Enter the second string " << std::endl;
	std::cin >> dest;	
	std::cout << "Concatenated strings = " << strca(dest, src) << std::endl; 
}
