#include<bits/stdc++.h>


int findMaxElement(std::vector<int>arr)
{
	int maxi = INT_MIN;
	for(auto it: arr)
	{
		if(it > maxi)
			maxi = it;
	}
	return maxi;
}



int totalHoursTake(std::vector<int>arr, int hour)
{
	int hoursTake = 0;
	for(auto it: arr)
	{
		hoursTake += std::ceil((double)it / (double)hour);
	}
	return hoursTake;
}



int minimumNumberToEatBananas(std::vector<int>arr, int hours)
{
	int left = 1, right = findMaxElement(arr);
	int finalAns = INT_MAX;

	while(left <= right)
	{
		int mid = (left + right) / 2;
		int totalHours = totalHoursTake(arr, mid);
		if(totalHours <= hours)
		{
			finalAns = mid;
			right = mid - 1;
		}
		else
			left = mid + 1;
	}
	return finalAns;
}



int main()
{

	std::vector<int>arr = {3, 6, 7, 11};
	int hours = 8;
	std::cout << minimumNumberToEatBananas(arr, hours) << '\n';

	return 0;
}