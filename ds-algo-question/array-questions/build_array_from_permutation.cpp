#include<bits/stdc++.h>


std::vector<int>permutationArray(std::vector<int>arr)
{
	std::map<int, int>mp;
	std::vector<int>finalResult;

	int n = arr.size();
	for(int i = 0; i < n; i++)
	{
		mp.insert(std::make_pair(i, arr[i]));
	}

	for(int i = 0; i < n; i++)
	{
		if(mp.find(arr[i]) != mp.end())
			finalResult.push_back(mp[arr[i]]);
	}
	return finalResult;
}

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int n;
	std::cin >> n;
	std::vector<int>arr;
	for(int i = 0;  i < n; i++)
	{
		int x; std::cin >> x;
		arr.push_back(x);
	}

	auto finalResult = permutationArray(arr);
	for(auto val: finalResult)
		std::cout << val << " ";

	return 0;
}