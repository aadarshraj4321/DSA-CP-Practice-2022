#include<bits/stdc++.h>




std::vector<std::vector<int>>fourSumBrute(std::vector<int>arr)
{

	std::set<std::vector<int>>st;

	for(int i = 0; i < arr.size(); i++)
	{
		for(int j = i + 1; j < arr.size(); j++)
		{
			for(int k = j + 1; k < arr.size(); k++)
			{
				for(int l = k + 1; l < arr.size(); l++)
				{
					long long fourSum = arr[i] + arr[j];
					fourSum += arr[k];
					fourSum += arr[l];

					if(fourSum == 0)
					{
						std::vector<int>temp = {arr[i], arr[j], arr[k], arr[l]};
						std::sort(temp.begin(), temp.end());
						st.insert(temp);
					}
				}
			}
		}
	}
	std::vector<std::vector<int>>finalResult(st.begin(), st.end());
	return finalResult;
}




std::vector<std::vector<int>>fourSumBetter(std::vector<int>arr, int target)
{
	std::set<std::vector<int>>st;
	for(int i = 0; i < arr.size(); i++)
	{
		for(int j = i + 1; j < arr.size(); j++)
		{
			std::set<long long>hashSet;
			for(int k = j + 1; k < arr.size(); k++)
			{
				long long fourSum = arr[i] + arr[j];
				fourSum += arr[k];
				long long fourthVar = target - (fourSum);

				if(hashSet.find(fourthVar) != hashSet.end())
				{
					std::vector<int>temp = {arr[i], arr[j], arr[k], (int)fourthVar};
					std::sort(temp.begin(), temp.end());
					st.insert(temp);
				}
				hashSet.insert(arr[k]);
			}
		}
	}

	std::vector<std::vector<int>>finalResult(st.begin(), st.end());
	return finalResult;
}






std::vector<std::vector<int>>fourSumOptimal(std::vector<int>arr, int target)
{
	std::vector<std::vector<int>>finalResult;
	for(int i = 0; i < arr.size(); i++)
	{
		if(i > 0 && arr[i] == arr[i - 1]) continue;
		for(int j = i + 1; j < arr.size(); j++)
		{
			if(j != i +  1 && arr[j] == arr[j - 1]) continue;
			int k = j + 1;
			int l = arr.size() - 1;

			while(k < l)
			{
				long long totalSum = arr[i];
				totalSum += arr[j];
				totalSum += arr[k];
				totalSum += arr[l];

				if(totalSum == target)
				{
					std::vector<int>temp = {arr[i], arr[j], arr[k], arr[l]};
					finalResult.push_back(temp);
					k++; l--;

					while(k < l && arr[k] == arr[k - 1]) k++;
					while(k < l && arr[l] == arr[l + 1]) l--;

				}
				else if(totalSum > target) l--;
				else k++;
			}
		}
	}
	return finalResult;
}




int main()
{

	std::vector<int>arr = {-1, -1, 0, 2, 3, 0, -3, 4, 4, -4, -4,  3, -2, -1, 0, 10, -10};
	

	auto finalResultBrute = fourSumBrute(arr);
	for(auto it: finalResultBrute)
	{
		for(auto i: it)
			std::cout << i << " ";
		std::cout << '\n';
	}

	std::cout << '\n';
	std::cout << "------------------------------\n";


	auto finalResultBetter = fourSumBetter(arr, 4);
	for(auto it: finalResultBetter)
	{
		for(auto i: it)
			std::cout << i << " ";
		std::cout << '\n';
	}



	std::cout << '\n';
	std::cout << "--------------------------------\n";


	auto finalResultOptimal = fourSumOptimal(arr, 4);
	for(auto it: finalResultOptimal)
	{
		for(auto i: it)
			std::cout << i << " ";
		std::cout << '\n';
	}


	return 0;
}