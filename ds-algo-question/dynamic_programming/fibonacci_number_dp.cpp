#include<bits/stdc++.h>

std::vector<int>memo;
int count = 0;

int fib(int n)
{
	count++;
	// Base Case
	if(n <= 2)
		return 1;

	// memoisation part
	if(memo[n] != -1) 
		return memo[n];

	// recursive call
	return memo[n] = fib(n - 1) + fib (n - 2);

}


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int n; std::cin >> n;
	memo.resize(n + 1, -1);
	std::cout << fib(n) << '\n';
	std::cout << "total times fib function called is : " << count << '\n';

	return 0;
}