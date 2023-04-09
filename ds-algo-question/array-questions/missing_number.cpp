#include<bits/stdc++.h>


int missingNumber(int arr[], int n)
{

    int finalSum =  0;
    int finalArr = 0;

    for(int i = 1; i <= n; i++)
    {
        finalSum += i;
    }

    for(int i = 0; i < n - 1; i++)
    {
        finalArr += arr[i];
    }

    return finalSum - finalArr;
}


int main()
{
    int arr[] = {1, 3, 4, 5, 6, 7, 8};
    int n = 8;
    std::cout << missingNumber(arr, n) << '\n';
}