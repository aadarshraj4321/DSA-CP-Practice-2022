#include<iostream>
#include<algorithm>
#include<vector>



std::vector<std::vector<int>>findAllTriplets(std::vector<int>arr, int target)
{
    std::vector<std::vector<int>>finalResult;
    std::sort(arr.begin(), arr.end());

    for(int i = 0; i <= arr.size() - 3; i++)
    {
        int left = i + 1;
        int right = arr.size() - 1;
        while(left < right)
        {
            int currentSum = arr[i];
            currentSum += arr[left];
            currentSum += arr[right];

            if(currentSum == target)
            {
                finalResult.push_back({arr[left], arr[right], arr[i]});
                left++;
                right--;
            }
            else if(currentSum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }

    return finalResult;
}


int main()
{

    std::vector<int>arr = {5, 6, 8, 9, 2, 1, 6, 3, 4, 7};
    int target = 15;
    auto storeAllTriplets = findAllTriplets(arr, target);

    for(auto nums: storeAllTriplets)
    {
        for(auto num: nums)
        {
            std::cout << num << " ";
        }
        std::cout << '\n';
    }

}