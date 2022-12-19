// Իրականացնել ֆակտորիալի հաշվարկումը ռեկուրսիվ եղանակով։

#include <iostream>

int factorial(int num)
{
	if (num == 0 || num == 1)
	{
		return 1;
	}
	return num * factorial(num - 1);
}

int main()
{
	int num = 0;
	std::cout << "Enter a number" << std::endl;
	std::cin >> num;
	std::cout << "Factorial of this number = " << factorial(num) << std::endl;
}
