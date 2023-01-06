#include<bits/stdc++.h>


int manyWaysFriendPairs(int n)
{

	if(n == 0 or n == 1)
		return 1;

	int prob1 = manyWaysFriendPairs(n - 1);
	int prob2 = n - 1 * manyWaysFriendPairs(n - 2);
	return prob1 + prob2;
}

int main()
{

	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif
	
	int n; std::cin >> n;
	std::cout << manyWaysFriendPairs(n) << '\n';	

	return 0;
}
