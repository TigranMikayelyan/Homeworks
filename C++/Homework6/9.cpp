// Գրեք ռեկուրսիվ ֆունկցիա, որը ստանում է սիմվոլների զանգված և վերադարձնում է true, եթե տողը palindrome է, իսկ հակառակ դեպքում՝ false:

#include <iostream>

bool palindrome(char* arr, int i)
{
	int size = strlen(arr);
	if (i == (size / 2)) 
	{
		return true;
	}
	return (arr[i] == arr[size - i - 1]) ? palindrome(arr, i + 1) : false;
}
int main()
{
	const int size = 30;
	char arr[size];
	int i = 0;
	std::cout << "Enter a string " << std::endl;
	std::cin >> arr;
	std::cout << std::boolalpha << palindrome(arr, i) << std::endl;
}
