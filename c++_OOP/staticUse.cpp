#include<iostream>
#include<stdio.h>
#include "static_memeber.cpp"


int main()
{
	Student s1;
	std::cout << s1.age << " " << s1.rollNumber << '\n';
	std::cout << Student :: totalStudents << '\n';

	Student s2, s3, s4, s5, s6, s7;

	std::cout << "Total Students : " << Student :: totalStudents << '\n';
}