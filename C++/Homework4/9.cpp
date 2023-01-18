// Գրեք ծրագիր, որը ամբողջ թվային զանգվածի բոլոր կենտ թվերը լցնում է մեկ այլ զանգվածի մեջ: Ստացված զանգվածը տպել էկրանին։

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
	int arr2[count];
	for (int i = 0, j = 0; i < size; ++i)
	{
		if (arr[i] % 2 == 1)
		{
			arr2[j] = arr[i];
			++j;
		}
	}
	for (int i = 0; i < count; ++i)
	{
		std::cout << arr2[i] << " ";
		std::cout << std::endl;
	}
}
