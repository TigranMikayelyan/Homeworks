// Գրեք ծրագիր, որը տպում է ամբողջ թվային զանգվածի կենտ թվերի քանակը:

#include <iostream>

int main()
{	
	const int size = 5;
	int arr[size] = {1, 2, 3, 4, 5};
	int count = 0;
	for (int i = 0; i < size; ++i)
	{	
		if (arr[i] % 2 == 1)
		{
			++count;
		}
	}
	std::cout << "There are " << count << " odd numbers in this array " << std::endl;
}
