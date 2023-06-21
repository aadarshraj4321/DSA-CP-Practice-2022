#include<iostream>
#include "student2.cpp"
using namespace std;



int main()
{

	std::cout << "Statically Objects" << '\n';
	// Create objects statically
	Student s1;
	Student s2, s3, s4;


	s1.age = 19;
	s1.rollNumber = 101;
	//s1.id = 1;
	s1.setID(1);
	std::cout << s1.age << " " << s1.rollNumber << " " << s1.getID() << '\n';
	//s1.display();


	std::cout << "Dynamically Objects" << '\n';

	// Create objects Dynamically
	Student * s5 = new Student;
	s5->age = 20;
	s5->rollNumber = 1011;
	s5->setID(2);
	std::cout << s5->age << " " << s5->rollNumber << " " << s5->getID() << '\n';
	//s5->display();



	std::cout << "--------------------\n";

	Student *s6 = new Student;
	Student *s7 = new Student(36);
	s7->display();


}