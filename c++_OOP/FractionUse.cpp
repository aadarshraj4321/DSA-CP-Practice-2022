#include<stdio.h>
#include<iostream>
#include "Fraction.cpp"






int main()
{

	Fraction f1(10, 5);
	Fraction f2(20, 5);

	f1.print();
	f2.print();
	f1.add(f2);
	f1.print();
	f2.print();

	f1.multiply(f2);
	f1.print();


	return 0;
}