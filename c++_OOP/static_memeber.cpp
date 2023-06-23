

class Student
{
	public:
		int rollNumber;
		int age;
		static int totalStudents; // total number of students present

		Student()
		{
			totalStudents++;
		}

};


int Student :: totalStudents = 0; // initialze the static data members