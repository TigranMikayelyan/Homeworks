// Մուտքագրել թիվ, տպել թվի թվանշանների առավելագույն եւ նվազագույն արժեքները։
// With function

#include <iostream>

void digit(int num)
{
	int max = 0;
	int min = num % 10;
	while (num)
	{
		if (max < (num % 10))
		{
			max = num % 10;
		}
		if (min > (num % 10))
		{
			min = num % 10;
		}
		num /= 10;
	}	
	std::cout << "Max digit of the number = " << max << std::endl;
	std::cout << "Min digit of the number = " << min << std::endl;
}

int main()
{
	int num = 0;
	std::cout << "Enter a number" << std::endl;
	std::cin >> num;
	digit(num);
}
