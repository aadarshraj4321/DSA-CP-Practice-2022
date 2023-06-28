#include<bits/stdc++.h>



void thisIsMap()
{
	// map is container which store everything in "key and value", key: value
	// map store unique keys in sorted order

	std::map<int, int>mp;
	std::map<char, int>mpp;
	std::map<std::string, int>mppp;

	std::map<int, std::pair<int, int>>mpi;


	// store 2 on the key = 1
	mp[1] = 2;

	// store 1 on the key = 3
	mp.emplace({3, 1});

	// store 4 on the key = 2
	mp.insert({2, 4});


	// print the map
	for(auto it: mp)
		std::cout << it.first << " " << it.second << '\n';



	auto it = mp.find(3);
	std::cout << *(it).second << '\n';


	auto it = mp.find(5);



}



int main()
{

	return 0;
}