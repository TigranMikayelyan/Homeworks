// Մուտքագրել թիվ, փոխակերպել թիվը երկուական համակարգի թվի եւ տպել արդյունքը։

#include <iostream>

int main()
{
	int num = 0;
	std::cout << "Enter a number and I will convert the number to hexadecimal and print the result" << std::endl;
	std::cin >> num;
	if (num < 0)	
	{
		std::cout << "Enter bigger number" << std::endl;
	}
	const int size = 30;
	int arr[size];
	int i = 0;
	while (num != 0)
	{
		arr[i] = num % 2;
		++i;
		num /= 2;
	} 
	std::cout << "Binary representation = ";
	for (int j = i - 1; j >= 0; --j)
	{
		std::cout << arr[j];
	}
	std::cout << std::endl;
}
