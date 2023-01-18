// Հայտարարեք char տիպի զանգված և սկզբնարժեքավորեք այն “CheeseBurger” արտահայտությամբ:
// e. Սկզբնական զանգվածի էլեմենտները դասավորեք հակառակ հերթականությամբ նույն զանգվածի մեջ։

#include <iostream>
int main()
{
	char arr[] = "CheeseBurger";
	std::cout << "Reversed array = ";
	for (int i = 0; i < strlen(arr) / 2; ++i)	
	{
		char tmp = arr[i];	
		arr[i] = arr[strlen(arr) - i - 1];
		arr[strlen(arr) - i - 1] = tmp;
	}
	std::cout << arr << std::endl;
}
