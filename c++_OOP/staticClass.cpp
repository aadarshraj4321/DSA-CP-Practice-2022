#include<bits/stdc++.h>


class School
{
	private:
		static int totalStudents;

	public:
		int regNumber;
		int rollNumber;

		//static int totalStudents;

		School()
		{
			totalStudents++;
		}


		static int getTotalStudent()
		{
			return totalStudents;
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
	//std::cout << School :: totalStudents << '\n';

	School *s5 = new School;
	//std::cout << School :: totalStudents << '\n';

	std::cout << School :: getTotalStudent() << '\n';

	return 0;
}