#include<bits/stdc++.h>



std::string lonestCommonPrefix(std::vector<std::string>arr)
{
	if(arr.size() == 0)
		return "";

	int n = arr.size();
	std::string ans = arr[0];
	for(int i = 1; i < n; i++)
	{
		std::string temp = "";
		for(int j = 0; j < std::min(ans.size(), arr[i].size()); j++)
		{
			if(ans.at(j) == arr[i].at(j))
			{
				temp += ans.at(j);
			}
			else
				break;
		}
		ans = temp;
	}
	return ans;
}



int main()
{

	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif

	std::vector<std::string>arr;
	int n; std::cin >> n;
	for(int i = 0 ; i  < n; i++)
	{
		std::string x; std::cin >> x;
		arr.push_back(x);
	}

	std::string s = lonestCommonPrefix(arr);
	std::cout << s << '\n';
	

	return 0;
}