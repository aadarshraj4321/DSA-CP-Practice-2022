

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
};