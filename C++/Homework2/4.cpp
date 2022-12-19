// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 Ֆիբոնաչիի առաջին տասը թվերն են։ Գրել ծրագիր, որը հաշվում է Ֆիբոնաչիի թվերի զույգ արժեքների գումարը։ Դիտարկել միայն այն թվերը, որոնց արժեքը չի գերազանցում 4 միլիոնը։


#include <iostream>

int main()
{	
	int f1 = 0;
	int f2 = 1;
	int fin = 0;
	int num;
	long sum = 0;
	std::cout << "Enter a number " << std::endl;
	std::cin >> num;
	fin = f1 + f2;
	while(fin <= num)		
	{
		if (fin % 2 == 0)
		{	
			//std::cout << fin << " ";
			sum += fin;
		}
		f1 = f2;
		f2 = fin;
		fin = f1 + f2;
	}
	std::cout << sum << std::endl;
}

		
