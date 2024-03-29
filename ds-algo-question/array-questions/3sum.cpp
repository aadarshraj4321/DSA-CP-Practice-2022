#include<bits/stdc++.h>



std::vector<std::vector<int>>threeSumBrute(std::vector<int>arr)
{
	std::set<std::vector<int>>st;

	for(int i = 0; i < arr.size(); i++)
	{
		for(int j = i + 1; j < arr.size(); j++)
		{
			for(int k = j + 1; k < arr.size(); k++)
			{
				if(arr[i] + arr[j] + arr[k] == 0)
				{
					std::vector<int>temp = {arr[i], arr[j], arr[k]};
					std::sort(temp.begin(), temp.end());
					st.insert(temp);
				}
			}
		}
	}

	std::vector<std::vector<int>>finalResult(st.begin(), st.end());
	return finalResult;
}




std::vector<std::vector<int>>threeSumBetter(std::vector<int>arr)
{
	std::set<std::vector<int>>st;
	for(int i = 0; i < arr.size(); i++)
	{
		std::set<int>hashSet;
		for(int j = i + 1; j < arr.size(); j++)
		{
			int thirdElement = -(arr[i] + arr[j]);
			if(hashSet.find(thirdElement) != hashSet.end())
			{
				std::vector<int>temp = {arr[i], arr[j], thirdElement};
				std::sort(temp.begin(), temp.end());
				st.insert(temp);
			}
			hashSet.insert(arr[j]);
		}
	}

	std::vector<std::vector<int>>finalResult(st.begin(), st.end());
	return finalResult;
}



int main()
{

	std::vector<int>arr = {-1, -1, 2, 0, 1};
	auto finalResult = threeSumBrute(arr);
	for(auto it: finalResult)
	{
		for(auto i: it)
			std::cout << i << " ";
		std::cout << '\n';
	}

	std::cout << '\n';

	auto finalResultBetter = threeSumBetter(arr);
	for(auto it: finalResultBetter)
	{
		for(auto i: it)
			std::cout << i << " ";
		std::cout << '\n';
	}
	
	return 0;
}