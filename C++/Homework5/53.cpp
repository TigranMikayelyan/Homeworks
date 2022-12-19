// Մուտքագրել num փոփոխականը որպես int եւ օգտագործողի անունը։ Տպել անունը էկրանին num անգամ։
// With function

#include <iostream>

void num_name(int num, char* name)
{
	for (int i = 0; i < num; ++i)
	{
		std::cout << name << std::endl;
	}
}

int main()
{
	int num = 0;
	std::cout << "Enter the number" << std::endl;
	std::cin >> num;
	const int size = 20;
	char name[size];
	std::cout << "Enter a string" << std::endl;
	std::cin >> name;
	num_name(num, name);
}
