
#include<bits/stdc++.h>



void thisIsStack()
{
	std::stack<int>st;

	// insert element in stack
	st.push(10);
	st.push(20);
	st.emplace(30);
	st.emplace(40);


	// check last element 
	std::cout << st.top() << '\n';


	// remove last elements from stack
	std::cout << st.pop() << '\n';

	// check stack is empty or not
	std::cout << st.empty() << '\n';

	// check the size of stack 
	std::cout << st.size() << '\n';
}


int main()
{

	return 0;
}