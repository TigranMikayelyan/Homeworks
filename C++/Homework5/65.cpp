// Գրել ծրագիր, որն օգտագործելով *, =, _ եւ ցանկացած այլ սիմվոլ, էկրանին կնկարի տուն։
// With function

#include <iostream>

void home(int size)
{
	int s1 = size;
        int s2 = size;
	for (int j = 1; j <= size; ++j)
	{
		for (int i = 1; i < size * 2; ++i)
		{	
			if (i == s1 || i == s2)	
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
	for (int j = 1; j <= size; ++j)
	{
		for (int i = 1; i <= size; ++i)
		{
			if ((j == 1) || (i == 1) || (j == size) || (i == size))
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
}

int main()
{
	int size;
	std::cout << "Enter the size" << std::endl;
	std::cin >> size;
	home(size);
}
