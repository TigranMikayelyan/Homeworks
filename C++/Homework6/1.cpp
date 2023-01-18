// Իրականացնել ռեկուրսիվ ֆունկցիա, որը վերադարձնում է փոխանցված ամբողջ թվի ֆակտորիալը:

#include <iostream>

int ret(int num)
{
	if (num == 0 || num == 1) 
	{
		return 1;
	}
	return num * ret(num - 1);
}

int main()
{
	
	int num;	
	std::cout << "Enter a number and i will return factorial of that number " << std::endl;
	std::cin >> num;
	std::cout << "Factorial of this number = " << ret(num) << std::endl;
}
