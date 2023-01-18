// 10. Ստեղծել հաշվիչ ծրագիր, որը մուտքագրում է երկու թվեր և գործողության սիմվոլը։ Օրինակ՝ 4, 5 և ‘+’։ Կատարել համապատասխան թվաբանական գործողությունը թվերի հետ ըստ մուտքագրված գործողության սիմվոլի և տպել արդյունքը էկրանին։

#include <iostream>

int main ()
{
	double num1;
	double num2;
	char symbol;
	std::cout << "Enter the first num"  << std::endl;
	std::cin >> num1;
	std::cout << "Enter the second num" << std::endl;
	std::cin >> num2;
	std::cout << "Enter the operator" << std::endl;
	std::cin >> symbol;
	if (symbol == '+')
	{
		std::cout << num1 + num2 << std::endl;
		return 0;
	}
	if (symbol == '-')
	{	
		std::cout << num1 - num2 << std::endl;
		return 0;
	}
	if (symbol == '*')
	{
		std::cout << num1 * num2 << std::endl;
		return 0;
	}
	if (symbol == '/')
	{
		std::cout << num1 / num2 << std::endl;
		return 0;
	}
		std::cout << "errorrrr" << std::endl;
}
/*
#include <iostream>

int main ()
{
        double fir;
        double sec;
        char sym;
        std::cout << "Enter the first num" << std::endl;
        std::cin >> fir;
        std::cout << "Enter the second num" << std::endl;
        std::cin >> sec;
        std::cout << "Enter the operator" << std::endl;
        std::cin >> sym;
        switch (sym)
        {
            case '+':
            std::cout << fir + sec;
            break;
			case '-':
			std::cout << fir - sec;
			break;
			case '*':
			std::cout << fir * sec;
			break;
			case '/':
			std::cout << fir / sec;
			break;
			default:
			std::cout << "error " << std::endl;
		}
} */    	
