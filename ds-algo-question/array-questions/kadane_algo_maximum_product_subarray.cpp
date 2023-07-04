#include<bits/stdc++.h>




long long maximumSubarray(std::vector<int>arr)
{
	long long maxi = 0, sum = 0;
	for(int i = 0; i < arr.size(); i++)
	{
		sum += arr[i];
		if(sum < 0)
			sum = 0;

		if(sum > maxi)
			maxi = sum;
	}
	return maxi;
}



std::vector<int>maximumSubarrayIndex(std::vector<int>arr)
{
	long long maxi = 0, sum = 0;
	int startPos = -1, lastPos = -1;
	int start = -1;
	for(int i = 0; i < arr.size() - 1; i++)
	{
		if(sum == 0) start = i;
		sum += arr[i];

		if(sum < 0)
		{
			sum = 0;
		}

		if(sum > maxi)
		{
			maxi = sum;
			startPos = start;
			lastPos = i;
		}
	}

	std::vector<int>result;
	result.push_back(startPos);
	result.push_back(lastPos);

	return result;
}





int main()
{

	std::vector<int>arr = {1, -1, -2, -3, 1, 2, -1, 2, 5, -4};
	long long finalResult = maximumSubarray(arr);
	std::cout << finalResult << '\n';

	auto finalResultVector = maximumSubarrayIndex(arr);
	for(auto it: finalResultVector)
		std::cout << it << " ";

	return 0;
}