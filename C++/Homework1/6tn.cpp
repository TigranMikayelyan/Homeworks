// 6. Տպել 0-100 միջակայքի միայն կենտ թվերը։

#include <iostream>

int main()
{
	for (int i = 0; i <= 100; ++i)
	{
		if (i % 2 == 1)
		{	
			std::cout << i << std::endl;
		}
	}
}	