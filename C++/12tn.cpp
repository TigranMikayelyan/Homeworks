// 12. Օգտագործելով * (աստղանիշ) սիմվոլները, էկրանին նկարել եռանկյունի։

#include <iostream>

int main()
{
	int t;
	int h;
	int size;
	std::cout << " type the size " << std::endl;
	std::cin >> size;
	int s1 = size;
	int s2 = size;
	for (t = 0; t <= size; ++t)
	{	
		for (h = 0; h <= size * 2; ++h)
		{
			if (h == s1 || h == s2 || t == size)	
			{	
				std::cout << "*";	
			}
			else
			{
				std::cout << " ";
			}
		}
		s1--;
		s2++;
		std::cout << std::endl;
	}	
	return 0;		
}
