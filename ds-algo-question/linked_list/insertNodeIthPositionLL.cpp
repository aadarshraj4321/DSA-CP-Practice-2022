#include<bits/stdc++.h>


class Node
{
	public:
		int data;
		Node *next;

		Node(int data)
		{
			this->data = data;
			next = NULL;
		}
};


Node *takeInput()
{
	int data; std::cin >> data;
	Node *head = NULL;
	Node *tail = NULL;

	while(data != -1)
	{
		Node *newNode = new Node(data);

		if(head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		std::cin >> data;
	}
	return head;
}


Node *insertIthPosition(Node *head, int data, int pos)
{
	if(pos == 0)
	{
		Node *newNode = new Node(data);
		newNode->next = head;
		head = newNode;
		return head;
	}

	int count = 0;
	Node *tmp = head;

	while(tmp != NULL && count < pos - 1)
	{
		tmp = tmp->next;
		count++;
	}

	if(tmp != NULL)
	{
		Node *newNode = new Node(data);
		newNode->next = tmp->next;
		tmp->next = newNode;
	}
	return head;
}


void printLL(Node *head)
{
	Node *tmp = head;
	while(tmp != NULL)
	{
		std::cout << tmp->data << "--->";
		tmp = tmp->next;
	}
	std::cout << "NULL\n";
}


int main()
{

	Node *head = takeInput();
	printLL(head);

	head = insertIthPosition(head, 2000, 2);
	printLL(head);

	head = insertIthPosition(head, 20, 0);
	printLL(head);

	head = insertIthPosition(head, 111, 10);
	printLL(head);

	return 0;
}