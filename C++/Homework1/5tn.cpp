// 5. Տպել 0-100 միջակայքի միայն զույգ թվերը։

#include <iostream>

int main()
{
	for (int i = 0; i <= 100; ++i)
	{
		if (i % 2 == 0)
		{	
			std::cout << i << std::endl;
		}
	}
}
