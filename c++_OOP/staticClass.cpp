#include<bits/stdc++.h>


class School
{
	public:
		int regNumber;
		int rollNumber;

		static int totalStudents;
};


int School :: totalStudents = 0; 

int main()
{
	School s1;
	std::cout << s1.regNumber << " " << s1.rollNumber << '\n';

	s1.totalStudents = 11;

	std::cout << School:: totalStudents << '\n';

	return 0;
}