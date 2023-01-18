// Հայտարարել բուլյան փոփոխականներ տարբեր արժեքներով։ Տպել էկրանին AND եւ OR գործողությունների արդյունքները։
// With function

#include <iostream>

void bol(bool first, bool second)
{
	std::cout << "AND = " << (first && second) << std::endl;
	std::cout << "OR = " << (first || second) << std::endl;
}

int main()
{
	bool first = 1;
	bool second = 0;
	bol(first, second);	
}
