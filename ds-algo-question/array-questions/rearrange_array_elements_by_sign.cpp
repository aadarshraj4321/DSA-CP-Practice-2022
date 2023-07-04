#include<bits/stdc++.h>



std::vector<int>rearrangeTheArray(std::vector<int>arr)
{
	int posIndex = 0, negIndex = 1;
	std::vector<int>result(arr.size(), 0);

	for(int i = 0; i < arr.size(); i++)
	{
		if(arr[i] < 0)
		{
			result[negIndex] = arr[i];
			negIndex += 2;
		}		
		else
		{
			result[posIndex] = arr[i];
			posIndex += 2;
		}
	}

	return result;
}




int main()
{

	std::vector<int>arr = {-1, 2, -3, 2, 2, -4, 7, 8, -10, 90, -11};
	auto finalResult = rearrangeTheArray(arr);

	for(auto it: finalResult)
		std::cout << it << " ";

	return 0;
}