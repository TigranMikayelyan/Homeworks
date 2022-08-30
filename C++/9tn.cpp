// 9. Մուտքագրել թիվ, տպել թվի թվանշանների գումարը էկրանին։ Օրինակ՝ մուտքագրված 5479 թվի համար տպել 25 (որովհետև 5+4+7+9=25)։

#include <iostream>

int main()
{
	long qwerty;
	long sum = 0;
	std::cout << " enter the number " << std::endl;
	std::cin >> qwerty;
	while (qwerty)
	{
		sum = sum + qwerty % 10;
		qwerty = qwerty / 10;
	}
	std::cout << sum << std::endl;
}

	
