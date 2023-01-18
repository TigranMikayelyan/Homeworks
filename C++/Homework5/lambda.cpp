#include <iostream>

bool is_even(int x)
{
	return x % 2 == 0;
}
bool is_odd(int x)
{
	return !is_even(x);
}
bool is_negative(int x)
{
	return x < 0;
}
int find(int* arr, int size, bool (*check)(int))
{
	for (int i = 0; i < size; ++i)
	{
		if(check(arr[i]))
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int arr[] = {3, 4, -2, 1};
	//std::cout << std::boolalpha << is_even(4) << std::endl;
	//std::cout << std::boolalpha << is_odd(3) << std::endl;
	//std::cout << std::boolalpha << is_negative(3) << std::endl;
	//std::cout << find(arr, 4, is_even) << std::endl;
	//std::cout << find(arr, 4, is_odd) << std::endl;
	//std::cout << find(arr, 4, is_negative) << std::endl;
	std::cout << find(arr, 4, [] (int x)  
	{ 
		return x > 0;
	});
}
