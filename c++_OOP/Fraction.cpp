

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


		void print()
		{
			std::cout << this->numerator << "/" << this->denominator << '\n';
		}



		void simplify()
		{
			int gcd = 1;
			int j = std::min(this->numerator, this->denominator);

			for(int i = 1; i <= j; i++)
			{
				if(this->numerator % i == 0 && this->denominator % i == 0)
				{
					gcd = i;
				}
			}

			this->numerator = this->numerator / gcd;
			this->denominator = this->denominator / gcd;
		}


		void add(Fraction const &f2)
		{
			int lcm = this->denominator * f2.denominator;
			int x = lcm / this->denominator;
			int y = lcm / f2.denominator;

			int  num = x * this->numerator + (y * f2.numerator);

			this->numerator = num;
			this->denominator = lcm;

			simplify();
		}



		void multiply(Fraction const &f2)
		{
			this->numerator = this->numerator * f2.numerator;
			this->denominator = this->denominator * f2.denominator;
		}

};
