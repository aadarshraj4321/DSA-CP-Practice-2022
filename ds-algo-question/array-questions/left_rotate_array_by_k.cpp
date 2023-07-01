#include<bits/stdc++.h>



void leftRotateArrayByK(std::vector<int>arr, int k)
{
	k = k % arr.size();
	int temp[k];

	for(int i = 0; i < k; i++)
	{
		temp[i] = arr[i];
	}

	for(int i = k; i < arr.size(); i++)
	{
		arr[i - k] = arr[i];
	}

	int j = 0;
	for(int i = arr.size() - k; i < arr.size(); i++)
	{
		arr[i] = temp[j++];
	}


	for(auto it: arr)
		std::cout << it << " ";
}


int main()
{

	std::vector<int>arr = {1, 2, 3, 4, 5, 6, 7};
	leftRotateArrayByK(arr, 3);

	return 0;	
}