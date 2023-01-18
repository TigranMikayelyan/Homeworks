// Ունենալով նախորդ խնդրի Student երկու օբյեկտների, ստեղծեք նոր օբյեկտ, որը կազմված կլինի այդ երկու օբյեկտներից: Այն կվերցնի առաջին օբյեկտի անունը, երկրորդ օբյեկտի ազգանունը, առաջին օբյեկտի տարիքը և օբյեկտի առարկաները:

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
	Student st3;
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
	st3.name = st.name;
	st3.surname = st2.surname;
	st3.age = st.age;
	st3.subj1 = st.subj1;
	st3.subj2 = st.subj2;
	st3.subj3 = st.subj3;
	st3.subj4 = st.subj4;
	st3.subj5 = st.subj5;
	std::cout << "The third student's name = " << st3.name << std::endl;
	std::cout << "The third student's surname = " << st3.surname << std::endl;
	std::cout << "The third student's age = " << st3.age << std::endl;
	std::cout << "The third student's first subject = " << st3.subj1 << std::endl;
	std::cout << "The third student's second subject = " << st3.subj2 << std::endl;
	std::cout << "The third student's third subject = " << st3.subj3 << std::endl;
	std::cout << "The third student's fourth subject = " << st3.subj4 << std::endl;
	std::cout << "The third student's fifth subject = " << st3.subj5 << std::endl;
	
}
