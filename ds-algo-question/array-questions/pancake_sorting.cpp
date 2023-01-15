#include<bits/stdc++.h>

int findLastIndex(std::vector<int>arr, int n)
{ 
	int an = arr.size();
	for(int i = 0; i < an; i++)
	{
		if(arr[i] == n)
			return i;
	}
	return -1;
}

void flip(std::vector<int>&arr, int k)
{
	for(int i = 0; i < k / 2; i++)
	{
		int t = arr[i];
		arr[i] = arr[k - i - 1];
		arr[k - i - 1] = t;
	}
}

std::vector<int>panCakeSorting(std::vector<int>arr, int n)
{
	std::vector<int>finalResult;
	while(n > 0)
	{
		int indexPos = findLastIndex(arr, n);
		if(indexPos != n - 1)
		{
			flip(arr, indexPos + 1);
			flip(arr, n);
			finalResult.push_back(indexPos + 1);
			finalResult.push_back(n);
		}
		n--;
	}
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

	auto finalResult = panCakeSorting(arr, n);
	for(auto val: finalResult)
		std::cout << val << " "; 

	return 0;
}