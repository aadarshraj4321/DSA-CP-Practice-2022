#include<bits/stdc++.h>



int findPeakElementBrute(std::vector<int>arr)
{
	for(int i = 0; i < arr.size(); i++)
	{
		if((i == 0 || arr[i] > arr[i - 1]) && i == arr.size() - 1 || arr[i] > arr[i + 1]) return i;
	}
	return -1;
}



int findPeakElementOptimal(std::vector<int>arr)
{
	if(arr.size() == 1) return 0;
	if(arr[0] > arr[1]) return 0;
	if(arr[arr.size() - 1] > arr[arr.size() - 2]) return arr.size() - 1;

	int left = 0, right = arr.size() - 2;
	while(left <= right)
	{
		int mid = (left + right) / 2;
		if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]) return mid;
		else if(arr[mid] > arr[mid - 1]) left = mid + 1;
		else right = mid - 1;
	}
	return -1;
}





int main()
{

	std::vector<int>arr ={1, 2, 3, 4, 5, 6, 8, 7, 1, 1};
	std::cout << findPeakElementBrute(arr) << '\n';
	std::cout << findPeakElementOptimal(arr) << '\n';

	return 0;
}