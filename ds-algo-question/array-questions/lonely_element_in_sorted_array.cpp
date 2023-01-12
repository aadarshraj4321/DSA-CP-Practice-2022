#include<bits/stdc++.h>


bool isSingleElement(std::vector<int>arr, int mid)
{
	if(mid == 0 && arr[0] != arr[1]) return true;
	if(mid < arr.size() - 1 && arr[mid] != arr[mid - 1]) return true;
	if(arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1]) return true;
	return false;
}

int lonelyElement(std::vector<int>arr)
{

	if(arr.size() == 1)
		return arr[0];

	int left = 0;
	int right = arr.size() - 1;
	while(left <= right)
	{
		int mid = (left + right) / 2;
		if(isSingleElement(arr, mid)) return arr[mid];
		if(mid + 1 < arr.size() && arr[mid] == arr[mid + 1])
		{
			if(mid % 2 == 0)
			{
				left = mid + 1;
			}
			else
			{
				right = mid - 1;
			}
		}
		if(mid >= 1 && arr[mid] == arr[mid - 1])
		{
			if(mid % 2 == 1)
			{
				left = mid + 1;
			}
			else
			{
				right = mid - 1;
			}
		}
	}
	return arr[left];
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

	std::cout << lonelyElement(arr);
	

	return 0;
}