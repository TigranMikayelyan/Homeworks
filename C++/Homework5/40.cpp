// Գրել ֆունկցիա, որը ստանում է քառակուսային հավասարման մուտքային տվյալները եւ վերադարձնում է լուծումը։ Կանչել եւ տպել ֆունկցիայի վերադարձրած արժեքը։

#include <iostream>

int quad_eq(int num1, int num2, int num3)
{
	return pow(num2, 2) - 4 * num1 * num3;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	std::cout << "Enter the first number" << std::endl;
	std::cin >> num1;
	std::cout << "Enter the second number" << std::endl;
	std::cin >> num2;
	std::cout << "Enter the third number" << std::endl;
	std::cin >> num3;
	std::cout << "Quadratic equation = " << quad_eq(num1, num2, num3) << std::endl;
}
