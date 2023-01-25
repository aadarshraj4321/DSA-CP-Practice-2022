#include<bits/stdc++.h>


int minimumInRotatedSorted(std::vector<int>arr)
{
	int n = arr.size();
	if(arr[0] < arr[n - 1])
		return arr[0];

	int left = 0;
	int right = arr.size() - 1;

	while(left <= right)
	{
		int mid = (left + right) / 2;
		if(mid - 1 >= 0 &&  arr[mid] < arr[mid - 1])
			return arr[mid];

		if(arr[mid] > arr[n - 1])
			left = mid + 1;
		
		else
			right = mid - 1;
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
	for(int i = 0; i < n; i++)
	{
		int x; std::cin >> x;
		arr.push_back(x);
	}

	std::cout << minimumInRotatedSorted(arr) <<  '\n';	

	return 0;
}