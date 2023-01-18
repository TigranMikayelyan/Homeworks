// Գրել ծրագիր, որը կգտնի NxM (N քանակությամբ տող և M քանակությամբ սյուն) չափանի մատրիցի փոքրագույն արժեքի ինդեքսները և կտպի էկրանին։

#include <iostream>

void matrix(int**, int);

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
	std::cout << "Min element's indexs of the matrix = "; 
	matrix(arr, size);
	for (int i = 0; i < size; ++i)
	{
		delete[] arr[i];
	}
	delete[] arr;
	arr = nullptr;
}

void matrix(int** arr, int size)
{
	int min = 0;
	int min2 = 0;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if (min > arr[i][j])
			{
				min = i;
				min2 = j;
			}
		}
	}
	std::cout << min << " " << min2 << std::endl;
}
