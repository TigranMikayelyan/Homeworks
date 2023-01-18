// Հայտարարել եւ մուտքագրել երկու փոփոխականներ։ Փոխել փոփոխականների արժեքները տեղերով եւ տպել էկրանին

#include <iostream>

int main()
{
	int var1 = 0;
	int var2 = 0;
	std::cout << "Enter the first variable " << std::endl;
	std::cin >> var1;
	std::cout << "Enter the second variable " << std::endl;	
	std::cin >> var2;
	int tmp = var1;
	var1 = var2;	
	var2 = tmp;
	std::cout << "Moved value = " << var1 << " " << var2 << std::endl;
}
