#include<bits/stdc++.h>



int repeatOnce(std::vector<int>arr)
{
	std::unordered_map<int, int>mp;

	for(int i = 0; i < arr.size(); i++)
	{
		mp[arr[i]]++;
	}

	for(auto it: mp)
	{
		if(it.second == 1)
			return it.first;
	}
	return -1;
}



int repeatOnceBest(std::vector<int>arr)
{
	int xorArray = 0;
	for(int i = 0; i < arr.size(); i++)
	{
		xorArray = xorArray ^ arr[i];
	}

	return xorArray;
}




int main()
{

	std::vector<int>arr = {1, 1, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 7};
	std::cout << repeatOnce(arr) << '\n';
	std::cout << repeatOnceBest(arr) << '\n';

	return 0;
}