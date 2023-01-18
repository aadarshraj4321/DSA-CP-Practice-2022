#include<bits/stdc++.h>


void sortColor(std::vector<int>&arr)
{
	int n = arr.size();
	int zeros = 0;
	int ones = 0;
	int twos = 0;

	for(int i = 0; i < n; i++)
	{
		if(arr[i] == 0)
			zeros += 1;
		else if(arr[i] == 1)
			ones += 1;
		else if(arr[i] == 2)
			twos += 1;
	}

	for(int i = 0; i < zeros; i++)
		arr[i] = 0;

	for(int i = zeros; i < zeros + ones; i++)
		arr[i] = 1;

	for(int i = zeros + ones; i < zeros + ones + twos; i++)
		arr[i] = 2;
}


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	std::vector<int>arr;
	int n; std::cin >> n;

	for(int i = 0; i < n; i++)
	{
		int x; std::cin >> x;
		arr.push_back(x);
	}

	sortColor(arr);

	for(auto val: arr)
		std::cout << val << " ";


	return 0;
}