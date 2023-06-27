#include<bits/stdc++.h>





void thisIsQueue()
{

	std::queue<int>q;
	// insert element in queue
	q.push(10);
	q.push(100);
	q.emplace(1000);
	q.emplace(10000);


	// add +5 to the last element
	q.back() += 5;

	// print last element in queue
	std::cout << q.back() << '\n';

	// print first element in queue
	std::cout << q.front() << '\n';

	// delete the front element in queue
	q.pop();
}



int mian()
{

	return 0;
}