// [**] Իրականացնել հաշվիչ ծրագիր, որն օգտագործում է std::map և ֆունկցիայի ցուցիչներ։ Ֆունկցիայի ցուցիչները հղվում են համապատասխան թվաբանական գործողությունը կատարող ֆունկցիայի վրա։

#include <iostream>
#include <map>

int add(int num1, int num2)	
{	
	return num1 + num2;
}
int sub(int num1, int num2)
{	
	return num1 - num2;
}
int mul(int num1, int num2)
{	
	return num1 * num2;
}
int Div(int num1, int num2)
{
	return num1 / num2;
}
int main()
{
	std::map <char, int (*) (int, int)> result;
	int num1 = 0;
	int num2 = 0;
	char symbol = 0;	
	std::cout << "Enter the first number " << std::endl;
	std::cin >> num1;	
	std::cout << "Enter the second number " << std::endl;
	std::cin >> num2;	
	std::cout << "Enter an operator " << std::endl;
	std::cin >> symbol;
	result['+']= &add;	
	result['-'] = &sub;	
	result['*'] = &mul;	
	result['/'] = &Div;	
	std::cout << "Result = " << result[symbol](num1, num2) << std::endl;
}					
