#include<bits/stdc++.h>


int findPowRec(int a, int b)
{
	if(b == 0)
		return 1;

	return a * findPowRec(a, b - 1);
}

int findPowRecFast(int a, int b)
{
	if(b == 0)
		return 1;
	

	int subProblem = findPowRecFast(a, b / 2);
	int subProblemSquare = subProblem * subProblem;
	// if n is odd
	if(b&1)
		return a * subProblemSquare;
	return subProblemSquare;
}

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int a, b; std::cin >> a >> b;

	std::cout << findPowRec(a, b) << '\n';
	std::cout << findPowRecFast(a, b) << '\n';

	return 0;
}
