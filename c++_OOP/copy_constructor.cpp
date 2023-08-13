#include<iostream>



class Student
{
	private:
		int regNo;

	public:
		Student(){};

		Student(int regNo)
		{
			this->regNo = regNo;
		}

		void getRegNo()
		{
			std::cout << "Reg No: " << regNo << '\n';
		}



};


int main()
{
	Student s1(12001227);
	s1.getRegNo();


	Student s2(s1);
	s2.getRegNo();


	return 0;
}