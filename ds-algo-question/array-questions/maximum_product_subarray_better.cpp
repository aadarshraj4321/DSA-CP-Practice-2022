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




int maximumProductSubarrayBetter(std::vector<int>arr)
{
	int maxProduct = INT_MIN;
	for(int i = 0; i < arr.size(); i++)
	{
		int currProduct = 1;
		for(int j = i; j < arr.size(); j++)
		{
			currProduct *= arr[j];
			maxProduct = std::max(currProduct, maxProduct);
		}
	}
	return maxProduct;
}




int maximumProductSubarrayOptimal(std::vector<int>arr)
{
	int maxProduct = INT_MIN;
	int prefixProduct = 1, suffixProduct = 1;
	for(int i = 0; i < arr.size(); i++)
	{
		if(prefixProduct == 0) prefixProduct = 1;
		if(suffixProduct == 0) suffixProduct = 1;

		prefixProduct *= arr[i];
		suffixProduct *= arr[arr.size() - i - 1];

		maxProduct = std::max(maxProduct, std::max(suffixProduct, prefixProduct));
	}
	return maxProduct;
}




int main()
{

	std::vector<int>arr = {2, 3, -1, 0, 4, 4};
	std::cout << maximumProductSubarrayBrute(arr) << '\n';
	std::cout << maximumProductSubarrayBetter(arr) << '\n';
	std::cout << maximumProductSubarrayOptimal(arr) << '\n';

	return 0;
}