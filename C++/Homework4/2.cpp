// Գրեք ծրագիր, որտեղ ցուցիչի մեջ պահված կլինի զանգվածի առաջին էլեմենտի հասցեն: Ցուցիչի օգնությամբ տպել զանգվածի տարրերը էկրանին։


#include <iostream>

int main()
{
	const int size = 5;
	int arr[size] = {1, 2, 3, 4, 5};
	int *brr = arr;
	for (int i = 0; i < size; ++i)	
	{	
		std::cout << *(brr++) << std::endl;
	}
}
