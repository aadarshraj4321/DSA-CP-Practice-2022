#include<bits/stdc++.h>


int maxiElement(std::vector<int>arr)
{
	int maxi = INT_MIN;
	for(auto it: arr)
	{
		maxi = std::max(maxi, it);
	}
	return maxi;
}

int totalArrayDivisorSum(std::vector<int>arr, int mid)
{
	int totalSum = 0;
	for(auto it: arr)
	{
		totalSum += std::ceil((double)(it) / (double)(mid));
	}
	return totalSum;
}

int minimumDivisorThreshold(std::vector<int>arr, int threshold)
{
	int left= 1;
	int right = maxiElement(arr);
	int miniDivisor = -1;

	while(left <= right)
	{
		int mid = (left + right) / 2;
		int divisorSum = totalArrayDivisorSum(arr, mid);

		if(divisorSum <= threshold)
		{
			miniDivisor = mid;
			right = mid - 1;
		}
		else
			left = mid + 1;
	}
	return miniDivisor;
}



int main()
{

	std::vector<int>arr = {1, 2, 3, 4, 5};
	int threshold = 8;
	std::cout << minimumDivisorThreshold(arr, threshold) << '\n';

	return 0;	
}