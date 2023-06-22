#include<bits/stdc++.h>

// Time Complexity = O(N)
// Space Complexity = O(N)



bool isDuplicate(std::vector<int>arr)
{
	std::unordered_set<int>s;

	for(int i = 0; i < arr.size(); i++)
	{
		if(s.find(arr[i]) != s.end())
		{
			return true;
		}
		s.insert(arr[i]);
	}
	return false;
}



int main()
{
	int n; std::cin >> n;
	std::vector<int>arr;
	for(int i = 0; i < n; i++)
	{
		int x; std::cin >> x;
		arr.push_back(x);
	}

	if(isDuplicate(arr))
		std::cout << "True\n";
	else
		std::cout << "False\n";

}