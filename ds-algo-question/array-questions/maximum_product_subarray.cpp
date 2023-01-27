#include<bits/stdc++.h>


int maximumProductSubarray(std::vector<int>arr)
{
	int n = arr.size();
	if(n == 1) return arr[0];

	bool isZero = false; 
	bool isPos = false;
	bool isNotZero = false;
	int posNumber = 1;
	int negNumber = 1;
	int maxi = INT_MIN;

	for(int i = 0; i < n; i++)
	{
		if(arr[i] > 0)
		{
			isPos = true;
			posNumber *= arr[i];
			if(negNumber != 1) 
				negNumber *= arr[i];
		}
		else if(arr[i] < 0)
		{
			int tmp = posNumber;
			posNumber = std::max(1, negNumber * arr[i]);
			if(nnegNumber * arr[i] >= 1)
				isNotZero = true;
			negNumber = tmp * arr[i];
		}
		else
		{
			negNumber = 1;
			posNumber = 1;
			isZero = true;
		}
		if(maxi < posNumber)
			maxi = posNumber;
	}

	if(maxi == 1)
	{
		if(isPos) return maxi;
		if(isZero && !isNotZero) return 0;
	}
	return maxi;
}


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	std::vector<int>arr;
	int n; std::cin >> n;
	for(int i = 0; i < n; i++)
	{
		int x; std::cin >> x;
		arr.push_back(x);
	}	

	int finalReuslt = maximumProductSubarray(arr);
	std::cout << finalReuslt << '\n';

	return 0;
}