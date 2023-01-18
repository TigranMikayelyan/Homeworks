// Հաշվել տրված զանգվածում բոլոր թվերի կրկնությունների քանակը։ Օրինակ, եթե տրված է [1, 1, 2, 3, 4, 4, 5] զանգվածը, ապա ծրագիրը պետք է տպի էկրանին "1: 2, 2: 1, 3: 1, 4: 2, 5: 1" (կրկնությունների քանակը)։

#include <iostream>

int main()
{
	const int size = 7;
	int arr[size];
	int count = 0;
	std::cout << "Enter array elements " << std::endl;
	for (int i = 0; i < size; ++i)
	{	
		std::cin >> arr[i];
	}
	for (int j = 0; j < size; ++j)
	{	
		count = 0;
		int tmp = arr[j];
		while (tmp == arr[j]) 
		{
			++count;
			++j;
		}
		--j;
		std::cout << arr[j] << ":" << count << " " << std::endl;
	}
}
