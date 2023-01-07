#include<bits/stdc++.h>

bool cmp(int a, int b)
{
	std::string x = std::to_string(a);
	std::string y = std::to_string(b);


	return x + y > y + x;
}

void biggestNumber(std::vector<int>&arr)
{
	std::sort(arr.begin(), arr.end(), cmp);
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



	biggestNumber(arr);
	
	for(int i = 0; i < n; i++)
	{
		std::cout << arr[i] << "";
	}

	return 0;
}