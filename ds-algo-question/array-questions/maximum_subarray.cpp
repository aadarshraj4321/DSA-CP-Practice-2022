#include<bits/stdc++.h>


int maximumSubarray(std::vector<int>arr)
{	
	int n = arr.size();
	int maxiSum = INT_MIN;
	int currSum = 0;
	for(int i = 0; i < n; i++)
	{
		currSum += arr[i];
		if(currSum > maxiSum)
			maxiSum = currSum;

		if(currSum < 0)
			currSum = 0;
	}
	return maxiSum;
}

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	std::vector<int>arr;
	int n;
	std::cin >> n;
	for(int i = 0; i < n; i++)
	{
		int x;
		std::cin >> x;
		arr.push_back(x);
	}

	std::cout << maximumSubarray(arr) << '\n';

	return 0;
}