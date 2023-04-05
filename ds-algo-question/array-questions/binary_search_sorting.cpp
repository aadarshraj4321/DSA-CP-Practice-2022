
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
        int zeros = 0;
        int ones = 0;
        
        for(int i = 0; i < N; i++)
        {
            if(A[i] == 0)
                zeros++;
            else
                ones++;
        }
        
        for(int i = 0; i < zeros; i++)
            A[i] = 0;
        
        for(int i = zeros; i < N; i++)
            A[i] = 1;
    }
};

//{ Driver Code Starts.
int main() {
	int T;
	cin>>T;
	// Input the number of testcases
	while(T--)
	{
	    int N;
	    cin>>N; //Input size of array N
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	      
	    Solution obj;
	    obj.binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	}
	return 0;
}




// } Driver Code Ends