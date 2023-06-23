#include<bits/stdc++.h>


std::vector<int>topFrequentElement(std::vector<int>& nums, int k)
{
	int n = nums.size();
	std::unordered_map<int, int>m;

	for(int i = 0; i < n; i++)
	{
		m[nums[i]]++;
	}


	std::vector<std::vector<int>>buckets(n + 1);
	for(auto it = m.begin(); it != m.end(); it++)
	{
		buckets[it->second].push_back(it->first);
	}


	std::vector<int>finalResult;

	for(int i = n; i >= 0; i--)
	{
		if(finalResult.size() >= k)
			break;

		if(!buckets[i].empty())
		{
			finalResult.insert(finalResult.end(), buckets[i].begin(), buckets[i].end());
		}
	}

	return finalResult;
}



int main()
{

	std::vector<int>nums = {1,1,1,2,2,3}; 
	int k = 2;

	auto result = topFrequentElement(nums, k);
	for(auto v: result)
		std::cout << v << " ";
	
	std::cout << '\n';
	return 0;
}