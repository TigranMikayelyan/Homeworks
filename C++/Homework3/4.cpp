// Իրականացնել to_upper_case(string) ֆունկցիա, որը ստանում է տող (char*), ձևափոխում և վերադարձնում է նույն տողը, որտեղ բոլոր տառերը մեծատառ են։

#include <iostream>

char* upper_case(char* str)
{	
	int size = strlen(str);
	for (int i = 0; i < size; ++i)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}	
	}
	return str;
}
int main()
{
	const int size = 50;
	char str[size];
	std::cout << "Enter a string " << std::endl;
	std::cin >> str;
	std::cout << "Returned string = " << upper_case(str) << std::endl;
}
			
	
	
				
				
			

	
				

