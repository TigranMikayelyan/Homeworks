// Ստեղծել երկու Student օբյեկտներ, մուտքագրել արժեքները ըստ նախորդ խնդիրների։ Ստեղծել երրորդ օբյեկտը, որը կկառուցվի առաջին երկուսի հիման վրա։ Որպես անուն օգտագործել առաջին օբյեկտի անունը, որպես ազգանուն երկրորդ օբյեկտի ազգանունը, որպես տարիք առաջին երկու օբյեկտների տարիքների միջին թվաբանականը։

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
	Student pupil3;	
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
	pupil3.name = pupil.name;
	pupil3.surname = pupil2.name;	
	pupil3.age = (pupil.age + pupil2.age) / 2;
	std::cout << "Pupil name = " << pupil3.name << std::endl;
	std::cout << "Pupil surname = " << pupil3.surname << std::endl;
	std::cout << "Pupil age = " << pupil3.age << std::endl;
}
