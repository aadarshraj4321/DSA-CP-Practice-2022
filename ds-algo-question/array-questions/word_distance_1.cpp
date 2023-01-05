#include<bits/stdc++.h>


int wordDistanceOne(std::vector<std::string>arr, std::string word1, std::string word2)
{
	int w1 = -1;
	int w2 = -1;
	int ans = arr.size();

	int n = arr.size();
	for(int i = 0; i < n; i++)
	{
		if(arr[i] == word1)
		{
			w1 = i;
		}
		if(arr[i] == word2)
		{
			w2 = i;
		}
		if(w1 != -1 && w2 != -1)
		{
			ans = std::min(ans, abs(w2 - w1));
		}
	}
	return ans;
}

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	

	//std::vector<std::string>arr = {"aadarsh", "ros", "robotics", "boston", "dynamics"};
	
	std::vector<std::string>arr;
	int n; std::cin >> n;
	for(int i = 0; i < n; i++)
	{
		std::string s; std::cin >> s;
		arr.push_back(s);
	}

	std::string word1, word2; std::cin >> word1 >> word2;
	// std::string word1 = "ros";
	// std::string word2 = "boston";

	std::cout << wordDistanceOne(arr, word1, word2) << '\n';

	return 0;
}