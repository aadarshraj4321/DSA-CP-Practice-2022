#include<iostream>
using namespace std;

void table(){
	int num, i;
     cout<< "Enter the number: ";
      cin>> num;
	for(i=1; i<=10; i++){
 	cout<<  num  << " X " <<  i  << " = " << i*num << endl;
 }

}

int main(){
 
   
   table();


   return 0;
}




