// 11. Գրել ծրագիր, որն օգտագործելով *, =, _ և ցանկացած այլ սիմվոլ, էկրանին կնկարի տուն։

#include <iostream>

int main ()
{
	int h;
	int t;
	int size;	
	std::cout << " Enter the size " << std::endl;
	std::cin >> size;
	int s1 = size;
        int s2 = size;
	for (h = 1; h <= size; ++h)
	{
		for (t = 1; t < size * 2; ++t)
		{	
			if (t == s1 || t == s2)	
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
	for (h = 1; h <= size; ++h)
	{
		for (t = 1; t <= size; ++t)
		{
			if ((h == 1) || (t == 1) || (h == size) || (t == size))
			{
				std::cout << "*" << " ";
			}
			else
			{
				std::cout << "  ";
			}
		}
		std::cout << std::endl;
	}

	return 0;
}
