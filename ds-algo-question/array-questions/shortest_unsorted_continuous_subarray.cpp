#include<bits/stdc++.h>


// 2 6 4 8 10 9 15

int totalUnsortedSubarray(std::vector<int>nums)
{
	 int lower = 0;
        int n = nums.size();
        int higher = nums.size() - 1;
        int maxi = INT_MIN;
        int mini = INT_MAX;

        std::vector<int>leftToRightMax(n);
        std::vector<int>rightToLeftMin(n);

        for(int i = 0; i < n; i++)
        {
            maxi = std::max(maxi, nums[i]);
            leftToRightMax[i] = maxi;
        }

        for(int i = n - 1; i >= 0; i--)
        {
            mini = std::min(mini, nums[i]);
            rightToLeftMin[i] = mini;
        }

        while(lower < n && nums[lower] <= rightToLeftMin[lower])
            lower++;
        
        while(higher > lower && nums[higher] >= leftToRightMax[higher])
            higher--;
        
        return higher - lower + 1;
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

	std::cout << totalUnsortedSubarray(arr) << '\n';	

	return 0;
}