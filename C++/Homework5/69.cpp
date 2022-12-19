// Մուտքագրել թիվ, փոխակերպել թիվը երկուական համակարգի թվի եւ տպել արդյունքը։
// With function

#include <iostream>

void bin(int num)
{
	const int size = 32;
	int arr[size];
	int i = 0;
	while (num != 0)
	{
		arr[i] = num % 2;
		++i;
		num /= 2;
	}
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
	std::cout << "Binary representation = ";
	bin(num);
	std::cout << std::endl;
}
