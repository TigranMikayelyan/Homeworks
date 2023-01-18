// Իրականացնել ռեկուրսիվ ֆունկցիա, որն ընդունում է թիվ, հաշվարկում և վերադարձնում է բոլոր բնական թվերի գումարը մինչև այդ թիվը։

#include <iostream>

int natural(int num)
{
	if (num == 0 || num <= 1)
	{
		return 0;
	}
	return natural(num - 1) + (num - 1);
}

int main()
{
	int num;	
	std::cout << "Enter a number " << std::endl;	
	std::cin >> num;
	std::cout << "Sum of all natural numbers until this number = " << natural(num) << std::endl;
}
