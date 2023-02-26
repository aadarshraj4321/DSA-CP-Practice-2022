#include<bits/stdc++.h>


void bubbleSort(std::vector<int>&arr)
{
	bool isSorted = false;
	for(int i = 0; i < arr.size() - 1; i++)
	{
		if(isSorted)
			break;
		for(int j = 0; j < arr.size() - i - 1; j++)
		{
			if(arr[j] > arr[j + 1])
			{
				std::swap(arr[j], arr[j + 1]);
				isSorted = true;
			}
		}
	}
}


int main()
{

	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif
	
	std::vector<int>arr;
	int n; std::cin >> n;
	for(int i = 0; i < n; i++)
	{
		int x; std::cin >> x;
		arr.push_back(x);
	}

	bubbleSort(arr);
	for(auto val: arr)
		std::cout << val << " ";

	return 0;
}