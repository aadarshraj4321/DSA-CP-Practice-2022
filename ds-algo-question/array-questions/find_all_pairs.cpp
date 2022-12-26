#include<iostream>
#include<vector>
#include<algorithm>


std::vector<std::vector<int>>findAllTriplets(std::vector<int>arr, int target)
{

    std::vector<std::vector<int>>finalResult;
    std::sort(arr.begin(), arr.end());

    int left = 0;
    int right = arr.size() - 1;

    while(left < right)
    {
        if(arr[left] + arr[right] == target)
        {
            finalResult.push_back({arr[left], arr[right]});
            left++;
            right--;
        }
        else if(arr[left] + arr[right] < target)
        {
            left++;
        }
        else 
        {
            right--;
        }
    }
    return finalResult;
}



int main()
{


    std::vector<int>arr = {9, 8, 6, 4, 1, 2, 5, 7, 3};
    int target = 10;
    auto finalResult = findAllTriplets(arr, target);

    for(int i = 0; i < finalResult.size(); i++)
    {
        for(int j = 0; j < finalResult.size(); j++)
        {
            std::cout << finalResult[i][j] << " ";
        }
        std::cout << "\n";
    }


}