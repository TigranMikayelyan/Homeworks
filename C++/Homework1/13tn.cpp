// 13. Իրականացնել ֆունկցիա, որը ստանում է երեք թվային արգումենտներ։ Ֆունկցիան վերադարձնում է երեք արգումենտների արտադրյալը։

#include <iostream>

//void foo();

int mul(int a, int b, int c)  // declaration
{
	return a * b * c;  // definition 
}

int main()
{
	int a;
	int b;
	int c;
	std::cout << "type numbers " << std::endl;
	std::cin >> a >> b >> c;
	std::cout <<  (a * b * c ); // function call
}

