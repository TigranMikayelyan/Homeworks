// Օգտագործելով * (աստղանիշ) սիմվոլները, էկրանին նկարել եռանկյունի։

#include <iostream>

int main()
{
	int size = 0;
	std::cout << "Enter the size " << std::endl;
	std::cin >> size;
	int s1 = size;
	int s2 = size;
	for (int i = 0; i <= size; ++i)
	{
		for (int j = 0; j <= size * 2; ++j)		
		{
			if (j == s1 || j == s2 || i == size)
			{
				std::cout << "*";	
			}
			else
			{
				std::cout << " ";
			}
		}
		s1++;
		s2--;
		std::cout << std::endl;
	}
}
