#include<bits/stdc++.h>



void insertionSort(std::vector<int>&arr)
{
    for(int i = 1; i < arr.size(); i++)
    {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for(auto num: arr)
    {
        std::cout << num << " ";
    }
}


int main()
{

    std::vector<int>arr = {7, 6, 5, 4, 3, 2, 1, 34, 5, 1, 3, 5};
    insertionSort(arr);

}