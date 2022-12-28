#include<bits/stdc++.h>



int longestPeakMountain(std::vector<int>arr)
{
	if(arr.size() < 3)
	{
		return 0;
	}

	int longestPeak = 0;
	for(int i = 1; i <= arr.size() - 2;)
	{
		if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
		{
			int count = 1;
			int j = i;

			while(j >= 1 && arr[j] > arr[j - 1])
			{
				count++;
				j--;
			}

			while(i <= arr.size() - 2 && arr[i] > arr[i + 1])
			{
				count++;
				i++;
			}

			longestPeak = std::max(longestPeak, count);
		}
		else
			i++;
	}
	return longestPeak;
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

	std::cout << longestPeakMountain(arr) << '\n';
}