#include<bits/stdc++.h>





bool searchSortedArray(std::vector<int>arr, int target)
{
	int left = 0, right = arr.size() - 1;

	while(left <= right)
	{	
		int mid = (left + right) / 2;
		if(arr[mid] == target) return true;
		if(arr[left] == arr[mid] && arr[mid] == arr[right]) 
		{
			left++;
			right--;
			continue;
		}

		if(arr[left] <= arr[mid])
		{
			if(arr[left] <= target && target <= arr[mid]) right = mid - 1;
			else left = mid + 1;
		}		
		else
		{
			if(arr[mid] <= target && target <= arr[right]) left = mid + 1;
			else right = mid - 1;
		}
	}
	return false;
}





int main()
{
	std::vector<int>arr = {4, 5, -1, 6, 6, 5, 3, 1};
	if(searchSortedArray(arr, 6))
		std::cout << "True\n";
	else
		std::cout << "False\n";

	return 0;
}


