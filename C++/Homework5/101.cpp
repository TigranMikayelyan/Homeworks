// Տրված նախադասության համար տպել ամենակարճ տողը։

#include <iostream>

int main()
{
	std::string sentence;
	std::cout << "Enter the sentence" << std::endl;
	getline(std::cin, sentence);
	int min = ' ';
	std::string arr;
	for (int i = 0; i < sentence.size(); ++i)	
	{
		if (sentence[i] == min)
		{
			arr = sentence[i];
		}
		std::cout << arr;
	}
}
