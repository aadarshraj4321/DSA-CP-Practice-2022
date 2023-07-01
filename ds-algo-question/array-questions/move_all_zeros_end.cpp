#include<bits/stdc++.h>



void moveZerosToEnd(std::vector<int>arr)
{

	int j = 0;
	for(int i = 0; i < arr.size(); i++)
	{
		if(arr[i] != 0)
		{
			std::swap(arr[i], arr[j]);
			j++;
		}
	}


	for(auto it: arr)
		std::cout << it << " ";
}




int main()
{

	std::vector<int>arr = {1, 0, 2, 0, 6, 7, 8, 0, 1};
	moveZerosToEnd(arr);

	return 0;
}