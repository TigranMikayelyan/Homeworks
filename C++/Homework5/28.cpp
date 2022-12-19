// Մուտքագրել թիվ, փոխակերպել թիվը տասնվեցական համակարգի թվի եւ տպել արդյունքը։

#include <iostream>

int main()
{
	int num = 0;
	std::cout << "Enter a number and I will convert the number to hexadecimal and print the result" << std::endl;
	std::cin >> num;
	const int size = 30;	
	char arr[size];
	int i = 0;
	while (num != 0)
	{
		int tmp = num % 16;
		if (tmp < 10)
		{
			arr[i] = tmp + 48;
			++i;
		}
		else
		{
			arr[i] = tmp + 55;
			++i;
		}
		num /= 16;
	}
	std::cout << "Hexadecimal representation = ";
	for (int j = i - 1; j >= 0; --j)
	{
		std::cout << arr[j];
	}
	std::cout << std::endl;
}
