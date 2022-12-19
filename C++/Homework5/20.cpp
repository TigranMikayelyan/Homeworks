// Մուտքագրել օգտագործողի անունը եւ տպել էկրանին հակառակ հերթականությամբ։

#include <iostream>

int main()
{
	const int size = 30;
	char name[size];
	std::cout << "Enter a string " << std::endl;
	std::cin >> name;
	std::cout << "Reversed string = ";
	for (int i = size - 1; i >= 0; --i)
	{
		std::cout << name[i];
	}
	std::cout << std::endl;
}
