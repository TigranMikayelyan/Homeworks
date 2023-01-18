// Մուտքագրել թիվ, ստուգել արդյոք թիվը զույգ է, թե ոչ։ Տպել էկրանին ստուգման արդյունքը։

#include <iostream>

int main()
{
	int num = 0;
	std::cout << "Enter a number and I'll tell you if this number is odd or even " << std::endl;
	std::cin >> num;
	if (num == 0)
	{
		std::cout << "Zero is neither even nor odd " << std::endl;
	}
	else if (num % 2 == 0)
	{
		std::cout << "This number is even " << std::endl;
	}
	else
	{
		std::cout << "This number is odd " << std::endl;
	}
}
