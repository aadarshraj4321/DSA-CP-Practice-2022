#include<bits/stdc++.h>


// O(n^3)
int maximumLongestSubarray(std::vector<int>arr, int k)
{
	int maxi = 0;
	for(int i = 0; i < arr.size() - 1; i++)
	{
		for(int j = i; j < arr.size() - 1; j++)
		{
			int sum = 0;
			for(int k = i; k <= j; k++)
			{
				sum += arr[k];
			}
			if(sum == k)
				maxi = std::max(maxi, (j - i) + 1);
		}
	}
	return maxi;
}



// O(n^2)
int maximumLongestSubarray2(std::vector<int>arr, int k)
{
	int maxi = 0;
	for(int i = 0; i < arr.size() - 1; i++)
	{
		int sum = 0;
		for(int j = i; j < arr.size() - 1; j++)
		{
			sum += arr[j];
			if(sum == k)
				maxi = std::max(maxi, j - i + 1);
		}
	}
	return maxi;
}







int main()
{

	std::vector<int>arr = {1, 1, 2, 1, 2, 3, 1, 1, 1, 2, 2, 2, 3, 2};
	std::cout << maximumLongestSubarray(arr, 9) << '\n';
	std::cout << maximumLongestSubarray2(arr, 9) << '\n';

	return 0;
}