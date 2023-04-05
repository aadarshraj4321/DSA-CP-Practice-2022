//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMissing(int arr[], int n) {
        
        int low = 0, high = n - 1;
        int diff = (arr[high] - arr[low]) / n;
    
        while (low <= high) {
            int mid = (low + high) / 2;
    
            if (arr[mid + 1] - arr[mid] != diff)
                return (arr[mid] + diff);
    
            if (mid > 0 && arr[mid] - arr[mid - 1] != diff)
                return (arr[mid - 1] + diff);
    
            if (arr[mid] == arr[0] + mid * diff)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMissing(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends