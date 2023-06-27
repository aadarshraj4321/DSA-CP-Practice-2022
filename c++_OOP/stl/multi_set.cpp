#include<bits/stdc++.h>



void thisIsMultiSet()
{

	// multiset use for we can store elements and also store same elements multiple times in a sorted manner
	std::multiset<int>ms;

	// insert elements in multiset
	ms.insert(10);
	ms.insert(100);


	// delete specific elements 
	ms.erase(1); // it deletes all occurances of '1s'

	// delete specific elements only first occurances;
	ms.erase(ms.find(1));

}



int main()
{

	return 0;
}