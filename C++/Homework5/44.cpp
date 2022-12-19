// Մուտքագրել տող, տպել տողը էկրանին հակառակ կարգով։
// With function

#include <iostream>

void reverse(char* str)
{
	int size = strlen(str);
	for (int i = size - 1; i >= 0; --i)
	{
		std::cout << str[i];
	}
}

int main()
{
	const int size = 20;
	char str[size];	
	std::cout << "Enter a string" << std::endl;
	std::cin >> str;
	std::cout << "Reversed string = ";
	reverse(str);
	std::cout << std::endl;
}
