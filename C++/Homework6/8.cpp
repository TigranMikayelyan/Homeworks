// Գրեք ռեկուրսիվ ֆունկցիա, որը ստանում է ամբողջ թիվ և տպում դրա երկուական պատկերը էկրանին:

#include <iostream>

void bin(int num)
{
	if (num <= 0)
	{
		return;
	}
	bin(num / 2);
	std::cout << num % 2;
}

int main()
{
	int num;
	std::cout << "Enter a number and i will return binary representation of this number " << std::endl;
	std::cin >> num;
	bin(num);
	std::cout << std::endl;
}
