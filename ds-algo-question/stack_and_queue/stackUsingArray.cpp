#include<iostream>



class Stack
{
	private:
		int *data;
		int nextIndex;
		int capacity;

	public:
		Stack(int totalSize)
		{
			data = new int[totalSize];
			nextIndex = 0;
			capacity = totalSize;
		}


		int size()
		{
			return nextIndex;
		}


		bool isEmpty()
		{
			return nextIndex == 0;
		}


		int pop()
		{
			if(isEmpty())
			{
				std::cout << "Stack is empty\n";
				return -1;
			}

			nextIndex--;
			data[nextIndex];
		}

		void push(int element)
		{
			if(nextIndex == ca)
		}
}




int main()
{






	return 0;
}