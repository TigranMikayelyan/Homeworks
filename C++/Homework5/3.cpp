// Մուտքագրել օգտագործողի անունը, փոխակերպել անունը մեծատառերի, եթե անունը մուտքագրված է փոքրատառերով

#include <iostream>

int main()
{
	std::string name;
	std::cout << "Enter your name " << std::endl;
	std::cin >> name;
	std::cout << "Changed name = ";
	for (int i = 0; i < name[i]; ++i)
	{
		if (name[i] >= 97 && name[i] <= 122)
		{
			name[i] = name[i] - 32;
			std::cout << name[i];
		}
	}
	std::cout << std::endl;
}

/*
#include <iostream>

int main()
{
	const int size = 30;
	char arr[size];
	std::cout << "Enter your name " << std::endl;
	std::cin >> arr;
	std::cout << "Changed name = ";
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] >= 97 && arr[i] <= 122)
		{
			arr[i] = arr[i] - 32;
			std::cout << arr[i];
		}
	}
	std::cout << std::endl;
}

*/
