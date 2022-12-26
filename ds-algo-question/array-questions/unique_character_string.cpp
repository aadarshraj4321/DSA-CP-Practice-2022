#include<bits/stdc++.h>


int Fun(std::vector<std::string>arr, int i, std::string s)
{

	//Base Case
	if(i == arr.size())
	{
		if(s.length() > 26) return 0;
		int freq[26] = {0};
		for(int j = 0; j < s.length(); j++)
		{
			if(freq[s[j] - 'a'] == 1) return 0;
			freq[s[j] - 'a']++;
		}
		return s.length();
	}

	int op1, op2;
	op1 = op2 = INT_MIN;
	if(s.length() + arr[i].length() <= 26)
	{
		op1 = Fun(arr, i + 1, s + arr[i]);
	}
	op2 = Fun(arr, i + 1, s);
	return std::max(op1, op2);
}


int UniqueString(std::vector<std::string>arr)
{
	std::string s = "";
	return Fun(arr, 0, s);
}


int main()
{

	std::vector<std::string>arr;
	int n;
	std::cin >> n;
	while(n--)
	{
		std::string s;
		std::cin >> s;
		arr.push_back(s);
	}

	std::cout << UniqueString(arr) << '\n';

	return 0;
}