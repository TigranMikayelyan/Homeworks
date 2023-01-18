// Գտնել եւ տպել զանգվածի տարրերի գումարի ու արտադրյալի միջին թվաբանականը։

#include <iostream>

int add(int* arr, int size)
{
	int sum = 0;
	int mul = 1;
	int i = 0;
	for (i = 0; i < size; ++i)
	{
		sum += arr[i];
		mul *= arr[i];
	}
	return (sum + mul) / i;
}

int main()
{
	const int size = 5;
	int arr[size];	
	std::cout << "Enter array elements" << std::endl;
	for (int i = 0; i < size; ++i)	
	{
		std::cin >> arr[i];
	}
	std::cout << "The arithmetic mean of the sum and product of the elements of the array = " << add(arr, size) << std::endl;
}
