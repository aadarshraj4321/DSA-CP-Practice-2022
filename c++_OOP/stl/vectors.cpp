
#include<bits/stdc++.h>


void thisIsVector()
{

	std::vector<int>v;

	// push elements into vector v with push_back() function
	v.push_back(10);

	// push elements into vector v with emplace_back() function emplace_back() function is faster than push_back()
	v.emplace_back(100);



	// create pair vector
	std::vector<std::pair<int, int>>pv;
	// how to insert pair elements into vector
	pb.push_back({1, 2});
	pb.emplace_back(1, 2);



	// Create vector with 5 size with same element which is 100 all 5 index have 100 elements
	std::vector<int>vv(5, 100);


	// Create vector with 5 sizes
	std::vector<int>vvv(5);






	// print vector with iterator
	for(std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		std::cout << *(it) << " "
	}

	std::cout << '\n';


	// print vector with iterator in another method
	for(auto it = v.begin(); it != v.end(); it++)
	{
		std::cout << *(it) << " ";
	}
	std::cout << '\n';

	
	// print vector foreach loop
	for(auto it : v)
		std::cout << it << " ";

	std::cout << '\n';






	// Erase single element from vector
	v.erase(v.begin() + 1);


	// Erase multiple element from vector with like slice
	v.erase(v.begin() + 2, v.begin() + 4);





	// Insert element on specific position on vector
	v.insert(v.begin(), 999);


	// Insert same element multiple times on specific positon on vector
	//v.insert(where to insert, how many times insert, which element have to insert)
	v.insert(v.begin() + 1, 3, 5)



	// check how many elements present in vector
	std::cout << v.size() <<  '\n';

	// remove last element from vector
	std::cout << v.pop_back() << '\n';

	// Swap elements from 1st vector to 2nd vector and 2nd vector to 1st vector
	v.swap(vv);

	// Erase the entire vector
	v.erase();

	// Check vector is empty or not
	std::cout << v.empty() << '\n';

}


int main()
{



	return 0;
}