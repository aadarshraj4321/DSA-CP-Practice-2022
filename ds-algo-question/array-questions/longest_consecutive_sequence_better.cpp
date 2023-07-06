#include<bits/stdc++.h>


int longestConsecutiveSequence(std::vector<int>arr)
{
	std::sort(arr.begin(), arr.end());
	int longest = 1, currCount = 0, lastSmallest = INT_MIN;

	for(int i = 0; i < arr.size(); i++)
	{
		if(arr[i] - 1 == lastSmallest)
		{
			currCount += 1;
			lastSmallest = arr[i];
		}

		else if(arr[i] != lastSmallest)
		{
			currCount = 1;
			lastSmallest = arr[i];
		}

		longest = std::max(longest, currCount);
	}
	return longest;
}




int longestConsecutiveSequenceBetter(std::vector<int>arr)
{

	if(arr.size() == 0) return 0;

	int longest = 1;
	std::unordered_set<int>st;

	for(int i = 0; i < arr.size(); i++)
	{
		st.insert(arr[i]);
	}



	for(auto it: st)
	{
		if(st.find(it - 1) ==  st.end())
		{
			int currCount = 1;
			int x = it;
			while(st.find(x + 1) != st.end())
			{
				x += 1;
				currCount += 1;
			}
			longest = std::max(longest, currCount);
		}
	}

	return longest;
}





int main()
{

	std::vector<int>arr = {1, 5, 6, 7, 8, 4, 3, 5, 6, 7, 8};
	std::cout << longestConsecutiveSequence(arr) << '\n';
	std::cout << longestConsecutiveSequenceBetter(arr) << '\n';
}