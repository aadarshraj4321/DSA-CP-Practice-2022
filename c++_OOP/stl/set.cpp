#include<bits/stdc++.h>




void thisIsSet()
{
	// Set is sorted and uniqeue
	std::set<int>s;


	// insert elements in set
	s.insert(10);
	s.emplace(100);

	// if you insert again 10 then it not insert becasuse "Set" is unique
	s.insert(10); // not insert because set is unique



	// find element in set with iterator
	auto it = s.find(100);


	// delete any elements from set
	s.erase(100);



	// count how many number of times elements exist in set if not then 0
	int cnt = s.count(10);

}



int main()
{

	return 0;
}