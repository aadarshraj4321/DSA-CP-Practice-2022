#include<bits/stdc++.h>


bool outOfOrder(std::vector<int>arr, int i)
{
	int n = arr.size() - 1;
	int x = arr[i];
	if(i == 0)
		return x > arr[1];

	if(i == n)
		return x < arr[i - 1];

	return x > arr[i + 1] || x < arr[i - 1];

}


std::pair<int, int>subArraySort(std::vector<int>arr)
{

	int largest = INT_MIN;
	int smallest = INT_MAX;
	int n = arr.size();

	for(int i = 0; i < n; i++)
	{
		int x = arr[i];
		if(outOfOrder(arr, i))
		{
			smallest = std::min(smallest, x);
			largest = std::max(largest, x);
		}
	}

	// find right index where smallest and largest lie
	if(smallest == INT_MAX)
		return {-1, -1};

	int left = 0;
	while(smallest >= arr[left])
		left++;
	

	int right = arr.size() - 1;
	while(largest <= arr[right])
		right--;

	return {left, right};
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

	auto finalResult = subArraySort(arr);
	std::cout << finalResult.first << " " << finalResult.second << '\n';


	return 0;
}