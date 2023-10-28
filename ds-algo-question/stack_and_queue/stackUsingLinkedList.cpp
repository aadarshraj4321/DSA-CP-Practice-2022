#include<iostream>


template <typename T>


class Node
{
	public:	
		T data;
		Node<T>*next;

		Node(T data)
		{
			this->data = data;
			next = NULL;
		}
};




template <typename T>

class StackUsingLinkedList
{
	private:
		Node<T>*head;
		int size;

	public:
		StackUsingLinkedList()
		{
			head = NULL;
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


		void push(T element)
		{
			Node<T>*newNode = new Node<T>(element);
			newNode->next = head;
			head = newNode;
			size++;
		}


		T pop()
		{
			if(isEmpty())
			{
				std::cout << "Stack is Empty\n";
				return 0;
			}

			T delData = head->data;
			Node<T>*tmpNode = head;
			head = head->next;
			delete tmpNode;
			size--;
			return delData;
		}

		T top()
		{
			if(isEmpty())
			{
				std::cout << "Stack is Empty\n";
				return 0;
			}

			return head->data;
		}
};



int main()
{
	StackUsingLinkedList<char>s;

	s.push('a');
	s.push('a');
	s.push('d');
	s.push('a');

	std::cout << s.getSize() << '\n';
	std::cout << s.pop() << '\n';
	std::cout << s.top() << '\n';

};





