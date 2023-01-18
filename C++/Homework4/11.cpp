// Գրիր ծրագիր, որը կստուգի երկու նույն չափսի զանգվածները նույնն են, թե ոչ։ Այսինքն արդյոք բոլոր համապատասխանող ինդեքսներով արժեքները համընկնում են թե ոչ։

#include <iostream>

int main()
{
	const int size = 5;
	int arr1[size] = {1, 2, 3, 4, 5};
	const int size1 = 5;
	int arr2[size1] = {45, 78, 98, 23, 34};
	for (int i = 0; i < size; ++i)
	{
		if (arr1[i] == arr2[i])
		{	
			std::cout << "These are same arrays " << std::endl;
		}
		else
		{	
			std::cout << "These are different arrays " << std::endl;
		}
	}
}
