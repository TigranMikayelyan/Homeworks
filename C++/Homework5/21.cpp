// Մուտքագրել օգտագործողի անունը եւ հեռացնել բոլոր ձայնավորները։ Արդյունքը տպել էկրանին։

#include <iostream>

int is_vowel(char ch)
{
	switch(ch)
	{
		case 'A':
		case 'a':
		case 'I':
		case 'i':
		case 'U': 
		case 'u':
		case 'O':
		case 'o':
		case 'E':
		case 'e':
		return 1;
		break;
		default :
		return 0;
	}	
}

int main()
{
	const int size = 30;
	char arr[size];	
	char arr2[size];
	std::cout << "Enter a string " << std::endl;
	std::cin >> arr;
	int i = 0;
	int j = 0;
	for (i = 0, j = 0; arr[i] != '\0'; ++i)
	{
		if (!is_vowel(arr[i]))
		{
			arr2[j++] = arr[i];
		}
	}
	arr2[j] = '\0';
	std::cout << "String without vowels = " << arr2 << std::endl;
}
