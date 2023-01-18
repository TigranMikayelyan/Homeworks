// Իրականացնել ռեկուրսիվ ֆունկցիա, որը ստանում է char տիպի զանգված, որը արտահայտում է ութական համակարգի կոդ։ Կոդի համար ստանալ և վերադարձնել նրան համապատասխանող տասկան արտապատկերումը:

#include <iostream>
#include <cmath>

int octal(char* str, int size, int i = 0)
{
	if (str[i] == '\0')
	{
		return 0;
	}
	int base = pow(8, i);
	return (str[size - i - 1] - 48) * base + octal(str, size, i + 1);
}

int main()
{
	char str[] = {};
	std::cout << "Enter a string" << std::endl;
	std::cin >> str;
	const int size = strlen(str);
	std::cout << "Decimal representation = " << octal(str, size) << std::endl;
}
