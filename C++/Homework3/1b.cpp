// Իրականացնել բինար որոնման ալգորիթմը զանգվածի համար` իտերատիվ և ռեկուրսիվ տարբերակներով։
// Recursive

#include <iostream>

int binary_search(int* arr, int num, int first, int last)
{
	if (first <= last)
	{
		int mid = last - (last - first) / 2;	
		if (num == arr[mid])
		{	
			return mid;	
		}
		else if (num > arr[mid])
		{	
			return binary_search(arr, num, mid + 1, last);
		}
		else
		{	
			return binary_search(arr, num, first, mid - 1);
		}
	}
	return -1;
}

int main()
{
	const int size = 5;
	int arr[size];
	std::cout << "Enter array elements " << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}
	int num;	
	std::cout << "Enter a number " << std::endl;
	std::cin >> num;
	std::cout << "The number's index is " << binary_search(arr, num, 0, size) << std::endl;
}
