#include<bits/stdc++.h>



class Vehicle
{
	private:
		int maxSpeed;

	public:
		std::string color;

		Vehicle()
		{
			std::cout << "Constructor Called" << '\n';
		}

		Vehicle(int speed)
		{
			std::cout << "Vehicle: Parametrized Constructor Called\n";
			maxSpeed = speed;
		}

		~Vehicle()
		{
			std::cout << "Destructor Called\n";
		}

	protected:
		int numOfTyres;

};


class Truck : public Vehicle
{
	public:
		int numOfGears;
		std::string brand;

		Truck() : Vehicle(6)
		{
			std::cout << "Constructor Called" << '\n';
		}

		~Truck()
		{
			std::cout << "Destructor Called\n";
		}
};


// class Truck : protected Vehicle
// {
// 	public:
// 		int numOfGears;
// 		std::string brand;
// };


int main()
{
	Truck truck1;

	truck1.numOfGears = 7;
	truck1.brand = "TATA";
	truck1.color = "orange";

	std::cout << "Brand: " << truck1.brand << "|" << "Color: " << truck1.color << "|" << "Gears: " << truck1.numOfGears << '\n';

	//truck1.maxSpeed = 100; // we can't inherit this property because this is private member
	//truck1.numOfTyres = 118; // if we want to inherit this property then we have to inherit parent class with "protected" modifier

	//std::cout << "Brand: " << truck1.brand << "|" << "Color: " << truck1.color << "|" << "Gears: " << truck1.numOfGears << "| Tyres: " << truck1.numOfTyres << '\n';
}