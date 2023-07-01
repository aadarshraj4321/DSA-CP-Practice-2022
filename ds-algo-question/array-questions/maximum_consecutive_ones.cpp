#include<bits/stdc++.h>



int maximumConsecutiveOnes(std::vector<int>arr)
{
	int maxi = 0;
	int count = 0;
	for(int i = 0; i < arr.size() - 1; i++)
	{
		if(arr[i] == 1)
		{
			count++;
			maxi = std::max(count, maxi);
		}
		else
			count = 0;
	}

	return maxi;
}



int main()
{

	std::vector<int>arr = {1, 1, 0, 1, 11, 1, 1, 1, 1, 1, 9, 1, 2};
	std::cout << maximumConsecutiveOnes(arr) << '\n';

	return 0;
}