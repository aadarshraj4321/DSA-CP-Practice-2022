#include<iostream>
template <typename T>


class Pair
{
	T a;
	T b;

	public:

		void setA(T a)
		{
			this->a = a;
		}

		void setB(T b)
		{
			this->b = b;
		}

		T getA()
		{
			return a;
		}

		T getB()
		{
			return b;
		}
};


int main()
{

	Pair<float>p;
	p.setA(10.24);
	p.setB(20.23);

	std::cout << p.getA() << '\n';
	std::cout << p.getB() << '\n';

	return 0;
}