// Իրականցնել ֆունկցիա, որը NxM (N քանակությամբ տող և M քանակությամբ սյուն) չափանի դինամիկ մատրիցի ցանկացած տողի մեծագույն արժեքների համար կստեղծի միաչափ դինամիկ զանգված։ Միաչափ զանգվածի i ինդեքսի էլեմենտի արժեքը հավասար է լինելու մատրիցի i ինդեքսի տակ գտնվող տողի (միաչափ զանգվածի) մեծագույն արժեքին։

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
	int max = arr[0][0];
	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if (max < arr[i][j])
			{
				++count;
			}
		}
	}
	//int* new_arr = new int[max]
	std::cout << count << std::endl;
}
