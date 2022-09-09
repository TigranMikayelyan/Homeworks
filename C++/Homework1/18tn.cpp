// Իրականացնել ֆունկցիա, որը ստանում է թվային զանգված և սորտավորում այն՝ օգտագործելով bubble sort ալգորիթմը։

#include <iostream>

void bubble_sort(int arr[], int size) // declaration
{
	for (int i = 0; i < size - 1; ++i)    // definition
	{	  
		for (int j = 0; j < size - i - 1; ++j)   
		{
			if(arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;  // swap (arr[j], arr[j + 1])
			}			
		}
	}	
}	

int main()
{	
	int size = 7;
	int arr[size];
	std::cout << "Enter array elements " << std::endl;
	for (int i = 0; i < size; ++i)
	{	
		std::cin >> arr[i];
	}
	bubble_sort(arr, size); // function call
	for (int j = 0; j < size; ++j)
	{	
		std::cout << arr[j];
	}
}
