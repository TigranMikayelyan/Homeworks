// Մուտքագրել թիվ, տպել թվի թվանշանները հակառակ հերթականությամբ։
// With function

#include <iostream>

void rev(int num)
{
	int n = 0;
	while (num)
	{
		n = n * 10 + num % 10;
		num /= 10;
	}
	std::cout << "Reversed digits = " << n << std::endl;
}

int main()
{
	int num = 0;
	std::cout << "Enter the number" << std::endl;
	std::cin >> num;
	rev(num);
}
