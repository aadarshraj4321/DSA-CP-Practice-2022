#include<bits/stdc++.h>


bool isSubset(std::string s1, std::string s2)
{
	int i = s1.length() - 1;
	int j = s2.length() - 1;

	while(i >= 0 && j >= 0)
	{
		if(s1[i] == s2[j])
		{
			i--;
			j--;
		}
		else
			i--;
	}
	if(j == -1) return true;
	return false;
}


int main()
{

	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif
	
	std::string s1;
	std::cin >> s1;

	std::string s2;
	std::cin >> s2;

	std::cout << isSubset(s1, s2) << '\n';

	return 0;
}