// Տրված նախադասության համար դուրս բերել եւ տպել բոլոր թվերը։

#include <iostream>

int main()
{
	std::string sent;
	std::cout << "Enter the sentence" << std::endl;	
	getline(std::cin, sent);
	std::string other;
	int i = 0;
	while (i < sent.size())	
	{
		if (sent[i] >= 48 && sent[i] <= 57)
		{
			other.push_back(sent[i]);
		}
		++i;
	}
	std::cout << "Numbers of the sentence = " << other << std::endl;
}
