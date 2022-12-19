// Մուտքագրել չորս փոփոխականներ, տպել նվազագույնի արժեքը, եթե չորս փոփոխականների գումարը հավասար է զրոյի։


#include <iostream>

int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	std::cout << "Enter the first number " << std::endl;
	std::cin >> num1;
	std::cout << "Enter the second number " << std::endl;
	std::cin >> num2;
	std::cout << "Enter the third number " << std::endl;
	std::cin >> num3;
	std::cout << "Enter the fourth number " << std::endl;
	std::cin >> num4;
	int min = num1;
	if (num1 + num2 + num3 + num4 == 0)
	{
		if (num2 < min)
		{
			min = num2;
		}
		if (num3 < min)
		{
			min = num3;	
		}
		if (num4 < min)
		{
			min = num4;
		}
		std::cout << "Min value = " << min << std::endl;
	}
	else
	{
		std::cout << "ERROR " << std::endl;
	}
}
