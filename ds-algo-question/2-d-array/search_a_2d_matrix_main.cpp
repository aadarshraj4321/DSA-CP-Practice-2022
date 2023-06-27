#include<bits/stdc++.h>


bool search2DMatrix(std::vector<std::vector<int>>arr, int target)
{
	int low = 0;
	int high = arr.size() - 1;

	while(low < high)
	{
		int mid = (low + high) / 2;
		if(arr[mid][0] == target)
		{
			return true;
		}

		if(arr[mid][0] < target && target < arr[mid + 1][0])
		{
			low = mid;
			break;
		}

		if(arr[mid][0] < target)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}


	int lowCol = 0;
	int highCol = arr[0].size() - 1;

	while(lowCol <= highCol)
	{
		int mid = (lowCol + highCol) / 2;
		if(arr[low][mid] == target)
			return true;

		if(arr[low][mid] < target)
			lowCol = mid + 1;

		else
			highCol = mid - 1;
	}

	return false;
}



int main()
{
	std::vector<std::vector<int>>arr = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
	int target = 100;
	std::cout << search2DMatrix(arr, target) << '\n';
}