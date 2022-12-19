// Ստեղծել երկու Student օբյեկտներ, մուտքագրել արժեքները ըստ նախորդ խնդրի։ Տպել այն ուսանողի անունը, ով մեծ է տարիքով։

#include <iostream>

struct Student
{
	std::string name;
	std::string surname;
	int age;
	std::string subject1;	
	std::string subject2;
	std::string subject3;
};

int main()
{
	Student pupil;
	Student pupil2;
	std::cout << "Enter student's name" << std::endl;
	std::cin >> pupil.name;	
	std::cout << "Enter student's surname" << std::endl;
	std::cin >> pupil.surname;
	std::cout << "Enter student's age" << std::endl;
	std::cin >> pupil.age;
	std::cout << "Enter the first school subject" << std::endl;
	std::cin >> pupil.subject1;
	std::cout << "Enter the second school subject" << std::endl;
	std::cin >> pupil.subject2;
	std::cout << "Enter the third school subject" << std::endl;
	std::cin >> pupil.subject3;
	std::cout << "Enter the second student's name" << std::endl;
	std::cin >> pupil2.name;	
	std::cout << "Enter the second student's surname" << std::endl;
	std::cin >> pupil2.surname;
	std::cout << "Enter the second student's age" << std::endl;
	std::cin >> pupil2.age;
	std::cout << "Enter the first school subject" << std::endl;
	std::cin >> pupil2.subject1;
	std::cout << "Enter the second school subject" << std::endl;
	std::cin >> pupil2.subject2;
	std::cout << "Enter the third school subject" << std::endl;
	std::cin >> pupil2.subject3;
	if (pupil.age > pupil2.age)
	{
		std::cout << pupil.name << std::endl;
	}
	else
	{
		std::cout << pupil2.name << std::endl;
	}
}
