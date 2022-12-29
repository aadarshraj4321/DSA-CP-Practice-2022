#include<bits/stdc++.h>


int totalSunnyBuilding(std::vector<int>arr)
{
	int allSunnyBuildings = 1;
	int maxHeight = arr[0];


	for(int i = 1; i < arr.size(); i++)
	{
		if(arr[i] >= arr[i - 1])
		{
			maxHeight = arr[i];
			allSunnyBuildings++;
		}
	}

	return allSunnyBuildings;
}


int main()
{




	std::vector<int>arr;
	int n;
	std::cin >> n;
	for(int i = 0; i < n; i++)
	{
		int t;
		std::cin >> t;
		arr.push_back(t);
	}

	std::cout << totalSunnyBuilding(arr) << '\n';



	// int t;
	// std::cin >> t;
	// while(t--)
	// {
	// 	std::vector<int>arr;
	// 	int n;
	// 	std::cin >> n;
	// 	for(int i = 0; i < n; i++)
	// 	{
	// 		int x;
	// 		std::cin >> x;
	// 		arr.push_back(x);
	// 	}
	// 	std::cout << totalSunnyBuilding(arr) << '\n';
	// }
}