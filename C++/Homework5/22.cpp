// Մուտքագրել տող։ Տողի բոլոր սիմվոլները դարձնել մեծատառ։ Արդյունքը տպել էկրանին։

#include <iostream>

int main()
{
	const int size = 30;
	char arr[size];
	std::cout << "Enter a string " << std::endl;
	std::cin >> arr;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] >= 97 && arr[i] <= 122)	
		{
			arr[i] = arr[i] - 32;
		}
	}
	std::cout << "Changed string = " << arr << std::endl;
}
