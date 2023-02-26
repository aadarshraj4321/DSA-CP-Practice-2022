

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
	Student(int rollNumber)
	{
		std::cout << "Constructor 2 Called" << '\n';
		this->rollNumber = rollNumber;
	}

	Student(int rollNumber, int age)
	{
		std::cout << "Constructor 3 Called" << '\n';
		this->rollNumber = rollNumber;
		this->age = age;
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