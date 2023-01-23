#include<bits/stdc++.h>


std::vector<int>frequencyOfTwo(std::vector<int>arr)
{
	int n = arr.size();
	std::vector<int>finalResult;
	for(int i = 0; i < n; i++)
	{
		int index = std::abs(arr[i]);
		if(arr[index - 1] < 0)
			finalResult.push_back(index);
		else
			arr[index - 1] *= -1;

	}
	return finalResult;
}



int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	std::vector<int>arr;
	int n; std::cin >> n;
	for(int i = 0; i < n; i++)
	{
		int x; std::cin >> x;
		arr.push_back(x);
	}

	auto finalResult = frequencyOfTwo(arr);
	for(auto val: finalResult)
		std::cout << val << " ";

	return 0;
}