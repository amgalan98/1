#include <conio.h>
#include <iostream>

using namespace std;  
 
 int summ(int a, int b){ 
	 return a+b; 
 }

 int minus(int a, int b) {
	 return a-b;
 }

 int umnoz(int a, int b){
	 int sum = 0;
	 for (int i = 0; i< b; ++i){
		 sum=sum+a;
	 }
	 return sum;
 }
 
 int del (int a, int b){
 int zn=0;
 for (int i=0; a !=0; ++i) {
	 int z=a;
	 a=a-b;
	 if (a<=0) {
		 break;
	 }
	 else {
		 ++zn; }
 }
 return zn;
 }
 
	 
	 
	 void main( ){
	 int a,b;
	 cin>>a;
     cin >>b;
	 cout << summ(a,b) << endl; 
	 cout << minus(a,b)<< endl;
	 cout << umnoz(a,b)<<endl;
`	 cout << del(a,b)<<endl;
	 system("pause");
 }

    