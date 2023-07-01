#include<bits/stdc++.h>



void rotateArrayLeftByK(std::vector<int>arr, int k)
{
	std::reverse(arr.begin(), arr.begin() + k);
	std::reverse(arr.begin() + k, arr.end());
	std::reverse(arr.begin(), arr.end());


	for(auto it: arr)
		std::cout << it << " ";
}



int main()
{

	std::vector<int>arr = {1, 2, 3, 4, 5, 6, 7};
	int k = 3;
	rotateArrayLeftByK(arr, k);

	return 0;
}