// Գրեք ծրագիր, որը թույլ է տալիս օգտվողին մուտքագրել երկու ցանկացած հիշողության տիրույթում ստեղծված զանգվածների (չափսերը կարող են չհամընկնել) տարրերի արժեքները։ Իրականցանել ֆունկցիա, որը կստանա այդ երկուզանգվծները և նրանց չափսերը։ Ֆունկցիան վերդարձնելու է դինամիկ զանգված որի սկզբի էլեմենտները համապատասխանելու են փոխանցված առաջին զանգվածի էլեմենտների հետ, իսկ հաջորդող էլեմենտները երկրորդ զանգվածի էլեմենտների հետ։ Ֆունկցիան կատարելու է երկու զանգվածների Concatenation։ (Նայել vector տվյալների կառուցվածքի համար սահմանված operator+-ի աշխատանքի սկզբունքը)

#include <iostream>

int* concatenation(int*, int*, int);

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
	int* dyn_ptr = concatenation(arr_1, arr_2, size);
	std::cout << "Address of the dynamic array = " << dyn_ptr << std::endl;
	std::cout << "Concatenated arrays = ";
	for (int i = 0; i < size + size; ++i)
	{
		std::cout << dyn_ptr[i] << " ";
	}
	std::cout << std::endl;
	delete[] arr_1;
	delete[] arr_2;
	delete[] dyn_ptr;
	arr_1 = nullptr;
	arr_2 = nullptr;
	dyn_ptr = nullptr;
}

int* concatenation(int* arr_1, int* arr_2, int size)
{
	int* new_arr = new int[size + size];
	int j = 0; 
	for (int i = 0; i < size; ++i)
	{
		new_arr[j++] = arr_1[i];
	}
	for (int i = 0; i < size; ++i)
	{
		new_arr[j++] = arr_2[i];
	}
	return new_arr;
}
