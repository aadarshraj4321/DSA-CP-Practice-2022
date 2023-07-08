#include<bits/stdc++.h>



int totalSubarrayCount(std::vector<int>arr, int k)
{
	int count = 0;
	for(int i  = 0; i < arr.size(); i++)
	{
		for(int j = i; j < arr.size(); j++)
		{
			int sum = 0;
			for(int k = i; k <= j; k++)
			{
				sum += arr[k];
			}
			if(sum == k)
				count++;
		}
	}
	return count;
}





int totalSubarrayCountOptimal(std::vector<int>arr, int k)
{
	std::unordered_map<int, int>mp;
	mp[0] = 1;
	int prefixSum = 0, count = 0;

	for(int i = 0; i < arr.size(); i++)
	{
		prefixSum += arr[i];
		int remove = prefixSum - k;
		count += mp[remove];
		mp[prefixSum] += 1;
	}
	return count;
}





int main()
{

	std::vector<int>arr = {1, 2, 3};
	int k = 3;
	std::cout << totalSubarrayCount(arr, k) << '\n';
	std::cout << totalSubarrayCountOptimal(arr, k) << '\n';

	return 0;
}