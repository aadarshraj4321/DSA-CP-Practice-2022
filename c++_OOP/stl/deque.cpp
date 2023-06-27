#include<bits/stdc++.h>


void thisIsDeque()
{
	std::deque<int>dq;


	// insert or push element
	dq.push_back(10);

	// insert or push element
	dq.emplace_back(100);

	// insert in front
	dq.push_front(111);

	// insert int front
	dq.emplace_front(222);


	// delete last element from deque
	dq.pop_back();

	// delete first element fron deque
	dq.pop_front();


	dq.back();
	dq.front();

}



int main()
{

	return 0;
}