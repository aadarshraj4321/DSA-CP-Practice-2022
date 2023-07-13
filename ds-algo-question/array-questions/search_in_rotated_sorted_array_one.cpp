#include<bits/stdc++.h>





int searchInRotSortArrayOne(std::vector<int>arr, int target)
{
	int left = 0;
	int right = arr.size() - 1;
	while(left <= right)
	{
		int mid = (left + right) / 2;
		if(arr[mid] == target) return mid;

		if(arr[left] <= arr[mid])
		{
			if(arr[left] <= target && target <= arr[mid])
				right = mid - 1;
			
			else
				left = mid + 1;
		}
		else
		{
			if(arr[mid] <= target && target <= arr[right])
				left = mid + 1;
			else
				right = mid - 1;
		}
	}
	return -1;
}






int main()
{
	std::vector<int>arr = {4, 5, 6, 1, 2, 3};
	std::cout << searchInRotSortArrayOne(arr, 3) << '\n';

	return 0;
}