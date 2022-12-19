// Գրեք ծրագիր, որը գտնում և տպում է զանգվածի երկրորդ ամենափոքր տարրը: Այսինքն՝ տվյալ տարրը փոքր է լինելու զանգվածի բոլոր էլեմենտներից, բացառությամբ երկուսից (ինքը իրենից և փոքրագույնից)

#include <iostream>

int main()
{
	const int size = 5;
	int arr[size] = {1, 2, 3, 4, 5};	
	int min = arr[0];
	int min_ind = 0;
	for (int i = 0; i < size; ++i)
	{	
		if (min > arr[i])
		{	
			min = arr[i];
			min_ind = i;
		}
	}
//	std::swap (arr[min_ind], arr[size - 1]);
	int tmp = arr[min_ind];
	arr[min_ind] = arr[size - 1];
	arr[size - 1] = tmp;
	min = arr[0];
	for (int i = 0; i < size - 1; ++i)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	std::cout << "The second minimum number = " << min << std::endl;
}
