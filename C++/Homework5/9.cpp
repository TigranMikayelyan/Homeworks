// Հայտարարել բուլյան փոփոխականներ տարբեր արժեքներով։ Տպել էկրանին AND եւ OR գործողությունների արդյունքները։

#include <iostream>

int main()
{
	bool t = 1;	
	bool f = 0;
	std::cout << "AND = " << t << " && " << f << " " << "= " << (t && f) << std::endl; 
	std::cout << "OR = " << t << " || " << f << " " << "= " << (t || f) << std::endl; 
}
