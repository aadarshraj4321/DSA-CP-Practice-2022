#include<bits/stdc++.h>



int minimumInRotatedSortedArray(std::vector<int>arr)
{
	int left = 0, right = arr.size() - 1;
	int mini = INT_MAX;

	while(left <= right)
	{
		int mid = (left + right) / 2;

		if(arr[left] <= arr[right])
		{
			mini = std::min(mini, arr[left]);
			break;
		}

		if(arr[left] <= arr[mid])
		{
			mini = std::min(mini, arr[left]);
			left = mid + 1;
		}
		else
		{
			mini = std::min(mini, arr[mid]);
			right = mid - 1;
		}
	}
	return mini;
}




int main()
{

	std::vector<int>arr = {4, 5, 6, 2, 3};
	std::cout << minimumInRotatedSortedArray(arr) << '\n';

	return 0;
}