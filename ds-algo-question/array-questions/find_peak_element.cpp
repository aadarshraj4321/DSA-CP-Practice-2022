#include<bits/stdc++.h>



int findPeakElementBrute(std::vector<int>arr)
{
	for(int i = 0; i < arr.size(); i++)
	{
		if((i == 0 || arr[i] > arr[i - 1]) && i == arr.size() - 1 || arr[i] > arr[i + 1]) return i;
	}
	return -1;
}



int main()
{

	std::vector<int>arr ={1, 2, 3, 4, 5, 6, 8, 7, 1, 2};
	std::cout << findPeakElementBrute(arr) << '\n';

	return 0;
}