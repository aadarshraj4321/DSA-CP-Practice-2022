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



long long squareHelper(int mid, int n, int m)
{
	// if finalAns == m // return 1
	// if finalAns > m // return 2
	// if finalAns < m // return 0

	long long finalAns = 1;
	for(int i = 1; i <= n; i++)
	{
		finalAns *= mid;
		if(finalAns > m) return 2;
	}

	if(finalAns == m) return 1;
	else return 0;
}


int findNthRootOfOptimal(int n, int m)
{
	int left = 1, right = m;

	while(left <= right)
	{
		long long mid = (left + right) / 2;
		long long result = squareHelper(mid, n, m);
		if(result == 1) return mid;
		if(result == 0) left = mid + 1;
		if(result == 2) right = mid - 1;
	}
	return -1;
}






int main()
{

	int n = 9, m = 1953125;
	//int n = 3, m = 27;
	std::cout << findNthRootOfMBrute(n, m) << '\n';
	std::cout << findNthRootOfOptimal(n, m) << '\n';

	return 0;
}