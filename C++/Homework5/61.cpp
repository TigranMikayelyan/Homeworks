// Մուտքագրել օգտագործողի անունը եւ հեռացնել բոլոր ձայնավորները։ Արդյունքը տպել էկրանին։
// With function

#include <iostream>

int vowel(char ch)
{
	switch (ch)
	{
		case 'A' :
		case 'a' :
		case 'I' :
		case 'i' :
		case 'U' :
		case 'u' :
		case 'O' :
		case 'o' :	
		case 'E' :
		case 'e' :
		return 1;
		break;
		default :
		return 0;
	}
}

void name(char* str)
{	
	int size = strlen(str);
	int i = 0;
	int j = 0;
	char str2[size];
	for (i = 0, j = 0; i < size; ++i)
	{
		if (!vowel(str[i]))
		{
			str2[j++] = str[i]; 			
		}
	}
	str2[j] = '\0';
	std::cout << "String without vowels = " << str2 << std::endl;
}

int main()
{
	const int size = 20;
	char str[size];	
	std::cout << "Enter a string" << std::endl;
	std::cin >> str;
	name(str);
}

