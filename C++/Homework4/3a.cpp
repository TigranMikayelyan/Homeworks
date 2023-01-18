// Հայտարարեք char տիպի զանգված և սկզբնարժեքավորեք այն “CheeseBurger” արտահայտությամբ:
// a. Այդ զանգվածի մեջից գտնել ըստ ASCII աղյուսակի ամենափոքր սիմվոլի արժեքը և տպել էկրանին։

#include <iostream>

int main()
{
	const int size = 12;
	char* arr = "CheeseBurger";
	//char min = arr[0]; B  
	int min = arr[0]; 
	for (int i = 0; i < size; ++i)
	{	
		if (min > arr[i])
		{	
			min = arr[i];	
		}
	}
	std::cout << "Min symbol's value = " << min << std::endl;
}
