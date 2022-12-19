//Տպել 100-0 թվերը ըստ նվազման։
// With function

#include <iostream>

void decrease()
{
	for (int i = 100; i >= 0; --i)
	{
		std::cout << i << std::endl;
	}
}

int main()
{
	decrease();
}
