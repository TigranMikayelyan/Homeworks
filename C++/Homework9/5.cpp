// Իրականացնել ֆունկցիա, որը ստանում է դինամիկ զանգված, նրա չափսը և որոշակի ինդեքս։ Ֆունկցիան վերադարձնում է դինամիկ զանգված, որի մեջ բացկայելու է փոխանցված զանգվածի այն էլեմենտը, որի ինդեքսը համապատասխանում է փոխանցված ինդեքսի հետ։ (Նայել vector տվյալների կառուցվածքի համար սահմանված erase աշխատանքի սկզբունքը)

#include <iostream>

int* erase(int*, int, int);

int main()
{
	const int size = 5;
	int* arr = new int[size];
	std::cout << "Enter array elements" << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}
	int index = 0;
	std::cout << "Enter an index" << std::endl;
	std::cin >> index;
	if (index >= size || index < 0)
	{
		std::cout << "There isn't this index in this array" << std::endl;
		return 0;
	}
	int* ptr = erase(arr, size, index);
	std::cout << "Address of the dynamic array = " << ptr << std::endl;
	std::cout << "New array with erased element = ";
	for (int i = 0; i < size - 1; ++i)
	{
		std::cout << ptr[i] << " ";
	}
	std::cout << std::endl;
	delete[] ptr;
	ptr = nullptr;
}

int* erase(int* arr, int size, int index)
{	
	int* arr_2 = new int[size - 1];
	for (int i = 0; i < size; ++i)
	{
		if (i < index)
		{
			arr_2[i] = arr[i];
		}
		if (i >= index)
		{
			arr_2[i] = arr[i + 1];
		}
	}
	return arr_2;
}
