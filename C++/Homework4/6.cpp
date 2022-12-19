// Գրեք ծրագիր, որը գտնում և տպում է զանգվածի երրորդ ամենամեծ տարրը: Այսինքն՝ տվյալ տարրը մեծ է լինելու զանգվածի բոլոր էլեմենտներից, բացառությամբ՝ երեքից (ինքը իրենից երլկրորդ մեծագույնից և առաջին մեծագույնից)

#include <iostream>

int main()
{
	const int size = 5;
	int arr[size] = {1, 2, 3, 4, 5};
	int min = arr[0];
	int min_ind = 0;
	for (int i = 0; i < size; ++i)
	{	
		if (min > arr[i])
		{
			min = arr[i];
			min_ind = i;	
		}
	}
	int tmp = arr[min_ind];
	arr[min_ind] = arr[size - 2];
	arr[size - 2] = tmp;
	
min = arr[0];	
	for (int i = 0; i < size - 2; ++i)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	std::cout << "The third minimum number = " << min << std::endl;
}
