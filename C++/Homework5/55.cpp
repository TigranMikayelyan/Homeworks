// Մուտքագրել թիվ, տպել թվի թվանշանները առանձին առանձին էկրանին։ Օրինակ՝ մուտքագրված 5479 թվի համար տպել ‘5’, ‘4’, ‘7’, ‘9’։
// With function

#include <iostream>

void seperately(int num)
{
	int n = 0;
	while (num)
	{
		n = n * 10 + num % 10;
		num /= 10;
	}
	while (n)
	{
		std::cout << n % 10 << " ";
		n /= 10;
	}
}

int main()
{
	int num = 0;
	std::cout << "Enter a number" << std::endl;
	std::cin >> num;
	std::cout << "Seperately digits = ";
	seperately(num);
	std::cout << std::endl;
}
