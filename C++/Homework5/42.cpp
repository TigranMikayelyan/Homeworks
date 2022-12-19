// Մուտքագրել օգտագործողի անունն ու տարիքը։ Տպել էկրանին ողջույնի հաղորդագրություն։
// With function

#include <iostream>

void name(char* str, int age)
{
	std::cout << "Hello" << std::endl;
}

int main()
{
	const int size = 30;
	char str[size];	
	std::cout << "Enter your name" << std::endl;
	std::cin >> str;
	int age = 0;
	std::cout << "Enter your age" << std::endl;
	std::cin >> age;
	name(str, age);
}
