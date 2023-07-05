#include<bits/stdc++.h>







std::vector<int>nextPermutation(std::vector<int>&arr)
{
	int index = -1;

	for(int i = arr.size() - 2; i >= 0; i--)
	{
		if(arr[i] < arr[i + 1])
		{
			index = i;
			break;
		}
	}


	if(index == -1)
	{
		std::reverse(arr.begin(), arr.end());
		return arr;
	}


	for(int i = arr.size() - 1; i > index; i--)
	{
		if(arr[i] > arr[index])
		{
			std::swap(arr[i], arr[index]);
			break;
		}
	}

	std::reverse(arr.begin() + index + 1, arr.end());
	return arr;

}








// std::vector<int> nextGreaterPermutationSTL(vector<int> &A) {
//     next_permutation(A.begin(), A.end());
//     return A;
// }




int main()
{

	std::vector<int>arr = {1, 2, 3};
	auto finalResult = nextPermutation(arr);
	//auto finalResult2 = nextGreaterPermutationSTL(arr);


	for(auto it: finalResult)
		std::cout << it << " ";

	std::cout << '\n';

	// for(auto it: finalResult2)
	// 	std::cout << it << " ";

	std::cout << '\n';

	return 0;
}