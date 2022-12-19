// Հայտարարեք char տիպի զանգված և սկզբնարժեքավորեք այն “CheeseBurger” արտահայտությամբ:
// c. Հաշվեք և տպեք էկրանին այդ զանգվածի մեջ բոլոր ձայնավորների քանակը:

#include <iostream>

int main()
{
	const int size = 12;
	char* arr = "CheeseBurger";
	int count = 0;
	std::cout << "Vowels = ";
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] == 'A' || arr[i] == 'a' || arr[i] == 'I' || arr[i] == 'i' || arr[i] == 'O'|| arr[i] == 'o' || arr[i] == 'U' || arr[i] == 'u' || arr[i] == 'E' || arr[i] == 'e')
		{
			++count;
			std::cout << arr[i] << " ";
		}
	}
	std::cout << std::endl;
	std::cout << "There are " << count << " vowels in this word "<< std::endl;
}
