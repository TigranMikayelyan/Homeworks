// Գրել ֆունկցիա, որը վերադարձնում է թվի առաջին k թվանշանները։ Թիվն ու k-ն մուտքագրել։

#include <iostream>

int func(int num, int k)
{
	int tmp = 0;
	int n = 0;
	while (num)
	{
		n = n * 10 + num % 10;
		num /= 10;
	}
	while(k != 0)
	{
		tmp = tmp * 10 + n % 10;
		n /= 10;
		--k;
	}
	return tmp;
}

int main()
{
	int num = 0;
	std::cout << "Enter a number" << std::endl;
	std::cin >> num;
	int k = 0;
	std::cout << "Enter the k" << std::endl;
	std::cin >> k;
	std::cout << func(num, k) << std::endl;
}
