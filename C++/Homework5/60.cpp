// Մուտքագրել օգտագործողի անունը եւ տպել էկրանին հակառակ հերթականությամբ։
// Within function

#include <iostream>

void rev(char* str)
{
	int size = strlen(str);
	for (int i = size; i >= 0; --i)
	{
		std::cout << str[i];
	}	
}

int main()
{
	const int size = 20;
	char str[size];
	std::cout << "Enter your name" << std::endl;
	std::cin >> str;
	std::cout << "Reversed string = ";
	rev(str);
	std::cout << std::endl;
}


