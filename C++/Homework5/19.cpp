// Ստեղծել հաշվիչ ծրագիր, որը մուտքագրում է երկու թվեր եւ գործողության սիմվոլը։ Օրինակ՝ 4, 5 եւ ‘+’։ Կատարել համապատասխան թվաբանական գործողությունը թվերի հետ ըստ մուտքագրված գործողության սիմվոլի եւ տպել արդյունքը էկրանին։

#include <iostream>

int main()
{
	int num1 = 0;	
	std::cout << "Enter the first number " << std::endl;
	std::cin >> num1;
	int num2 = 0;
	std::cout << "Enter the second number " << std::endl;
	std::cin >> num2;
	char sym;	
	std::cout << "Enter an operator " << std::endl;
	std::cin >> sym;
	if (sym == '+')
	{
		std::cout << "Result = " << num1 + num2 << std::endl;
	}
	if (sym == '-')
	{
		std::cout << "Result = " << num1 - num2 << std::endl;
	}
	if (sym == '*')
	{
		std::cout << "Result = " << num1 * num2 << std::endl;
	}
	if (sym == '/')
	{
		std::cout << "Result = " << num1 / num2 << std::endl; 
	}
	if (sym != '+' && sym != '-' && sym != '*' && sym != '/')
	{
		std::cout << "ERROR " << std::endl;
	}
}
