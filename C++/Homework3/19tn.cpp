// Իրականացնել բինար որոնման ալգորիթմը զանգվածի համար` իտերատիվ և ռեկուրսիվ տարբերակներով։
// Iterative

#include <iostream>

int binary_search(int arr[], int size, int num)
{
	int first = 0;
	int last = size;
	while (first <= last)
	{
		int mid = last - (last - first) / 2;
		if (arr[mid] == num)
		{
			return mid;
		}	
		else if (arr[mid] < num)	
		{	
			first = mid + 1;
		}
		else
		{	
			last = mid - 1;
		}
	}
	return -1;	
}
int main()
{
	const int size = 7;
	int arr[size] = {1, 2, 3, 4, 5, 6, 7};
	int num;
	std::cout << "Type a number " << std::endl;
	std::cin >> num;
	std::cout << binary_search(arr, size, num) << std::endl;
}	
