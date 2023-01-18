// Մուտքագրել թիվ, տպել էկրանին թվի թվանշանների արտադրյալը։
// With function

#include <iostream>

int prod(int num)
{
	int mul = 1;	
	while (num)
	{
		mul *= num % 10;
		num /= 10;
	}
	return mul;
}

int main()
{
	int num = 0;
	std::cout << "Enter the number" << std::endl;
	std::cin >> num;
	std::cout << "Product of the digits = " << prod(num) << std::endl;
	
}
