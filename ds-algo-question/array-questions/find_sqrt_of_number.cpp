#include<bits/stdc++.h>




int squareRootNumberBrute(int n)
{
	int ans = 1;
	for(int i = 1; i <= n; i++)
	{
		if(i * i <= n) ans = i;
		else break;
	}
	return ans;
}



int squareRootNumberOptimal(int n)
{
	int left = 1, right = n;
	int ans = 1;

	while(left <= right)
	{
		long long mid = (left + right) / 2;
		long long val = (mid * mid);
		if(val <= n) 
		{
			ans = mid;
			left = mid + 1;
		}
		else right = mid - 1;
	}
	return ans;
}





int main()
{

	int n = 28;
	std::cout << squareRootNumberBrute(n) << '\n';
	std::cout << squareRootNumberOptimal(n) << '\n';

	return 0;
}