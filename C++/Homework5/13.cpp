// Մուտքագրել num փոփոխականը որպես int եւ օգտագործողի անունը։ Տպել անունը էկրանին num անգամ։


#include <iostream>

int main()
{
	int num = 0;
	std::cout << "Enter a number " << std::endl;	
	std::cin >> num;
	std::string name;
	std::cout << "Enter a string and i will print your string num times " << std::endl;	
	std::cin >> name;
	for (int i = 0; i < num; ++i)
	{
		std::cout << name << std::endl;
	}
}
