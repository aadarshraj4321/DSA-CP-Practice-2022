#include<bits/stdc++.h>




int findMissingElement(std::vector<int>arr)
{
	int sum = arr.size() * (arr.size() + 1) / 2;

	int arrSum = 0;
	for(int i = 0; i < arr.size() - 1; i++)
		arrSum += arr[i];

	return sum - arrSum;
}



int findMissingElementBest(std::vector<int>arr)
{
	int xorOne = 0, xorTwo = 0;

	for(int i = 0; i < arr.size() - 1; i++)
	{
		xorOne = xorOne ^ arr[i];
		xorTwo = xorTwo ^ (i + 1);
	}

	xorTwo = xorTwo ^ arr.size();
	return xorTwo ^ xorOne;
}




int main()
{

	std::vector<int>arr = {1, 2, 3, 5, 6, 7};
	std::cout << findMissingElementBest(arr) << '\n';
}