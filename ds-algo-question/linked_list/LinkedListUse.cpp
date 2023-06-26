#include<stdio.h>
#include<iostream>
#include "Node.cpp"



int main()
{
	// Statically
	Node n1(10);
	Node n2(20);
	Node n3(30);

	n1.next = &n2;
	n2.next = &n3;


	std::cout << n1.data << " " << n2.data << " " << n3.data << '\n';
}