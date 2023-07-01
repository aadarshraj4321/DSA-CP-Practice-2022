#include<bits/stdc++.h>



std::vector<int> unionOfTwoSortedArray(int *arr1, int *arr2, int n1, int n2)
{

	//std::cout << n1 << " " << n2 << '\n';

	std::set<int>s;
	std::vector<int>finalResult;

	for(int i = 0; i < n1; i++)
	{
		//std::cout << arr1[i] << " ";
		s.insert(arr1[i]);
	}
	std::cout << '\n';

	for(int i = 0; i < n2; i++)
	{
		s.insert(arr2[i]);
	}


	for(auto it: s)
	{
		//std::cout<< it << " ";
		finalResult.push_back(it);
	}

	return finalResult;
}



int main()
{

	int arr1[6] = {1, 2, 6, 7, 8, 9};
	int arr2[7] = {10, 23, 5, 2, 6, 1, 9};

	int n1 = sizeof(arr1) / sizeof(arr1[0]);
	int n2 = sizeof(arr2) / sizeof(arr2[0]);

	auto finalResult = unionOfTwoSortedArray(arr1, arr2, n1, n2);

	for(auto it: finalResult)
		std::cout << it << " ";

	return 0;
}