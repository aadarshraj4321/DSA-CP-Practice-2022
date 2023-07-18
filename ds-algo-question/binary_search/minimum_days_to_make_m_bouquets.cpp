#include<bits/stdc++.h>


int miniElement(std::vector<int>arr)
{
	int mini = INT_MAX;
	for(auto it: arr)
		mini = std::min(it, mini);

	return mini;
}



int maxiElement(std::vector<int>arr)
{
	int maxi = INT_MIN;
	for(auto it: arr)
		maxi = std::max(it, maxi);

	return maxi;
}



bool isPossibleMBouquets(std::vector<int>arr, int midDay, int m, int k)
{
	int count = 0;
	int numberOfBouquets = 0;
	for(int i = 0; i < arr.size(); i++)
	{
		if(arr[i] <= midDay)
			count++;
		else
		{
			numberOfBouquets += (count / k);
			count = 0;
		}
	}
	numberOfBouquets += (count / k);
	return numberOfBouquets >= m;
}





int minimumDaysToMakeMBouquets(std::vector<int>arr, int m, int k)
{

	long long val = m * 1LL * k * 1LL;
	if(val > arr.size()) return -1;

	int left = miniElement(arr);
	int right = maxiElement(arr);

	while(left <= right)
	{
		int mid = (left + right) / 2;
		if(isPossibleMBouquets(arr, mid, m, k))
			right = mid - 1;
		else
			left = mid + 1;
	}
	return left;
}



int main()
{

	std::vector<int>arr = {7, 7, 7, 7, 13, 11, 12, 7};
	int m = 2, k = 3;
	std::cout << minimumDaysToMakeMBouquets(arr, m, k) << '\n';

	return 0;
}