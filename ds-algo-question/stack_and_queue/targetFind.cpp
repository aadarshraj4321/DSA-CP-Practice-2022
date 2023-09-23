#include<iostream>
using namespace std;

arr = [5, 6, 7, 9];
target = 13;



int main(){
	int n;
	cout << "enter a number";
	cin >> n;
	int  arr[n];
    for(int i=0;i<n; i++){
    	cin>>arr[i];
    	
    }


    int target;

    cin >> target;
    for(int i = 0; i < n; i++){

    	if(arr[i] == target){
    		cout << "found" << i;

    		
    	}

    }

    	cout << endl;
    	return 0;

    
}