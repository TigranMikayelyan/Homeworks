// Իրականցնել ֆունկցիա, որը NxM (N քանակությամբ տող և M քանակությամբ սյուն) չափանի դինամիկ մատրիցի բոլոր զույգ էլեմնտները կհեռացնի։ (Կարող եք օգտվել ձեր կողմից իրականացված erase ֆունկցիայից)։

#include <iostream>

void erase(int**, int);
int count_of_odd(int**, int);

int main()
{
	const int size = 3;
	int** arr = new int*[size];
	for (int i = 0; i < size; ++i)
	{
		arr[i] = new int [size];
	}
	std::cout << "Enter the matrix" << std::endl;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			std::cin >> arr[i][j];
		}
	}
	erase(arr, size);
	for (int i = 0; i < size; ++i)
	{
		delete[] arr[i];
	}
	delete[] arr;
	arr = nullptr;
}

int count_of_odd(int** arr, int size)
{
	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if (arr[i][j] % 2)
			{
				++count;
			}
		}
	}
	return count;
}

void erase(int** arr, int size)
{
	int size2 = count_of_odd(arr, size);
	int** new_arr = new int*[size2];
	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if (arr[i][j] % 2 == 1)
			{
				new_arr[i][count++] = arr[i][j];
			}
		}
	}
	for (int i = 0; i < size2; ++i)
	{
		for (int j = 0; j < size2; ++j)
		{
			std::cout << new_arr[i][j] << "  ";
		}
	}
}
