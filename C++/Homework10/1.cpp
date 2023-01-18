// Հայտարարել Student անունով stuct, որն խմբավորում է անունը, ազգանունը, տարիքը և հինգ առարկաների անվանումները: Թույլ տվեք օգտվողին մուտքագրել տվյալները:

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
}st;

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
	std::cout << "Student's name = " << st.name << std::endl;
	std::cout << "Student's surname = " << st.surname << std::endl;
	std::cout << "Student's age = " << st.age << std::endl;
	std::cout << "Student's first subject = " << st.subj1 << std::endl;
	std::cout << "Student's second subject = " << st.subj2 << std::endl;
	std::cout << "Student's third subject = " << st.subj3 << std::endl;
	std::cout << "Student's fourth subject = " << st.subj4 << std::endl;
	std::cout << "Student's fifth subject = " << st.subj5 << std::endl;
}
