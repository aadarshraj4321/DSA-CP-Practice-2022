#include<iostream>


template <typename T>


class QueueUsingArray
{
	T *data;
	int nextIndex;
	int firstIndex;
	int size;
	int capacity;

	public:
		QueueUsingArray(T s)
		{
			data = new T[s];
			nextIndex = 0;
			firstIndex= -1;
			size = 0;
			capacity = s;
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
			if(size == capacity)
			{
				std::cout << "Queue full\n";
				return;
			}

			data[nextIndex] = element;
			nextIndex = (nextIndex + 1) % capacity;

			if(firstIndex == -1)
				firstIndex = 0;

			size++;
		}

		T front()
		{
			if(isEmpty())
			{
				std::cout << "Queue is empty\n";
				return 0;
			}
			return data[firstIndex];
		}


		T dequeue()
		{
			if(isEmpty())
			{
				std::cout << "Queue is empty\n";
				return 0;
			}

			T ans = data[firstIndex];
			firstIndex = (firstIndex + 1) % capacity;
			size--;
			if(size == 0)
			{
				firstIndex = -1;
				nextIndex = 0;
			}
			return ans;
		}
};






int main()
{

	QueueUsingArray<int>q(5);

	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);

	std::cout << q.getSize() << '\n';
	std::cout << q.front() << '\n';
	std::cout << q.dequeue() << '\n';
	std::cout << q.getSize() << '\n';


	


	return 0;
}