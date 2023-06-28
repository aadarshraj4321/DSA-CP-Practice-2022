#include<bits/stdc++.h>



bool isValidParanthesis(std::string s)
{
	std::stack<char>st;
	std::unordered_map<char, char>mp = {
		{')', '('},
		{']', '['},
		{'}', '{'},
	};

	for(auto c: s)
	{
		if(mp.find(c) != mp.end())
		{
			if(st.empty()) return false;
		
		

			if(mp[c] != st.top()) return false;

			st.pop();
		}
		else
			st.push(c);
	}
	return st.empty();
}



int main()
{
	std::string s = "())";
	bool result = isValidParanthesis(s);
	std::cout << result << '\n';
	return 0;
}