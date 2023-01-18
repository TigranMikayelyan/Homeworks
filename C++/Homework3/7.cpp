// Իրականացնել strset(char* s, char ch); ֆունկցիան, որը տրված s տողի բոլոր սիմվոլները փոխարինում է ch սիմվոլով։

#include <iostream>

char* strset(char* str, char sym)
{
	int size = strlen(str);	
	for (int i = 0; i < size; ++i)
	{
		str[i] = sym;
	}
	return str;
}
int main()
{
	const int size = 50;
	char str[size];
	std::cout << "Enter a string " << std::endl;
	std::cin >> str;	
	char sym;
	std::cout << "Enter a symbol " << std::endl;
	std::cin >> sym;
	std::cout << "Modified string = " << strset(str, sym) << std::endl;
}	
