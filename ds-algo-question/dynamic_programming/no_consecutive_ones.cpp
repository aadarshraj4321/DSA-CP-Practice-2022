#include<bits/stdc++.h>


int noConsecutiveOnes(int n, int index, bool previousOne)
{
	if(index == n + 1)
		return 1;

	int ans = 0;

	// try to place 0 here
	ans += noConsecutiveOnes(n, index + 1, false);

	// try to place 1 here
	if(previousOne == false)
		ans += noConsecutiveOnes(n, index + 1, true);

	return ans;
}

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n; std::cin >> n;
	std::cout << noConsecutiveOnes(n, 1, false);
	

	return 0;
}