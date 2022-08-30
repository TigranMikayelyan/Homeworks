// 8. Մուտքագրել թիվ, տպել թվի թվանշանները առանձին առանձին էկրանին: Օրինակ՝ մուտքագրված 5479 թվի համար տպել ‘5’, ‘4’, ‘7’, ‘9’։ 

#include <iostream>

int main()
{
	int x;
	int y = 0;
	std::cout << " enter the number " << std::endl;
	std::cin >> x;
	while (x)
	{
		y = y * 10 + x % 10;
		x = x / 10;
	}	
	while (y)
	{
		std::cout << y % 10 << " ";
		y = y / 10;
	}
}
	
