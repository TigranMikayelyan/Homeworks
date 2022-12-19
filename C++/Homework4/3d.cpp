// Հայտարարեք char տիպի զանգված և սկզբնարժեքավորեք այն “CheeseBurger” արտահայտությամբ:
// d .Տպեք զանգվածը հակառակ հերթականությամբ, առանց սկզբնական զանգվածի էլեմենտների հերթականությունը փոխելու:

#include <iostream>

int main()
{
	const int size = 12;
	char* arr = "CheeseBurger";	
	std::cout << "Reversed word = ";
	for (int i = size - 1; i >= 0; --i)
	{
		std::cout << arr[i];	
	}
	std::cout << std::endl;
}
