#include<bits/stdc++.h>


std::vector<int>majorityElement(std::vector<int>arr)
{
	int firstElment = arr[0];
	int firstElementCount = 1;

	int secondElement = 0;
	int secondElementCount = 0;


	for(int i = 1; i < arr.size(); i++)
	{
		if(arr[i] == firstElment)
			firstElementCount++;

		else if(arr[i] == secondElement)
			secondElementCount++;

		else if(firstElementCount == 0)
		{
			firstElment = arr[i];
			firstElementCount = 1;
		}

		else if(secondElementCount == 0)
		{
			secondElement = arr[i];
			secondElementCount = 1;
		}
		else
		{
			firstElementCount--;
			secondElementCount--;
		}
	}

	firstElementCount = secondElementCount = 0;
	for(int i = 0; i < arr.size(); i++)
	{
		if(arr[i] == firstElment)
			firstElementCount++;
		else if(arr[i] == secondElement)
			secondElementCount++;
	}

	std::vector<int>finalResult;
	if(firstElementCount > arr.size() / 3)
		finalResult.push_back(firstElment);
	if(secondElementCount > arr.size() / 3)
		finalResult.push_back(secondElement);

	return finalResult;
}


// main function
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
	
	auto finalResult = majorityElement(arr);
	if(finalResult.size() == 0)
		std::cout << "None Majority Element" << '\n';
	else
	{
		for(auto val: finalResult)
			std::cout << val << '\n';
	}

	return 0;
}
