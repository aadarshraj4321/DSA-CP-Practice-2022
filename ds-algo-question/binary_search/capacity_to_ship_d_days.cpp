#include<bits/stdc++.h>


int maxiElement(std::vector<int>arr)
{
	int maxi = INT_MIN;
	for(auto it: arr)
		maxi = std::max(maxi, it);

	return maxi;
}


long long totalSumArray(std::vector<int>arr)
{
	long long total = 0;
	for(auto it: arr)
		total += it;

	return total;
}


int daysRequiredToShip(std::vector<int>arr, int capacity)
{
	int daysTake = 1, loadedItem = 0;
	for(int i = 0; i < arr.size(); i++)
	{
		if(loadedItem +  arr[i] > capacity)
		{
			daysTake++;
			loadedItem = arr[i];
		}
		else
			loadedItem += arr[i];
	}
	return daysTake;
}


int capacityToShipDDaysBrute(std::vector<int>arr, int days)
{
	int minGo = maxiElement(arr);
	long long maxGo = totalSumArray(arr);

	for(int i = minGo; i <= maxGo; i++)
	{
		int capacity = i;
		int daysRequired = daysRequiredToShip(arr, capacity);
		if(daysRequired <= days)
			return i;
	}
	return -1;
}



int capacityToShipDDaysOptimal(std::vector<int>arr, int days)
{
	int left = maxiElement(arr);
	int right = totalSumArray(arr);

	while(left <= right)
	{
		int mid = (left + right) / 2;
		int daysRequired = daysRequiredToShip(arr, mid);
		if(daysRequired <= days)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return left;
}




int main()
{
	std::vector<int>arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int days = 1;

	// std::vector<int>arr = {5, 4, 5, 2, 3, 4, 5, 6};
	// int days = 5;
	
	std::cout << capacityToShipDDaysBrute(arr, days) << '\n';
	std::cout << capacityToShipDDaysOptimal(arr, days) << '\n';

	return 0;
}