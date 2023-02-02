#include<bits/stdc++.h>


int maxProfitBuySellStock(std::vector<int>arr)
{
	int n = arr.size();
	int maxProfit = 0;
	std::stack<int>profitStores;
	profitStores.push(arr[0]);

	int i = 1;
	while(i < n)
	{
		if(arr[i] < profitStores.top())
		{
			profitStores.push(arr[i]);
		}
		else
		{
			int currProfit = arr[i] - profitStores.top();
			maxProfit = std::max(currProfit, maxProfit);
		}
		i++;
	}
	return maxProfit;
}



int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	std::vector<int>arr;
	int n; std::cin >> n;

	for(int i = 0; i < n; i++)
	{
		int x; std::cin >> x;
		arr.push_back(x);
	}	

	std::cout << maxProfitBuySellStock(arr) << '\n';

	return 0;
}