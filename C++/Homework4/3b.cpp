// Հայտարարեք char տիպի զանգված և սկզբնարժեքավորեք այն “CheeseBurger” արտահայտությամբ:
// b. Այդ զանգվածի մեջից գտնել ըստ ASCII աղյուսակի ամենամեծ սիմվոլի արժեքը և տպել էկրանին։

#include <iostream>

int main()
{	
	const int size = 12;
	char* arr = "CheeseBurger";
	int max = arr[0]; 
	 // char max = arr[0]; // u	
	for (int i = 0; i < size; ++i)
	{	
		if (max < arr[i])
		{	
			max = arr[i];	
		}
	}
	std::cout << "Max symbol's value = " << max << std::endl;
}		
