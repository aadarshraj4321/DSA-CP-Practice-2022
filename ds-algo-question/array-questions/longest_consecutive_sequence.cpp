#include<bits/stdc++.h>



int longestConsecutiveSub(std::vector<int>arr)
{
	std::unordered_set<int>un;

	for(auto val: arr)
		un.insert(val);

	int longestSub = 1;
	for(int i = 0; i < arr.size(); i++)
	{
		int previousVal = arr[i] - 1;
		if(un.find(previousVal) == un.end())
		{
			int nextVal = arr[i] + 1;
			int count = 1;

			while(un.find(nextVal) != un.end())
			{
				count++;
				nextVal++;
			}
			if(count > longestSub)
				longestSub = count;
		}

	}
	return longestSub;
}


int main()
{
	std::vector<int>arr;
	int n;
	std::cin >> n;
	for(int i = 0; i < n; i++)
	{
		int x;
		std::cin >> x;
		arr.push_back(x);
	}

	std::cout << longestConsecutiveSub(arr) << '\n';
}