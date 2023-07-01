#include<bits/stdc++.h>




void rotateArrayLeftByOne(std::vector<int>arr)
{
	int temp = arr[0];

	for(int i = 1; i < arr.size(); i++)
	{
		arr[i - 1] = arr[i];
	}
	arr[arr.size() - 1] = temp;

	for(auto it: arr)
		std::cout << it << " ";
}


int main()
{

	std::vector<int>arr = {1, 2, 3, 4, 5};
	rotateArrayLeftByOne(arr);
	return 0;
}