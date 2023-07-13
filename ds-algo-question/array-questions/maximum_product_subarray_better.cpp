#include<bits/stdc++.h>




int maximumProductSubarrayBrute(std::vector<int>arr)
{
	int maxProduct = 0;
	for(int i = 0; i < arr.size(); i++)
	{
		for(int j = i; j < arr.size(); j++)
		{
			int currProduct = 1;
			for(int k = i; k <= j; k++)
			{
				currProduct *= arr[k];
			}
			maxProduct = std::max(currProduct, maxProduct);
		}
	}
	return maxProduct;
}



int main()
{

	std::vector<int>arr = {2, 3, -2, 4};
	std::cout << maximumProductSubarrayBrute(arr) << '\n';

	return 0;
}