// Գրել ֆունկցիա, որը որպես արգումենտ ստանում է num ամբողջ տիպի փոփոխականը եւ տպում է num-ից մինչեւ 0 արժեքները։ Ֆունկցիան իրականացնել ռեկուրսիվ տարբերակով։

#include <iostream>

void zero(int num)
{
	if (num < 0)
	{
		return;
	}
	std::cout << num << std::endl;
	zero(num - 1);
}

int main()
{
	int num = 0;
	std::cout << "Enter a number" << std::endl;
	std::cin >> num;
	zero(num);
}
