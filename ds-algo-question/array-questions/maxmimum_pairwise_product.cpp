#include<bits/stdc++.h>



long maximumPairwiseProduct(std::vector<int>arr, int n)
{
	long first = 0;
	long second = 0;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] > first)
		{
			second = first;
			first = arr[i];
		}
		else if(arr[i] > second)
			second = arr[i];
	}

	return first * second;
}


int main()
{

	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif

	std::vector<int>arr;
	int n; std::cin >> n;
	for(int i = 0; i < n; i++)
	{
		int x; std::cin >> x;
		arr.push_back(x);
	}	

	long finalResult = maximumPairwiseProduct(arr, n);
	std::cout << finalResult << '\n';

	return 0;
}