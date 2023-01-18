// Իրականացնել cstring գրադարանային ֆայլի կողմից տրամադրվող strchr() ֆունկցիային համարժեք ֆունկցիա:

#include <iostream>

const char* ret(char* str, char ch)
{
	int i = 0;
	const char* nptr = "There isn't this letter in this string ";
	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] == ch)
		{
			return &str[i];
		}
	}
	return nptr;
}

int main()
{
	const int size = 30;
	char str[size];	
	std::cout << "Enter a string " << std::endl;	
	std::cin >> str;
	char ch;
	std::cout << "Enter a letter " << std::endl;
	std::cin >> ch;	
	std::cout << ret(str, ch) << std::endl; 
}

/*
#include <iostream>

int strchr(char* str, char ch)
{
	int index = 0;
	for (int i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] == ch)
		{
			index = i;
		}
	}
	return index;
}

int main()
{
	const int size = 30;
	char str[size];
	std::cout << "Enter a string" << std::endl;
	std::cin >> str;
	char ch = 0;
	std::cout << "Enter a letter" << std::endl;
	std::cin >> ch;
	std::cout << strchr(str, ch) << std::endl;
}

*/
