// Հաշվել զանգվածի զույգ թվերի գումարը և կենտ թվերի արտադրյալը։ Տպել դրանց տարբերությունը։

#include <iostream>

int main()
{
	const int size = 5;
	int arr[size];
	int sum = 0;
	int mul = 1;
	std::cout << "Enter array elements " << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];	
	}
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] % 2 == 0)
		{
			sum = sum + arr[i];
		}
		else
		{	
			mul = mul * arr[i];
		}
	}
	std::cout << sum - mul << std::endl;
}																				
