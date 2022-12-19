// Նախորդ խնդրի ֆունկցիան իրականացնել իտերատիվ տարբերակով։

#include <iostream>

void zero(int num)
{
	for (int i = num; i >= 0; --i)
	{
		std::cout << i << std::endl;
	}
}

int main()
{
	int num = 0;
	std::cout << "Enter a number" << std::endl;
	std::cin >> num;
	zero(num);
}
