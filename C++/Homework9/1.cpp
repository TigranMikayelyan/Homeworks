// Գրել ծրագիր, որը 100-ից փոքր բոլոր դրական պարզ թվերը կլցնի զանգվածի մեջ և կվերադարձնի ստացված զանգվածի հասցեն։ Զանգվածը պետք է լինի դինամիկ։ Զանգածի արժեքավորումը և թվի պարզ լինելու ստուգումը կատարել տարբեր ֆունկցիաների միջոցով։

#include <iostream>
#include <cmath>

bool is_simple(int num)
{
	for (int i = 2; i <= sqrt(num); ++i)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}

int size_func()
{
	int count = 0;
	for (int i = 2; i < 100; ++i)
	{
		if (is_simple(i))
		{
			++count;
		}
	}
	return count;
}

int* range(int* arr)
{
	int size = size_func();
	arr = new int[size];
	int j = 0;
	for (int i = 2; i < 100; ++i)
	{
		if (is_simple(i))
		{
			arr[j++] = i;	
		}
	}
	return arr;
}

int main()
{
	int* arr = range(arr);
	std::cout << "Address of the dynamic array = " << arr << std::endl;
	std::cout << "All prime numbers in range 0-100 = ";
	for (int i = 0; i < size_func(); ++i) 
	{
		std::cout << *(arr + i) << " ";
	}
	std::cout << std::endl;
	delete[] arr;
	arr = nullptr;
}
