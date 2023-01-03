#include<bits/stdc++.h>


std::vector<int>targetZero(int n)
{
	int halfVec = floor(n / 2.0);
	std::vector<int>finalResult;
	for(int i = 1; i <= halfVec; i++)
	{
		finalResult.push_back(i);
		finalResult.push_back((-1 * i));
	}

	if(n % 2 == 1)
	{
		finalResult.push_back(0);
	}
	return finalResult;
}

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int n;
	std::cin >> n;
	auto finalResult = targetZero(n);
	for(auto val: finalResult)
		std::cout << val << " ";	

	return 0;
}