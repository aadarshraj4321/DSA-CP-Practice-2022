#include<bits/stdc++.h>


int totalMinimumSwaps(std::vector<int>arr)
{
	int n = arr.size();
	int ans = 0;
	std::pair<int, int>pi[arr.size()];
	for(int i = 0; i < n; i++)
	{
		pi[i].first = arr[i];
		pi[i].second = i;
	}

	std::sort(pi, pi + arr.size());

	std::vector<bool>isVisited(arr.size(), false);

	
	for(int i = 0; i < n; i++)
	{
		int old_pos = pi[i].second;
		if(isVisited[i] == true || i == old_pos)
			continue;

		// Visiting the element (index) for the first time
		int node = i;
		int cycle = 0;
		while(!isVisited[node])
		{
			isVisited[node] = true;
			int nextIndex = pi[node].second;
			node = nextIndex;
			cycle += 1;
		}
		ans += (cycle - 1);
	}
	return ans;
}


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	std::vector<int>arr;
	int n;
	std::cin >> n;
	for(int i = 0; i < n; i++)
	{
		int x;
		std::cin >> x;
		arr.push_back(x);
	}	

	std::cout << totalMinimumSwaps(arr) << '\n';

	return 0;
}
