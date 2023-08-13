

class Vehicle
{
	private:
		int maxSpeed;

	protected:
		int numOfTires;

	public:
		std::string color;

	Vehicle()
	{
		std::cout << "Vehicle Class Constructor Called" << '\n';
	}

	~Vehicle()
	{
		std::cout << "Vehicle Class Deconstructor Called" << '\n';
	}
	
};