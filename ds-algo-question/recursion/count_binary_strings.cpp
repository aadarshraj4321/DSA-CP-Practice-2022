#include<bits/stdc++.h>


int countTotalBinary(int n)
{
	if(n == 0)
		return 1;
	if(n == 1)
		return 2;

	return countTotalBinary(n - 1) + countTotalBinary(n - 2);
}

int main()
{

	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif
	
	int n; std::cin >> n;
	std::cout << countTotalBinary(n) << '\n';	

	return 0;
}