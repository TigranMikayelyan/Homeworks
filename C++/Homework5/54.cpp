// Տպել 0-100 թվերի քառակուսիների արժեքները էկրանին։
// With function

#include <iostream>

void quadrate()
{
	for (int i = 0; i <= 100; ++i)
	{
		std::cout << i * i << std::endl;
	}
}

int main()
{
	quadrate();
}
