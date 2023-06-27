
#include<bits/stdc++.h>


void thisIsPair()
{
	std::pair<int, int>p = {1, 3};
	std::cout << p.first << " " << p.second << '\n';


	std::pair<int, std::pair<int, int>>p1 = {1, {2, 3}};
	std::cout << p.first << " " << p.second.first << " " << p.second.second << '\n';


	std::pair<int, int>arr[] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
	std::cout << arr[0] << " " << arr[1].second << " " << arr[3].first << '\n';

}




int main()
{

}