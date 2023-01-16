#include<bits/stdc++.h>


int searchInRotatedSorArray(std::vector<int>arr, int target)
{
	int n = arr.size();
	int left = 0;
	int right = arr.size() - 1;

	while(left <= right)
	{
		int mid = (left + right) / 2;
		if(arr[mid] == target)
			return mid;

		else if(arr[mid] > arr[n - 1])
		{
			if(target > arr[mid] || target < arr[0])
				left = mid + 1;
			else
				right = mid - 1;
		}

		else
		{
			if(target < arr[mid] || target > arr[n - 1])
				right = mid - 1;
			else
				left = mid + 1;
		}
	}
	return -1;
}


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	std::vector<int>arr;
	int n; std::cin >> n;
	int target; std::cin >> target;

	for(int i = 0; i < n; i++)
	{
		int x; std::cin >> x;
		arr.push_back(x);
	}

	std::cout << searchInRotatedSorArray(arr, target) << '\n';
	

	return 0;
}