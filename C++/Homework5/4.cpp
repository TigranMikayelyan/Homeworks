// Մուտքագրել տող, տպել տողը էկրանին հակառակ կարգով։
/*
#include <iostream>

int main()
{
	std::string str;
	std::cout << "Enter a string " << std::endl;
	std::cin >> str;	
	for (int i = str[i] - 1; i >= 0; --i)
	{
		std::cout << str[i];
	}
}
*/

#include <iostream>

int main()
{
	const int size = 30;
	char arr[size];
	std::cout << "Enter a string " << std::endl;
	std::cin >> arr;
	std::cout << "Reversed string = ";
	for (int i = size - 1; i >= 0; --i)
	{
		std::cout << arr[i];
	}
	std::cout << std::endl;
}
