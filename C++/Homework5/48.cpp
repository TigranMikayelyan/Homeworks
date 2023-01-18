// Տպել 0-100 միջակայքի միայն կենտ թվերը։
// With function

#include <iostream>

void odd()
{
	for (int i = 0; i <= 100; ++i)
	{
		if (i % 2 == 1)
		{
			std::cout << i << std::endl;
		}
	}
}

int main()
{
	odd();
}
