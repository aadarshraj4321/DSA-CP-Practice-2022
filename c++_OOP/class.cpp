#include<bits/stdc++.h>
// include Student.cpp from same folder 
#include "Student.cpp"


int main()
{
	// Create object statically
	Student s1;
	Student s2, s3, s4;
	//std::cout << sizeof(s1) << " " << sizeof(s2) << " " << sizeof(s3) << " " << sizeof(s4) << '\n';
	//s1.age = 20;
	s1.rollNumber = 101;
	//std::cout << s1.age << " " << s1.rollNumber << '\n';

	// Create objects dynamically
	Student *s5 = new Student;
	//std::cout << sizeof(s5) << '\n';
	//s5->age = 19;
	s5->rollNumber = 102;
	//std::cout << s5->age << " " << s5->rollNumber << '\n';

	std::cout << "---------------------------\n";

	Student *s6 = new Student;
	s6->setAge(100);
	s6->rollNumber = 110;
	s6->displayData();
	std::cout << '\n';
	std::cout << s6->getAge() << '\n';
}
