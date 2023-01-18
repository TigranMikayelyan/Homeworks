// Մուտքագրել թիվ։ Եթե թիվը զույգ է, տպել 0-100 թվերն ըստ աճման, հակառակ դեպքում՝ ըստ նվազման։
// With function

#include <iostream>

void even(int num)
{
	if (num % 2 == 0)
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

int main()
{
	int num = 0;
	std::cout << "Enter the number" << std::endl;
	std::cin >> num;
	even(num);
}
