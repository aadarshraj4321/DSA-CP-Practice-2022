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







int minimumDaysToMakeMBouquets(std::vector<int>arr)
{
	int left = miniElement(arr);
	int right = maxiElement(arr);

	while(left <= right)
	{
		int mid = (left + right) / 2;
		if(isPossibleMBouquets())

	}
}



int main()
{

	std::vector<int>arr = {7, 7, 7, 7, 13, 11, 12, 7};
	std::cout << minimumDaysToMakeMBouquets(arr) << '\n';

	return 0;
}