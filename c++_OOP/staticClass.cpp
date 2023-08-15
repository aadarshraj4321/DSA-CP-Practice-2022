#include<bits/stdc++.h>


class School
{
	public:
		int regNumber;
		int rollNumber;

		static int totalStudents;

		School()
		{
			totalStudents++;
		}
};


int School :: totalStudents = 0; 

int main()
{
	// School s1;
	// std::cout << s1.regNumber << " " << s1.rollNumber << '\n';

	// s1.totalStudents = 11;

	// std::cout << School:: totalStudents << '\n';

	School s1, s2, s3, s4;
	std::cout << School :: totalStudents << '\n';

	School *s5 = new School;
	std::cout << School :: totalStudents << '\n';

	return 0;
}