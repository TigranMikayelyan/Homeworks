// Իրականացնել ռեկուրսիվ ֆունկցիա, որը ստանում է ամբողջ թիվ ու նրա ցուցիչի արժեքը (բացասական նույնպես կարող է լինել) և հաշվում այն: Ֆունկցիայի նախատիպը (prototype)
// «double accountPower (int base, int powerRaised); // base -> (ամբողջ թիվ). powerRaised -> (ցուցիչ)

#include <iostream>

double power(int num, int ptr)
{
	if (ptr == 0)
	{
		return 1;
	}
	if (ptr < 0)
	{
		return power(num, ptr + 1);
	}
	return num * power(num, ptr - 1);
}

int main()
{
	int num;	
	std::cout << "Enter a number " << std::endl;
	std::cin >> num;	
	int ptr;
	std::cout << "Enter a degree of the number " << std::endl;
	std::cin >> ptr;	
	std::cout << power(num, ptr) << std::endl;
}
