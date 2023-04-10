//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string findSum(string X, string Y) {
        
        string result = "";  // to store the result
    int carry = 0;       // initialize the carry as 0
    int i = X.length() - 1, j = Y.length() - 1;

    while (i >= 0 || j >= 0 || carry > 0)
    {
        int sum = carry;
        if (i >= 0) sum += X[i] - '0';
        if (j >= 0) sum += Y[j] - '0';

        carry = sum / 10;  // get the carry for next iteration
        sum %= 10;         // get the sum for current digit

        // add the current digit to the result
        result = (char)(sum + '0') + result;

        i--; j--;
    }

    // remove leading zeros
    while (result[0] == '0' && result.length() > 1)
        result.erase(0, 1);

    return result;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << "\n";
    }

    return 0;
}
// } Driver Code Ends