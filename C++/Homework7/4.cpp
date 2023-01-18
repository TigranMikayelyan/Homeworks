// Իրականացնել ռեկուրսիվ ֆունկցիա, որն ստանում է երկու ամբողջ թվային արժեք և վերադարձնում դրանց ամենամեծ ընդհանուր բաժանարարը:

#include <iostream>

int gcd(int num1, int num2, int tmp)
{
	if (num1 % tmp == 0 && num2 % tmp == 0)
	{
		return tmp;
	}
	return gcd(num1, num2, tmp - 1);
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	int min = 0;
	std::cout << "Enter the first number" << std::endl;
	std::cin >> num1;
	std::cout << "Enter the second number" << std::endl;
	std::cin >> num2;
	if (num1 < num2)
	{
		min = num1;
	}
	else
	{
		min = num2;
	}

	if (num1 < num2)
	{
		min = num1;
	}
	else
	{
		min = num2;
	}
	std::cout << "Greater common division = "<< gcd(num1, num2, min) << std::endl;
}
