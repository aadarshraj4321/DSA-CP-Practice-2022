#include<iostream>


template <typename T>
class Node
{
	public:
		T data;
		Node<T> *next;

		Node(T data)
		{
			this->data = data;
			next = NULL;
		}
};


template <typename T>
class QueueUsingLinkedList
{
	Node<T> *head;
	Node<T> *tail;
	int size;

	public:
		QueueUsingLinkedList()
		{
			head = NULL;
			tail = NULL;
			size = 0;
		}


		int getSize()
		{
			return size;
		}


		bool isEmpty()
		{
			return size == 0;
		}

		void enqueue(T element)
		{
			Node<T> *newNode = new Node<T>(element);
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
			size++;
		}


		T front()
		{
			if(isEmpty())
			{
				std::cout << "Stack is empty\n";
				return 0;
			}
			return head->data;
		}


		T dequeue()
		{
			if(isEmpty())
			{
				std::cout << "Queue is empty\n";
				return 0;
			}
			T ans = head->data;
			Node<T>*tmpNode = head;
			head = head->next;
			delete tmpNode;
			size--;
			return ans;
		}
};





int main()
{

	QueueUsingLinkedList<int>q;

	std::cout << q.isEmpty() << '\n';
	std::cout << q.getSize() << '\n';
	
	q.enqueue(10);
	q.enqueue(20);

	std::cout << q.getSize() << '\n';
	std::cout <<  q.front() << '\n';
	std::cout << q.dequeue () << '\n';



	return 0;
}