// Մուտքագրել թիվ։ Եթե թիվը զույգ է, տպել 0-100 թվերն ըստ աճման, հակառակ դեպքում՝ ըստ նվազման։

#include <iostream>

int main()
{
	int num = 0;
	std::cout << "Enter a number " << std::endl;
	std::cin >> num;
	if (num == 0)
	{
		std::cout << "Zero is neither even nor odd " << std::endl;
	}
	else if (num % 2 == 0)
	{
		for (int i = 0; i <= 100; ++i)
		{
			std::cout << i << std::endl;
		}
	}
	else
	{
		for (int i = 100; i >= 0; --i)
		{
			std::cout << i << std::endl;
		}
	}
}
