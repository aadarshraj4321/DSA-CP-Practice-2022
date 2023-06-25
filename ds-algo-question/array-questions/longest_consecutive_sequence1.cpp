#include<bits/stdc++.h>


int longestConsecutiveSequence(std::vector<int>arr)
{
	std::unordered_set<int>s(arr.begin(), arr.end());
	int longest = 0;
	for(auto v: s)
	{
		if(!s.count(v - 1))
		{
			int length = 1;
			while(s.count(v + length))
			{
				++length;
			}
			longest = std::max(longest, length);
		}
	}
	return longest;
}


int main()
{

	std::vector<int>arr = {100,4,200,1,3,2};
	std::cout << longestConsecutiveSequence(arr) << '\n';

	return 0;
}