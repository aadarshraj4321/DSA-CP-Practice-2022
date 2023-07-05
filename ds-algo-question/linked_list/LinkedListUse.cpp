#include<stdio.h>
#include<iostream>
#include "Node.cpp"



int main()
{
	// Statically
	Node n1(10);
	Node *head = &n1;
	Node n2(20);
	Node n3(30);

	head->next = &n2;
	n2.next = &n3;


	std::cout << n1.data << " " << n2.data << " " << n3.data << '\n';
	std::cout << head->data << " " << head->next->data << " " << head->next->next->data << '\n';

	printLL(head);

	std::cout << "----------------------\n";

	Node *mainHead = takeInput();
	printLL(mainHead);

	std::cout << '\n';
	std::cout << "-----------------------------------------\n";


	insertNode(mainHead, 2, 999);
	printLL(mainHead);

}