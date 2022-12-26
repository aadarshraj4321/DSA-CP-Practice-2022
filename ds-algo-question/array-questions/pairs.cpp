#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>



std::vector<int>pairReturn(std::vector<int>arr, int target)
{
    // --------------------- O(n^2) ---------------------
    // std::vector<int>storeResult;
    // for(int i = 0; i < arr.size(); i++)
    // {
    //     for(int j = i + 1;  j < arr.size(); j++)
    //     {
    //         if(arr[i] + arr[j] == target)
    //         {
    //             storeResult.push_back(arr[i]);
    //             storeResult.push_back(arr[j]);
    //             return storeResult;
    //         }
    //     }
    // }
    // return {};




    // --------------------- O(n^logn) ---------------------
    //std::vector<int>storeResult;
    // sort the array
    //std::sort(arr.begin(), arr.end());

    // after sorting the array your array look like this
    // arr = {-6, 2, 3, 5, 9, 10, 11}
    
    // int left = 0;
    // int right = arr.size() - 1;
    // while(left < right)
    // {
    //     if(arr[left] + arr[right] == target)
    //     {
    //         storeResult.push_back(arr[left]);
    //         storeResult.push_back(arr[right]);
    //         return storeResult;
    //     }
    //     else if(arr[left] + arr[right] < target)
    //     {
    //         left++;
    //     }
    //     else {
    //         right--;
    //     }
    // }

    // return {};



    // --------------------- O(n) ---------------------
    std::vector<int>storeResult;
    std::unordered_set<int>s;

    for(int i = 0; i < arr.size(); i++)
    {
        int isTarget = target - arr[i];
        if(s.find(isTarget) != s.end())
        {
            storeResult.push_back(isTarget);
            storeResult.push_back(arr[i]);
            return storeResult;
        }
        s.insert(arr[i]);
    }
    return {};
    
}


int main()
{
    std::vector<int>arr = {10, 5, 2, 3, -6, 9, 11};
    int target = 12;
    // std::vector<int>result = pairReturn(arr, target);

    // for(int num: result)
    // {
    //     std::cout << num << ' ';
    // }

    // std::cout << '\n';

    auto result = pairReturn(arr, target);
    for(int num: result)
    {
        std::cout << num << " ";
    }
    std::cout << '\n';

    return 0;
}