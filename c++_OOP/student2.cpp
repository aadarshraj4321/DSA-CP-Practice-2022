

class  Student
{

public:
	int age;
	int rollNumber;

private:
	int id;


public:

	void display()
	{
		std::cout << age << " " << rollNumber << " " << id;
	}


	int  getID()
	{
		return id;
	}


	void setID(int a)
	{
		id = a;
	}


	// Default Constructor
	Student()
	{
		std::cout << "Default constructor called\n";
	}


	// Parametrized Constructor 
	Student(int rollNumber)
	{
		this->rollNumber = rollNumber;
	}


	~Student()
	{
		std::cout << "Destructor called\n";
	}
};