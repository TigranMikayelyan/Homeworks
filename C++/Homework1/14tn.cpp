// Գտնել զանգվածի այն տարրերի քանակը, որոնք անմնացորդ բաժանվում են իրենց կարգահամարի (index) վրա

#include <iostream>

int main()
{
	const int size = 5;	
	int arr[size];  // = {1, 2, 3, 4, 5};initializer list
	int count = 0;
	std::cout << "Enter array elements " << std::endl;
	for (int i = 0; i < size; ++i)
	{	
		std::cin >> arr[i];
	}
	for (int j = 1; j < size; ++j)
	{	
		if (arr[j] % j == 0)
		{
			++count;
		}
	}
	std::cout << count << std::endl;
}
