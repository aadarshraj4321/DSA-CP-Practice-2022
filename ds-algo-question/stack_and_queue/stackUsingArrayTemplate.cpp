#include<iostream>
template <typename T>



class Stack
{
	private:
		T *data;
		int nextIndex;
		int capacity;

	public:
		Stack(int totalSize)
		{
			data = new T[totalSize];
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


		void push(T element)
		{
			if(nextIndex == capacity)
			{
				T *newData = new T[capacity * 2];
				for(int i = 0; i < capacity; i++)
				{
					newData[i] = data[i];
				} 
				capacity *= 2;
				delete [] data;
				data = newData;
			}
			data[nextIndex++] = element;
		}

		T pop()
		{
			if(isEmpty())
			{
				std::cout << "Stack Is Empty\n";
				return 0;
			}
			nextIndex--;
			return data[nextIndex];
		}
};



int main()
{
	Stack<char>s(4);

	s.push('c');
	s.push('h');
	s.push('a');
	s.push('r');

	std::cout << s.size() << '\n';
	std::cout << s.isEmpty() << '\n';
	std::cout << s.pop() << '\n';
	std::cout << s.pop() << '\n';
}