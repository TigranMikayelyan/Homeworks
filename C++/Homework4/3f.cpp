// Հայտարարեք char տիպի զանգված և սկզբնարժեքավորեք այն “CheeseBurger” արտահայտությամբ:
// f. Ստացված զանգվածի մեջ բոլոր փոքրատառերը սարքել մեծատառ և տպել էկրանին։

#include <iostream>

int main()
{	
	char arr[] = "CheeseBurger";
	for (int i = 0; i < strlen(arr); ++i)
	{	
		if (arr[i] >= 97 && arr[i] <= 122)
		{
			arr[i] = arr[i] - 32;
		}
	}
	std::cout << arr << std::endl;
}
