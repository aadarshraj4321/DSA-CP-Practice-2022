#include<bits/stdc++.h>


bool isAnagram(std::string s, std::string t)
{
	if(s.size() != t.size()) return false;

	std::unordered_map<char, int>smap;
	std::unordered_map<char, int>tmap;

	for(int i = 0;  i < t.size(); i++)
	{
		smap[s[i]]++;
		tmap[t[i]]++;
	}


	for(int i = 0; i < smap.size(); i++)
	{
		if(smap[i] != tmap[i]) return false;
	}


	return true;
}


int main()
{

	std::string s;
	std::cin >> s;

	std::string t;
	std::cin >> t;

	if(isAnagram(s, t))
		std::cout << "True\n";
	else
		std::cout << "False\n";


	return 0;
}