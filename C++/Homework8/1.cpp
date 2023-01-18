// Գրել ծրագիր, որը թույլ կտա օգտվողին մոտքագրել ամբողջ թիվ։ Իրականացնել ֆունկցիա, որը ունի size անունով int տիպի պարամետր և վերադարձնում է size քանակությամբ էլեմենտներով դինամիկ ամբողջ թվային զանգված: Կատարել ֆունկցիայի կանչ մուտքագրված ամբողջ թիվը, որպես արգումենտ փոխանցելով։

#include <iostream>

int* dyn(int size)
{
	int* arr = new int[size];
	return arr;	
}

int main()
{
	int size = 0;
	std::cout << "Enter the size" << std::endl;
	std::cin >> size;
	int* arr = dyn(size);
	delete[] arr;
	arr = nullptr;
}
