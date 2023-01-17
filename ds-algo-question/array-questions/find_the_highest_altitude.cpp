#include<bits/stdc++.h>


int findHighestAltitude(std::vector<int>arr)
{
	int n = arr.size();
	int maxi = 0;

	std::vector<int>finalArr(n + 1);
	finalArr[0] = 0;

	int j = 0;
	int i = 1;

	while(i <= n)
	{
		finalArr[i] = finalArr[i - 1] + arr[j];
		j++;
		i++;
	}

	for(auto val: finalArr)
	{
		if(val > maxi)
			maxi = val;
	}
	return maxi;

}


int main()
{

	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif
	
	std::vector<int>arr;
	int n; std::cin >> n;

	for(int i = 0; i < n; i++)
	{
		int x; std::cin >> x;
		arr.push_back(x);
	}

	std::cout << findHighestAltitude(arr) << '\n';

	return 0;
}