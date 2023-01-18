// 3. Մուտքագրել չորս փոփոխականներ, տպել նվազագույնի արժեքը, եթե չորս փոփոխականների գումարը հավասար է զրոյի։

#include <iostream>

int main()
{      
        int one;
        int two;
        int three;
        int four;
        std::cout << "Enter the first number " << std::endl;
        std::cin >> one;
        std::cout << "Enter the second number " << std::endl;
        std::cin >> two;
        std::cout << "Enter the third number " << std::endl;
        std::cin >> three;
        std::cout << "Enter the fourth number " << std::endl;
        std::cin >> four;
        if (one + two + three + four == 0)
        {
                if (one < two && one < three && one < four)
                {
                        std::cout << one << std::endl;
                }
                else if (two < one && two < three && two < four)
                {
                        std::cout << two << std::endl;
                }
		else if (three < one && three < two && three < four)
                {
                        std::cout << three << std::endl;
                }
                else
                {
                        std::cout << four << std::endl;
                }
        }
        else
        {
                std::cout << "Error " << std::endl;
        }
}


