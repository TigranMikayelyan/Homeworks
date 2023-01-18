// Գրել Ֆիբոնաչիի n-րդ թիվը հաշվող ֆունկցիա իտերատիվ տարբերակով։

#include <iostream>

int fib(int num)
{
	int fib1 = 0;
	int fib2 = 1;
	int nacci = 0;
	if (num == 0 || num == 1)
	{
		return 1;	
	}
	for (int i = 0; i < num; ++i)
	{
		nacci = fib1 + fib2;
		fib1 = fib2;	
		fib2 = nacci;
	}
	return fib2;
}

int main()
{
	int num = 0;
	std::cout << "Enter a number" << std::endl;
	std::cin >> num;
	std::cout << "Fibonacci number = " <<fib(num) << std::endl;
}
