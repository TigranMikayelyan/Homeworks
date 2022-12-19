// Հայտարարեք ցանկացած երեք տարբերվող տիպի ցուցիչներ: Արժեքավորեք ցուցիչները և տպեք էկրանին տվյալ ցուցիչների մեջ պահված հասցեները։


#include <iostream>

int main()
{
	int n = 11;
	char ch = 'g';
	double d = 33.8;
	int* pn = &n;	
	char* pch = &ch;
	double* pd = &d;
	std::cout << pn << std::endl;
	std::cout << &pch << std::endl;
	std::cout << pd << std::endl;
}
