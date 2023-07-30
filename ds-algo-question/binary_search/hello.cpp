#include<iostream>
using namespace std;

int mul(int a,int b){
	int resu;
	resu=a*b;
	return resu;
}
int main(){
	int a,b;
	cin>>a;
	cin>>b;
	cout<<"the multiplication of a and b"<<mul(a,b);
	return 0;
}