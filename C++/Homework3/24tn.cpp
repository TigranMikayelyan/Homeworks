// Իրականացնել char* strcat(char* s1, char* s2); ֆունկցիան, որը ստանում է երկու C տողեր և կոնկատենացնում (միացնում) տողերը իրար՝ պահելով առաջին արգումենտում։

#include <iostream>

char* strcat(char* destination, const char* source)
{
	int size = strlen(destination);
	int i = 0;
	for(i = 0; destination[i] != '\0'; ++i){}
	for (int j = 0; j < source[j] != '\0'; ++j, ++i)
	{
		destination[i] = source[j];
	}
	destination[i] = '\0';
	return destination;
}
int main()
{
	const int size = 50;
	char destination[size];
	std::cout << "Enter the first string " << std::endl;	
	std::cin >> destination;
	char source[size];
	std::cout << "Enter the second " << std::endl;
	std::cin >> source;	
	std::cout << "Concatenated string: " << strcat(destination, source) << std::endl;
}	
