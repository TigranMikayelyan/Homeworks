// Տպել 0-100 միջակայքի միայն զույգ թվերը։
// With function

#include <iostream>

void mid()
{
	for (int i = 0; i <= 100; ++i)
	{
		if (i % 2 == 0)
		{
			std::cout << i << std::endl;
		}
	}
}

int main()
{
	mid();
}
