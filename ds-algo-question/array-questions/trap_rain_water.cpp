#include<bits/stdc++.h>




int totalTrapWater(std::vector<int>arr)
{
	// std::vector<int>left(arr.size(), 0);
	// std::vector<int>right(arr.size(), 0);
	std::vector<int>left(arr.size(), 0), right(arr.size(), 0);

	left[0] = arr[0];
	right[arr.size() - 1] = arr[arr.size() - 1];

	for(int i = 1; i < arr.size(); i++)
	{
		left[i] = std::max(left[i - 1], arr[i]);
		right[arr.size() - i - 1] = std::max(right[arr.size() - i], arr[arr.size() - i - 1]);
	}

	// calculate the total trap water
	int trappedWater = 0;
	for(int i = 0; i < arr.size(); i++)
	{
		trappedWater += std::min(left[i], right[i]) - arr[i];
	}
	return trappedWater;
}



int main()
{

	std::vector<int>arr;
	int n; std::cin >> n;
	for(int i = 0; i < n; i++)
	{
		int x; std::cin >> x;
		arr.push_back(x);
	}

	std::cout << totalTrapWater(arr) << '\n';


	return 0;
}