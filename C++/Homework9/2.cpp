// Գրեք ծրագիր, որը թույլ է տալիս օգտվողին մուտքագրել երկու նույն չափսի, ցանկացած հիշողության տիրույթում ստեղծված զանգվածների տարրերի արժեքները։ Իրականացնել ֆունկցիա որը կստանա երկու զանգված և նրանց չափսը։ Ֆունկցիան վերադարձնելու է նոր դինամիկ զանգված, որի ցանկացած էլեմենտի արժեքը հավասար է լինելու այդ երկու զանգվածների համապատասխան ինդեքսով էլեմենտների արտադրյալին։

#include <iostream>

int* product(int*, int*, int);

int main()
{
	const int size = 5;
	int arr[size];
 	int arr2[size];
	std::cout << "Enter the first array" << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}
	std::cout << "Enter the second array" << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr2[i];
	}
	int* ptr_main = product(arr, arr2, size);
	std::cout << "Array elements product = ";
	for (int i = 0; i < size; ++i)
	{
		std::cout << ptr_main[i] << " ";  
	}	
	std::cout << std::endl;
	std::cout << "Address of the dynamic array = " << ptr_main << std::endl;
	delete[] ptr_main;
	ptr_main = nullptr;
}

int* product(int* arr, int* arr2, int size)
{
	int* ptr_d = new int[size];
	for (int i = 0; i < size; ++i)
	{		
		ptr_d[i] = arr[i] * arr2[i];
	}
	return ptr_d;
}


