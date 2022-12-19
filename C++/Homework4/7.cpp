// Գրեք ծրագիր, որը տպում է ամբողջ թվային զանգվածի բոլոր զույգ թվերի արժեքները:

#include <iostream>

int main()
{	
	const int size = 5;
	int arr[size] = {1, 2, 3, 4, 5};	
	std::cout << "Couple numbers of this array = ";
	for (int i = 0; i < size; ++i)
	{	
		if (arr[i] % 2 == 0)
		{	
			std::cout << arr[i] << " ";
		}
	}
	std::cout << std::endl;
}
