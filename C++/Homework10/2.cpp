// Նախորդ խնդրի հիման վրա ստեղծեք երկու Student օբյեկտ և տպեք այն օբյեկտի անունն ու ազգանունը, ով տարիքով ավելի մեծ է:

#include <iostream>

struct Student
{
	std::string name;	
	std::string surname;	
	int age;
	std::string subj1;
	std::string subj2;
	std::string subj3;
	std::string subj4;
	std::string subj5;
}st, st2;

int main()
{
	std::cout << "Enter the student's name" << std::endl;
	std::cin >> st.name;
	std::cout << "Enter the student's surname" << std::endl;
	std::cin >> st.surname;
	std::cout << "Enter the student's age" << std::endl;
	std::cin >> st.age;
	std::cout << "Enter the student's first subject" << std::endl;
	std::cin >> st.subj1;
	std::cout << "Enter the student's second subject" << std::endl;
	std::cin >> st.subj2;
	std::cout << "Enter the student's third subject" << std::endl;
	std::cin >> st.subj3;
	std::cout << "Enter the student's fourth subject" << std::endl;
	std::cin >> st.subj4;
	std::cout << "Enter the student's fifth subject" << std::endl;
	std::cin >> st.subj5;
	std::cout << "Enter the second student's name" << std::endl;
	std::cin >> st2.name;
	std::cout << "Enter the second student's surname" << std::endl;
	std::cin >> st2.surname;
	std::cout << "Enter the second student's age" << std::endl;
	std::cin >> st2.age;
	std::cout << "Enter the second student's first subject" << std::endl;
	std::cin >> st2.subj1;
	std::cout << "Enter the second student's second subject" << std::endl;
	std::cin >> st2.subj2;
	std::cout << "Enter the second student's third subject" << std::endl;
	std::cin >> st2.subj3;
	std::cout << "Enter the second student's fourth subject" << std::endl;
	std::cin >> st2.subj4;
	std::cout << "Enter the second student's fifth subject" << std::endl;
	std::cin >> st2.subj5;
	if (st.age > st2.age)
	{
		std::cout << "Student's name = " << st.name << std::endl;
		std::cout << "Student's surname = " << st.surname << std::endl;
	}
	else
	{
		std::cout << "Student's name = " << st2.name << std::endl;
		std::cout << "Student's surname = " << st2.surname << std::endl;
	}
}

