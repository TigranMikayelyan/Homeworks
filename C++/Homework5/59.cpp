// Ստեղծել հաշվիչ ծրագիր, որը մուտքագրում է երկու թվեր եւ գործողության սիմվոլը։ Օրինակ՝ 4, 5 եւ ‘+’։ Կատարել համապատասխան թվաբանական գործողությունը թվերի հետ ըստ մուտքագրված գործողության սիմվոլի եւ տպել արդյունքը էկրանին։
// With function

#include <iostream>

int calculator(int num1, int num2, char sym)
{
	switch (sym)
	{
		case '+' :
		return num1 + num2;
		case '-' :
		return num1 - num2;	
		case '*' :
		return num1 * num2;
		case '/' :
		return num1 / num2;
	}
	return -1;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	char sym = 0;
	std::cout << "Enter the first number" << std::endl;
	std::cin >> num1;
	std::cout << "Enter the second number" << std::endl;
	std::cin >> num2;
	std::cout << "Enter an operator" << std::endl;
	std::cin >> sym;
	std::cout << num1 << " " << sym << " " << num2 << " = " << calculator(num1, num2, sym) << std::endl;
}
