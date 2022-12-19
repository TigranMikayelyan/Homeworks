// Իրականացնել ֆունկցիա, որը ստանում է թվային զանգված և սորտավորում այն՝ օգտագործելով bubble sort ալգորիթմը։

#include <iostream>

void bubble_sort(int* arr, int size) 
{
	for (int i = 0; i < size; ++i)  
	{	  
		for (int j = 0; j < size - 1; ++j)   
		{
			if(arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}			
		}
	}	
}	

int main()
{	
	const int size = 7;
	int arr[size];
	std::cout << "Enter array elements " << std::endl;
	for (int i = 0; i < size; ++i)
	{	
		std::cin >> arr[i];
	}
	bubble_sort(arr, size);
	std::cout << "Bubble sorted elements = ";
	for (int j = 0; j < size; ++j)
	{	
		std::cout << arr[j] << " ";
	}
	std::cout << std::endl;
}
