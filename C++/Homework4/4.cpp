// Գրեք ծրագիր, որը երկու չափսի զանգվածներ կմիավորի երրորդ զանգվածի մեջ: Այսինքն ստանալ զանգված, որը կպարունակի սկզբնական երկու զանգվածների բոլոր էլեմենտները։

#include <iostream>

int main()
{	
	const int size = 5;
	int arr1[size] = {1, 2, 3, 4, 5};
	int arr2[size] = {6, 7, 8, 9, 10};
	const int size1 = 10;
	int arr3[size1];
	std::cout << "Concatenated arrays = ";
	for (int i = 0,j = 0; i < size1; ++i)
	{
		if (i < size)
		{
			arr3[i] = arr1[i];
		}
		else 
		{
			arr3[i] = arr2[j];
			++j;
		}

	}
	for (int i = 0; i < size1; ++i) 
	{
		std::cout << arr3[i] << "  ";
	}
	std::cout << std::endl;
}
