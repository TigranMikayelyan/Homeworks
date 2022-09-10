// Իրականացնել to_upper_case(string) ֆունկցիա, որը ստանում է տող (char*), ձևափոխում և վերադարձնում է նույն տողը, որտեղ բոլոր տառերը մեծատառ են։

#include <iostream>

char* upper(char* arr)
{
	int size = strlen(arr);
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] >= 97 && arr[i] <= 122)
		{
			arr[i] = arr[i] - 32;
		}
		else
		{
			arr[i] = arr[i] + 32;
		}
	}
	return arr;
}
int main()
{
    	const int size = 20;
	char arr[size];
	std::cout << "Enter a string " << std::endl;
	std::cin >> arr;
	std::cout << upper(arr) << std::endl; 
}

