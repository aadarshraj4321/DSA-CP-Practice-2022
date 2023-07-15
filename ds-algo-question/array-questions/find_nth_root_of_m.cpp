#include<bits/stdc++.h>




int findNthRootOfMBrute(int n, int m)
{
	for(int i = 1; i <= m; i++)
	{
		long long finalAns = 1;
		for(int j = 1; j <= n; j++)
		{
			finalAns *= i;
		}
		if(finalAns == m) return i;
		else if(finalAns > m) return -1;
	}
	return -1;
}




int findNthRootOfOptimal(int n, int m)
{
	int left = 1, right = m;

	while(left <= right)
	{
		int mid = (left + right) / 2;
		long long finalAns = 1;
		for(int i = 1; i <= n; i++)
		{
			finalAns *= mid;
		}
		if(finalAns == m) return mid;
		else if(finalAns < m) left = mid + 1;
		else right = mid - 1;
	}
	return -1;
}






int main()
{

	int n = 3, m = 27;
	std::cout << findNthRootOfMBrute(n, m) << '\n';
	std::cout << findNthRootOfOptimal(n, m) << '\n';

	return 0;
}