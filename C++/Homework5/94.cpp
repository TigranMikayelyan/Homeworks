// Գրել Ֆիբոնաչիի n-րդ թիվը հաշվող ֆունկցիա ռեկուրսիվ տարբերակով։

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
	int num = 0;
	std::cout << "Enter a number" << std::endl;	
	std::cin >> num;
	std::cout << "Fibonacci number = " << fib(num) << std::endl;
}
