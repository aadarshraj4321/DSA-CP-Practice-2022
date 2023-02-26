

class Student 
{
public:
	int rollNumber;
private:
	int age;

public:

	// Default Constructor
	Student()
	{
		std::cout << "Constructor Called" << '\n';
	}

	// Parametrized Constructor
	Student(int r)
	{
		std::cout << "Constructor 2 Called" << '\n';
		rollNumber = r;
	}

	Student(int r, int a)
	{
		std::cout << "Constructor 3 Called" << '\n';
		rollNumber = r;
		age = a;
	}

	void displayData()
	{
		std::cout << "Roll Number : " << rollNumber << " Age : " << age << '\n';
	}

	int getAge()
	{
		return age;
	}

	void setAge(int a)
	{
		if(a <= 0)
			return;
		age = a;
	}
};