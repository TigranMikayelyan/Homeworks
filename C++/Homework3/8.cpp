// [*] Իրականացնել strmove(char* s, int n); ֆունկցիան, որը տրված s տողը ցիկլիկ տեղաշարժում է դեպի աջ n անգամ։ Օրինակ, strmove(“hello”, 2); կտեղաշարժի “hello”-ն 2 դիրքով դեպի աջ և կստանա “lohel”։

#include <iostream>

char* strmove(char* str, int num)
{	
	int size = strlen(str);
	char* ptr = new char[size];
	int j = 0;
	for(int i = size - num; i < size ; ++i)
	{	
		ptr[j] = str[i];	
		++j;
	}
	for (int i = 0; i < size - num; ++i)
	{
		ptr[j] = str[i];
		++j;
	}
	return ptr;
}
int main()
{
	const int size = 50;
	char str[size];	
	std::cout << "Enter a string " << std::endl;
	std::cin >> str;	
	int num;
	std::cout << "Enter a number " << std::endl;
	std::cin >> num;
	std::cout << strmove(str, num) << std::endl;
}	
