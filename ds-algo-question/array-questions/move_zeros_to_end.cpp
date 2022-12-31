#include<bits/stdc++.h>


void moveZerosToEnd(std::vector<int> arr)
{	
	int n = arr.size();
	int j = 0;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] != 0)
		{
			std::swap(arr[i], arr[j]);
			j++;
		}
	}

	for(auto val: arr)
		std::cout << val << " ";
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
	
	moveZerosToEnd(arr);

	return 0;
}