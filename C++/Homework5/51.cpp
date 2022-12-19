// Մուտքագրել թիվ, ստուգել արդյոք թիվը զույգ է, թե ոչ։ Տպել էկրանին ստուգման արդյունքը։
// With function

#include <iostream>

void is_even(int num)
{
	if (num % 2 == 0)
	{
		std::cout << "Number is even" << std::endl;
	}
	else
	{
		std::cout << "Number is odd" << std::endl;
	}
}

int main()
{
	int num = 0;
	std::cout << "Enter the number" << std::endl;
	std::cin >> num;
	is_even(num);
}
