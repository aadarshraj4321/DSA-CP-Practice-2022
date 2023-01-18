#include<bits/stdc++.h>


void linearTimeSort(std::vector<int>&arr)
{
	//int n = arr.size();

	int left = 0;
	int right = arr.size() - 1;
	int current = 0;

	while(current <= right)
	{
		if(arr[current] == 0)
		{
			std::swap(arr[current], arr[left]);
			left++; current++;
		}

		else if(arr[current] == 2)
		{
			std::swap(arr[current], arr[right]);
			right--;
		}
		else
			current++;
	}
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

	linearTimeSort(arr);

	for(auto val: arr)
		std::cout << val << " ";

	return 0;
}