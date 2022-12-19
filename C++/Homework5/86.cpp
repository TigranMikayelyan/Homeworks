// Գրել ֆունկցիա, որը ստանում է թիվ եւ վերադարձնում true, եթե թիվը պարզ է։

#include <iostream>
#include <cmath>

bool prime(int num)
{
	for (int i = 2; i <= sqrt(num); ++i)	
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}	

int main()
{
	int num = 0; 
	std::cout <<  "Enter a number and i will say is that number simple or complex " << std::endl;
	std::cin >> num;
	std::cout << std::boolalpha << prime(num) << std::endl;
}
