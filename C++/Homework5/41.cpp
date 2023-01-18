// Մուտքագրել չորս փոփոխականներ, տպել նվազագույնի արժեքը, եթե չորս փոփոխականների գումարը հավասար է զրոյի։
// with function

#include <iostream>

int four_nums(int num1, int num2, int num3, int num4)
{
	int min = num1;
	if (num1 + num2 + num3 + num4 == 0)
	{
		if (min > num2)	
		{
			min = num2;
		}
		if (min > num3)
		{
			min = num3;
		}
		if (min > num4)
		{
			min = num4;
		}
	}
	else 
	{
		return -1;
	}
	return min;
}

int main()
{
	int num1 = 0;
	std::cout << "Enter the first number" << std::endl;
	std::cin >> num1;
	int num2 = 0;	
	std::cout << "Enter the second number" << std::endl;
	std::cin >> num2;
	int num3 = 0;
	std::cout << "Enter the third number" << std::endl;
	std::cin >> num3;	
	int num4 = 0;
	std::cout << "Enter the fourth number" << std::endl;
	std::cin >> num4;
	std::cout << "Mininum value = " << four_nums(num1, num2, num3, num4) << std::endl;
}

