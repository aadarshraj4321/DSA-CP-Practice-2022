#include<bits/stdc++.h>


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int n; std::cin >> n;
	int dp[n + 1];
	dp[0] = 0;
	for(int i = 1; i <= n; i++)
	{
		dp[i] = dp[i / 2] + (i % 2);
		std::cout << dp[i] << '\n';
	}

	return 0;
}
