// Մուտքագրել օգտագործողի անունը, փոխակերպել անունը մեծատառերի, եթե անունը մուտքագրված է փոքրատառերով։
// With function

#include <iostream>

char* upper_case(char* str)
{
	for (int i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return str;
}

int main()
{
	const int size = 20;
	char str[size];	
	std::cout << "Enter your name" << std::endl;
	std::cin >> str;
	std::cout << upper_case(str) << std::endl;
}
