#include<bits/stdc++.h>


void mergeDividedArray(std::vector<int>&arr, int start, int end)
{
	std::vector<int>tmpStore;
	int i = start;
	int mid = (start + end) / 2;
	int j = mid + 1;

	while(i <= mid && j <= end)
	{
		if(arr[i] < arr[j])
			tmpStore.push_back(arr[i++]);

		else
			tmpStore.push_back(arr[j++]);
	}

	// copy remaining element from first start array
	while(i <= mid)
		tmpStore.push_back(arr[i++]);

	// copy remaining element from second mid + 1 of array
	while(j <= end)
		tmpStore.push_back(arr[j++]);


	// copy back the elements from tmpStore to origin array
	int k = 0;
	for(int idx = start; idx <= end; idx++)
	{
		arr[idx] = tmpStore[k++];
	}

	return;
}


void mergeSort(std::vector<int>&arr, int start, int end)
{
	// Base Case
	if(start >= end)
		return;


	// Recursive Case
	int mid = (start + end) / 2;
	mergeSort(arr, start, mid);
	mergeSort(arr, mid + 1, end);
	return mergeDividedArray(arr, start, end);
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
		int x; std:: cin >> x;
		arr.push_back(x);
	}

	int start = 0;
	int end = arr.size() - 1;
	mergeSort(arr, start, end);

	for(auto val: arr)
		std::cout << val << ' ';

	return 0;
}