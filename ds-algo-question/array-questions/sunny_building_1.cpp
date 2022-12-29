#include<bits/stdc++.h>


int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n, ans = 0;
		int maxHeight = INT_MIN;
		std::cin >> n;
		for(int i = 0; i < n; i++)
		{
			int height;
			std::cin >> height;
			if(height >= maxHeight)
			{
				maxHeight == height;
				ans++;
			}
		}
		std::cout << ans << '\n';
	}
}