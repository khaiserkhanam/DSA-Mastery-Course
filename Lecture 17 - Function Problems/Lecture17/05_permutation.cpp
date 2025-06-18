#include<iostream>
using namespace std;
int factorial(int x){
    int fact=1;
     for(int i=1;i<=x;i++){
    fact*=i;
 }
 return fact;
}
int main(){
 int n,r,a=1,b=1;
 cout<<"Enter 2 numbers: ";
 cin>>n>>r;
 //n factorial
 a=factorial(n);
  // n - r factorial
 b=factorial(n-r);
 cout<<a/b;
}