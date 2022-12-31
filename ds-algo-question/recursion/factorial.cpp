#include<bits/stdc++.h>
using namespace std;

int findFactorial(int n)
{
	// Base Case
	if(n == 0)
	{
		return 1;
	}

	// Recursive Case
	return n * findFactorial(n - 1);
}


int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	std::cin >> t;
	std::cout << t << '\n';
	while(t--)
	{
		int n;
		std::cin >> n;
		std::cout << findFactorial(n) << '\n';
	}
	return 0;
}