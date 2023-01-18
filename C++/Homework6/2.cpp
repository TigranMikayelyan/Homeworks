// Իրականացնել ռեկուրսիվ ֆունկցիա, որը ընդունում է սիմվոլների զանգված որպես արգումենտ և ստանում է այդ զանգվածի շրաջված տարբերակը, նույն զանգվածի մեջ։

#include <iostream>

char* reverse(char* arr, int i = 0)
{
	int size = strlen(arr);	
	if (i < size / 2)
	{	
		int tmp = arr[i];
		arr[i] = arr[size - i - 1];	
		arr[size - i - 1] = tmp;
		reverse(arr, i + 1);
	}
	return arr;
}

int main()
{
	const int size = 30;	
	char arr[size];
	std::cout << "Enter a string " << std::endl;	
	std::cin >> arr;
	std::cout << "Reversed string = " << reverse(arr) << std::endl;
}
