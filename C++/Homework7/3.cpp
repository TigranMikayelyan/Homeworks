// Իրականացնել ռեկուրսիվ ֆունկցիա, որը վերցնում է սիմվոլների զանգված և վերադարձնում այդ տողի մեջ հերթականությամբ առաջին լատինական այբուբենի մեծատառ սիմվոլը:

#include <iostream>

char up(char* str)
{
	if (*(str) >= 65 && *(str) <= 90 || *(str) == '\0') 
	{
		return *(str);
	}
	return up(str + 1);
}

int main()
{
	const int size = 30;
	char str[size];
	std::cout << "Enter a string" << std::endl;
	std::cin >> str;
	std::cout << up(str) << std::endl;
}
