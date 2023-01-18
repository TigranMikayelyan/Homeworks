// Գրեք ռեկուրսիվ ֆունկցիա, որը ստանում է ամբողջ թվային պարամետր և վերադարձնում է n-րդ Ֆիբոնաչիի թիվը։

#include <iostream>

int fib(int num)
{
	if (num == 0 || num == 1)
	{
		return 1;
	}
	return fib(num - 1) + fib(num - 2);
}

int main()
{
	int num;
	std::cout << "Enter a number " << std::endl;
	std::cin >> num;
	std::cout << "Fibonacci number = " << fib(num) << std::endl;
}
