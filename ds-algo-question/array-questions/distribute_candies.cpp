#include<bits/stdc++.h>



int totalDifferentCandies(std::vector<int>arr)
{
	std::map<int, bool>mp;

	for(int i = 0; i < arr.size(); i++)
	{
		if(mp.find(arr[i]) == mp.end())
		{
			mp.insert({arr[i], true});
		}
	}

	return std::min(arr.size(), mp.size());
}



int main()
{

	std::vector<int>arr;
	int n;
	std::cin >> n;
	for(int i = 0; i < n; i++)
	{
		int x; std::cin >> x;
		arr.push_back(x);
	}

	std::cout << totalDifferentCandies(arr) << '\n';


	return 0;
}