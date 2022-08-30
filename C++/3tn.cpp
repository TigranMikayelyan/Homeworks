// 3. Մուտքագրել չորս փոփոխականներ, տպել նվազագույնի արժեքը, եթե չորս փոփոխականների գումարը հավասար է զրոյի։

#include <iostream>

int main()
{
	int num1;
	int num2;
	int num3;
	int num4;
	std::cout << " enter numbers " << std::endl;
	std::cin >> num1 >> num2 >> num3 >> num4;
	if ((num1 + num2 + num3 + num4) == 0 )
	{
		 if (num1 <= num2 && num1 <= num3 && num1 <= num4)
		{	
			std::cout << num1;
		}
		else if (num3 <= num1 && num3 <= num2 && num3 <= num4)
		{
			std::cout << num3;
		}
		else if (num2 <= num1 && num2 <= num3 && num2 <= num4)
		{	
			std::cout << num2;
		}
		else 
		{	
			std::cout << num4;
		}
	}
}

