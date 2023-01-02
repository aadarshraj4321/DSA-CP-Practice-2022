#include<bits/stdc++.h>


bool isSorted(int arr[], int n)
{

	if(n == 1 || n == 0)
		return true;

	return arr[0] < arr[1] && isSorted(arr + 1, n - 1);
	return false;
}


bool isSortedTwo(int arr[], int i, int n)
{
	if(i == n - 1)
	{
		return true;
	}

	if(arr[i] < arr[i + 1] && isSortedTwo(arr, i + 1, n))
		return true;

	return false;
}


int main()
{

	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif
	
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(int);

	// if(isSorted(arr, n))
	// 	std::cout << "True\n";
	// else
	// 	std::cout << "False\n";

	if(isSortedTwo(arr, 0, n))
		std::cout << "True\n";
	else
		std::cout << "False\n";

	return 0;
}