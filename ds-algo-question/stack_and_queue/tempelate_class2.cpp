#include<iostream>
template <typename T, typename V>

class Pair
{
	T x;
	V y;

	public:
		void setX(T x)
		{
			this->x = x;
		}

		void setY(V y)
		{
			this->y = y;
		}

		T getX()
		{
			return x;
		}

		V getY()
		{
			return y;
		}
};


int main()
{

	Pair<int, char>p1;
	p1.setX(10);
	p1.setY('A');

	std::cout << p1.getX() << " " << p1.getY() << '\n';


	Pair<Pair<int, char>, int>p2;
	p2.setY(1000);
	Pair<int, char>p3;
	p3.setX(2000);
	p3.setY('B');

	p2.setX(p3);

	std::cout << p2.getY() << " ";
	std::cout << p2.getX().getX() << " " << p2.getX().getY();

	return 0;
}