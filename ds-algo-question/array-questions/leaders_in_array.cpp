#include<bits/stdc++.h>



std::vector<int>superiorElements(std::vector<int>arr)
{
	std::vector<int>result;

	for(int i = 0; i < arr.size(); i++)
	{
		int flag = true;
		for(int j = i + 1; j < arr.size(); j++)
		{
			if(arr[j] > arr[i])
			{
				flag = false;
				break;
			}
		}
		if(flag == true) result.push_back(arr[i]);
	}

	return result;
}



std::vector<int>superiorElementsBetter(std::vector<int>arr)
{
	std::vector<int>finalResult;
	int maxi  = INT_MIN;

	for(int i = arr.size() - 1; i >= 0; i--)
	{
		if(arr[i] > maxi)
		{
			maxi = arr[i];
			finalResult.push_back(arr[i]);
		}
	}

	std::sort(finalResult.begin(), finalResult.end());
	return finalResult;
}




int main()
{

	std::vector<int>arr = {10, 22, 12, 3, 0, 6};
	auto finalResult = superiorElementsBetter(arr);

	for(auto it: finalResult)
		std::cout << it << " ";
}