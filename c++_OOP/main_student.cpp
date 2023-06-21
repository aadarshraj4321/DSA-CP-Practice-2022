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
	std::cout << s1.age << " " << s1.rollNumber << '\n';


	std::cout << "Dynamically Objects" << '\n';

	// Create objects Dynamically
	Student * s5 = new Student;
	s5->age = 20;
	s5->rollNumber = 1011;
	std::cout << s5->age << " " << s5->rollNumber << '\n';

}