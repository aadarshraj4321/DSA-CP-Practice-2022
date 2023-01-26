#include<bits/stdc++.h>


std::pair<int, int>firstAndLastIndex(std::vector<int>arr, int target)
{

	//int n = arr.size();
	std::pair<int, int>finalResult;
	int left = 0;
	int right = arr.size() - 1;

	int firstIndex = -1;
	int lastIndex = -1;

	// firstly find the firstIndex of target
	while(left <= right)
	{
		int mid = (left + right) / 2;
		if(arr[mid] == target)
		{
			firstIndex = mid;
			right = mid - 1;
		}
		else if(arr[mid] > target)
			right = mid - 1;
		
		else
			left = mid + 1;
	}


	left = 0; right = arr.size() - 1;
	// last find the lastIndex of target
	while(left <= right)
	{
		int mid = (left + right) / 2;
		if(arr[mid] == target)
		{
			lastIndex = mid;
			left = mid + 1;
		}

		else if(arr[mid] > target)
			right = mid - 1;

		else
			left = mid + 1;
	}

	finalResult.first = firstIndex;
	finalResult.second = lastIndex;
	return finalResult;
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
	int target;
	std::cin >> target;

	auto finalResult = firstAndLastIndex(arr, target);
	std::cout << finalResult.first << " " << finalResult.second << '\n';

	return 0;
}