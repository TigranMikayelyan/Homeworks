// Մուտքագրել տող։ Տպել տողում իրար հաջորդող նույնարժեք սիմվոլների ամենաերկար շարքը։
 
#include <iostream>

int main()
{
	const int size = 20;
	char arr[size];
	std::cout << "Enter a string" << std::endl;
	std::cin >> arr;
	char arr2[size];
	for (int i = 0, j = 0; i < size; ++i)	
	{
		if (arr[i] == arr[i + 1])
		{
			arr2[j++] = arr[i + 1];
		}
	}
	std::cout << arr2;
}
