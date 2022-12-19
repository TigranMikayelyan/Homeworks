// Մուտքագրել թիվ, տպել թվի թվանշանների գումարը էկրանին։ Օրինակ՝ մուտքագրված 5479 թվի համար տպել 25 (որովհետեւ 5+4+7+9=25)։

#include <iostream>

int main()
{
	int num = 0;
	std::cout << "Enter a number and i will print sum of this number digits " << std::endl;
	std::cin >> num;
	int sum = 0;
	while (num)
	{
		sum += num % 10;
		num /= 10;
	}
	std::cout << "Sum = " << sum << std::endl;
}
