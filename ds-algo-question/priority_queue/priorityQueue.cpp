#include<iostream>
#include<vector>



class PriorityQueue {

	std::vector<int>pq;

	public:
		PriorityQueue() {}

		bool isEmpty() {
			return pq.size() == 0;
		}


		int getSize() {
			return pq.size();
		}


		int getMin() {
			if(isEmpty())
				return 0;

			return pq[0];
		}

		void insert(int element) {
			pq.push_back(element);

			int childIndex = pq.size() - 1;
			while(childIndex > 0) {
				int parentIndex = (childIndex - 1) / 2;

				if(pq[childIndex] < pq[parentIndex]) {
					int tmp = pq[childIndex];
					pq[childIndex] = pq[parentIndex];
					pq[parentIndex] = tmp;
				}
				else {
					break;
				}
				childIndex = parentIndex;
			}
		}

		int removeMin() {
			if(isEmpty())
				return 0;
			int ans = pq[0];
			pq[0] = pq[pq.size() - 1];
			pq.pop_back();

			int parentIndex = 0;
			int leftChildIndex = (2 * parentIndex) + 1;
			int rightChildIndex = (2 * parentIndex) + 2;

			while(leftChildIndex < pq.size()) {
				int minIndex = parentIndex;
				if(pq[minIndex] > pq[leftChildIndex]) {
					minIndex = leftChildIndex;
				}

				if(rightChildIndex < pq.size() && pq[rightChildIndex] < pq[minIndex]) {
					minIndex = rightChildIndex;
				}

				if(minIndex == parentIndex) {
					break;
				}
				
				int tmp = pq[minIndex];
				pq[minIndex] = pq[parentIndex];
				pq[parentIndex] = tmp;

				parentIndex = minIndex;
				leftChildIndex = (2 * parentIndex) + 1;
				rightChildIndex = (2 * parentIndex) + 2;
			}

			return ans;
		}
};





int main()
{

	PriorityQueue p;
	p.insert(100);
	p.insert(10);
	p.insert(15);
	p.insert(4);
	p.insert(17);
	p.insert(21);
	p.insert(67);

	std::cout << p.getSize() << '\n';
	std::cout << p.getMin() << '\n';

	while(!p.isEmpty()) {
		std::cout << p.removeMin() << " ";
	}

	std::cout << '\n';

	return 0;
}