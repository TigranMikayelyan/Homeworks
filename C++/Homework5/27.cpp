// Մուտքագրել թիվ, տպել թվի թվանշանների առավելագույն եւ նվազագույն արժեքները։

#include <iostream>

int main()
{
	int num = 0;
	std::cout << "Enter a number " << std::endl;
	std::cin >> num;
	int max = 0;
	int min = num % 10;
	while (num) 
	{
		if (min > (num % 10)) 
		{
			min = num % 10;
		}
		if (max < (num % 10)) 
		{
			max = num % 10;
		}
		num /= 10;
	}
	std::cout << "Maximum digit = " << max << std::endl << "Minimum digit = " << min << std::endl;
}

