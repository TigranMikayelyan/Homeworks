// 9. Մուտքագրել թիվ, տպել թվի թվանշանների գումարը էկրանին։ Օրինակ՝ մուտքագրված 5479 թվի համար տպել 25 (որովհետև 5+4+7+9=25)։

#include <iostream>

int main()
{
	long num;
	long sum = 0;
	std::cout << "Enter a number " << std::endl;
	std::cin >> num;
	while (num)
	{
		sum = sum + num % 10;
		num = num / 10;
	}
	std::cout << sum << std::endl;
}

	
