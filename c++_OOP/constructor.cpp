#include<bits/stdc++.h>
#include "Student.cpp"

int main()
{

	Student s1;
	s1.displayData();

	Student s2;

	Student *s3 = new Student;
	s3->displayData();

	std::cout << "Parametrized Constructor Constructor" << '\n';

	Student s4(111);
	s4.displayData();

	Student *s5 = new Student(222);
	s5->displayData();

	std::cout << "Parametrized Constructor with 2 paramter Called" << '\n';
	Student s6(112, 21);
	s6.displayData();

	Student *s7 = new Student(222, 18);
	s7->displayData();

	return 0;
}