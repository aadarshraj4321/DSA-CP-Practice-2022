#include<iostream>
#include<climits>



class StackUsingArray
{
	private:
		int *data;
		int nextIndex;
		int capacity;

	public:
		StackUsingArray(int totalSize)
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

		void push(int element)
		{
			if(nextIndex == capacity)
			{
				std::cout << "Stack is full\n";
				return;
			}
			data[nextIndex] = element;
			nextIndex++;
		}

		int pop()
		{
			if(isEmpty())
			{
				std::cout << "Stack is empty\n";
				return INT_MIN;
			}
			nextIndex--;
			return data[nextIndex];
		}

		int top()
		{
			if(isEmpty())
			{
				std::cout << "Stack is empty\n";
				return INT_MIN;
			}
			return data[nextIndex - 1];
		}
};




int main()
{
	StackUsingArray st(5);

	st.push(20);
	st.push(40);
	st.push(60);

	std::cout << st.top() << '\n';
	std::cout << st.pop() << '\n';
	std::cout << st.size() << '\n';

}