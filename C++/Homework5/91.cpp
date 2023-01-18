// Իրականացնել ֆակտորիալի հաշվարկումը իտերատիվ եղանակով։

#include <iostream>

int fact(int num)
{
	int factorial = 1;
	for (int i = 1; i <= num; ++i)	
	{
		factorial = factorial * i;
	}
	return factorial;
}

int main()
{
	int num = 0;
	std::cout << "Enter a number" << std::endl;
	std::cin >> num;
	std::cout << "Factorial of this number = " << fact(num) << std::endl;
}
