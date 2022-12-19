// Մուտքագրել թիվ, տպել թվի թվանշանների գումարը էկրանին։ Օրինակ՝ մուտքագրված 5479 թվի համար տպել 25 (որովհետեւ 5+4+7+9=25)։
// With function

#include <iostream>

int add(int num)
{
	int sum = 0;
	while (num)
	{
		sum = sum += num % 10;
		num /= 10;
	}
	return sum;
}

int main()
{
	int num = 0;
	std::cout << "Enter the number" << std::endl;
	std::cin >> num;
	std::cout << "Sum of the digits = " << add(num) << std::endl;
}
