// Մուտքագրել օգտագործողի անունն ու տարիքը։ Տպել էկրանին ողջույնի հաղորդագրություն։

#include <iostream>

int main()
{
	std::string name;
	std::cout << "Enter user's name " << std::endl;
	std::cin >> name;
	int age = 0;
	std::cout << "Enter user's age " << std::endl;
	std::cin >> age;
	std::cout << "HELLO " << std::endl;
}
