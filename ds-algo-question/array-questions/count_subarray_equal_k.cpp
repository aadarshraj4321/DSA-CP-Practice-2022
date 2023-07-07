#include<bits/stdc++.h>



int totalSubarrayCount(std::vector<int>arr, int k)
{
	int count = 0;
	for(int i  = 0; i < arr.size(); i++)
	{
		for(int j = i; j < arr.size(); j++)
		{
			int sum = 0;
			for(int k = i; k <= j; k++)
			{
				sum += arr[k];
			}
			if(sum == k)
				count++;
		}
	}
	return count;
}



int main()
{

	std::vector<int>arr = {1, 2, 3};
	int k = 3;
	std::cout << totalSubarrayCount(arr, k) << '\n';

	return 0;
}