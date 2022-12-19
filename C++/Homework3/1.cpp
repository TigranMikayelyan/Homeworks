// Իրականացնել բինար որոնման ալգորիթմը զանգվածի համար` իտերատիվ և ռեկուրսիվ տարբերակներով։
// Iterative

#include <iostream>

int binary_search(int* arr, int size, int num)
{	
	int first = 0;
	int last = size;	
	while (first <= last)
	{	
		int mid = last - (last - first) / 2;
		if (num == arr[mid])
		{	
			return mid;
		}	
		else if (num > arr[mid])
		{	
			first = mid + 1;	
		}
		else
		{	
			last = mid - 1;
		}
	}
	return num;
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
	std::cout << "The number's index is " << binary_search(arr, size, num) << std::endl;	
}
