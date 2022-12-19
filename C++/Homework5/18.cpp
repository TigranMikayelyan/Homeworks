// Մուտքագրել թիվ, տպել էկրանին թվի թվանշանների արտադրյալը։

#include <iostream>

int main()
{
	int num = 0;
	std::cout << "Enter a number and I will print the digit production of the number on the screen " << std::endl;
	std::cin >> num;
	int mul = 1;
	while (num)
	{
		mul *= num % 10;
		num /= 10;
	}
	std::cout << "Production of digits = " << mul << std::endl;
}
