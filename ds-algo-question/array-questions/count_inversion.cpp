#include<bits/stdc++.h>




int countInversion(std::vector<int>arr)
{
	int count = 0;
	for(int i = 0; i < arr.size(); i++)
	{
		for(int j = i + 1; j < arr.size(); j++)
		{
			if(arr[i] > arr[j])
				count++;
		}
	}
	return count;
}





int main()
{

	std::vector<int>arr = {5, 3, 2, 4, 1};
	std::cout << countInversion(arr) << '\n';

	return 0;
}