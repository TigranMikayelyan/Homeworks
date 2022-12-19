// Ստեղծել Student ստրուկտուրա, որը պարունակում է անուն, ազգանուն, տարիք, առարկաների անվանումներ։ Ստեղծել ստրուկտուրայի օբյեկը, մուտքագրել անդամների արժեքները։

#include <iostream>

struct Student
{
	std::string name;
	std::string surname;
	int age;
	std::string subject1;	
	std::string subject2;
	std::string subject3;
} pupil;

int main()
{
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
	std::cout << "Pupil name = " << pupil.name << std::endl;
	std::cout << "Pupil surname = " << pupil.surname << std::endl;
	std::cout << "Pupil age = " << pupil.age << std::endl;
	std::cout << "First subject = " << pupil.subject1 << std::endl;
	std::cout << "Second subject = " << pupil.subject2 << std::endl;
	std::cout << "Third subject = " << pupil.subject3 << std::endl;
}
