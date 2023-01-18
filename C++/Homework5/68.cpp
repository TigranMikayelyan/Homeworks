// Մուտքագրել թիվ, փոխակերպել թիվը տասնվեցական համակարգի թվի եւ տպել արդյունքը։
// With function

#include <iostream>

void hex(int num)
{	
	const int size = 20;
	char arr[size];
	int i = 0;
	while (num > 0)
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
}

int main()
{
	int num = 0;
	std::cout << "Enter a number" << std::endl;
	std::cin >> num;
	hex(num);
	std::cout << std::endl;
}
