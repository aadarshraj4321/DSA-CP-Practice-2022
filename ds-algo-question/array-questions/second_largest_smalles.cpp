#include<bits/stdc++.h>



std::vector<int> getSecondOrderElements(int n, std::vector<int> a) {

    int largest = a[0];
    int smallest = a[0];

    int secondLargest = INT_MIN;
    int secondSmallest = INT_MAX;

    for(int i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }
        else if(a[i] != largest && a[i] > secondLargest)
        	secondLargest = a[i];

        if(a[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = a[i];
        }
        else if(a[i] != smallest && a[i] < secondSmallest)
            secondSmallest = a[i];
    }



    std::vector<int>finalResult;
    finalResult.push_back(secondLargest);
    finalResult.push_back(secondSmallest);

    return finalResult;

}




int main()
{
	std::vector<int>arr = {48, 96, 46, 75, 71, 5, 58, 57};

	auto finalResult = getSecondOrderElements(8, arr);

	for(auto it: finalResult)
		std::cout << it << " ";

}