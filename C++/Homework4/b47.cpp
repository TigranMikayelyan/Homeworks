#include <iostream>

int main()
{	
	srand(time(0));
	const int size = 10;
	int arr[size];
	for (int i = 0; i < size; ++i)
	{
		arr[i] = 1 + rand() % 100;
	}
	int j = size - 1;
	int SIZE = size - 1;
	int arr1[size];
	int next = 0;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] % 2 == 0)
		{	
			arr1[SIZE] = arr[i];
			--SIZE;
		}	
		else
		{
			arr1[next] = arr[i];
			++next;
		}
	}
	for (int i = 0; i < size; ++i)
	{	
		std::cout << arr[i] << " ";
	}
} 
	
