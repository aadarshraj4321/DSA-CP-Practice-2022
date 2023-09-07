#include<bits/stdc++.h>



class Student
{
	public:
		int regNumber;
		std::string name;


		void printDisplay()
		{
			std::cout << "Student Class\n";
		}

		void printData()
		{
			std::cout << "Reg Number: " << regNumber << '\n';
			std::cout << "Student Name: " << name << '\n';
		}
};



class Teacher
{
	public:
		int regNumber;
		std::string name;

		void printDisplay()
		{
			std::cout << "Teacher Class\n";
		}

		void printData()
		{
			std::cout << "Reg Number: " << regNumber << '\n';
			std::cout << "Teacher Name: " << name << '\n';
		}

};



class TA : public Teacher, public Student
{

};



int main()
{
	TA t;

	t.Student :: printDisplay();
	t.Teacher :: printDisplay();

	std::cout << "======================\n";

	t.Student :: name = "Aadarsh";
	t.Student :: regNumber = 010101;

	t.Teacher :: name = "Praveen";
	t.Teacher :: regNumber = 0120010;

	t.Student :: printData();
	t.Teacher :: printData();

	return 0;
}