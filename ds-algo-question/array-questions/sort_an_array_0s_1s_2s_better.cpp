#include<bits/stdc++.h>



void sortTheArray(std::vector<int>&arr)
{
	int left = 0, mid = 0;
	int right = arr.size() - 1;

	while(mid <= right)
	{
		if(arr[mid] == 0)
		{
			std::swap(arr[mid], arr[left]);
			mid++;
			left++;
		}
		else if(arr[mid] == 1)
		{
			mid++;
		}
		else
		{
			std::swap(arr[mid], arr[right]);
			right--;
		}
	}
}


int main()
{

	std::vector<int>arr = {1, 0, 1, 1, 0, 0, 2 ,0, 0, 2, 0, 1, 0};
	sortTheArray(arr);

	for(auto it: arr)
		std::cout << it << " ";

	return 0;
}