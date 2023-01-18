// Իրականացնել ֆունկցիա, որը ստանում է ցանկացած հիշողության տիրույթում ստեղծված զանգված և նրա չափսը։ Ֆունկցիան փոխանցված զանգվածի էլեմենտները պատճենում է դինամիկ զանգվածի մեջ և վերադարձնում ստացված զանգվածի հասցեն։ (Նայել vector տվյալների կառուցվածքի համար սահմանված operator=-ի աշխատանքի սկզբունքը)

#include <iostream>

int* address(int*, int);

int main()
{
	const int size = 5;
	int arr[size];
	std::cout << "Enter array elements" << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}
	int* main_adr = address(arr, size);
	std::cout << "Address of the dynamic array = " << main_adr << std::endl;
	std::cout << "Dynamic array = ";
	for (int i = 0; i < size; ++i)
	{
		std::cout << main_adr[i] << " ";
	}
	std::cout << std::endl;
	delete[] main_adr;
	main_adr = nullptr;
}

int* address(int* arr, int size)
{
	int* adr = new int[size];
	for (int i = 0; i < size; ++i)
	{
		adr[i] = arr[i];
	}
	return adr;
}
