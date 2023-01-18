// Իրականացնել ռեկուրսիվ ֆունկցիա, որն ընդունում է թիվ և վերադարձնում նրա թվանշանների գումարը:

#include <iostream>

int sum(int num)
{
	if (num == 0)
	{	
		return 0;
	}
	return sum(num / 10) + (num % 10);	
}

int main()
{
	int num;	
	std::cout << "Enter a number " << std::endl;
	std::cin >> num;
	std::cout << sum(num) << std::endl;
}
