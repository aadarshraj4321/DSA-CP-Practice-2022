

class Student 
{
public:
	int rollNumber;
private:
	int age;

public:
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
		if(a < 0)
			return;
		age = a;
	}
};