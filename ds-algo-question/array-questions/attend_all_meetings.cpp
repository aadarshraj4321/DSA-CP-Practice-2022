#include<bits/stdc++.h>


bool allMettingPossible(std::vector<std::vector<int>>&arr)
{
	std::sort(arr.begin(), arr.end());

	int n = arr.size();
	for(int i = 1; i < n; i++)
	{
		if(arr[i][0] < arr[i - 1][1])
			return false;
	}
	return true;
}

int main()
{

	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif

	std::vector<std::vector<int>>arr = {{5, 10}, {17, 18}, {0, 5}, {21, 24}, {13, 16}};
	int n = arr.size();

	// for(int i = 0; i < n; i++)
	// {
	// 	for(int j = 0; j < 2; j++)
	// 	{
	// 		std::cout << arr[i][j] << " ";
	// 	}
	// 	std::cout << '\n';
	// }

	if(allMettingPossible(arr)) std::cout << "True\n";
	else std::cout << "False\n";



	return 0;
}