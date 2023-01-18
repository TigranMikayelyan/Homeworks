// Մուտքագրել թիվ, տպել թվի թվանշանները հակառակ հերթականությամբ։

#include <iostream>

int main()
{
	int num = 0;	
	std::cout << "Enter a number and I will print the digits of the number in reverse order " << std::endl;
	std::cin >> num;
	int n = 0;
	while (num)
	{
		n = n * 10 + num % 10;	
		num /= 10;
	}
	std::cout << "Reversed digits = " << n << std::endl;
}
