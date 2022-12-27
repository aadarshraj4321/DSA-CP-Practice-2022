#include<bits/stdc++.h>


int containerMostWater(std::vector<int>arr)
{
	int area = 0;
	int left = 0;
	int right = arr.size() - 1;
	while(left < right)
	{
		area = std::max(area, std::min(arr[left], arr[right]) * (right - left));
		if(arr[left] < arr[right])
			left++;
		else
			right--;
	}
	return area;
}


int main()
{

	std::vector<int>arr;
	int n;
	std::cin >> n;
	while(n--)
	{
		int t;
		std::cin >> t;
		arr.push_back(t);
	}

	std::cout << containerMostWater(arr) << '\n';
}