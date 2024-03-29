

class Student
{
	int age;
	char *name;


	public:
		Student(int age, char *name)
		{
			this->age = age;
			// Shallow Copy
			//this->name = name;
		
			// Deep Copy
			this->name = new char[strlen(name) + 1];
			strcpy(this->name, name);
		}

		void display()
		{
			std::cout << name << " " << age << '\n';
		}



		// Copy Constructor is Shallow Copy
		Student(Student const &s)
		{
			this->name = s.name;
			this->age = s.age; // Shallow Copy

			// Deep Copy
			this->name = new char[strlen(s.name) + 1];
			strcpy(this->name, s.name);
		}
};