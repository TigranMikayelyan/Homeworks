// Մուտքագրել տող։ Գտնել եւ տպել տողում ամենաշատ կրկնվող սիմվոլը։

#include <iostream>

int main()
{
	const int size = 30;	
	char arr[size];
	int count = 0;
	std::cout << "Enter a string" << std::endl;	
	std::cin >> arr;
	for (int i = 0; arr[i] != '\0'; ++i)	
	{
		count = 0;	
		int tmp = arr[i];
		while (tmp == arr[i])
		{
			++count;
			++i;
		}
		--i;
		std::cout << arr[i] << " " << count << std::endl;
	}
	
	
}
