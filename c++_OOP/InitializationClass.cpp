

class Students
{
	public:

		int age;
		int const rollNumber;


		Students(int a, int r) : age(a), rollNumber(r)
		{

		}

		void display()
		{
			std::cout << age << " " << rollNumber << '\n';
		}
};