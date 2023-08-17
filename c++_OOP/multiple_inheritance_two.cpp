#include<bits/stdc++.h>


class Vehicle
{
	public:
		int maxSpeed;

		void printDisplay()
		{
			std::cout << "Vehicle Class\n";
		}
};


class Truck : public Vehicle
{
	public:
		int numOfTyres;
		std::string color;

		void printDisplay()
		{
			std::cout << "Truck Class\n";
		}

};

class Car : public Vehicle
{
	public:
		int numOfTyres;
		std::string color;

		void printDisplay()
		{
			std::cout << "Car Class\n";
		}
};


class CarTruck : public Truck, public Car
{
	public:
		std::string brandName;
		std::string color;
};





int main()
{

	CarTruck c;

	c.Car :: printDisplay();
	c.Truck :: printDisplay();
	//c.Vehicle :: printDisplay();	

	return 0;
}