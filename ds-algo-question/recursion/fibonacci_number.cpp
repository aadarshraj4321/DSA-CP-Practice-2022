#include<bits/stdc++.h>


int findFibonacci(int n)
{
	if(n == 1 || n == 0)
		return n;

	return findFibonacci(n - 1) + findFibonacci(n - 2);
}


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n;
	std::cin >> n;
	std::cout << findFibonacci(n) << '\n';

}