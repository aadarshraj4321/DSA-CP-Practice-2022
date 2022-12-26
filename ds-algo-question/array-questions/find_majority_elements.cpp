#include<bits/stdc++.h>



std::vector<int>findMajorityElements(std::vector<int>arr)
{
    int elementOne = arr[0];
    int elementOneCount = 1;

    int elementTwo = 0;
    int elementTwoCount = 0;

    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == elementOne)
        {
            elementOneCount++;
        }
        else if(arr[i] == elementTwo)
        {
            elementTwoCount--;
        }
        else if(elementOneCount == 0)
        {
            elementOne = arr[i];
            elementOneCount = 1;
        }
        else if(elementTwoCount == 0)
        {
            elementTwo = arr[i];
            elementTwoCount = 1;
        }
        else
        {
            elementOneCount--;
            elementTwoCount--;
        }
    }

    // Iterate and find that elementOne and elementTwo count is greater than n / 3.
    elementOneCount = elementTwoCount = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == elementOne)
        {
            elementOneCount++;
        }
        else if(arr[i] == elementTwo)
        {
            elementTwoCount++;
        }
    }

    std::vector<int>majorityElement;
    if(elementOneCount > arr.size() / 3)
    {
        majorityElement.push_back(elementOne);
    }

    if(elementTwoCount > arr.size() / 3)
    {
        majorityElement.push_back(elementTwo);
    }

    return majorityElement;
}


int main()
{

    int n;
    std::cin >> n;

    std::vector<int>arr;
    int x;
    for(int i = 0; i < n; i++)
    {
        std::cin >> x;
        arr.push_back(x);
    }


    auto finalMajorityElement = findMajorityElements(arr);

    if(finalMajorityElement.size() == 0)
    {
        std::cout << "None Majority Elements" << '\n';
    }

    else
    {
        for(auto num: finalMajorityElement)
        {
            std::cout << num << " ";
        }
    }
    std::cout << '\n';

    std::cout << '\n';

} 