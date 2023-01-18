// 7. Հայտարարել և մուտքագրել երկու փոփոխականներ։ Փոխել փոփոխականների արժեքները տեղերով և տպել էկրանին։ 

#include <iostream>

int main()
{
	int t;
	int k;
	std::cout << " type variables " << std::endl;
	std::cin >> t >> k;
	int tmp = t;
	t = k;
	k = tmp;
	std::cout << t << " " << k << std::endl;
}	
