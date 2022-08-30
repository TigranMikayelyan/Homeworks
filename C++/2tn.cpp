// 2. Մուտքագրել երեք փոփոխականներ, տպել նվազագույնի արժեքը։

#include <iostream>

int main()
{
	int a;
	int b;
	int c;
	std::cout << " enter numbers " << std::endl;
	std::cin >> a >> b >> c;
	if (a <= b && a <= c)
	{
		std::cout << a;
	}
	else if (b <= a && b <= c)
	{
		std::cout << b;
	}
	else
	{ 
		std::cout << c;
	}
}
