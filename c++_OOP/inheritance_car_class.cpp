#include "inheritance_vehicle_class.cpp"




class Car: public Vehicle
{
	

public:

	int numOfGears;
	void printValue()
	{
		std::cout << "Color Of Car : " << color << '\n';
		std::cout << "Number Of Gears : " << numOfGears << '\n';
		//std::cout << "Number Of Tiress" << numOfTires << '\n';
	}
};


