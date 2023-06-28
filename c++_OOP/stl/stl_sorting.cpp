#include<bits/stdc++h>



bool comp(std::pair<int, int>p1, std::pair<int, int>p2)
{
	if(p1.second < p2.second) return true;
	if(p1.second > p1.second) return false;

	// if same then compare with first
	if(p1.first > p1.first) return true;
	return false;
}


void thisIsSorting
{
	std::vector<int>arr;
	std::sort(arr.begin(), arr.end());

	int n = 10;
	int arrr[n];
	std::sort(arrr, arrr + n);

	// sort some portion of array
	std::sort(arrr + 2, arrr + 4);


	// sort the array desending order
	std::sort(arrr, arrr + n, std::greater<int>);



	// sort the array or pair in your way
	std::pair<int, int> arr[] = {{1, 2}, {2, 1}, {4, 1}}
	// suppose that we have to sort arr.second (ascending order) if arr.second is same then arr.first in (desending order way)
	// sort with user-defined comp
	std::sort(arr, arr + n, comp)



	// find maximum element in array
	int maxi = *max_element(arrr, arrr + n);

	// find minimum element in array
	int mini = *min_element(arrr, arrr + n);












	// find all permutations of a strings
	std::strinig s = "123";
	std::sort(s.begin(), s.end());

	do
	{
		std::cout << s << '\n';
	}while(std::next_permutations(s.begin(), s.end()))








}







int main()
{

	return 0;
}