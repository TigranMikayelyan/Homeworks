// Իրականացնել բինար որոնման ալգորիթմը զանգվածի համար` իտերատիվ և ռեկուրսիվ տարբերակներով։
// Recursive

#include <iostream>

int binary_search(int* arr, int num, int first, int last)
{
	if (first <= last)
	{
		int mid = last - (last - first) / 2;
		if (arr[mid] == num)
		{
			return mid;
		}	
		else if (arr[mid] < num)
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
	const int size = 7;	
	int arr[size] = {1, 2, 3, 4, 5, 6, 7};
	int num;
	std::cout << "enter a number " << std::endl;	
	std::cin >> num;
	std::cout << binary_search(arr, num, 0, size) << std::endl;
}
