#include<bits/stdc++.h>



int howManyTrailingZeros(int n)
{
	int count = 0;
	while(n > 0)
	{
		n = n / 5;
		count += n;
	}
	return count;
}


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif


	int n;
	std::cin >> n;
	std::cout << howManyTrailingZeros(n) << '\n';

	return 0;
}