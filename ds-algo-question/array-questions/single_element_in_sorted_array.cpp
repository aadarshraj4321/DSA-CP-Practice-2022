#include<bits/stdc++.h>





int singleElementSortedArray(std::vector<int>arr)
{
	if(arr.size() == 1) return arr[0];
	if(arr[0] != arr[1]) return arr[0];
	if(arr[arr.size() - 1] != arr[arr.size() - 2]) return arr[arr.size() - 1];

	int left = 0, right = arr.size() - 2;
	while(left <= right)
	{
		int mid = (left + right) / 2;
		if(arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]) return arr[mid];

		if((mid % 2 == 1 && arr[mid] == arr[mid - 1]) || mid % 2 == 0 && arr[mid] == arr[mid + 1]) 
			left = mid +  1;
		else
			right = mid - 1;

	}
	return -1;
}




int main()
{

	std::vector<int>arr = {1, 1, 2, 2, 3, 3, 4, 5, 5};
	std::cout << singleElementSortedArray(arr) << '\n';

	return 0;
}