// Մուտքագրել թիվ, որը ներկայացնում է հեռավորությունը՝ չափված մետրերով։ Վերածել եւ տպել արժեքը կիլոմետրերով։ Օրինակ՝ մուտքագրված 1400 թվի դեպքում տպել “1.4 km”։
// With function

#include <iostream>

double ret(int num)
{
	double dnum = (double) num / 1000;
	return dnum;
}

int main()
{
	int num = 0;
	std::cout << "Enter a number" << std::endl;
	std::cin >> num;	
	std::cout << ret(num) << " km" << std::endl;
}
