#include<bits/stdc++.h>



int findMissingElement(std::vector<int>arr)
{
	for(int i = 1; i <= arr.size(); i++)
	{
		int flag = 0;
		for(int j = 0; j < arr.size() - 1; j++)
		{
			if(arr[j] == i)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0)
			return i;
	}

	return -1;
}



int main()
{

	std::vector<int>arr = {1, 2, 3, 5, 6, 7};
	std::cout << findMissingElement(arr) << '\n';
}