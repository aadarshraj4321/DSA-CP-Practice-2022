#include<bits/stdc++.h>



int buySellStocks(std::vector<int>arr)
{
	int maxi = 0;
	int left = 0;
	int right = 1;

	while(right <= arr.size() - 1)
	{
		if(arr[left] < arr[right])
		{
			int profit = arr[right] - arr[left];
			maxi = std::max(maxi, profit);
		}
		else
			left = right;
		right++;
	}
	return maxi;
}



int main()
{
	
	std::vector<int>arr = {7,6,4,3,1};
	std::cout << buySellStocks(arr) << '\n';

	return 0;
}