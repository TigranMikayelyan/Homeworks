// Իրականացնել ֆունկցիա, որը ստանում է երկու դինամիկ զանգված, նրանց չափերը։ Ֆունկցիան ստուգում է արդյոք երկու զնգվածների նույն ինդեքսը ունեցող բոլոր էլեմենտները հավասար են, թե՛ ոչ և վերադարձնում ստուգման արդյունքը։ (Նայել vector տվյալների կառուցվածքի համար սահմանված operator==-ի աշխատանքի սկզբունքը)

#include <iostream>

bool is_same(int*, int*, int);

int main()
{
	int size = 0;
	std::cout << "Enter the size" << std::endl;
	std::cin >> size;
	int* arr_1 = new int[size];
	int* arr_2 = new int[size];
	std::cout << "Enter the first array" << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr_1[i];
	}
	std::cout << "Enter the second array" << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr_2[i];
	}
	std::cout << std::boolalpha << is_same(arr_1, arr_2, size) << std::endl;
	delete[] arr_1;
	delete[] arr_2;
	arr_1 = nullptr;
	arr_2 = nullptr;
}

bool is_same(int* arr_1, int* arr_2, int size)
{
	for (int i = 0; i < size; ++i)
	{
		if (arr_1[i] != arr_2[i])
		{
			return false; 
		}
	}
	return true;
}
