// Մուտքագրել տող։ Տողի ամեն երկրորդ սիմվոլը դարձնել մեծատառ։ Արդյունքը տպել էկրանին։
// With function

#include <iostream>

char* upper(char* str)
{
	int size = strlen(str);
	for (int i = 0; i < size - 1; ++i)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[++i] = str[i + 1] - 32;
		}
	}
	return str;
}

int main()
{
	const int size = 30;
	char str[size];
	std::cout << "Enter a string" << std::endl;
	std::cin >> str;
	std::cout << upper(str) << std::endl;
}
