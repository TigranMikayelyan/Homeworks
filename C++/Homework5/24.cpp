// Մուտքագրել թիվ, որը ներկայացնում է հեռավորությունը՝ չափված մետրերով։ Վերածել եւ տպել արժեքը կիլոմետրերով։ Օրինակ՝ մուտքագրված 1400 թվի դեպքում տպել “1.4 km”։

#include <iostream>

int main()
{
	int num = 0;
	std::cout << "Enter a value and I will convert and print the value in kilometers" << std::endl;
	std::cin >> num;
	double var = (double)num / 1000;
	std::cout << "Result = " << var << " km" << std::endl;
}
