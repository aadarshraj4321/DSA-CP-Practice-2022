#include<bits/stdc++.h>



// 9, 8, 7, 6, 4, 2, 1, 3 = 3, 9, 8, 7, 6, 4, 2, 1

void rotateArrayByOne(std::vector<int>&arr, int n)
{

    int tmp = arr[n - 1];
    for(int i = n - 1; i >= 1; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = tmp;

}



int main()
{
    std::vector<int>arr;
    int n; std:: cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x; std::cin >> x;
        arr.push_back(x);
    }

    rotateArrayByOne(arr, n);

    for(auto val: arr)
        std::cout << val << " ";
    
    std::cout << '\n';
}