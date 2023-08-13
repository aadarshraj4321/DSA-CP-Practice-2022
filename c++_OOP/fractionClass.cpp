#include<iostream>


class Fraction
{
	private:
		int numerator;
		int denominator;

	public:
		Fraction(int numerator, int denominator)
		{
			this->numerator = numerator;
			this->denominator = denominator;
		}

		void printData()
		{
			std::cout << this->numerator << "/" << this->denominator  << '\n';
		}


		void simplify()
		{
			int gcd = 1;
			int mini = std::max(this->numerator, this->denominator);
			for(int i = 1; i <= mini; i++)
			{
				if(this->numerator % i == 0 && this->denominator % i == 0)
					gcd = i;
			}

			this->numerator = this->numerator / gcd;
			this->denominator = this->denominator / gcd;
		}


		void add(Fraction f2)
		{
			int lcm = this->denominator * f2.denominator;
			int x = lcm / this->denominator;
			int y = lcm / f2.denominator;

			int num = this->numerator * x + (f2.numerator * y);
			this->numerator = num;
			this->denominator = lcm;


			simplify();
		}
};




int main()
{
	Fraction f1(10, 5);
	Fraction f2(20, 5);

	f1.printData();
	f2.printData();

	f1.add(f2);
	f1.printData();

	return 0;
}